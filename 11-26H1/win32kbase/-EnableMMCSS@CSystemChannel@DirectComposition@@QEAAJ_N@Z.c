/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14012B944
 * Callers:
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14012B768 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140229D3C (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x1400A6900 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x1400B0E70 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(DirectComposition::CSystemChannel *this, char a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  _DWORD *v7; // rbx
  _WORD *v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // ax
  _WORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  int v22; // [rsp+58h] [rbp-B0h]
  wchar_t v23; // [rsp+5Ch] [rbp-ACh]
  _OWORD v24[9]; // [rsp+60h] [rbp-A8h] BYREF

  DirectComposition::CApplicationChannel::PreallocateNextBatch(this, 0);
  v4 = (_DWORD *)DirectComposition::CBatchSharedMemoryPool::UseSpace(
                   *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)this + 22) + 136LL),
                   0x9CuLL);
  v7 = v4;
  if ( !v4 )
    return 3221225473LL;
  *(_QWORD *)(v5 + 152) += v6;
  *v4 = v6;
  memset(v24, 0, sizeof(v24));
  if ( a2 )
  {
    v22 = *(_DWORD *)L"er";
    v9 = v24;
    v10 = 64LL;
    v20 = *(_OWORD *)L"Window Manager";
    v23 = aWindowManager[14];
    v21 = *(_QWORD *)L"anager";
    do
    {
      if ( v10 == 49 )
        break;
      v11 = *(_WORD *)((char *)v9 + (char *)&v20 - (char *)v24);
      if ( !v11 )
        break;
      *v9++ = v11;
      --v10;
    }
    while ( v10 );
    v12 = v9 - 1;
    if ( v10 )
      v12 = v9;
    *v12 = 0;
    DWORD1(v24[8]) = 0;
  }
  v13 = v24[1];
  *(_OWORD *)(v7 + 3) = v24[0];
  v14 = v24[2];
  v7[1] = 195;
  *(_OWORD *)(v7 + 7) = v13;
  v15 = v24[3];
  *(_OWORD *)(v7 + 11) = v14;
  v16 = v24[4];
  *(_OWORD *)(v7 + 15) = v15;
  v17 = v24[5];
  *(_OWORD *)(v7 + 19) = v16;
  v18 = v24[6];
  *(_OWORD *)(v7 + 23) = v17;
  v19 = v24[8];
  *(_OWORD *)(v7 + 27) = v18;
  *(_OWORD *)(v7 + 31) = v24[7];
  *(_OWORD *)(v7 + 35) = v19;
  return DirectComposition::CApplicationChannel::Commit(this, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
