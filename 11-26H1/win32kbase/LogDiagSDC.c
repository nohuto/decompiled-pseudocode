/*
 * XREFs of LogDiagSDC @ 0x14014FCB0
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401E82B0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

void __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        _DWORD *a9)
{
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int128 Buf1; // [rsp+20h] [rbp-28h] BYREF

  v10 = a1;
  v11 = a4;
  v12 = a3;
  v13 = 200 * a1 + 88;
  v14 = PALLOCMEM(v13, 1936876615LL, a3, a4);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = 47;
    *(_DWORD *)(v14 + 4) = v13;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_OWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 60) = a5;
    *(_DWORD *)(v14 + 64) = a6;
    *(_DWORD *)(v14 + 52) = v10;
    *(_DWORD *)(v14 + 68) = v11;
    v16 = (a8 != 0 ? 8 : 0) | (a2 == 0) | 2;
    *(_DWORD *)(v14 + 72) = v12;
    *(_DWORD *)(v14 + 48) = v16;
    if ( a9 )
    {
      v20 = v16 | (16 * (*a9 & 3));
      *(_DWORD *)(v14 + 48) = v20;
      Buf1 = 0LL;
      *(_DWORD *)(v14 + 48) = v20 | (memcmp(&Buf1, a9 + 1, 0x10uLL) == 0 ? 0x40 : 0);
    }
    *(_QWORD *)(v15 + 80) = a7;
    *(_DWORD *)(v15 + 76) = 200;
    if ( a2 && (_DWORD)v10 )
    {
      v21 = v15 + 104;
      v22 = v10;
      v23 = (_QWORD *)(a2 + 16);
      do
      {
        *(_QWORD *)(v21 - 16) = *(v23 - 2);
        *(_QWORD *)(v21 - 8) = *(v23 - 1);
        v24 = *v23;
        v23 += 27;
        *(_QWORD *)v21 = v24;
        *(_DWORD *)(v21 + 8) = *((_DWORD *)v23 - 52);
        *(_DWORD *)(v21 + 12) = *((_DWORD *)v23 - 51);
        *(_OWORD *)(v21 + 16) = *(_OWORD *)(v23 - 25);
        *(_OWORD *)(v21 + 32) = *(_OWORD *)(v23 - 23);
        *(_OWORD *)(v21 + 48) = *(_OWORD *)(v23 - 21);
        *(_DWORD *)(v21 + 64) = *((_DWORD *)v23 - 38);
        *(_DWORD *)(v21 + 68) = *((_DWORD *)v23 - 37);
        *(_QWORD *)(v21 + 72) = *(v23 - 18);
        *(_DWORD *)(v21 + 80) = *((_DWORD *)v23 - 34);
        *(_BYTE *)(v21 + 84) = *((_BYTE *)v23 - 132);
        *(_BYTE *)(v21 + 85) = *((_BYTE *)v23 - 131);
        *(_DWORD *)(v21 + 88) = *((_DWORD *)v23 - 32);
        *(_DWORD *)(v21 + 92) = *((_DWORD *)v23 - 31);
        *(_DWORD *)(v21 + 96) = *((_DWORD *)v23 - 30);
        *(_QWORD *)(v21 + 100) = *(_QWORD *)((char *)v23 - 116);
        *(_QWORD *)(v21 + 108) = *(_QWORD *)((char *)v23 - 108);
        *(_QWORD *)(v21 + 116) = *(_QWORD *)((char *)v23 - 100);
        *(_OWORD *)(v21 + 124) = *(_OWORD *)((char *)v23 - 92);
        *(_DWORD *)(v21 + 140) = *((_DWORD *)v23 - 19);
        *(_DWORD *)(v21 + 144) = *((_DWORD *)v23 - 18);
        *(_DWORD *)(v21 + 148) = *((_DWORD *)v23 - 17);
        *(_QWORD *)(v21 + 152) = *(v23 - 8);
        *(_QWORD *)(v21 + 160) = *(v23 - 7);
        *(_DWORD *)(v21 + 168) = *((_DWORD *)v23 - 12);
        *(_QWORD *)(v21 + 172) = *(_QWORD *)((char *)v23 - 36);
        *(_DWORD *)(v21 + 180) = *((_DWORD *)v23 - 5);
        v21 += 200LL;
        --v22;
      }
      while ( v22 );
    }
    DrvDxgkWriteDiagEntry(v15);
    GreDeleteFastMutex((char *)v15, v17, v18, v19);
  }
  else
  {
    WdLogSingleEntry1(6LL, v13);
    WdLogGlobalForLineNumber = 14798;
    DrvDxgkLogCodePointPacket(3LL, v12, v11);
  }
}
