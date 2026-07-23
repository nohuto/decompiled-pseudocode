/*
 * XREFs of HvlUnmapDmaRanges @ 0x1405C1660
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlUnmapDmaRanges(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // esi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  void *v9; // r13
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int16 v16; // bx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+78h] [rbp+10h]

  v3 = 0;
  *a3 = 0;
  v18 = 0LL;
  v19 = 0LL;
  LODWORD(v20) = 0;
  v7 = HvlpAcquireHypercallPage((__int64)&v18, 1, 0LL, 0LL);
  v8 = (unsigned int)*a3;
  v9 = v7;
  LODWORD(v21) = 265;
  v10 = a1;
  v11 = 0;
  LODWORD(v12) = 0;
  do
  {
    v13 = v10;
    if ( v10 >= 0x100 )
    {
      v11 = v12;
      v13 = 256;
    }
    memmove(v9, (const void *)(a2 + 16 * v8), 16LL * v13);
    v11 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v11) & 0xFFF;
    HIDWORD(v21) = v11;
    v14 = HvcallInitiateHypercall(v21, v20);
    v16 = v14;
    if ( (_WORD)v14 )
      break;
    v12 = v11;
    *a3 += WORD2(v14) & 0xFFF;
    v8 = (unsigned int)*a3;
    v10 = a1 - v8;
  }
  while ( a1 != (_DWORD)v8 );
  HvlpReleaseHypercallPage((unsigned int *)&v18, v8, v12, v15);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v3;
}
