/*
 * XREFs of ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1401A4340
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1401A4040 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 48) = a2 + *(a1 - 11) - v2;
  else
    *(_QWORD *)(v2 + 48) = 0LL;
  *a1 = a2;
  return a2;
}
