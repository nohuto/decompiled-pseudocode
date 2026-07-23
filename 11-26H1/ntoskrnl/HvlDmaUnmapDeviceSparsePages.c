/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1402F39C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+38h] [rbp-D0h]
  __int128 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B8h]
  _BYTE v26[112]; // [rsp+60h] [rbp-A8h] BYREF

  v3 = *(_BYTE *)(a1 + 4) == 0;
  v24 = 0LL;
  v25 = 0LL;
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
      v21 = HvlpAcquireHypercallPage(&v24, 1LL, 0LL, 0LL);
      v12 = 509;
      v13 = (_BYTE *)v21;
      if ( *a3 < 0x1FD )
        v12 = *a3;
      v14 = 0;
      v10 &= ~0x10000u;
    }
    else
    {
      v12 = 11;
      v13 = v26;
      if ( v11 < 0xB )
        v12 = *a3;
      v14 = 1;
      v10 |= 0x10000u;
    }
    *((_QWORD *)v13 + 1) = 0LL;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_DWORD *)v13 + 4) &= 0xFFFFFFF0;
    *(_QWORD *)v13 = -1LL;
    LODWORD(v22) = v10;
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
    HIDWORD(v22) = v8;
    if ( v14 )
    {
      v20 = HvcallFastExtended(v10, (unsigned int)v26, 8 * v12 + 24, 0, 0);
      v18 = v20;
      WORD2(v23) = WORD2(v20);
    }
    else
    {
      v23 = HvcallInitiateHypercall(v22, *((_QWORD *)&v25 + 1), 0LL);
      v18 = v23;
      HvlpReleaseHypercallPage(&v24);
    }
    v19 = WORD2(v23) & 0xFFF;
    *a3 -= v19;
    v9 += v19;
    result = HvlpHvToNtStatus(v18);
  }
  while ( (int)result >= 0 );
  *a3 = v9;
  return result;
}
