/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x14015BF20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x14015BF94 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x14021482C (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(PERESOURCE *this, void *a2)
{
  struct CPointerCaptureData *PointerCaptureData; // rax
  __int64 v5; // rdx
  PERESOURCE *v6[9]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v6, this + 4, a2);
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, (unsigned __int64)a2);
  if ( !PointerCaptureData || (*((_DWORD *)PointerCaptureData + 76) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit((CTouchProcessor *)this, (unsigned __int64)a2);
  CTouchProcessor::SetDelegateAction(this, a2, 6LL);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v6, v5);
}
