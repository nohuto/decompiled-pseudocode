/*
 * XREFs of sub_180029258 @ 0x180029258
 * Callers:
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CC3A0 @ 0x1800CC3A0 (sub_1800CC3A0.c)
 *     sub_1800CC5F0 @ 0x1800CC5F0 (sub_1800CC5F0.c)
 *     sub_1800CC850 @ 0x1800CC850 (sub_1800CC850.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800CD520 @ 0x1800CD520 (sub_1800CD520.c)
 *     sub_1800CD640 @ 0x1800CD640 (sub_1800CD640.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180029258(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // r8
  __int64 result; // rax

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v4 = 160LL * v3;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C85F0 + v4), a2);
  result = *(int *)(a1 + 56);
  _InterlockedAdd64((volatile signed __int64 *)&unk_1801C85F0 + 20 * result, -*(_QWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 56) = v3;
  *(_QWORD *)(a1 + 64) = a2;
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C85F0 + v4), a2);
  _InterlockedAdd64((volatile signed __int64 *)((char *)&unk_1801C85F0 + v4), -(__int64)a2);
  return result;
}
