/*
 * XREFs of sub_14000CB10 @ 0x14000CB10
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14000D020 @ 0x14000D020 (sub_14000D020.c)
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_14000D8D0 @ 0x14000D8D0 (sub_14000D8D0.c)
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 *     sub_14000E590 @ 0x14000E590 (sub_14000E590.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14002BCF8 @ 0x14002BCF8 (sub_14002BCF8.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_140032444 @ 0x140032444 (sub_140032444.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14000CB10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // esi
  __int64 v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 **v13; // r14
  __int64 *v14; // r13
  __int64 *v15; // rcx
  __int64 *v16; // rax
  int v17; // eax
  _QWORD *v18; // r14
  __int64 v19; // rdx
  int v20; // eax
  bool v21; // zf
  int v22; // edx
  int v23; // r8d
  int v24; // r9d
  _DWORD *v25; // rcx
  int v26; // edx
  int v27; // r9d
  ATL::CAtlException *v28; // rbx
  _QWORD *v29; // [rsp+30h] [rbp-68h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  ATL::CAtlException *v32; // [rsp+48h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v33; // [rsp+50h] [rbp-48h] BYREF
  char v34; // [rsp+58h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v37; // [rsp+A8h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+B0h] [rbp+18h]
  __int64 **v39; // [rsp+B8h] [rbp+20h]

  v3 = a1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -2147024890;
    sub_14000C2A8(
      (int)retaddr,
      1319,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2147024890);
    return (unsigned int)v4;
  }
  if ( !*(_BYTE *)(a1 + 776) )
  {
    sub_14000C2A8(
      (int)retaddr,
      1320,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      -2005139437);
    return 2289827859LL;
  }
  v33 = (LPCRITICAL_SECTION)(a1 + 88);
  v34 = 0;
  sub_14000C2F8((__int64)&v33);
  if ( !*(_BYTE *)(v3 + 778) || *(_QWORD *)(v3 + 768) )
  {
    v8 = *(_QWORD *)(v3 + 768);
    if ( v8 )
    {
      if ( a2 == *(_QWORD *)(v8 + 16) )
      {
        if ( !*(_BYTE *)(v3 + 777) )
        {
          *(_BYTE *)(v3 + 778) = 1;
          v7 = **(_QWORD ***)v8;
          while ( v7 )
          {
            v6 = v7[2];
            v7 = (_QWORD *)*v7;
            do
            {
              v4 = sub_14000D020(v6);
              if ( !*(_BYTE *)(v3 + 779) )
                break;
              if ( v4 < 0 )
                Sleep(1u);
            }
            while ( *(_BYTE *)(v3 + 779) && v4 < 0 );
            if ( v4 < 0 )
            {
              sub_14000C2A8(
                (int)retaddr,
                1352,
                (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                v4);
LABEL_50:
              if ( v34 )
                LeaveCriticalSection(v33);
              return (unsigned int)v4;
            }
          }
          v9 = sub_140032444(v3 + 384);
          v4 = v9;
          if ( v9 < 0 )
          {
            v27 = v9;
            v26 = 1360;
            goto LABEL_72;
          }
          if ( *(_QWORD *)(v3 + 768) )
            sub_14000E63C();
          *(_QWORD *)(v3 + 768) = 0LL;
          goto LABEL_19;
        }
        v4 = -2005139407;
        v26 = 1336;
LABEL_70:
        v27 = v4;
LABEL_72:
        sub_14000C2A8((int)retaddr, v26, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v27);
        sub_140030124(&v33);
        return (unsigned int)v4;
      }
      v26 = 1332;
    }
    else
    {
      v26 = 1331;
    }
    v4 = -2147024890;
    goto LABEL_70;
  }
LABEL_19:
  v39 = 0LL;
  sub_1400B6010(*(_QWORD *)(v3 + 792));
  v10 = *(_QWORD **)(v3 + 176);
  while ( v10 )
  {
    v12 = v10[2];
    v10 = (_QWORD *)*v10;
    v29 = v10;
    v30 = v12;
    do
    {
      try
      {
        v4 = 0;
        v13 = v39;
        v14 = *v39;
        sub_14000DD74(v39);
      }
      catch ( ATL::CAtlException *v32 )
      {
        v28 = v32;
        if ( *(_DWORD *)v32 == -1073741571 )
          o__resetstkoflw();
        LODWORD(v37) = *(_DWORD *)v28;
        v3 = a1;
        v10 = v29;
        v12 = v30;
        v4 = v37;
        goto LABEL_30;
      }
      v15 = v13[4];
      v16 = (__int64 *)*v15;
      v15[2] = v12;
      v13[4] = v16;
      v15[1] = 0LL;
      *v15 = (__int64)v14;
      v13[2] = (__int64 *)((char *)v13[2] + 1);
      if ( *v13 )
        (*v13)[1] = (__int64)v15;
      else
        v13[1] = v15;
      *v13 = v15;
LABEL_30:
      if ( !*(_BYTE *)(v3 + 779) )
        break;
      if ( v4 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v3 + 779) && v4 < 0 );
    if ( v4 < 0 )
    {
      v22 = 1387;
LABEL_48:
      sub_14000C2A8((int)retaddr, v22, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v4);
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      goto LABEL_50;
    }
    v17 = sub_140006C48(v12);
    if ( v17 < 0 )
      sub_140007934((int)retaddr, 1390, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v17);
  }
  while ( *(_QWORD *)(a1 + 192) )
  {
    v11 = *(_QWORD *)sub_14000E590(v3 + 176);
    do
    {
      v4 = sub_14000D020(v11);
      if ( !*(_BYTE *)(v3 + 779) )
        break;
      if ( v4 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v3 + 779) && v4 < 0 );
    if ( v4 < 0 )
    {
      v22 = 1401;
      goto LABEL_48;
    }
    sub_14000D8D0(v3 + 176);
  }
  sub_14000D938(v3 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 344));
  v18 = *(_QWORD **)(v3 + 48 * (*(unsigned __int16 *)(v3 + 336) ^ 1LL) + 224);
  while ( v18 )
  {
    v19 = v18[2];
    v18 = (_QWORD *)*v18;
    v20 = *(_DWORD *)(v19 + 12);
    v21 = v20 + *(_DWORD *)(v19 + 8) == 0;
    *(_DWORD *)(v19 + 8) += v20;
    *(_DWORD *)(v19 + 12) = 0;
    if ( v21 )
      *(_QWORD *)(v19 + 160) = 0LL;
    v4 = sub_14000D810(v3, v19);
    if ( v4 < 0 )
    {
      v22 = 1417;
      goto LABEL_48;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 344));
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  *(_BYTE *)(v3 + 778) = 0;
  v25 = *(_DWORD **)(v3 + 824);
  if ( *v25 > 5u )
  {
    v37 = v3;
    sub_14002BCF8((_DWORD)v25, (unsigned int)&unk_1400D28FB, v23, v24, (__int64)&v37);
  }
  if ( v34 )
    LeaveCriticalSection(v33);
  return 0LL;
}
