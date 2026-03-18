/*
 * XREFs of ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1402672A4
 * Callers:
 *     MNAllocPopup @ 0x140208610 (MNAllocPopup.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140267238 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1402B56D0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(*(_QWORD *)(result + 19800) + 32LL);
  if ( v4 )
    return NSInstrumentation::CTypeIsolation<24576,96>::Free(v4, a1);
  return result;
}
