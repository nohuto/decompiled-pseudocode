/*
 * XREFs of sub_140029E90 @ 0x140029E90
 * Callers:
 *     sub_140050330 @ 0x140050330 (sub_140050330.c)
 * Callees:
 *     sub_14002A4B0 @ 0x14002A4B0 (sub_14002A4B0.c)
 *     sub_140053A04 @ 0x140053A04 (sub_140053A04.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140029E90(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5, char a6)
{
  char v6; // r12
  unsigned __int64 v7; // r15
  int v10; // r13d
  LARGE_INTEGER v11; // rax
  LARGE_INTEGER v12; // rbx
  char v13; // bp
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  char v17; // al
  int v18; // eax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rbp
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // r15
  int v26; // ecx
  int v27; // eax
  int GenericIrpExtension; // eax
  __int64 v29; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v31; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v33; // r8
  LONGLONG v34; // r9
  char v36; // al
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+80h] [rbp+18h]
  int v39; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v39) = a4;
  v38 = a3;
  v6 = 0;
  v7 = a3;
  PerformanceFrequency.QuadPart = 1LL;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( byte_140168724 )
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
          goto LABEL_68;
        sub_14002A4B0(a1, a2, 0, 0, 144);
        goto LABEL_50;
      case 0x17:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_68;
        sub_14002A4B0(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 96;
        *(_DWORD *)(a1 + 148) = 16;
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
        *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
        goto LABEL_50;
      case 0x24:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_68;
        sub_14002A4B0(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        goto LABEL_94;
      case 0x25:
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_68;
        sub_14002A4B0(a1, a2, 1, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
LABEL_94:
        *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
        *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
        goto LABEL_50;
      default:
        v10 = -1073741811;
        goto LABEL_52;
    }
  }
  v13 = a6;
  v14 = 224;
  if ( a6 != 1 )
    v14 = 184;
  if ( (unsigned int)v7 < v14 )
    goto LABEL_68;
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
  if ( v17 == 23 || (unsigned __int8)(v17 - 36) <= 1u )
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
  if ( v13 != 1 )
    v20 = 144LL;
  *(_DWORD *)(a1 + 120) = v20;
  if ( v20 + 40 > v7 )
  {
    v10 = -1073741670;
  }
  else
  {
    *(_DWORD *)((unsigned int)v20 + a1) = 64;
    v21 = (unsigned int)v20 + a1;
    *(_DWORD *)(v21 + 4) = 32;
    *(_BYTE *)(v21 + 10) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(v21 + 8) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(v21 + 9) = *(_BYTE *)(a2 + 11);
    *(_QWORD *)(v21 + 16) = *(_QWORD *)(a2 + 32);
    if ( *(_BYTE *)(a2 + 10) )
      memmove((void *)(v21 + 24), (const void *)(a2 + 72), *(unsigned __int8 *)(a2 + 10));
    else
      *(_OWORD *)(v21 + 24) = 0LL;
  }
  if ( v13 != 1 || *(_DWORD *)(a1 + 56) <= 1u )
    goto LABEL_49;
  *(_DWORD *)(a1 + 124) = 192;
  if ( v7 < 0xE0 )
    goto LABEL_68;
  v22 = a5;
  if ( !a5 )
  {
    v22 = *(_QWORD *)(a2 + 48);
    if ( !v22 )
      goto LABEL_49;
  }
  v23 = *(_QWORD *)(v22 + 192);
  v24 = 0;
  v25 = *(_QWORD *)(v22 + 184);
  *(_DWORD *)(a1 + 192) = 128;
  *(_QWORD *)(a1 + 196) = 24LL;
  if ( (*(_DWORD *)(v22 + 16) & 1) != 0 )
  {
    *(_DWORD *)(a1 + 200) = 1;
    v24 = 1;
  }
  if ( (*(_DWORD *)(v22 + 16) & 0x42) != 0 )
  {
    v24 |= 2u;
    *(_DWORD *)(a1 + 200) = v24;
  }
  if ( !v23 )
  {
    v26 = v24 | 0x40;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)(v23 + 80) & 0x20) != 0 )
  {
    v24 |= 4u;
    *(_DWORD *)(a1 + 200) = v24;
  }
  if ( (*(_DWORD *)(v23 + 80) & 0x18000) != 0 )
  {
    v24 |= 8u;
    *(_DWORD *)(a1 + 200) = v24;
  }
  if ( (*(_DWORD *)(v23 + 80) & 0x10) != 0 )
  {
    v26 = v24 | 0x10;
LABEL_40:
    *(_DWORD *)(a1 + 200) = v26;
  }
  v39 = 0;
  if ( (int)IoGetGenericIrpExtension(v22, &v39, 4LL) >= 0 && (v39 & 0x20) != 0 )
    *(_DWORD *)(a1 + 200) |= 0x20u;
  if ( !v25 )
  {
LABEL_73:
    v27 = 0;
    *(_DWORD *)(a1 + 204) = 0;
    goto LABEL_45;
  }
  if ( *(_BYTE *)v25 != 3 )
  {
    if ( *(_BYTE *)v25 == 4 )
    {
      *(_DWORD *)(a1 + 204) = *(_DWORD *)(v25 + 16);
      v27 = *(_DWORD *)(v25 + 8);
      *(_BYTE *)(a1 + 212) = 1;
      goto LABEL_46;
    }
    goto LABEL_73;
  }
  *(_DWORD *)(a1 + 204) = *(_DWORD *)(v25 + 16);
  v27 = *(_DWORD *)(v25 + 8);
LABEL_45:
  *(_BYTE *)(a1 + 212) = 0;
LABEL_46:
  *(_DWORD *)(a1 + 208) = v27;
  if ( (*(_DWORD *)(a1 + 204) & 0xFFFF0000) == 0x56530000 )
    *(_DWORD *)(a1 + 200) |= 0x80u;
  v39 = 0;
  GenericIrpExtension = IoGetGenericIrpExtension(v22, &v39, 4LL);
  LODWORD(v7) = v38;
  if ( GenericIrpExtension >= 0 )
  {
    v36 = v39;
    if ( (v39 & 0x10) != 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x80000000;
      *(_BYTE *)(a1 + 213) = v36 & 0xF;
    }
  }
LABEL_49:
  if ( v10 >= 0 )
  {
LABEL_50:
    v29 = *(unsigned int *)(a1 + 52);
    if ( v29 + 16 <= (unsigned __int64)(unsigned int)v7 )
    {
      *(_DWORD *)(v29 + a1) = 1;
      *(_DWORD *)(v29 + a1 + 4) = 4;
      *(_BYTE *)(v29 + a1 + 8) = *(_BYTE *)(a2 + 5);
      *(_BYTE *)(v29 + a1 + 9) = *(_BYTE *)(a2 + 6);
      *(_BYTE *)(v29 + a1 + 10) = *(_BYTE *)(a2 + 7);
      goto LABEL_52;
    }
LABEL_68:
    v10 = -1073741670;
  }
LABEL_52:
  if ( byte_140168724 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v12.QuadPart )
    v33 = PerformanceCounter.QuadPart - v12.QuadPart - 1;
  else
    v33 = PerformanceCounter.QuadPart - v12.QuadPart;
  if ( byte_140168724 )
  {
    LowPart = PerformanceFrequency.LowPart;
    if ( PerformanceFrequency.QuadPart && v33 )
    {
      v34 = v33 / PerformanceFrequency.QuadPart;
      v33 = 1000 * (v33 % PerformanceFrequency.QuadPart);
      v31.QuadPart = 10000 * (v33 % PerformanceFrequency.QuadPart) % PerformanceFrequency.QuadPart;
      v6 = 10000 * (v33 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart
         + 16 * (-24 * v34 + v33 / PerformanceFrequency.QuadPart);
    }
  }
  else
  {
    v6 = v33;
  }
  if ( (byte_1401694F0 & 0x40) != 0 )
    sub_140053A04(LowPart, v31.LowPart, v33, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
