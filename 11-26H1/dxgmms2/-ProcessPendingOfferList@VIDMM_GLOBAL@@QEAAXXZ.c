/*
 * XREFs of ?ProcessPendingOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010D82C
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1400293D0 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010DAD4 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessPendingOfferList(struct _KTHREAD **this)
{
  struct _KTHREAD **v2; // rbp
  VIDMM_GLOBAL *v3; // rsi
  __int64 v4; // rcx
  VIDMM_GLOBAL *v5; // rbx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  signed __int64 v8; // rbx
  __int64 v9; // rbx
  struct _KTHREAD *v10; // rax
  char v11; // r12
  VIDMM_GLOBAL *v12; // rbx
  struct VIDMM_GLOBAL_ALLOC *v13; // r15
  VIDMM_GLOBAL *v14; // r14
  __int64 v15; // r8
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rcx
  VIDMM_GLOBAL **v19; // rcx
  char v20[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-40h]
  int v22; // [rsp+60h] [rbp-38h]

  if ( !qword_14008A490 )
    return;
  v2 = this + 5031;
  v22 = 0;
  v21 = (volatile signed __int32 *)(this + 5031);
  v3 = (VIDMM_GLOBAL *)(this + 4989);
  if ( this != (struct _KTHREAD **)-40248LL && this[5032] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v20);
  v5 = *(VIDMM_GLOBAL **)v3;
  if ( v22 == 1 )
  {
    v6 = v21;
    v22 = 0;
    _InterlockedDecrement(v21 + 4);
    ExReleasePushLockSharedEx(v6, 0LL);
LABEL_7:
    KeLeaveCriticalRegion();
    goto LABEL_8;
  }
  if ( v22 == 2 )
  {
    v7 = v21;
    v22 = 0;
    *((_QWORD *)v21 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    goto LABEL_7;
  }
LABEL_8:
  if ( v5 != v3 )
  {
    if ( ((_DWORD)this[873] & 0x8000) != 0 || (v8 = this[571] - this[884], v8 >= qword_14008A490) )
    {
      v11 = 0;
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v20, v2);
      if ( *(VIDMM_GLOBAL **)v3 != v3 )
      {
        v11 = 1;
        VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 0x3E9u);
        v12 = *(VIDMM_GLOBAL **)v3;
        while ( v12 != v3 )
        {
          v13 = (VIDMM_GLOBAL *)((char *)v12 - 256);
          v14 = v12;
          v12 = *(VIDMM_GLOBAL **)v12;
          VIDMM_GLOBAL::RemoveAllocationFromOfferList((VIDMM_GLOBAL *)this, v13);
          v16 = *(_QWORD *)v13;
          v17 = *(unsigned __int16 *)(*((_QWORD *)v13 + 46) + 8LL);
          if ( (_WORD)v17 && (_WORD)v17 != 3 )
          {
            if ( (byte_14008A201 & 1) != 0 )
              McTemplateK0x_EtwWriteTransfer(v17, &EventProcessOfferAllocation, v15, v13);
            v18 = *((_QWORD *)this[5040] + ((*(_DWORD *)(v16 + 52) >> 2) & 0x3F));
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 376LL))(v18, v16);
            v19 = (VIDMM_GLOBAL **)this[4992];
            if ( *v19 != (VIDMM_GLOBAL *)(this + 4991) )
              __fastfail(3u);
            *(_QWORD *)v14 = this + 4991;
            *((_QWORD *)v14 + 1) = v19;
            *v19 = v14;
            this[4992] = v14;
          }
        }
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
      this[884] = this[571];
      v9 = -qword_14008A490;
      if ( v11 )
        VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    }
    else
    {
      v9 = v8 - qword_14008A490;
    }
    v10 = *this;
    if ( v9 > *((_QWORD *)*this + 16) )
    {
      *((_QWORD *)v10 + 16) = v9;
      *((_BYTE *)v10 + 214) = 3;
    }
  }
}
