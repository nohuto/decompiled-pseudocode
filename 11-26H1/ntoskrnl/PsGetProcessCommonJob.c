/*
 * XREFs of PsGetProcessCommonJob @ 0x1404EC1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessCommonJob(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 672);
  if ( v2 && (v3 = *(_QWORD *)(a2 + 672)) != 0 && *(_QWORD *)(v2 + 1312) == *(_QWORD *)(v3 + 1312) )
    return *(_QWORD *)(v2 + 1312);
  else
    return 0LL;
}
