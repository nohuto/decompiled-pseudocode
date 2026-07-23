/*
 * XREFs of MiFillPageFileReadMdl @ 0x1403740C0
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140371250 (MiAdvanceFaultList.c)
 *     MiReduceMdl @ 0x14046C100 (MiReduceMdl.c)
 */

char __fastcall MiFillPageFileReadMdl(__int64 *a1)
{
  __int64 v1; // r10
  unsigned int v2; // r14d
  _QWORD *v3; // r11
  unsigned __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r13d
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // r9
  __int64 *v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // rax^4
  volatile signed __int32 *v17; // r14
  unsigned __int64 v18; // rax
  bool v19; // zf
  int v20; // r12d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  unsigned __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // r14
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  char v30; // al
  char result; // al
  _KPROCESS *v32; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 *v36; // rcx
  _QWORD *v37; // rbx
  _KPROCESS *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+30h] [rbp-68h]
  __int64 v45; // [rsp+38h] [rbp-60h]
  _QWORD *v46; // [rsp+40h] [rbp-58h]
  __int64 *v47; // [rsp+48h] [rbp-50h]
  __int64 v48; // [rsp+50h] [rbp-48h]
  unsigned int v50; // [rsp+A8h] [rbp+10h]
  int v51; // [rsp+B0h] [rbp+18h] BYREF
  int v52; // [rsp+B8h] [rbp+20h]

  v1 = a1[16];
  v2 = 0;
  v3 = (_QWORD *)a1[3];
  v4 = (unsigned __int64 *)a1;
  v44 = v1;
  v46 = v3;
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 20);
  v7 = a1[17];
  v8 = a1[5];
  v52 = *(_DWORD *)(v1 + 188) >> 11;
  v9 = 0;
  v10 = a1[4];
  v48 = v5;
  v45 = v10;
  v11 = (__int64 *)(v1 + 320);
  v47 = (__int64 *)(v1 + 320);
  v43 = (__int64 *)(v1 + 320);
  v50 = 0;
  while ( 1 )
  {
    v12 = *(_QWORD *)v7;
    v13 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v13 = *(_QWORD *)v7;
      if ( (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
      {
        v32 = MiPteHasShadow();
        if ( v32 )
        {
          KernelWaitTime = v32[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v34 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
            if ( (v34 & 0x20) != 0 )
              v13 |= 0x20uLL;
            v12 = v13 | 0x42;
            if ( (v34 & 0x42) == 0 )
              v12 = v13;
          }
        }
      }
    }
    if ( (v4[6] & 0x10) != 0 )
      goto LABEL_15;
    if ( (v12 & 0xC01) == 0 )
    {
      v13 = qword_140E2D8C0;
      v14 = v12;
      if ( qword_140E2D8C0 && (v12 & 0x10) == 0 )
        v14 = qword_140E2D8C8 & v12;
      v15 = HIDWORD(v14);
      v16 = HIDWORD(v8);
      if ( qword_140E2D8C0 )
      {
        v13 = v8 & qword_140E2D8C8;
        if ( (v8 & 0x10) == 0 )
          v16 = HIDWORD(v8) & HIDWORD(qword_140E2D8C8);
      }
      if ( (_DWORD)v15 == v16 )
      {
        v51 = (v12 >> 3) & 1;
        if ( v51 )
        {
          v13 = v12 >> 12;
          if ( (((unsigned __int8)(v12 >> 12) ^ (unsigned __int8)(v8 >> 12)) & 0xF) == 0 )
          {
            v13 = (unsigned __int16)v12 >> 12;
            if ( ((_DWORD)v13 == *(_DWORD *)(v10 + 1300)) == (v4[6] & 1) )
            {
LABEL_15:
              v17 = (volatile signed __int32 *)v4[13];
              if ( v17 )
              {
                v18 = *(_QWORD *)v17;
                v19 = v4[15]-- == 1;
                v4[13] = v18;
                if ( v19 )
                  v4[14] = 0LL;
              }
              v51 = ++v9;
              *v11 = (__int64)(v17 + 0x88000000000LL) / 48;
              if ( v7 == *v4 )
              {
                v51 = 0;
                while ( _interlockedbittestandset64(v17 + 6, 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v51);
                  while ( *((__int64 *)v17 + 3) < 0 );
                }
                if ( (*((_QWORD *)v17 + 5) & 0x20000000000000LL) == 0 )
                  *((_DWORD *)v17 + 8) ^= (*((_DWORD *)v17 + 8) ^ ((char)v52 << 24)) & 0x7000000;
              }
              else
              {
                v20 = *(_DWORD *)(v1 + 188) >> 14;
                v42 = 0;
                while ( _interlockedbittestandset64(v17 + 6, 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v42);
                  while ( *((__int64 *)v17 + 3) < 0 );
                }
                if ( (*((_QWORD *)v17 + 5) & 0x20000000000000LL) == 0 )
                  *((_DWORD *)v17 + 8) ^= (*((_DWORD *)v17 + 8) ^ ((char)v20 << 24)) & 0x7000000;
                v9 = v51;
              }
              _InterlockedAnd64((volatile signed __int64 *)v17 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( (v4[6] & 0x10) != 0 )
              {
                if ( qword_140E2D8C0 && (v12 & 0x10) == 0 )
                  v12 &= qword_140E2D8C8;
                v4[19] = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              }
              v10 = v45;
              v3 = v46;
              v11 = v43;
              v2 = v50;
              v1 = v44;
              goto LABEL_30;
            }
          }
        }
      }
    }
    if ( (v4[6] & 8) != 0 )
      break;
    *v11 = qword_140E36178;
    *((_DWORD *)v4 + 12) |= 2u;
LABEL_30:
    v43 = v11 + 1;
    if ( v3 && *(_BYTE *)v3 == 1 )
    {
      MiAdvanceFaultList(v3);
      v1 = v44;
      v10 = v45;
    }
    v7 += 8LL;
    v21 = v8;
    if ( qword_140E2D8C0 && (v8 & 0x10) == 0 )
      v21 = v8 & qword_140E2D8C8;
    v22 = HIDWORD(v21);
    v23 = v8;
    if ( v8 )
    {
      if ( qword_140E2D8C0 )
      {
        v23 = v8 & 0xFFFFFFEF;
        if ( (v8 & 0x10) == 0 )
          v23 = v8 & qword_140E2D8C8;
      }
    }
    v8 = v23 | ((unsigned __int64)(unsigned int)(v22 + 1) << 32);
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v8) != 0 )
        v8 |= 0x10uLL;
      else
        v8 |= qword_140E2D8C0;
    }
    v11 = v43;
    v50 = ++v2;
