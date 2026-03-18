/*
 * XREFs of ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x140282A70
 * Callers:
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1404146E0 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x1400563EC (-VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGN.c)
 *     ?RemovePending@DXGADAPTER@@QEBAHXZ @ 0x140070290 (-RemovePending@DXGADAPTER@@QEBAHXZ.c)
 */

__int64 __fastcall BLTQUEUE::DestroyPeriodicFrameNotification(struct _KTHREAD **this, unsigned __int64 **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned __int64 i; // rcx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 *v13; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v14; // [rsp+20h] [rbp-68h]
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, this + 373, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v15);
  v4 = 0;
  v5 = 0LL;
  for ( i = 0LL; ; i += 64LL )
  {
    if ( i >= 0x200 )
    {
      WdLogSingleEntry1(2LL);
      v14 = *a2;
      WdLogGlobalForLineNumber = 4664;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to destroy dod periodic frame notification id: %lu",
        (__int64)v14,
        0LL,
        0LL,
        0LL,
        0LL);
      v4 = -1073741811;
      goto LABEL_13;
    }
    if ( *(unsigned __int64 **)((char *)this[379] + i + 48) == *a2 )
      break;
    ++v5;
  }
  _mm_lfence();
  v7 = v5 << 6;
  *((_BYTE *)this[379] + v7 + 56) = 1;
  *((_BYTE *)this[379] + v7 + 57) = 0;
  v8 = this[379];
  --*((_DWORD *)this + 756);
  ExCancelTimer(*(_QWORD *)((char *)v8 + v7), 0LL);
  v9 = *(_QWORD *)((char *)this[379] + v7 + 16);
  if ( *(_DWORD *)(v9 + 200) != 1 && !DXGADAPTER::RemovePending(*(DXGADAPTER **)((char *)this[379] + v7 + 16)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4635;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSyncAdapter->IsActive() || pSyncAdapter->RemovePending()",
      4635LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(v9 + 3168);
  v11 = (__int64)this[379] + 8;
  v16 = -1LL;
  if ( (int)VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
              *(VIDSCH_EXPORT **)(v10 + 736),
              1u,
              (struct _VIDSCH_SYNC_OBJECT **)(v7 + v11),
              0,
              &v16) < 0 )
  {
    WdLogSingleEntry1(2LL);
    v13 = *a2;
    WdLogGlobalForLineNumber = 4653;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to signal UINT64_MAX on a destroyed dod periodic frame notification id: %lu",
      (__int64)v13,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    *(_QWORD *)((char *)this[379] + v7 + 40) = v16;
  }
  DXGADAPTER_REFERENCE::Assign((struct _KTHREAD *)((char *)this[379] + v7 + 16), 0LL);
  *a2 = 0LL;
LABEL_13:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return v4;
}
