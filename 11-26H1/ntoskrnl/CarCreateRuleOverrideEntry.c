/*
 * XREFs of CarCreateRuleOverrideEntry @ 0x14064D3D0
 * Callers:
 *     CarRegisterRuleOverride @ 0x14064DCF0 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x14064DDE0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CarCreateRuleOverrideEntry(_QWORD *a1)
{
  unsigned int v1; // ebx
  void *Pool2; // rax

  v1 = 0;
  if ( a1 )
  {
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    *a1 = Pool2;
    if ( Pool2 )
      memset_0(Pool2, 0, 0x50uLL);
    else
      return (unsigned int)-1073741801;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
