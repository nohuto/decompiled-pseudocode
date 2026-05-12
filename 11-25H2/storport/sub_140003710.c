/*
 * XREFs of sub_140003710 @ 0x140003710
 * Callers:
 *     sub_140003400 @ 0x140003400 (sub_140003400.c)
 * Callees:
 *     sub_140003B58 @ 0x140003B58 (sub_140003B58.c)
 *     sub_140003B80 @ 0x140003B80 (sub_140003B80.c)
 */

__int64 __fastcall sub_140003710(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _LARGE_INTEGER PerformanceFrequency)
{
  _LARGE_INTEGER v5; // rsi
  _LARGE_INTEGER v6; // rbx
  __int64 v7; // r10
  __int64 v9; // r11
  int v11; // eax
  char v12; // r8
  char v13; // di
  unsigned __int8 v14; // r12
  char *v15; // r9
  _BYTE *v16; // rbp
  int v17; // edx
  int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rcx
  char *v25; // rcx
  char v26; // al
  char v27; // al
  __int64 v28; // rax
  int v29; // ebp
  unsigned __int64 v30; // rcx
  __int64 result; // rax
  __int64 v32; // rdi
  bool v33; // zf
  LARGE_INTEGER v34; // rax
  LARGE_INTEGER v35; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // r12
  ULONG64 UnbiasedInterruptTimePrecise; // rcx
  union _LARGE_INTEGER v44; // r8
  bool v45; // zf
  __int64 v46; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v47; // [rsp+70h] [rbp+8h] BYREF
  __int64 v48; // [rsp+80h] [rbp+18h] BYREF
  __int64 v49; // [rsp+88h] [rbp+20h]

  v5 = PerformanceFrequency;
  v6.QuadPart = 0LL;
  v7 = a4;
  v9 = a2;
  *(_OWORD *)PerformanceFrequency.QuadPart = 0LL;
  *(_OWORD *)(v5.QuadPart + 16) = 0LL;
  *(_QWORD *)(v5.QuadPart + 32) = 0LL;
  if ( a4 )
  {
    v11 = *(unsigned __int8 *)(a4 + 2);
    v12 = 0;
    v13 = *(_BYTE *)(a4 + 3);
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    if ( (_BYTE)v11 == 40 )
    {
      v17 = *(_DWORD *)(v7 + 20);
      if ( v17 )
        goto LABEL_19;
      v18 = *(_DWORD *)(v7 + 56);
      PerformanceFrequency.LowPart = 0;
      LODWORD(v48) = v18;
      if ( !v18 )
        goto LABEL_19;
      v19 = (unsigned int *)(v7 + 120);
      v46 = v7 + 120;
      while ( 1 )
      {
        v20 = *v19;
        if ( (unsigned int)v20 < 0x80 )
          goto LABEL_11;
        v21 = *(unsigned int *)(v7 + 16);
        if ( (unsigned int)v20 >= (unsigned int)v21 )
          goto LABEL_11;
        v22 = (unsigned int)v20;
        v49 = v20;
        v23 = *(_DWORD *)(v20 + v7);
        if ( v23 == 64 )
          break;
        v40 = v23 - 65;
        if ( !v40 )
        {
          v24 = v22 + 56;
LABEL_10:
          if ( v24 <= v21 )
          {
            if ( *(_BYTE *)(v49 + v7 + 10) )
              v15 = (char *)(v7 + v49 + 24);
            v12 = *(_BYTE *)(v49 + v7 + 8);
            v16 = *(_BYTE **)(v49 + v7 + 16);
            v14 = *(_BYTE *)(v49 + v7 + 9);
            goto LABEL_19;
          }
          goto LABEL_11;
        }
        if ( v40 == 1 && v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v49 + v7 + 12) )
            v15 = (char *)(v7 + v49 + 32);
          v12 = *(_BYTE *)(v49 + v7 + 8);
          v16 = *(_BYTE **)(v49 + v7 + 24);
          v14 = *(_BYTE *)(v49 + v7 + 9);
          goto LABEL_19;
        }
LABEL_11:
        v19 = (unsigned int *)(v46 + 4);
        ++PerformanceFrequency.LowPart;
        v46 += 4LL;
        if ( PerformanceFrequency.LowPart >= (unsigned int)v48 )
          goto LABEL_19;
      }
      v24 = v22 + 40;
      goto LABEL_10;
    }
    v17 = v11;
    if ( !(_BYTE)v11 )
    {
      v15 = (char *)(v7 + 72);
      v12 = *(_BYTE *)(v7 + 4);
      v16 = *(_BYTE **)(v7 + 32);
      if ( !*(_BYTE *)(v7 + 10) )
        v15 = 0LL;
      v14 = *(_BYTE *)(v7 + 11);
    }
