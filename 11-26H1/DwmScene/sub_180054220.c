/*
 * XREFs of sub_180054220 @ 0x180054220
 * Callers:
 *     sub_18002BE58 @ 0x18002BE58 (sub_18002BE58.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054220(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 12);
  return result;
}
