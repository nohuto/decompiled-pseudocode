/*
 * XREFs of ScRsa32Compat_Md5Import @ 0x180022CB8
 * Callers:
 *     MD5Final_0 @ 0x180022A90 (MD5Final_0.c)
 *     MD5Update_0 @ 0x180022D20 (MD5Update_0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ScRsa32Compat_Md5Import(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  __int128 v4; // xmm1

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_OWORD *)(a2 + 96) = xmmword_1801767C8;
  v2 = ((unsigned __int64)*a1 >> 3) | ((unsigned __int64)a1[1] << 29);
  *(_QWORD *)(a2 + 16) = v2;
  result = v2 & 0x3F;
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 2);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 6);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 10);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 14);
  v4 = *(_OWORD *)(a1 + 18);
  *(_DWORD *)a2 = result;
  *(_OWORD *)(a2 + 80) = v4;
  return result;
}
