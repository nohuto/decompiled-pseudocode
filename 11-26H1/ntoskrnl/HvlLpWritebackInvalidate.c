/*
 * XREFs of HvlLpWritebackInvalidate @ 0x1405BFE60
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlLpWritebackInvalidate(int a1)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  unsigned __int64 v11; // [rsp+38h] [rbp-10h]

  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v9, 1, 0LL, 32LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  v2[3] = 0LL;
  v3 = v11;
  *(_DWORD *)v2 = a1;
  *((_DWORD *)v2 + 1) = 65538;
  v4 = (unsigned __int16)HvcallInitiateHypercall(0x100000089LL, v3) != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)&v9, v5, v6, v7);
  return v4;
}
