/*
 * XREFs of MiCheckSystemPageTables @ 0x1403A8568
 * Callers:
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x1404E4804 (MiCheckSystemNxFault.c)
 *     MiGenerateAccessViolation @ 0x1404E6E58 (MiGenerateAccessViolation.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiCheckSystemPageTables(ULONG_PTR *a1)
{
  __int64 result; // rax
  ULONG_PTR **i; // rcx
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rcx
  char v6; // al
  ULONG_PTR v7; // rdx

  result = 3LL;
  for ( i = (ULONG_PTR **)(a1 + 6); ; --i )
  {
    if ( !result )
      return result;
    v4 = **i;
    if ( (v4 & 1) == 0 )
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xDuLL);
    if ( (v4 & 0x80u) != 0LL )
      break;
    --result;
  }
  if ( (a1[1] & 2) == 0 || (v4 & 0x800) != 0 )
  {
    MiCheckSystemNxFault(a1, **i, 6LL);
    v5 = a1[2];
    if ( (v5 & 1) != 0 )
    {
      v6 = *(_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v6 == 1 || v6 == 3 || v6 == 6 )
        return 1LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(v5, 0LL) )
    {
      return 1LL;
    }
    v7 = *a1;
    if ( *a1 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
      KeBugCheckEx(0x50u, v7, a1[1], a1[2], 8uLL);
    return 1LL;
  }
  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
    KeBugCheckEx(0xBEu, *a1, v4, a1[2], 0x10uLL);
  return 2LL;
}
