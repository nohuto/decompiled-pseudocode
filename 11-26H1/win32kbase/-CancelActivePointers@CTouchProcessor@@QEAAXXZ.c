/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x140213C00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x140160CCC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x14017406C (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x140213994 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(PERESOURCE *this)
{
  __int64 v2; // rdx
  CTouchProcessor *v3; // rbx
  struct CInputPointerNode *v4; // rdx
  PERESOURCE *v5[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 16001);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v5, this + 4, 0LL);
  v3 = (CTouchProcessor *)this[10];
  while ( v3 != (CTouchProcessor *)(this + 10) )
  {
    v4 = (CTouchProcessor *)((char *)v3 - 16);
    v3 = *(CTouchProcessor **)v3;
    CTouchProcessor::CancelActivePointer(this, v4, 0LL);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v5, v2);
}
