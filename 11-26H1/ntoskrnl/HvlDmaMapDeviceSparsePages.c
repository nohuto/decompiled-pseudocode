/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x1402F3BA0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvcallFastExtended @ 0x14032DFE0 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v9; // esi
  unsigned __int64 v10; // rbp
  int v11; // r14d
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  _BYTE *v14; // rcx
  char v15; // r10
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // r9
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // bx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-D8h]
  __int64 v25; // [rsp+38h] [rbp-D0h]
  __int128 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B8h]
  _BYTE v28[112]; // [rsp+60h] [rbp-A8h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  result = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 199;
  do
  {
    v12 = *a4;
    if ( !*a4 )
      break;
    if ( v12 > 5 )
    {
      v14 = (_BYTE *)HvlpAcquireHypercallPage(&v26, 1LL, 0LL, 0LL);
      v13 = 254;
      v15 = 0;
      if ( *a4 < 0xFE )
        v13 = *a4;
      v11 &= ~0x10000u;
    }
    else
    {
      v13 = 5;
      v14 = v28;
      if ( v12 < 5 )
        v13 = *a4;
      v15 = 1;
      v11 |= 0x10000u;
    }
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 2) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
    *(_QWORD *)v14 = -1LL;
    *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
    v16 = 0x10000;
    if ( a2 )
      v16 = a2;
    LODWORD(v24) = v11;
    *((_DWORD *)v14 + 7) = v16;
    if ( v13 )
    {
      v17 = v14 + 40;
      v18 = v13;
      v19 = (__int64 *)(a3 + 8 * v10);
      do
      {
        *(v17 - 1) = *v19 << 12;
        v20 = *v19++;
        *v17 = v20;
        v17 += 2;
        --v18;
      }
      while ( v18 );
    }
    v9 = v13 & 0xFFF | v9 & 0xFFFFF000;
    HIDWORD(v24) = v9;
    if ( v15 )
    {
      v21 = HvcallFastExtended(v11, (unsigned int)v28, 16 * (v13 + 2), 0, 0);
      v22 = v21;
      WORD2(v25) = WORD2(v21);
    }
    else
    {
      v25 = HvcallInitiateHypercall(v24, *((_QWORD *)&v27 + 1), 0LL);
      v22 = v25;
      HvlpReleaseHypercallPage(&v26);
    }
    v23 = WORD2(v25) & 0xFFF;
    *a4 -= v23;
    v10 += v23;
    result = (unsigned __int8)HvlpHvStatusIsInsufficientMemory(v22)
           ? HvlpHandleInsufficientMemory(v22)
           : HvlpHvToNtStatus(v22);
  }
  while ( (int)result >= 0 );
  *a4 = v10;
  return result;
}
