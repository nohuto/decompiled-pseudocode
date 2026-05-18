/*
 * XREFs of sub_1800C9080 @ 0x1800C9080
 * Callers:
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 *     sub_1800C9334 @ 0x1800C9334 (sub_1800C9334.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CC5F0 @ 0x1800CC5F0 (sub_1800CC5F0.c)
 *     sub_1800CC850 @ 0x1800CC850 (sub_1800CC850.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C9080(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v1 )
    return (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 24));
  else
    return v1 - *(_QWORD *)a1;
}
