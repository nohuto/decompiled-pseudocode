/*
 * XREFs of IcAddPossibleReference @ 0x1400A8D48
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall IcAddPossibleReference(unsigned int a1, char a2)
{
  __int64 i; // r8
  __int64 *result; // rax
  unsigned int v4; // eax

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    result = &IcListHead;
    if ( &IcListHead == (__int64 *)i )
      break;
    if ( *(int *)(i + 28) >= 0 )
    {
      v4 = *(_DWORD *)(i + 16);
      if ( v4 <= a1 && *(_DWORD *)(i + 20) >= a1 )
      {
        result = (__int64 *)(a1 - v4);
        ++*(_DWORD *)(200LL * (_QWORD)result + i + 36);
        if ( a2 )
          ++*(_DWORD *)(200LL * (_QWORD)result + i + 44);
        return result;
      }
    }
  }
  return result;
}
