/*
 * XREFs of sub_1400A65CC @ 0x1400A65CC
 * Callers:
 *     sub_1400A5DD0 @ 0x1400A5DD0 (sub_1400A5DD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A65CC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _DWORD *v3; // rcx

  v1 = *(unsigned int *)(a1 + 968);
  result = 0LL;
  if ( (_DWORD)v1 )
  {
    v3 = (_DWORD *)(*(_QWORD *)(a1 + 960) + 24LL);
    do
    {
      result = (unsigned int)(*v3 + result);
      v3 += 80;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
