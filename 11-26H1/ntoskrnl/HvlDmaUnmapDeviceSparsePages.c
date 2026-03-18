/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1403E6AE0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032BFB0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v3; // zf
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned __int64 v9; // rbp
  int v10; // r14d
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  _BYTE *v13; // rcx
  char v14; // r10
  _QWORD *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 v18; // bx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+38h] [rbp-D0h]
  __int128 v27; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+50h] [rbp-B8h]
  _BYTE v29[112]; // [rsp+60h] [rbp-A8h] BYREF

  v3 = *(_BYTE *)(a1 + 4) == 0;
  v27 = 0LL;
  v28 = 0LL;
  if ( !v3 )
    return 3221225659LL;
  result = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 200;
  do
  {
    v11 = *a3;
    if ( !*a3 )
      break;
    if ( v11 > 0xB )
    {
      v24 = HvlpAcquireHypercallPage((__int64)&v27, 1, 0LL, 0LL);
      v12 = 509;
      v13 = v24;
      if ( *a3 < 0x1FD )
        v12 = *a3;
      v14 = 0;
      v10 &= ~0x10000u;
    }
    else
    {
      v12 = 11;
      v13 = v29;
      if ( v11 < 0xB )
        v12 = *a3;
      v14 = 1;
      v10 |= 0x10000u;
    }
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_DWORD *)v13 + 4) &= 0xFFFFFFF0;
    *(_QWORD *)v13 = -1LL;
    LODWORD(v25) = v10;
    *((_DWORD *)v13 + 5) = *(_DWORD *)a1;
    if ( v12 )
    {
      v15 = v13 + 24;
      v16 = a2 + 8 * v9 - 24 - (_QWORD)v13;
      v17 = v12;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + v16) << 12;
        ++v15;
        --v17;
      }
      while ( v17 );
    }
    v8 = v12 & 0xFFF | v8 & 0xFFFFF000;
    HIDWORD(v25) = v8;
    if ( v14 )
    {
      v23 = HvcallFastExtended(v25, (unsigned __int64)v29, 8 * v12 + 24, 0LL, 0);
      v18 = v23;
      WORD2(v26) = WORD2(v23);
    }
    else
    {
      v26 = HvcallInitiateHypercall(v25, *((unsigned __int64 *)&v28 + 1));
      v18 = v26;
      HvlpReleaseHypercallPage((unsigned int *)&v27, v19, v20, v21);
    }
    v22 = WORD2(v26) & 0xFFF;
    *a3 -= v22;
    v9 += v22;
    result = HvlpHvToNtStatus(v18);
  }
  while ( (int)result >= 0 );
  *a3 = v9;
  return result;
}
