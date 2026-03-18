/*
 * XREFs of ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1401D2E7C
 * Callers:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VLFONT@@@@@@SAXPEAX@Z @ 0x140326730 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgShareLockResult@.c)
 * Callees:
 *     <none>
 */

void __fastcall HmgShareLockResult<LFONT>::CleanupRoutine(Gre::Base *a1)
{
  struct LFONT *v1; // rdi
  struct Gre::Base::SESSION_GLOBALS *v3; // rax

  v1 = *(struct LFONT **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = Gre::Base::Globals(a1);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3, v1);
    *(_QWORD *)a1 = 0LL;
  }
}
