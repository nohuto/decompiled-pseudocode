/*
 * XREFs of sub_140082DA0 @ 0x140082DA0
 * Callers:
 *     sub_140080AC4 @ 0x140080AC4 (sub_140080AC4.c)
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2D0 @ 0x14000C2D0 (sub_14000C2D0.c)
 *     sub_14000D020 @ 0x14000D020 (sub_14000D020.c)
 *     sub_14000D8D0 @ 0x14000D8D0 (sub_14000D8D0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14000FF84 @ 0x14000FF84 (sub_14000FF84.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14002BCF8 @ 0x14002BCF8 (sub_14002BCF8.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140032444 @ 0x140032444 (sub_140032444.c)
 *     sub_140033344 @ 0x140033344 (sub_140033344.c)
 *     sub_14008289C @ 0x14008289C (sub_14008289C.c)
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 *     sub_140083CA0 @ 0x140083CA0 (sub_140083CA0.c)
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_140082DA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r13
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  int v9; // edi
  _QWORD *v10; // r14
  __int64 v11; // r15
  int v12; // eax
  int v13; // eax
  int v14; // edx
  _QWORD *v15; // rdx
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  int v23; // r9d
  int v24; // edx
  int v25; // eax
  __int64 v26; // r15
  int v27; // eax
  struct _RTL_CRITICAL_SECTION *v28; // rdi
  _QWORD *v29; // rcx
  _QWORD *v30; // r14
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  _DWORD *v35; // rcx
  ATL::CAtlException *v36; // rbx
  __int64 v37; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD *v39; // [rsp+40h] [rbp-B8h]
  __int64 v40; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-98h]
  __int128 v43; // [rsp+68h] [rbp-90h]
  int v44; // [rsp+78h] [rbp-80h]
  __int64 v45; // [rsp+80h] [rbp-78h]
  _BYTE v46[16]; // [rsp+88h] [rbp-70h] BYREF
  void **v47; // [rsp+98h] [rbp-60h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-58h] BYREF
  char v49; // [rsp+A8h] [rbp-50h]
  ATL::CAtlException *v50; // [rsp+B0h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+F8h] [rbp+0h]
  _QWORD *v53; // [rsp+108h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+110h] [rbp+18h]
  void *v55; // [rsp+118h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a1;
  v45 = a1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = -2147024890;
    sub_14000C2A8(
      (int)retaddr,
      578,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2147024890);
    return (unsigned int)v9;
  }
  if ( !*(_BYTE *)(a1 + 784) )
  {
    sub_14000C2A8(
      (int)retaddr,
      579,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2005139437);
    return 2289827859LL;
  }
  sub_14000C2D0((__int64)v46, a1 + 96);
  if ( !*(_BYTE *)(v3 + 786) || *(_QWORD *)(v3 + 776) )
  {
    v7 = *(_QWORD *)(v3 + 776);
    if ( !v7 )
    {
      v8 = 590;
LABEL_8:
      v9 = -2147024890;
LABEL_9:
      sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v9);
LABEL_10:
      sub_140030124((__int64)v46);
      return (unsigned int)v9;
    }
    if ( a2 != *(_QWORD *)(v7 + 16) )
    {
      v8 = 591;
      goto LABEL_8;
    }
    if ( *(_BYTE *)(v3 + 785) )
    {
      v9 = -2005139407;
      v8 = 595;
      goto LABEL_9;
    }
    *(_BYTE *)(v3 + 786) = 1;
    v10 = *(_QWORD **)v7;
    v53 = **(_QWORD ***)v7;
    if ( v53 )
    {
      while ( 1 )
      {
        v11 = *sub_1400265D8(v6, &v53);
        do
        {
          v12 = sub_14000D020(v11);
          v9 = v12;
          if ( !*(_BYTE *)(v3 + 787) )
            break;
          if ( v12 < 0 )
            Sleep(1u);
        }
        while ( *(_BYTE *)(v3 + 787) && v9 < 0 );
        if ( v9 < 0 )
          break;
        if ( !v53 )
          goto LABEL_24;
      }
      v8 = 611;
      goto LABEL_9;
    }
LABEL_24:
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 10;
    v13 = sub_14008289C(v6, v10, (__int64 **)&v41);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 620;
LABEL_26:
      sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v13);
LABEL_27:
      sub_14000D9B8((__int64)&v41);
      goto LABEL_10;
    }
    v15 = *(_QWORD **)(v3 + 776);
    if ( *(_QWORD *)(v3 + 1072) )
    {
      v55 = 0LL;
      v37 = 0LL;
      v47 = &v55;
      v48 = 0LL;
      v49 = 1;
      v9 = sub_140084E2C(v3, *v15, (unsigned int)&v41, (unsigned int)&v48, (__int64)&v37);
      sub_140033344((__int64)&v47);
      if ( v9 < 0 )
      {
        v16 = v9;
        v17 = 625;
LABEL_32:
        sub_14000C2A8((int)retaddr, v17, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v16);
        sub_140008C08(&v55, 0LL);
        goto LABEL_27;
      }
      v18 = sub_1400B6010(*(_QWORD *)(v3 + 1072));
      v9 = v18;
      if ( v18 < 0 )
      {
        v16 = v18;
        v17 = 626;
        goto LABEL_32;
      }
      sub_140008C08(&v55, 0LL);
    }
    else
    {
      v13 = sub_1400833D0(v3, *v15, &v41);
      v9 = v13;
      if ( v13 < 0 )
      {
        v14 = 630;
        goto LABEL_26;
      }
    }
    sub_14000D9B8((__int64)&v41);
    v13 = sub_140032444(v3 + 392);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = 639;
      goto LABEL_26;
    }
    v19 = *(_QWORD *)(v3 + 776);
    if ( v19 )
      sub_14000E63C(v19);
    *(_QWORD *)(v3 + 776) = 0LL;
    sub_14000D9B8((__int64)&v41);
  }
  v39 = 0LL;
  sub_1400B6010(*(_QWORD *)(v3 + 800));
  v38 = *(_QWORD **)(v3 + 184);
  while ( v38 )
  {
    v22 = *sub_1400265D8(v21, &v38);
    v40 = v22;
    do
    {
      try
      {
        v9 = 0;
        sub_14000DD04(v39, &v40);
      }
      catch ( ATL::CAtlException *v50 )
      {
        v36 = v50;
        if ( *(_DWORD *)v50 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v53) = *(_DWORD *)v36;
        v3 = a1;
        v22 = v40;
        v9 = (int)v53;
        v4 = v45;
      }
      if ( !*(_BYTE *)(v3 + 787) )
        break;
      if ( v9 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v3 + 787) && v9 < 0 );
    if ( v9 < 0 )
    {
      v23 = v9;
      v24 = 666;
LABEL_75:
      sub_14000C2A8((int)retaddr, v24, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v23);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_10;
    }
    v25 = sub_140006C48(v22);
    if ( v25 < 0 )
      sub_140007934((int)retaddr, 669, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v25);
  }
  if ( *(_QWORD *)(v3 + 200) )
  {
    while ( 1 )
    {
      v26 = *(_QWORD *)sub_14000E590((_QWORD *)(v3 + 184), v20);
      do
      {
        v27 = sub_14000D020(v26);
        v9 = v27;
        if ( !*(_BYTE *)(v3 + 787) )
          break;
        if ( v27 < 0 )
          Sleep(1u);
      }
      while ( *(_BYTE *)(v3 + 787) && v9 < 0 );
      if ( v9 < 0 )
        break;
      sub_14000D8D0(v3 + 184);
      if ( !*(_QWORD *)(v3 + 200) )
        goto LABEL_64;
    }
    v23 = v9;
    v24 = 680;
    goto LABEL_75;
  }
LABEL_64:
  sub_14000D938(v3 + 136, v20);
  v28 = (struct _RTL_CRITICAL_SECTION *)(v3 + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 352));
  v29 = *(_QWORD **)(v3 + 232 + 48 * (*(unsigned __int16 *)(v3 + 344) ^ 1LL));
  if ( v29 )
  {
    while ( 1 )
    {
      v30 = (_QWORD *)*v29;
      sub_14000FF84(v29[2]);
      v32 = sub_140083CA0(v3, v31);
      v9 = v32;
      if ( v32 < 0 )
        break;
      v29 = v30;
      if ( !v30 )
      {
        v28 = (struct _RTL_CRITICAL_SECTION *)(v4 + 232);
        goto LABEL_68;
      }
    }
    v23 = v32;
    v24 = 696;
    goto LABEL_75;
  }
LABEL_68:
  LeaveCriticalSection(v28 + 3);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  *(_BYTE *)(v3 + 786) = 0;
  v35 = *(_DWORD **)(v3 + 1080);
  if ( *v35 > 5u )
  {
    v53 = (_QWORD *)v3;
    sub_14002BCF8((__int64)v35, byte_1400D284D, v33, v34, (__int64)&v53);
  }
  sub_140030124((__int64)v46);
  return 0LL;
}
