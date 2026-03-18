/*
 * XREFs of ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1401507C0
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x140151720 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(_QWORD *a1, __int64 a2)
{
  if ( a2 )
    *(_QWORD *)(*(a1 - 12) + 48LL) = a2 + *(a1 - 11) - *(a1 - 12);
  else
    *(_QWORD *)(*(a1 - 12) + 48LL) = 0LL;
  *a1 = a2;
  return a2;
}
