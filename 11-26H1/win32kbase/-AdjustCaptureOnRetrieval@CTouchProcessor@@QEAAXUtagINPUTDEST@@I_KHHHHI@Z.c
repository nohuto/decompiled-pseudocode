/*
 * XREFs of ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHI@Z @ 0x14004D140
 * Callers:
 *     <none>
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004B9C0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x14004BEE0 (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x140071D30 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ?SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140108E20 (-SetPointerExplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z @ 0x140108EA0 (-SetPointerImplicitCapture@CTouchProcessor@@AEAAH_KAEBVCInputDest@@HH@Z.c)
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1401428C0 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::AdjustCaptureOnRetrieval(
        PERESOURCE *a1,
        const struct tagINPUTDEST *a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int64 v10; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rdx
  _QWORD v17[4]; // [rsp+30h] [rbp-B1h] BYREF
  char v18; // [rsp+50h] [rbp-91h]
  PERESOURCE *v19; // [rsp+58h] [rbp-89h]
  _BYTE v20[80]; // [rsp+60h] [rbp-81h] BYREF
  _BYTE v21[12]; // [rsp+B0h] [rbp-31h] BYREF
  int v22; // [rsp+BCh] [rbp-25h]

  v18 = 0;
  v10 = a4;
  if ( a4 == -1LL )
    v10 = 0LL;
  v17[0] = v10;
  v19 = a1 + 4;
  ExEnterCriticalRegionAndAcquireResourceExclusive(a1[4]);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock((CRefUnRefPointerMsgId *)v17, v14, v15);
  if ( a6 )
    goto LABEL_4;
  if ( (a3 & 0x10000) != 0 )
  {
    CInputDest::CInputDest((CInputDest *)v20, a2);
    CTouchProcessor::SetPointerImplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v20, a5, a7);
  }
  else
  {
    if ( a9 != 593 )
    {
LABEL_4:
      if ( a8 && a6 && (a9 == 594 || a9 == 583) )
        CTouchProcessor::ReleasePointerCapture((CTouchProcessor *)a1, a4, a7);
      goto LABEL_5;
    }
    CInputDest::CInputDest((CInputDest *)v20, a2);
    CTouchProcessor::SetPointerExplicitCapture((CTouchProcessor *)a1, a4, (const struct CInputDest *)v20, a5, a7);
  }
  if ( v22 )
    HMAssignmentUnlock(v21, v16);
LABEL_5:
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v17, v16);
  ExReleaseResourceAndLeaveCriticalRegion(*v19);
}
