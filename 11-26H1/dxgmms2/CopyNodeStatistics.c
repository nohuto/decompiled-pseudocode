/*
 * XREFs of CopyNodeStatistics @ 0x1401045A0
 * Callers:
 *     VidSchQueryNodeStatistics @ 0x140104500 (VidSchQueryNodeStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyNodeStatistics(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(a1 + 192) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 208);
  result = *(unsigned int *)(a2 + 204);
  *(_DWORD *)(a1 + 196) = result;
  return result;
}
