/*
 * XREFs of RmpResourceSetPropertiesRemoveAdditiveResources @ 0x180069D20
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180038EE0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpResourceSetPropertiesRemoveAdditiveResources(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  *(_DWORD *)(a1 + 88) &= ~0x20u;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = 1LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v3 = 2LL;
  v4 = *(_QWORD *)(a1 + 40);
  do
  {
    v4 |= v2++;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 40) = v4 | 0xC;
  return result;
}
