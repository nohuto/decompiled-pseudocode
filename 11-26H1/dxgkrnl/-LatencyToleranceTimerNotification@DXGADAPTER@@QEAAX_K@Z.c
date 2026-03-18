/*
 * XREFs of ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1400140D8
 * Callers:
 *     ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1403C3190 (-DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140013A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140014638 (McTemplateK0_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2)
{
  __int64 v4; // r8
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  KSPIN_LOCK v7; // rcx
  __int64 v8; // rdx
  void (__fastcall *v9)(_QWORD, __int64); // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rcx
  KSPIN_LOCK v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // eax
  KSPIN_LOCK v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+20h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  char v29; // [rsp+58h] [rbp-30h]
  int v30; // [rsp+90h] [rbp+8h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0_EtwWriteTransfer(this, &Dxgk_LatencyToleranceTimer);
  v29 = 0;
  KeAcquireInStackQueuedSpinLock(this + 466, &LockHandle);
  v5 = this + 464;
  this[467] = (KSPIN_LOCK)KeGetCurrentThread();
  v6 = (_QWORD *)this[464];
  v29 = 1;
  while ( v6 != v5 )
  {
    v11 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v11 - 44) || *((_DWORD *)v11 - 14) == *((_DWORD *)v11 - 98) - 1 )
    {
      if ( (_QWORD *)v6[1] != v11 || (v22 = (_QWORD *)v11[1], (_QWORD *)*v22 != v11) )
LABEL_31:
        __fastfail(3u);
      *v22 = v6;
      v6[1] = v22;
LABEL_30:
      *v11 = 0LL;
    }
    else if ( *(v11 - 1) <= a2 )
    {
      v12 = *((_DWORD *)v11 - 48);
      if ( v12 )
      {
        if ( v12 == 6 )
        {
          v23 = *((_DWORD *)this + 927);
          switch ( v23 )
          {
            case 0:
              *((_DWORD *)this + 927) = 1;
              v24 = this[448];
LABEL_36:
              *(v11 - 1) = a2 + v24;
              goto LABEL_37;
            case 1:
              *((_DWORD *)this + 927) = 2;
              v24 = this[450];
              goto LABEL_36;
            case 2:
              *((_DWORD *)this + 927) = 3;
              v25 = *v11;
              if ( *(_QWORD **)(*v11 + 8LL) != v11 )
                goto LABEL_31;
              v26 = (_QWORD *)v11[1];
              if ( (_QWORD *)*v26 != v11 )
                goto LABEL_31;
              *v26 = v25;
              *(_QWORD *)(v25 + 8) = v26;
              *v11 = 0LL;
LABEL_37:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v13 = *((int *)v11 - 4);
        v30 = v13 + 1;
        v14 = 2 * (v13 + 1);
        v15 = *((unsigned int *)v11 - 99);
        v16 = *(_QWORD *)(this[444] + 16 * (v13 + 1));
        if ( *((_BYTE *)this + 3705) )
        {
          v17 = (unsigned __int16)v15 + *((unsigned __int16 *)this + ((unsigned __int64)(unsigned int)v15 >> 16) + 1640);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
          {
            LODWORD(v27) = (unsigned __int16)v15
                         + *((unsigned __int16 *)this + ((unsigned __int64)(unsigned int)v15 >> 16) + 1640);
            McTemplateK0pqx_EtwWriteTransfer(v15, &Dxgk_SetPowerComponentLatencyCB, v4, this, v27, v16);
          }
          v18 = 520LL * v17;
          v19 = this[408];
          if ( v16 != *(_QWORD *)(v18 + v19 + 368) )
          {
            *(_QWORD *)(v18 + v19 + 368) = v16;
            PoFxSetComponentLatency(this[409], v17, v16);
          }
        }
        *((_DWORD *)v11 - 4) = v30;
        *(v11 - 1) = a2 + *(_QWORD *)(this[444] + 8 * v14 + 8);
        if ( v30 == *((_DWORD *)v11 - 3) )
        {
          v20 = *v11;
          if ( *(_QWORD **)(*v11 + 8LL) != v11 )
            goto LABEL_31;
          v21 = (_QWORD *)v11[1];
          if ( (_QWORD *)*v21 != v11 )
            goto LABEL_31;
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          goto LABEL_30;
        }
      }
    }
  }
  if ( (_QWORD *)*v5 == v5 )
    *((_BYTE *)this + 3700) = 0;
  v7 = this[396];
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 736) + 8LL);
  v9 = *(void (__fastcall **)(_QWORD, __int64))(v8 + 888);
  LOBYTE(v8) = *((_BYTE *)this + 3700);
  v9(*(_QWORD *)(v7 + 744), v8);
  if ( v29 )
  {
    v29 = 0;
    this[467] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
      McTemplateK0_EtwWriteTransfer(v10, &Dxgk_LatencyToleranceTimerEnd);
  }
}
