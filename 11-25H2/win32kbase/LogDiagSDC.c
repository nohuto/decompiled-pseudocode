/*
 * XREFs of LogDiagSDC @ 0x1400E2360
 * Callers:
 *     DrvSetDisplayConfig @ 0x14013C960 (DrvSetDisplayConfig.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1401744E0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E2600 (DrvDxgkWriteDiagEntry.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memcmp @ 0x140243810 (memcmp.c)
 */

void __fastcall LogDiagSDC(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _DWORD *a9)
{
  __int64 v10; // rsi
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int128 Buf1; // [rsp+20h] [rbp-48h] BYREF

  v10 = a1;
  v13 = 200 * a1 + 88;
  v14 = PALLOCMEM(v13, 1936876615LL);
  v16 = v14;
  if ( v14 )
  {
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 32) = 0LL;
    v17 = a9;
    *(_DWORD *)v14 = 47;
    *(_DWORD *)(v14 + 4) = v13;
    *(_QWORD *)(v14 + 8) = 0LL;
    *(_OWORD *)(v14 + 16) = 0LL;
    *(_DWORD *)(v14 + 60) = a5;
    *(_DWORD *)(v14 + 64) = a6;
    *(_DWORD *)(v14 + 52) = v10;
    *(_DWORD *)(v14 + 68) = a4;
    *(_DWORD *)(v14 + 72) = a3;
    v18 = (a2 == 0) | (a8 != 0 ? 8 : 0) | 2;
    *(_DWORD *)(v14 + 48) = v18;
    if ( a9 )
    {
      v19 = v18 | (16 * (*a9 & 3));
      *(_DWORD *)(v14 + 48) = v19;
      Buf1 = 0LL;
      *(_DWORD *)(v14 + 48) = (memcmp(&Buf1, a9 + 1, 0x10uLL) == 0 ? 0x40 : 0) | v19;
    }
    *(_QWORD *)(v16 + 80) = a7;
    *(_DWORD *)(v16 + 76) = 200;
    if ( a2 && (_DWORD)v10 )
    {
      v20 = v16 + 104;
      v15 = v10;
      v17 = (_QWORD *)(a2 + 16);
      do
      {
        *(_QWORD *)(v20 - 16) = *(v17 - 2);
        *(_QWORD *)(v20 - 8) = *(v17 - 1);
        v21 = *v17;
        v17 += 27;
        *(_QWORD *)v20 = v21;
        *(_DWORD *)(v20 + 8) = *((_DWORD *)v17 - 52);
        *(_DWORD *)(v20 + 12) = *((_DWORD *)v17 - 51);
        *(_OWORD *)(v20 + 16) = *(_OWORD *)(v17 - 25);
        *(_OWORD *)(v20 + 32) = *(_OWORD *)(v17 - 23);
        *(_OWORD *)(v20 + 48) = *(_OWORD *)(v17 - 21);
        *(_DWORD *)(v20 + 64) = *((_DWORD *)v17 - 38);
        *(_DWORD *)(v20 + 68) = *((_DWORD *)v17 - 37);
        *(_QWORD *)(v20 + 72) = *(v17 - 18);
        *(_DWORD *)(v20 + 80) = *((_DWORD *)v17 - 34);
        *(_BYTE *)(v20 + 84) = *((_BYTE *)v17 - 132);
        *(_BYTE *)(v20 + 85) = *((_BYTE *)v17 - 131);
        *(_DWORD *)(v20 + 88) = *((_DWORD *)v17 - 32);
        *(_DWORD *)(v20 + 92) = *((_DWORD *)v17 - 31);
        *(_DWORD *)(v20 + 96) = *((_DWORD *)v17 - 30);
        *(_QWORD *)(v20 + 100) = *(_QWORD *)((char *)v17 - 116);
        *(_QWORD *)(v20 + 108) = *(_QWORD *)((char *)v17 - 108);
        *(_QWORD *)(v20 + 116) = *(_QWORD *)((char *)v17 - 100);
        *(_OWORD *)(v20 + 124) = *(_OWORD *)((char *)v17 - 92);
        *(_DWORD *)(v20 + 140) = *((_DWORD *)v17 - 19);
        *(_DWORD *)(v20 + 144) = *((_DWORD *)v17 - 18);
        *(_DWORD *)(v20 + 148) = *((_DWORD *)v17 - 17);
        *(_QWORD *)(v20 + 152) = *(v17 - 8);
        *(_QWORD *)(v20 + 160) = *(v17 - 7);
        *(_DWORD *)(v20 + 168) = *((_DWORD *)v17 - 12);
        *(_QWORD *)(v20 + 172) = *(_QWORD *)((char *)v17 - 36);
        *(_DWORD *)(v20 + 180) = *((_DWORD *)v17 - 5);
        v20 += 200LL;
        --v15;
      }
      while ( v15 );
    }
    DrvDxgkWriteDiagEntry(v16, v17, v15, 200LL);
    GreDeleteFastMutex((char *)v16);
  }
  else
  {
    WdLogSingleEntry1(6LL, v13);
    WdLogGlobalForLineNumber = 14950;
    DrvDxgkLogCodePointPacket(3LL, a3, a4, a6);
  }
}
