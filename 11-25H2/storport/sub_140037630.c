/*
 * XREFs of sub_140037630 @ 0x140037630
 * Callers:
 *     sub_14003738C @ 0x14003738C (sub_14003738C.c)
 *     sub_14003741C @ 0x14003741C (sub_14003741C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140037630(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  unsigned int v4; // r9d
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    v3 = v2 + *(unsigned __int8 *)(v2 + 3) - *(_DWORD *)a1 + 4;
  else
    v3 = 4;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 + 4 > v4 )
    return 0LL;
  result = *(_QWORD *)a1 + v3;
  if ( *(unsigned __int8 *)(result + 3) + v3 + 4 > v4 )
    return 0LL;
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
