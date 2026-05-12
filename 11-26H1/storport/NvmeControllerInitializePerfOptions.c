/*
 * XREFs of NvmeControllerInitializePerfOptions @ 0x1400F6850
 * Callers:
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     NvmeInitializePerfOpts @ 0x140059A30 (NvmeInitializePerfOpts.c)
 */

bool __fastcall NvmeControllerInitializePerfOptions(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v13[20]; // [rsp+24h] [rbp-2Ch]
  __int128 v14; // [rsp+38h] [rbp-18h]

  v1 = g_CpuInfo;
  v12 = 8;
  v3 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)v13 = 40;
  *(_OWORD *)&v13[4] = 0LL;
  v14 = 0LL;
  if ( (unsigned int)NvmeInitializePerfOpts(v3, 1, &v12)
    || (v13[4] & 1) == 0
    || (v13[4] & 2) == 0
    || (v13[4] & 4) == 0
    || (v13[4] & 8) == 0 )
  {
    return 0;
  }
  if ( (v13[4] & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1048);
    if ( v4 )
      *(_DWORD *)(v4 + 24) &= ~8u;
  }
  v5 = *(_QWORD *)(a1 + 1048);
  v6 = 15;
  *(_QWORD *)v13 = 40LL;
  *(_QWORD *)((char *)&v14 + 4) = 0LL;
  HIDWORD(v14) = 0;
  v12 = 8;
  if ( v5 && (*(_BYTE *)(v5 + 24) & 8) != 0 )
    v6 = 79;
  if ( *(_DWORD *)(a1 + 908) <= 1u )
  {
    *(_QWORD *)&v13[12] = 0LL;
  }
  else
  {
    *(_DWORD *)&v13[16] = *(unsigned __int16 *)(a1 + 26);
    *(_DWORD *)&v13[12] = 1;
  }
  v7 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)&v13[8] = v1[3];
  v8 = *(_QWORD *)(v7 + 600);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 128);
    v10 = *((_QWORD *)&v14 + 1);
    if ( v9 )
      v10 = v9;
    *((_QWORD *)&v14 + 1) = v10;
  }
  LODWORD(v14) = *(_DWORD *)(v7 + 1024);
  *(_DWORD *)&v13[4] = v6 | 0x100;
  return !(unsigned int)NvmeInitializePerfOpts(v7, 0, &v12);
}
