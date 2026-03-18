/*
 * XREFs of ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401CA9A8
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CA340 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@@@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CB8C8 (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401CBFD4 (-SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x14005A034 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x140076180 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1400761DC (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *a2,
        unsigned int a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  int v8; // eax
  int *v9; // rdi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rbx
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r11
  __int64 v23; // r10
  __int64 v24; // r10
  char *v25; // r11
  unsigned int i; // r9d
  char *v27; // rdx
  __int64 v28; // r8
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int *v34; // rcx

  if ( a3 < (unsigned int)DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this) )
    return 3221225507LL;
  v6 = *((_DWORD *)this + 3522);
  *((_DWORD *)a2 + 1) = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  *(_DWORD *)a2 = 44;
  *((_DWORD *)a2 + 10) = 0;
  v7 = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  v8 = (*(_DWORD *)this >> 8) & 1;
  *((_DWORD *)a2 + 13) = v6;
  *((_DWORD *)a2 + 12) = v8;
  *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)((char *)this + 20);
  if ( v6 )
  {
    v9 = (int *)((char *)a2 + 92);
    do
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v7);
      v11 = 0LL;
      *(_QWORD *)(v9 - 5) = *((_QWORD *)DisplayAdapterDiagData + 1);
      *(v9 - 3) = *((_DWORD *)DisplayAdapterDiagData + 240);
      *(v9 - 2) = *((_DWORD *)DisplayAdapterDiagData + 489);
      v12 = *v9;
      *(v9 - 1) = *((_DWORD *)DisplayAdapterDiagData + 4);
      v13 = (v12 & 0xFFFFFFFE ^ *((_BYTE *)DisplayAdapterDiagData + 20) & 1) & 0xFFFFFFF9;
      *v9 = v13;
      v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(8 * *((_BYTE *)DisplayAdapterDiagData + 3488))) & 8;
      *v9 = v14;
      v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * *((_BYTE *)DisplayAdapterDiagData + 3248))) & 0x10;
      *v9 = v15;
      v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(32 * *((_BYTE *)DisplayAdapterDiagData + 3504))) & 0x20;
      *v9 = v16;
      v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(*((_BYTE *)DisplayAdapterDiagData + 3505) << 6)) & 0x40;
      *v9 = v17;
      for ( *v9 = v17 ^ (v17 ^ (*((unsigned __int8 *)DisplayAdapterDiagData + 3506) << 7)) & 0x80;
            (unsigned int)v11 < *((_DWORD *)DisplayAdapterDiagData + 240);
            *(_OWORD *)(v25 + 180) = *(_OWORD *)(v18 + 144) )
      {
        if ( (unsigned int)v11 >= 4 )
        {
          v18 = 64LL;
          v19 = 8LL;
          v20 = 12LL;
          v21 = 28LL;
          v22 = 32LL;
        }
        else
        {
          v18 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v11 + 128;
          v19 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v11 + 72;
          v20 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v11 + 76;
          v21 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v11 + 92;
          v22 = (__int64)DisplayAdapterDiagData + 224 * (unsigned int)v11 + 96;
        }
        v23 = 48 * v11;
        v9[v23 + 1] = *(_DWORD *)v19;
        v9[v23 + 2] = *(_DWORD *)v20;
        v9[v23 + 3] = *(_DWORD *)v21;
        RtlStringCchCopyA((char *)&v9[48 * v11 + 4], 15LL, (const char *)v22);
        v25 = (char *)v9 + v24;
        v11 = (unsigned int)(v11 + 1);
        *(_OWORD *)(v25 + 36) = *(_OWORD *)v18;
        *(_OWORD *)(v25 + 52) = *(_OWORD *)(v18 + 16);
        *(_OWORD *)(v25 + 68) = *(_OWORD *)(v18 + 32);
        *(_OWORD *)(v25 + 84) = *(_OWORD *)(v18 + 48);
        *(_OWORD *)(v25 + 100) = *(_OWORD *)(v18 + 64);
        *(_OWORD *)(v25 + 116) = *(_OWORD *)(v18 + 80);
        *(_OWORD *)(v25 + 132) = *(_OWORD *)(v18 + 96);
        *(_OWORD *)(v25 + 148) = *(_OWORD *)(v18 + 112);
        *(_OWORD *)(v25 + 164) = *(_OWORD *)(v18 + 128);
      }
      for ( i = 0; i < *((_DWORD *)DisplayAdapterDiagData + 489); *((_QWORD *)v34 + 12) = *((_QWORD *)v27 + 30) )
      {
        if ( i >= 4 )
          v27 = 0LL;
        else
          v27 = (char *)DisplayAdapterDiagData + 248 * i + 964;
        v28 = 60LL * i;
        v9[v28 + 193] = *(_DWORD *)v27;
        v29 = v9[v28 + 194] ^ ((unsigned __int8)v9[v28 + 194] ^ (unsigned __int8)v27[4]) & 1;
        v9[v28 + 194] = v29;
        if ( *((_DWORD *)v27 + 2) < 2u )
          v30 = 0;
        else
          v30 = 4;
        ++i;
        v31 = v30 | v29 & 0xFFFFFFFB;
        v9[v28 + 194] = v31;
        v32 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(2 * v27[5])) & 2;
        v9[v28 + 194] = v32;
        v33 = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(8 * v27[6])) & 8;
        v9[v28 + 194] = v33;
        v9[v28 + 194] = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(16 * v27[7])) & 0x10;
        v34 = &v9[v28 + 195];
        *(_OWORD *)v34 = *((_OWORD *)v27 + 1);
        *((_OWORD *)v34 + 1) = *((_OWORD *)v27 + 2);
        *((_OWORD *)v34 + 2) = *((_OWORD *)v27 + 3);
        *((_OWORD *)v34 + 3) = *((_OWORD *)v27 + 4);
        *((_OWORD *)v34 + 4) = *((_OWORD *)v27 + 5);
        *((_OWORD *)v34 + 5) = *((_OWORD *)v27 + 6);
        *((_OWORD *)v34 + 6) = *((_OWORD *)v27 + 7);
        v34 += 32;
        *((_OWORD *)v34 - 1) = *((_OWORD *)v27 + 8);
        *(_OWORD *)v34 = *((_OWORD *)v27 + 9);
        *((_OWORD *)v34 + 1) = *((_OWORD *)v27 + 10);
        *((_OWORD *)v34 + 2) = *((_OWORD *)v27 + 11);
        *((_OWORD *)v34 + 3) = *((_OWORD *)v27 + 12);
        *((_OWORD *)v34 + 4) = *((_OWORD *)v27 + 13);
        *((_OWORD *)v34 + 5) = *((_OWORD *)v27 + 14);
      }
      ++v7;
      v9 += 438;
    }
    while ( v7 < v6 );
  }
  return 0LL;
}
