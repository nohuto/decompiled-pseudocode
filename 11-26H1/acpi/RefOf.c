/*
 * XREFs of RefOf @ 0x14003D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RefOf(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 != v2 )
  {
    *(_OWORD *)v3 = *(_OWORD *)v2;
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
  }
  return 0LL;
}