LABEL_42:
    if ( v2 >= v6 )
      goto LABEL_43;
  }
  if ( v7 <= *v4 )
  {
    v36 = (__int64 *)(v1 + 320);
    v37 = (_QWORD *)(v1 + 320);
    if ( v2 )
    {
      do
      {
        if ( *v37 != qword_140E36178 )
        {
          MiReleaseFreshPageAtDpc(48LL * *v37 - 0x220000000000LL, v13, (__int64)v11);
          --v9;
        }
        ++v37;
        --v2;
      }
      while ( v2 );
      v4 = (unsigned __int64 *)a1;
      v1 = v44;
      v3 = v46;
      v10 = v45;
      v36 = v47;
      v50 = 0;
    }
    v7 = *v4;
    v11 = v36;
    *((_DWORD *)v4 + 12) &= ~2u;
    v43 = v36;
    v8 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v38 = MiPteHasShadow();
      if ( v38 )
      {
        v40 = v38[2].KernelWaitTime;
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 8 * ((v7 >> 3) & 0x1FF));
          if ( (v41 & 0x20) != 0 )
            v39 |= 0x20uLL;
          v8 = v39 | 0x42;
          if ( (v41 & 0x42) == 0 )
            v8 = v39;
        }
      }
    }
    v6 = 1;
    goto LABEL_42;
  }
  v6 = v2;
LABEL_43:
  v24 = v7 - 8LL * v6;
  v19 = (*((_BYTE *)v4 + 68) & 0x10) == 0;
  v4[20] = *(_QWORD *)(v1 + 8 * ((__int64)(v48 - v24) >> 3) + 320);
  if ( v19 )
    v25 = (__int64)(v24 << 25) >> 16;
  else
    v25 = 0LL;
  v26 = v1 + 272;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_WORD *)(v1 + 282) = 66;
  v27 = v6 << 12;
  *(_QWORD *)(v1 + 304) = v25 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v1 + 316) = v25 & 0xFFF;
  *(_DWORD *)(v1 + 312) = v27;
  *(_WORD *)(v1 + 280) = 8 * ((((unsigned __int64)(v25 & 0xFFF) + v27 + 4095) >> 12) + 6);
  if ( (v4[6] & 2) != 0 )
  {
    v35 = MiReduceMdl(v1 + 272);
    v28 = v24;
    if ( v35 )
    {
      v19 = (*((_BYTE *)v4 + 68) & 0x10) == 0;
      v24 += 8 * v35;
      v4[17] = v24;
      v28 = v24;
      if ( v19 )
        *(_QWORD *)(v26 + 32) += v35 << 12;
    }
    v1 = v44;
    v6 = *(_DWORD *)(v26 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v1 + 282) = 16450;
    v28 = v24;
  }
  v29 = *(_QWORD *)v24;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v24 <= 0xFFFFF6FB7DBED7F8uLL
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    MiPteHasShadow();
  }
  v30 = *((_BYTE *)v4 + 68);
  if ( v6 == 1 )
  {
    *((_BYTE *)v4 + 68) = v30 | 8;
    result = *((_BYTE *)v4 + 68) ^ (*((_BYTE *)v4 + 68) ^ (*(_DWORD *)(v1 + 188) >> 11)) & 7;
  }
  else
  {
    result = v30 & 0xDF;
  }
  *((_BYTE *)v4 + 68) = result;
  *((_DWORD *)v4 + 20) = v6;
  *((_DWORD *)v4 + 36) = v9;
  v4[17] = v24;
  return result;
}
