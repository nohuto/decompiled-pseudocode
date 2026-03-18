/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x140014774
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1403A4680 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1403B63D4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403B85FC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ?VidSchEnableLatencyToleranceTimer@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@E@Z @ 0x14004A780 (-VidSchEnableLatencyToleranceTimer@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@E@Z.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // r14d
  __int64 v9; // rbp
  __int64 v10; // rsi
  signed __int32 v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 **v24; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v26; // [rsp+48h] [rbp-30h]

  if ( *((_DWORD *)a2 + 36) != 2 && (*((_DWORD *)a2 + 98) & 8) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 852); ++i )
    {
      v9 = *((_QWORD *)this + 408);
      v10 = 520LL * i;
      if ( *(_DWORD *)(v10 + v9 + 208)
        || (a4 != *(_DWORD *)(v10 + v9 + 212) || *((_DWORD *)a2 + 97) != *(unsigned __int16 *)(v10 + v9 + 6))
        && !*(_BYTE *)(v10 + v9 + 358) )
      {
        continue;
      }
      v26 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 466, &LockHandle);
      *((_QWORD *)this + 467) = KeGetCurrentThread();
      v12 = *(_DWORD *)(v10 + v9 + 416);
      v26 = 1;
      if ( a3 )
      {
        v14 = v12 + 1;
        *(_DWORD *)(v10 + v9 + 416) = v14;
        if ( v14 == 1 )
        {
          v15 = *(_DWORD *)(v10 + v9 + 4);
          *(_DWORD *)(v10 + v9 + 384) = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v15, **((_QWORD **)this + 444));
          if ( *(int *)(v10 + v9 + 388) > 0 )
          {
            v16 = MEMORY[0xFFFFF78000000320];
            *(_QWORD *)(v10 + v9 + 392) = MEMORY[0xFFFFF78000000320];
            *(_QWORD *)(v10 + v9 + 392) = v16 + *(_QWORD *)(*((_QWORD *)this + 444) + 8LL);
            v17 = (_QWORD *)(v10 + v9 + 400);
            if ( !*v17 )
            {
              v18 = (_QWORD *)((char *)this + 3712);
              v19 = *((_QWORD *)this + 464);
              if ( *(DXGADAPTER **)(v19 + 8) != (DXGADAPTER *)((char *)this + 3712) )
                goto LABEL_28;
              *v17 = v19;
              v17[1] = v18;
              *(_QWORD *)(v19 + 8) = v17;
              *v18 = v17;
            }
            if ( !*((_BYTE *)this + 3700) )
            {
              v20 = *((_QWORD *)this + 396);
              *((_BYTE *)this + 3700) = 1;
              VIDSCH_EXPORT::VidSchEnableLatencyToleranceTimer(
                *(VIDSCH_EXPORT **)(v20 + 736),
                *(struct _VIDSCH_GLOBAL **)(v20 + 744),
                1u);
            }
          }
LABEL_26:
          if ( !v26 )
            continue;
        }
      }
      else
      {
        v13 = v12 - 1;
        *(_DWORD *)(v10 + v9 + 416) = v13;
        if ( !v13 )
        {
          v21 = *(_DWORD *)(v10 + v9 + 4);
          *(_DWORD *)(v10 + v9 + 384) = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v21, *(_QWORD *)(*((_QWORD *)this + 444) + 32LL));
          v22 = (__int64 *)(v10 + v9 + 400);
          v23 = *v22;
          if ( *v22 )
          {
            if ( *(__int64 **)(v23 + 8) != v22 || (v24 = (__int64 **)v22[1], *v24 != v22) )
LABEL_28:
              __fastfail(3u);
            *v24 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            *v22 = 0LL;
          }
          goto LABEL_26;
        }
      }
      v26 = 0;
      *((_QWORD *)this + 467) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( a3 )
      v11 = _InterlockedIncrement((volatile signed __int32 *)this + 855);
    else
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 855, 0xFFFFFFFF);
    if ( v11 == 1 )
    {
      if ( *((_QWORD *)this + 409) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
