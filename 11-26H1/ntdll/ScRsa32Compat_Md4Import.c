/*
 * XREFs of ScRsa32Compat_Md4Import @ 0x180158970
 * Callers:
 *     MD4Final @ 0x180158704 (MD4Final.c)
 *     MD4Update @ 0x180158890 (MD4Update.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ScRsa32Compat_Md4Import(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  __int128 v4; // xmm1

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 96) = xmmword_180194D20;
  *(_OWORD *)(a2 + 96) = *(_OWORD *)a1;
  v2 = ((unsigned __int64)*(unsigned int *)(a1 + 16) >> 3) | ((unsigned __int64)*(unsigned int *)(a1 + 20) << 29);
  *(_QWORD *)(a2 + 16) = v2;
  result = v2 & 0x3F;
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 24);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 40);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 56);
  v4 = *(_OWORD *)(a1 + 72);
  *(_DWORD *)a2 = result;
  *(_OWORD *)(a2 + 80) = v4;
  return result;
}
