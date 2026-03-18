/*
 * XREFs of ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x140012E10
 * Callers:
 *     ?SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z @ 0x140011AE0 (-SetPowerComponentIdleCBWorker@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x140012110 (-SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x140012D30 (-DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z.c)
 *     ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x140012DB0 (-DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z.c)
 * Callees:
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x140013260 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x140013A28 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // r8d
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 **v11; // rdx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r15
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  void (__fastcall *v24)(_QWORD, __int64); // rax
  int v25; // eax
  int v26; // eax
  __int64 *v27; // rcx
  __int64 *v28; // rax
  __int64 **v29; // rdx
  unsigned int v30; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  char v32; // [rsp+58h] [rbp-20h]

  v3 = *((_QWORD *)this + 408);
  v6 = 520LL * a2;
  *(_BYTE *)(v6 + v3 + 356) = a3;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v7 = *(_DWORD *)(v6 + v3 + 208);
    if ( v7 )
    {
      if ( v7 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int8))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 760LL)
                                                                                            + 8LL)
                                                                                + 704LL))(
          *(_QWORD *)(*((_QWORD *)this + 396) + 768LL),
          *(unsigned __int16 *)(v6 + v3 + 6),
          *(unsigned int *)(v6 + v3 + 212),
          *(unsigned int *)(v6 + v3),
          a3);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 396) + 736LL)
                                                                         + 8LL)
                                                             + 832LL))(
        *(_QWORD *)(*((_QWORD *)this + 396) + 744LL),
        *(unsigned __int16 *)(v6 + v3 + 6),
        *(unsigned int *)(v6 + v3 + 212),
        a3);
    }
    if ( !*(_BYTE *)(v6 + v3 + 357) || *(int *)(v6 + v3 + 388) <= 0 )
      goto LABEL_26;
    v32 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 466, &LockHandle);
    *((_QWORD *)this + 467) = KeGetCurrentThread();
    v32 = 1;
    if ( a3 )
    {
      v9 = (__int64 *)(v6 + v3 + 400);
      v10 = *v9;
      if ( *v9 )
      {
        if ( *(__int64 **)(v10 + 8) != v9 )
          goto LABEL_44;
        v11 = (__int64 **)v9[1];
        if ( *v11 != v9 )
          goto LABEL_44;
        *v11 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v11;
        *v9 = 0LL;
LABEL_24:
        if ( !v32 )
          goto LABEL_26;
      }
    }
    else
    {
      v12 = *(_DWORD *)(v6 + v3 + 384);
      if ( *(_DWORD *)(v6 + v3 + 416) )
      {
        if ( v12 )
        {
          v13 = *(_DWORD *)(v6 + v3 + 4);
          *(_DWORD *)(v6 + v3 + 384) = 0;
          v14 = **((_QWORD **)this + 444);
          if ( *((_BYTE *)this + 3705) )
          {
            v15 = (unsigned __int16)v13 + *((unsigned __int16 *)this + ((unsigned __int64)v13 >> 16) + 1640);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
              McTemplateK0pqx_EtwWriteTransfer(
                v13,
                (unsigned int)&Dxgk_SetPowerComponentLatencyCB,
                v8,
                (_DWORD)this,
                v15,
                v14);
            v16 = 520LL * v15;
            v17 = *((_QWORD *)this + 408);
            if ( v14 != *(_QWORD *)(v16 + v17 + 368) )
            {
              *(_QWORD *)(v16 + v17 + 368) = v14;
              PoFxSetComponentLatency(*((_QWORD *)this + 409), v15, v14);
            }
          }
        }
        v18 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(v6 + v3 + 392) = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)(v6 + v3 + 392) = v18 + *(_QWORD *)(*((_QWORD *)this + 444) + 8LL);
        v19 = (_QWORD *)(v6 + v3 + 400);
        if ( !*v19 )
        {
          v20 = (_QWORD *)((char *)this + 3712);
          v21 = *((_QWORD *)this + 464);
          if ( *(DXGADAPTER **)(v21 + 8) != (DXGADAPTER *)((char *)this + 3712) )
            goto LABEL_44;
          *v19 = v21;
          v19[1] = v20;
          *(_QWORD *)(v21 + 8) = v19;
          *v20 = v19;
        }
        if ( !*((_BYTE *)this + 3700) )
        {
          v22 = *((_QWORD *)this + 396);
          *((_BYTE *)this + 3700) = 1;
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 736) + 8LL);
          v24 = *(void (__fastcall **)(_QWORD, __int64))(v23 + 888);
          LOBYTE(v23) = 1;
          v24(*(_QWORD *)(v22 + 744), v23);
        }
        goto LABEL_24;
      }
      if ( v12 != 2 )
      {
        v30 = *(_DWORD *)(v6 + v3 + 4);
        *(_DWORD *)(v6 + v3 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v30, *(_QWORD *)(*((_QWORD *)this + 444) + 32LL));
        goto LABEL_24;
      }
    }
    v32 = 0;
    *((_QWORD *)this + 467) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_26:
    if ( *(_DWORD *)(v6 + v3 + 208) || !*((_QWORD *)this + 453) )
      return;
    v32 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 466, &LockHandle);
    *((_QWORD *)this + 467) = KeGetCurrentThread();
    v25 = *((_DWORD *)this + 856);
    v32 = 1;
    if ( !a3 )
    {
      v26 = v25 - 1;
      *((_DWORD *)this + 856) = v26;
      if ( v26 )
        goto LABEL_33;
      DXGADAPTER::ScheduleAdapterActivityCheck(this);
LABEL_32:
      if ( !v32 )
        return;
LABEL_33:
      v32 = 0;
      *((_QWORD *)this + 467) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    if ( v25 )
    {
LABEL_41:
      ++*((_DWORD *)this + 856);
      goto LABEL_32;
    }
    v27 = (__int64 *)(*((_QWORD *)this + 453) + 400LL);
    v28 = (__int64 *)*v27;
    if ( !*v27 )
    {
LABEL_39:
      if ( *((_DWORD *)this + 927) )
      {
        *((_DWORD *)this + 927) = 0;
        DXGADAPTER::UpdateLatencyTolerances(this);
      }
      goto LABEL_41;
    }
    if ( (__int64 *)v28[1] == v27 )
    {
      v29 = *(__int64 ***)(*((_QWORD *)this + 453) + 408LL);
      if ( *v29 == v27 )
      {
        *v29 = v28;
        v28[1] = (__int64)v29;
        *(_QWORD *)(*((_QWORD *)this + 453) + 400LL) = 0LL;
        goto LABEL_39;
      }
    }
LABEL_44:
    __fastfail(3u);
  }
}
