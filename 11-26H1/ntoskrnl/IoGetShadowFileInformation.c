/*
 * XREFs of IoGetShadowFileInformation @ 0x1405CD870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetShadowFileInformation(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 208);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 80);
  return result;
}
