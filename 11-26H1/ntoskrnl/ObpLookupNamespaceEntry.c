/*
 * XREFs of ObpLookupNamespaceEntry @ 0x1408EF0CC
 * Callers:
 *     ObpRegisterPrivateNamespace @ 0x140A9AB14 (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140ADB620 (NtOpenPrivateNamespace.c)
 * Callees:
 *     ObpCompareNamespaceEntry @ 0x1408EF130 (ObpCompareNamespaceEntry.c)
 */

_QWORD *__fastcall ObpLookupNamespaceEntry(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rsi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 16LL * *(unsigned __int8 *)(a2 + 40));
  for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
  {
    if ( i == v3 )
      return 0LL;
    if ( i[3] == *(_QWORD *)(a2 + 24) && (unsigned int)ObpCompareNamespaceEntry(i, a2) )
      break;
  }
  return i;
}
