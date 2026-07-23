/*
 * XREFs of SmKmStoreCreatePrepare @ 0x140B34EC8
 * Callers:
 *     SmProcessCreateRequest @ 0x140ADC4D4 (SmProcessCreateRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreCreatePrepare(int *a1, char a2, _QWORD *a3)
{
  int v3; // r9d
  _DWORD *v4; // r10
  __int64 result; // rax

  v3 = *a1;
  v4 = a1 + 2;
  if ( (unsigned int)*a1 >= 0x400 || (_BYTE)v3 != 6 )
    return 3221225485LL;
  result = 0LL;
  if ( a2 && (v3 & 0x300) != 0 )
    return 3221225506LL;
  if ( (unsigned __int8)*v4 || (*v4 & 0x100) != 0 )
    return 3221225659LL;
  *a3 = v4;
  return result;
}
