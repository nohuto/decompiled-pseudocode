/*
 * XREFs of SepAdjustPrivileges @ 0x140A429A4
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x140A42610 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140418530 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140441970 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     SepAdtTokenRightAdjusted @ 0x140A4325C (SepAdtTokenRightAdjusted.c)
 */

__int64 SepAdjustPrivileges(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9,
        char a10,
        ...)
{
  int v13; // r12d
  unsigned int v14; // r13d
  __int64 result; // rax
  int v16; // r14d
  __int64 v17; // r14
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // r12
  void *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // edx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  signed int i; // edi
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  void *v44; // rcx
  __int16 v45; // [rsp+38h] [rbp-D0h] BYREF
  char v46; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned int v47; // [rsp+3Ch] [rbp-CCh]
  __int64 v48; // [rsp+40h] [rbp-C8h]
  int v49; // [rsp+48h] [rbp-C0h]
  unsigned int v50; // [rsp+4Ch] [rbp-BCh]
  _QWORD Buf1[3]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE *v52; // [rsp+68h] [rbp-A0h]
  int *v53; // [rsp+70h] [rbp-98h]
  __int64 Src; // [rsp+78h] [rbp-90h] BYREF
  int v55; // [rsp+80h] [rbp-88h]
  _QWORD v56[54]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v57[54]; // [rsp+238h] [rbp+130h] BYREF

  v13 = 0;
  v48 = a6;
  v14 = 0;
  v53 = a7;
  v45 = a2;
  v50 = 0;
  v46 = 0;
  LOBYTE(v49) = 0;
  v47 = 0;
  Src = 0LL;
  v55 = 0;
  HIDWORD(Buf1[0]) = a4;
  v52 = a9;
  *(_OWORD *)&Buf1[1] = 0LL;
  memset_0(v56, 0, sizeof(v56));
  memset_0(v57, 0, sizeof(v57));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1, (__int64)&Buf1[1]);
  result = RtlSidDominates((char *)Buf1[1], (char *)SeHighMandatorySid, (char *)&v45 + 1);
  LODWORD(Buf1[0]) = result;
  v16 = result;
  if ( (int)result < 0 )
    return result;
  if ( !HIBYTE(v45) )
  {
    result = RtlSidDominates((char *)Buf1[1], (char *)SeMediumMandatorySid, &v46);
    LODWORD(Buf1[0]) = result;
    v16 = result;
    if ( (int)result < 0 )
      return result;
    v32 = (unsigned __int8)v49;
    if ( !v46 )
      v32 = 1;
    v49 = v32;
  }
  if ( a3 )
  {
    v24 = v48;
    for ( i = 0; (unsigned int)i <= 0x24; ++i )
    {
      if ( ((1LL << i) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( (_BYTE)v45 )
        {
          v39 = (((1LL << i) & *(_QWORD *)(a1 + 72)) != 0 ? 2 : 0) | ((*(_QWORD *)(a1 + 80) & (1LL << i)) != 0);
          v48 = i;
          Src = i;
          v40 = v14++;
          v55 = v39;
          v41 = 3 * v40;
          *(_QWORD *)((char *)v56 + 4 * v41) = i;
          *((_DWORD *)&v56[1] + v41) = v39;
          if ( v24 )
          {
            v44 = (void *)(v24 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
            if ( a10 )
              RtlCopyToUser(v44, &Src, 0xCuLL);
            else
              RtlCopyVolatileMemory(v44, &Src, 0xCuLL);
          }
          v42 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v42, (unsigned int)i);
          *(_QWORD *)(a1 + 72) = v42;
        }
        ++*a8;
      }
    }
    v16 = Buf1[0];
    v23 = v47;
    goto LABEL_15;
  }
  if ( !HIDWORD(Buf1[0]) )
  {
    v23 = 0;
    goto LABEL_14;
  }
  v17 = v48;
  v18 = HIDWORD(Buf1[0]);
  Buf1[1] = HIDWORD(Buf1[0]);
  do
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( !_bittest64(&v19, *a5) )
      goto LABEL_11;
    ++v50;
    Src = *(_QWORD *)a5;
    v20 = *(_QWORD *)(a1 + 80);
    v21 = a5[2];
    v55 = ((*(_QWORD *)(a1 + 72) & (1LL << Src)) != 0 ? 2 : 0) | _bittest64(&v20, (unsigned int)Src);
    if ( (v21 & 4) != 0 )
    {
      if ( (_BYTE)v45 )
      {
        *(_QWORD *)(a1 + 72) &= ~(1LL << Src);
        *(_QWORD *)(a1 + 64) &= ~(1LL << Src);
        *(_DWORD *)(a1 + 200) |= 0x800u;
      }
    }
    else
    {
      if ( (v21 & 2) != 0 )
      {
        v22 = *(_QWORD *)(a1 + 72);
        if ( !_bittest64(&v22, *a5) )
        {
          if ( (_BYTE)v45 )
          {
            if ( v17 )
            {
              v25 = (void *)(v17 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
              if ( a10 )
                RtlCopyToUser(v25, &Src, 0xCuLL);
              else
                RtlCopyVolatileMemory(v25, &Src, 0xCuLL);
              v18 = Buf1[1];
            }
            v26 = v55;
            v27 = 3LL * v47;
            v28 = v47 + 1;
            v29 = HIBYTE(v45) == 0;
            *(_QWORD *)((char *)v57 + 4 * v27) = Src;
            *((_DWORD *)&v57[1] + v27) = v26;
            v47 = v28;
            if ( !v29 )
            {
LABEL_25:
              v30 = *(_QWORD *)(a1 + 72);
              _bittestandset64(&v30, (unsigned int)Src);
              goto LABEL_26;
            }
            if ( v46 )
            {
              v33 = 0x1120160684LL;
              if ( !_bittest64(&v33, *a5) )
                goto LABEL_25;
              goto LABEL_42;
            }
            if ( (_BYTE)v49 )
            {
              v43 = 0x200800000LL;
              if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
                v43 = 0x202800000LL;
              if ( ((1LL << *a5) & v43) != 0 )
                goto LABEL_25;
LABEL_42:
              ++v13;
            }
          }
LABEL_27:
          ++*a8;
          goto LABEL_11;
        }
      }
      if ( (a5[2] & 2) == 0 )
      {
        v34 = *(_QWORD *)(a1 + 72);
        if ( _bittest64(&v34, *a5) )
        {
          if ( (_BYTE)v45 )
          {
            if ( v17 )
            {
              v35 = (void *)(v17 + 4 * ((unsigned int)*a8 + 2LL * (unsigned int)*a8 + 1));
              if ( a10 )
                RtlCopyToUser(v35, &Src, 0xCuLL);
              else
                RtlCopyVolatileMemory(v35, &Src, 0xCuLL);
              v18 = Buf1[1];
            }
            v36 = v14++;
            v37 = 3 * v36;
            LODWORD(v36) = v55;
            *(_QWORD *)((char *)v56 + 4 * v37) = Src;
            *((_DWORD *)&v56[1] + v37) = v36;
            v30 = *(_QWORD *)(a1 + 72);
            _bittestandreset64(&v30, (unsigned int)Src);
LABEL_26:
            *(_QWORD *)(a1 + 72) = v30;
          }
          goto LABEL_27;
        }
      }
    }
LABEL_11:
    a5 += 3;
    Buf1[1] = --v18;
  }
  while ( v18 );
  v16 = Buf1[0];
  if ( v50 < HIDWORD(Buf1[0]) || (v23 = v47, v13) )
  {
    v16 = 262;
    v23 = v47;
  }
LABEL_14:
  v24 = v48;
LABEL_15:
  if ( *a8 && (_BYTE)v45 )
  {
    *v52 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v56, v14, (unsigned int)v57, v23, v16 >= 0);
  }
  if ( v24 )
  {
    if ( *a8 > 1u )
      v31 = 12 * *a8 + 4;
    else
      v31 = 16;
    *v53 = v31;
  }
  return (unsigned int)v16;
}
