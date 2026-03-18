/*
 * XREFs of SepSetServerSiloToken @ 0x14081221C
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x140810B24 (SepCopyClientTokenAndSetSilo.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140476B90 (SepDeReferenceLogonSessionDirect.c)
 *     SepAddTokenLogonSession @ 0x140774EB0 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x1408158D8 (SepRemoveTokenLogonSession.c)
 *     SepReferenceLogonSessionSilo @ 0x140AB6FE8 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo(a1 + 24, a2, &v8);
    if ( v5 >= 0 )
    {
      if ( SeTokenLeakTracking )
        SepRemoveTokenLogonSession(a1);
      SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
      *(_QWORD *)(a1 + 216) = v8;
      if ( SeTokenLeakTracking )
        SepAddTokenLogonSession(a1);
      *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    }
  }
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
