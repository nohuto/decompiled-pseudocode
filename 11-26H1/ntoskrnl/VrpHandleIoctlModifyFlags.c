/*
 * XREFs of VrpHandleIoctlModifyFlags @ 0x1408ABBC4
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140939F20 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x140430090 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpUnlockJobContextExclusive @ 0x14093A7B4 (VrpUnlockJobContextExclusive.c)
 *     VrpLockJobContextExclusive @ 0x14093AD04 (VrpLockJobContextExclusive.c)
 */

__int64 __fastcall VrpHandleIoctlModifyFlags(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int JobSilo; // edi
  __int64 v8; // rbx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  if ( a2 < 0x10 || (*(_DWORD *)(a1 + 8) & *(_DWORD *)(a1 + 12)) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 0x52566D43u, (__int64)&Object, 0LL, 0LL);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetJobSilo((__int64)Object);
      if ( JobSilo >= 0 )
      {
        JobSilo = PsGetPermanentSiloContext(a5, gLoadedDiffHivesLock.QuantumTarget, (unsigned __int64 *)&a6);
        if ( JobSilo >= 0 )
        {
          v8 = a6;
          VrpLockJobContextExclusive(a6);
          *(_DWORD *)(v8 + 80) = ~*(_DWORD *)(a1 + 12) & (*(_DWORD *)(a1 + 8) | *(_DWORD *)(v8 + 80));
          VrpUnlockJobContextExclusive(v8);
        }
      }
    }
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  }
  return (unsigned int)JobSilo;
}
