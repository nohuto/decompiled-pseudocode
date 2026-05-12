/*
 * XREFs of sub_14006E36C @ 0x14006E36C
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x1400743C0 (StorPortNvmeofExtendedFunction.c)
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 *     sub_140114380 @ 0x140114380 (sub_140114380.c)
 *     sub_1401899F8 @ 0x1401899F8 (sub_1401899F8.c)
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 *     sub_14018B8C8 @ 0x14018B8C8 (sub_14018B8C8.c)
 *     sub_14018BE30 @ 0x14018BE30 (sub_14018BE30.c)
 *     sub_14018DB90 @ 0x14018DB90 (sub_14018DB90.c)
 *     sub_14018F5FC @ 0x14018F5FC (sub_14018F5FC.c)
 * Callees:
 *     sub_14006E498 @ 0x14006E498 (sub_14006E498.c)
 *     sub_14006E658 @ 0x14006E658 (sub_14006E658.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14006E36C(char a1, char *a2)
{
  int v4; // esi
  size_t v5; // rbx
  __int128 v6; // xmm1
  size_t v7; // rbx
  int v8; // eax
  __int128 v9; // xmm1
  char Src[37]; // [rsp+28h] [rbp-49h] BYREF
  char v12[40]; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v13[2]; // [rsp+78h] [rbp+7h] BYREF
  int v14; // [rsp+98h] [rbp+27h]
  _OWORD v15[2]; // [rsp+A0h] [rbp+2Fh] BYREF

  strcpy(Src, "nqn.1991-05.com.microsoft:nvme.host.");
  strcpy(v12, "nqn.2014-08.org.nvmexpress:uuid:");
  memset_0(a2, 0, 0x100uLL);
  v4 = sub_14006E658(v13);
  if ( v4 >= 0 )
  {
    v4 = sub_14006E498(v15);
    if ( v4 < 0 || a1 )
    {
      v4 = 0;
      v7 = -1LL;
      do
        ++v7;
      while ( v12[v7] );
      memmove(a2, v12, v7);
      v8 = v14;
      v9 = v13[1];
      *(_OWORD *)&a2[v7] = v13[0];
      *(_OWORD *)&a2[v7 + 16] = v9;
      *(_DWORD *)&a2[v7 + 32] = v8;
    }
    else
    {
      v5 = -1LL;
      do
        ++v5;
      while ( Src[v5] );
      memmove(a2, Src, v5);
      v6 = v15[1];
      *(_OWORD *)&a2[v5] = v15[0];
      *(_OWORD *)&a2[v5 + 16] = v6;
    }
  }
  return (unsigned int)v4;
}