LABEL_19:
    *(_BYTE *)(v5.QuadPart + 1) = v12;
    *(_BYTE *)(v5.QuadPart + 5) = -1;
    *(_BYTE *)v5.QuadPart = v13 & 0x3F;
    if ( v15 )
    {
      v27 = *v15;
      *(_BYTE *)(v5.QuadPart + 5) = *v15;
      if ( !v17 && ((v27 - 8) & 0x5D) == 0 )
      {
        sub_140003B80(v15, v5.QuadPart + 24, 0LL);
        if ( v9 )
        {
          v28 = *(_QWORD *)(v9 + 8);
          if ( v28 )
            *(_DWORD *)(v5.QuadPart + 8) = *(_DWORD *)(v28 + 40);
        }
      }
    }
    if ( v13 < 0 && v16 && v14 >= 0x12u && (unsigned __int8)((*v16 & 0x7F) - 112) <= 1u )
    {
      *(_BYTE *)(v5.QuadPart + 2) = v16[2] & 0xF;
      *(_BYTE *)(v5.QuadPart + 3) = v16[12];
      *(_BYTE *)(v5.QuadPart + 4) = v16[13];
    }
  }
  else
  {
    *(_BYTE *)v5.QuadPart = 4;
    *(_BYTE *)(v5.QuadPart + 5) = -1;
    v25 = *(char **)(a2 + 184);
    v26 = *v25;
    if ( *v25 == 3 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 40;
      *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v25 + 3);
      *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v25 + 2);
    }
    else if ( v26 == 4 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 42;
      *(_QWORD *)(v5.QuadPart + 24) = *((_QWORD *)v25 + 3);
      *(_DWORD *)(v5.QuadPart + 8) = *((_DWORD *)v25 + 2);
    }
    else if ( v26 == 9 )
    {
      *(_BYTE *)(v5.QuadPart + 5) = 53;
    }
  }
  v29 = -1;
  if ( *(_DWORD *)(a1 + 2372) == 1 )
  {
    if ( a3 )
    {
      v32 = *(_QWORD *)(a3 + 696);
      PerformanceFrequency.QuadPart = 0LL;
      if ( byte_140168DAA )
      {
        v33 = byte_140168724 == 0;
      }
      else
      {
        if ( !dword_1401684A8 )
        {
          v35.QuadPart = 0LL;
LABEL_53:
          v37 = v35.QuadPart - v32;
          if ( byte_140168DAA )
          {
            if ( !byte_140168724 )
              goto LABEL_61;
            if ( !dword_1401684AC )
            {
              if ( !v6.QuadPart )
                goto LABEL_28;
              v37 = 10000000 * v37 / v6.QuadPart;
            }
          }
          if ( byte_140168724 && dword_1401684AC )
          {
            if ( !v6.QuadPart )
              goto LABEL_28;
            v38 = 10000000 * v37 / v6.QuadPart;
LABEL_60:
            v37 = v38;
            goto LABEL_61;
          }
          goto LABEL_61;
        }
        if ( !byte_140168724 )
        {
LABEL_52:
          UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
          v6 = PerformanceFrequency;
          v35.QuadPart = UnbiasedInterruptTime;
          goto LABEL_53;
        }
        v33 = dword_1401684AC == 0;
      }
      if ( !v33 )
      {
        v34 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v6 = PerformanceFrequency;
        v35 = v34;
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    if ( v7 )
      goto LABEL_35;
    v41 = *(unsigned int *)(v9 + 168);
    v42 = *(unsigned int *)(v9 + 172);
    v47.QuadPart = 0LL;
    PerformanceFrequency.QuadPart = 0LL;
    v48 = 0LL;
    if ( (int)IoGetIoAttributionHandle(v9, &v48) >= 0 )
    {
      UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTimePrecise((PULONG64)&PerformanceFrequency.QuadPart);
      v44.QuadPart = 10000000LL;
LABEL_95:
      v37 = UnbiasedInterruptTimePrecise - (v41 | (v42 << 32));
      if ( byte_140168DAA )
      {
        if ( !byte_140168724 )
          goto LABEL_61;
        if ( !dword_1401684AC )
        {
          if ( !v44.QuadPart )
            goto LABEL_35;
          v37 = 10000000 * v37 / v44.QuadPart;
        }
      }
      if ( byte_140168724 && dword_1401684AC )
      {
        if ( !v44.QuadPart )
          goto LABEL_35;
        v38 = 10000000 * v37 / v44.QuadPart;
        goto LABEL_60;
      }
LABEL_61:
      v39 = v37 / 10000;
      if ( (unsigned __int64)(v37 / 10000) > 0xFFFFFFFF )
      {
        *(_DWORD *)(v5.QuadPart + 12) = -1;
      }
      else if ( v39 || !v37 )
      {
        *(_DWORD *)(v5.QuadPart + 12) = v39;
      }
      else
      {
        *(_DWORD *)(v5.QuadPart + 12) = 1;
      }
      goto LABEL_27;
    }
    if ( byte_140168DAA )
    {
      v45 = byte_140168724 == 0;
    }
    else
    {
      if ( !dword_1401684A8 )
      {
        UnbiasedInterruptTimePrecise = 0LL;
        goto LABEL_94;
      }
      if ( !byte_140168724 )
        goto LABEL_92;
      v45 = dword_1401684AC == 0;
    }
    if ( !v45 )
    {
      UnbiasedInterruptTimePrecise = KeQueryPerformanceCounter(&v47).QuadPart;
LABEL_94:
      v44 = v47;
      goto LABEL_95;
    }
LABEL_92:
    UnbiasedInterruptTimePrecise = KeQueryUnbiasedInterruptTime();
    goto LABEL_94;
  }
LABEL_27:
  if ( a3 )
  {
LABEL_28:
    v30 = *(_QWORD *)(a3 + 688);
    if ( v30 / 0x2710 <= 0xFFFFFFFF )
    {
      if ( v30 / 0x2710 || !v30 )
        v29 = v30 / 0x2710;
      else
        v29 = 1;
    }
    *(_DWORD *)(v5.QuadPart + 16) = v29;
    goto LABEL_34;
  }
LABEL_35:
  if ( *(_BYTE *)(a1 + 3368) == 1 && *(_BYTE *)v5.QuadPart == 9 )
    *(_DWORD *)(v5.QuadPart + 16) = 5000000 * *(_DWORD *)(a1 + 3392) / 0x2710u;
LABEL_34:
  *(_DWORD *)(v5.QuadPart + 20) = sub_140003B58(a1 + 720);
  result = *(unsigned int *)(a1 + 2480);
  *(_DWORD *)(v5.QuadPart + 32) = result;
  return result;
}
