/*
 * XREFs of TranslateToExtendedSrb @ 0x14002B270
 * Callers:
 *     RaidUnitClaimIrp @ 0x140014BFC (RaidUnitClaimIrp.c)
 * Callees:
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x14002B8B0 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 *     McTemplateK0zx_EtwWriteTransfer @ 0x1400593D0 (McTemplateK0zx_EtwWriteTransfer.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5, char a6)
{
  char v6; // r15
  unsigned __int64 v7; // r13
  int v10; // r12d
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  char v13; // bp
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  char v17; // al
  int v18; // eax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rbp
  __int64 v24; // rdx
  int v25; // ecx
  __int64 v26; // r14
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  __int64 v30; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v32; // rdx
  unsigned int LowPart; // ecx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  char v37; // al
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  int v39; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v39) = a4;
  v6 = 0;
  v7 = a3;
  PerformanceFrequency.QuadPart = 1LL;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v12 = v11;
  if ( *(_BYTE *)(a2 + 2) )
  {
    switch ( *(_BYTE *)(a2 + 2) )
    {
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0x10:
      case 0x12:
      case 0x13:
      case 0x15:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x20:
      case 0x26:
        if ( (unsigned int)v7 < 0x90 )
          goto LABEL_69;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
        goto LABEL_51;
      case 0x17:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_69;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 96;
        *(_DWORD *)(a1 + 148) = 16;
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
        *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
        goto LABEL_51;
      case 0x24:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_69;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        goto LABEL_96;
      case 0x25:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_69;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
LABEL_96:
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
        goto LABEL_51;
      default:
        v10 = -1073741811;
        goto LABEL_53;
    }
  }
  v13 = a6;
  v14 = 224;
  if ( a6 != 1 )
    v14 = 184;
  if ( (unsigned int)v7 < v14 )
    goto LABEL_69;
  *(_DWORD *)(a1 + 16) = v14;
  v15 = 2;
  *(_WORD *)(a1 + 36) = 2;
  *(_WORD *)a1 = 8;
  *(_BYTE *)(a1 + 2) = 40;
  *(_DWORD *)(a1 + 8) = 1397899864;
  *(_DWORD *)(a1 + 12) = 1;
  *(_DWORD *)(a1 + 52) = 128;
  if ( v13 )
    *(_DWORD *)(a1 + 52) = 136;
  else
    v15 = 1;
  *(_DWORD *)(a1 + 56) = v15;
  *(_DWORD *)(a1 + 20) = *(unsigned __int8 *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
  if ( *(_BYTE *)(a2 + 2) == 23 )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 112) = v16;
  v17 = *(_BYTE *)(a2 + 2);
  if ( v17 == 37 || v17 == 36 || v17 == 23 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    v18 = 0;
    *(_WORD *)(a1 + 38) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = *(unsigned __int8 *)(a2 + 8);
    *(_WORD *)(a1 + 38) = *(unsigned __int8 *)(a2 + 9);
    v18 = *(_DWORD *)(a2 + 64);
  }
  *(_DWORD *)(a1 + 44) = v18;
  v19 = *(_DWORD **)(a2 + 48);
  if ( v19 )
  {
    if ( *v19 == 523124044 )
    {
      *(_QWORD *)(a1 + 96) = v19;
      *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176LL);
    }
    else
    {
      *(_QWORD *)(a1 + 80) = v19;
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
    }
  }
  v20 = 152LL;
  v21 = 152;
  if ( v13 != 1 )
  {
    v21 = 144;
    v20 = 144LL;
  }
  *(_DWORD *)(a1 + 120) = v21;
  if ( v20 + 40 > v7 )
  {
    v10 = -1073741670;
  }
  else
  {
    *(_DWORD *)(v20 + a1) = 64;
    v22 = v20 + a1;
    *(_DWORD *)(v20 + a1 + 4) = 32;
    *(_BYTE *)(v20 + a1 + 10) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(v20 + a1 + 8) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(v20 + a1 + 9) = *(_BYTE *)(a2 + 11);
    *(_QWORD *)(v20 + a1 + 16) = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a2 + 10) )
      memmove((void *)(v22 + 24), (const void *)(a2 + 72), *(unsigned __int8 *)(a2 + 10));
    else
      *(_OWORD *)(v22 + 24) = 0LL;
  }
  if ( v13 != 1 || *(_DWORD *)(a1 + 56) <= 1u )
    goto LABEL_50;
  *(_DWORD *)(a1 + 124) = 192;
  if ( v7 < 0xE0 )
    goto LABEL_69;
  v23 = a5;
  if ( !a5 )
  {
    v23 = *(_QWORD *)(a2 + 48);
    if ( !v23 )
      goto LABEL_50;
  }
  v24 = *(_QWORD *)(v23 + 192);
  v25 = 0;
  v26 = *(_QWORD *)(v23 + 184);
  *(_DWORD *)(a1 + 192) = 128;
  *(_QWORD *)(a1 + 196) = 24LL;
  if ( (*(_DWORD *)(v23 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 200) = 1;
    v25 = 1;
  }
  if ( (*(_DWORD *)(v23 + 16) & 0x42) != 0 )
  {
    v25 |= 2u;
    *(_DWORD *)(a1 + 200) = v25;
  }
  if ( !v24 )
  {
    v27 = v25 | 0x40;
    goto LABEL_41;
  }
  if ( (*(_DWORD *)(v24 + 80) & 0x20) != 0 )
  {
    v25 |= 4u;
    *(_DWORD *)(a1 + 200) = v25;
  }
  if ( (*(_DWORD *)(v24 + 80) & 0x18000) != 0 )
  {
    v25 |= 8u;
    *(_DWORD *)(a1 + 200) = v25;
  }
  if ( (*(_DWORD *)(v24 + 80) & 0x10) != 0 )
  {
    v27 = v25 | 0x10;
LABEL_41:
    *(_DWORD *)(a1 + 200) = v27;
  }
  v39 = 0;
  if ( (int)IoGetGenericIrpExtension(v23, &v39, 4LL) >= 0 && (v39 & 0x20) != 0 )
    *(_DWORD *)(a1 + 200) |= 0x20u;
  if ( v26 )
  {
    if ( *(_BYTE *)v26 == 3 )
    {
      v28 = *(_DWORD *)(v26 + 16);
      *(_DWORD *)(a1 + 204) = v28;
      v29 = *(_DWORD *)(v26 + 8);
    }
    else
    {
      if ( *(_BYTE *)v26 == 4 )
      {
        v28 = *(_DWORD *)(v26 + 16);
        *(_DWORD *)(a1 + 204) = v28;
        v29 = *(_DWORD *)(v26 + 8);
        *(_BYTE *)(a1 + 212) = 1;
LABEL_47:
        *(_DWORD *)(a1 + 208) = v29;
        if ( (v28 & 0xFFFF0000) == 0x56530000 )
          *(_DWORD *)(a1 + 200) |= 0x80u;
        goto LABEL_49;
      }
      *(_DWORD *)(a1 + 204) = 0;
      v29 = 0;
      v28 = 0;
    }
    *(_BYTE *)(a1 + 212) = 0;
    goto LABEL_47;
  }
  *(_QWORD *)(a1 + 204) = 0LL;
  *(_BYTE *)(a1 + 212) = 0;
LABEL_49:
  v39 = 0;
  if ( (int)IoGetGenericIrpExtension(v23, &v39, 4LL) >= 0 )
  {
    v37 = v39;
    if ( (v39 & 0x10) != 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x80000000;
      *(_BYTE *)(a1 + 213) = v37 & 0xF;
    }
  }
LABEL_50:
  if ( v10 >= 0 )
  {
LABEL_51:
    v30 = *(unsigned int *)(a1 + 52);
    if ( v30 + 16 <= v7 )
    {
      *(_DWORD *)(v30 + a1) = 1;
      *(_DWORD *)(v30 + a1 + 4) = 4;
      *(_BYTE *)(v30 + a1 + 8) = *(_BYTE *)(a2 + 5);
      *(_BYTE *)(v30 + a1 + 9) = *(_BYTE *)(a2 + 6);
      *(_BYTE *)(v30 + a1 + 10) = *(_BYTE *)(a2 + 7);
      goto LABEL_53;
    }
LABEL_69:
    v10 = -1073741670;
  }
LABEL_53:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v12.QuadPart )
    v34 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  else
    v34 = PerformanceCounter.QuadPart - v12.QuadPart;
  if ( UseQPCTime )
  {
    LowPart = PerformanceFrequency.LowPart;
    if ( PerformanceFrequency.QuadPart && v34 )
    {
      v35 = 1000 * (v34 % PerformanceFrequency.QuadPart);
      v34 = v35 / PerformanceFrequency.QuadPart + 1000 * (v34 / PerformanceFrequency.QuadPart);
      v32.QuadPart = 10000 * (v35 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
      v6 = 10000 * (v35 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart + 16 * v34;
    }
  }
  else
  {
    v6 = v34;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx_EtwWriteTransfer(LowPart, v32.LowPart, v34, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
