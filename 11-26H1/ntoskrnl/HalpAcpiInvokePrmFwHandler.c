/*
 * XREFs of HalpAcpiInvokePrmFwHandler @ 0x14057BDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiInvokePrmFwHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 i; // r9
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < HalpAcpiPrmFwHandlerCount; i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)HalpAcpiPrmFwHandlerBlock + 3 * i) - *a1;
    if ( !v5 )
      v5 = *((_QWORD *)HalpAcpiPrmFwHandlerBlock + 3 * i + 1) - a1[1];
    if ( !v5 )
      return (*((__int64 (__fastcall **)(__int64, __int64))HalpAcpiPrmFwHandlerBlock + 3 * i + 2))(a2, a3);
  }
  return 3221226021LL;
}
