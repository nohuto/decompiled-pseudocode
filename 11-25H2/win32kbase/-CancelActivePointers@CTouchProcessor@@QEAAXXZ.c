/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1401FAE80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C54D4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9D98 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1401FAC30 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(PERESOURCE *this)
{
  CTouchProcessor *v2; // rbx
  struct CInputPointerNode *v3; // rdx
  PERESOURCE *v4[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16069);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v4, this + 4, 0LL);
  v2 = (CTouchProcessor *)this[10];
  while ( v2 != (CTouchProcessor *)(this + 10) )
  {
    v3 = (CTouchProcessor *)((char *)v2 - 16);
    v2 = *(CTouchProcessor **)v2;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v3);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v4);
}
