/*
 * XREFs of DifGetDomainCallerAddress @ 0x14064E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DifGetDomainCallerAddress()
{
  __int64 *v0; // rax
  __int64 v1; // rax

  if ( (_DWORD)VfRuleClasses
    && (v0 = *(__int64 **)&KeGetCurrentThread()[1].WaitBlockFill11[64]) != 0LL
    && (v1 = *v0) != 0 )
  {
    return *(_QWORD *)(v1 + 8);
  }
  else
  {
    return 0LL;
  }
}
