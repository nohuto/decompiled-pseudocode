/*
 * XREFs of CoalesceUpdateKeyStateEventMsg @ 0x14016B460
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x1400419B0 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceUpdateKeyStateEventMsg(__int64 a1, _OWORD *a2, unsigned int *a3)
{
  _OWORD *v3; // rax
  _DWORD *v4; // rcx
  __int128 v5; // xmm1
  unsigned int v6; // edx
  __int64 result; // rax

  v3 = *(_OWORD **)(a1 + 32);
  *v3 = *a2;
  v4 = v3 + 4;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v5 = a2[3];
  v6 = 0;
  v3[3] = v5;
  do
  {
    result = *a3;
    ++v6;
    *v4 |= result;
    ++a3;
    ++v4;
  }
  while ( v6 < 8 );
  return result;
}
