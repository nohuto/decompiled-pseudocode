/*
 * XREFs of MiInitializeCombining @ 0x140709638
 * Callers:
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall MiInitializeCombining(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  _DWORD *result; // rax

  *a2 = a1;
  v2 = (_QWORD *)(a1 + 17664);
  if ( !*v2 )
  {
    v2[1] = v2;
    *v2 = v2;
  }
  v3 = 16LL;
  a2[10] = a2 + 9;
  a2[9] = a2 + 9;
  result = a2 + 13;
  do
  {
    *((_QWORD *)result - 1) = 0LL;
    *result = 0;
    result += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
