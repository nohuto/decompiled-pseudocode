/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x180080DF0
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1)
{
  struct _TEB *v1; // rax
  char *DeallocationStack; // r8
  void *StackBase; // rdx
  char *StackLimit; // rax

  v1 = NtCurrentTeb();
  DeallocationStack = (char *)v1->DeallocationStack;
  StackBase = v1->NtTib.StackBase;
  StackLimit = (char *)v1->NtTib.StackLimit;
  if ( a1 >= (unsigned __int64)StackLimit && a1 <= (unsigned __int64)StackBase )
    return 1LL;
  return StackLimit != DeallocationStack
      && a1 >= (unsigned __int64)(StackLimit - 4096)
      && a1 <= (unsigned __int64)StackBase;
}
