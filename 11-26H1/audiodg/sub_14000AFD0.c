/*
 * XREFs of sub_14000AFD0 @ 0x14000AFD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14000C448 @ 0x14000C448 (sub_14000C448.c)
 *     sub_14000C544 @ 0x14000C544 (sub_14000C544.c)
 *     sub_14000D810 @ 0x14000D810 (sub_14000D810.c)
 *     sub_14000DB20 @ 0x14000DB20 (sub_14000DB20.c)
 *     sub_140026664 @ 0x140026664 (sub_140026664.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_14000AFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rax
  _QWORD *v16; // r14
  unsigned __int64 v17; // r15
  _QWORD *v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // edi
  void *v23; // rcx
  __int64 v24; // rdx
  void *v25; // rcx
  unsigned __int64 i; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  _QWORD *v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  ATL::CAtlException *v38; // rbx
  ATL::CAtlException *v39; // rbx
  LPVOID pv; // [rsp+30h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION v41; // [rsp+38h] [rbp-C0h]
  _QWORD *v42; // [rsp+40h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION p_pv; // [rsp+48h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v44; // [rsp+50h] [rbp-A8h]
  char v45; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+60h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-90h]
  unsigned __int64 v48; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-80h]
  _QWORD *v50; // [rsp+80h] [rbp-78h]
  __int64 v51; // [rsp+88h] [rbp-70h]
  ATL::CAtlException *v52; // [rsp+90h] [rbp-68h] BYREF
  ATL::CAtlException *v53[3]; // [rsp+98h] [rbp-60h] BYREF
  char v54; // [rsp+B0h] [rbp-48h]
  _QWORD *v55; // [rsp+B8h] [rbp-40h]
  __int64 *v56; // [rsp+C0h] [rbp-38h]
  char v57; // [rsp+C8h] [rbp-30h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  __int64 v60; // [rsp+110h] [rbp+18h] BYREF

  v7 = a1;
  if ( !a3 )
  {
    v22 = -2147024809;
    sub_14000C2A8(retaddr, 2390LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942487LL);
    return v22;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2391LL;
LABEL_4:
    sub_14000C2A8(retaddr, v8, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942406LL);
    return 2147942406LL;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v8 = 2392LL;
    goto LABEL_4;
  }
  pv = 0LL;
  p_pv = (LPCRITICAL_SECTION)&pv;
  v44 = 0LL;
  v45 = 1;
  v22 = sub_1400B6010(a3);
  if ( v45 )
  {
    DebugInfo = p_pv->DebugInfo;
    p_pv->DebugInfo = v44;
    if ( DebugInfo )
      CoTaskMemFree(DebugInfo);
  }
  if ( (v22 & 0x80000000) != 0 )
  {
    sub_14000C2A8(retaddr, 2395LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v22);
    goto LABEL_86;
  }
  p_pv = (LPCRITICAL_SECTION)(v7 + 88);
  LOBYTE(v44) = 0;
  sub_14000C2F8(&p_pv);
  v33 = *(_QWORD *)(v7 + 768);
  if ( !v33 )
  {
    v36 = -2147024890;
    v37 = 1909LL;
    goto LABEL_85;
  }
  if ( a2 != *(_QWORD *)(v33 + 16) )
  {
    v36 = -2147024890;
    v37 = 1912LL;
LABEL_85:
    sub_14000C2A8(retaddr, v37, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v36);
    sub_14000C2A8(retaddr, 2400LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v36);
    sub_140030124(&p_pv);
    v22 = v36;
LABEL_86:
    sub_140008C08(&pv, 0LL);
    return v22;
  }
  if ( *(_BYTE *)(v7 + 777) )
  {
    v36 = -2005139407;
    v37 = 1915LL;
    goto LABEL_85;
  }
  if ( *(_BYTE *)(v7 + 778) )
  {
    v36 = -2005139406;
    v37 = 1916LL;
    goto LABEL_85;
  }
  v49 = 0LL;
  sub_1400B6010(*(_QWORD *)(v7 + 792));
  v34 = (_QWORD *)*v49;
  do
  {
    if ( !v34 )
      goto LABEL_80;
    v35 = (_QWORD *)v34[2];
    v34 = (_QWORD *)*v34;
  }
  while ( *v35 != a3 );
  v42 = v35;
  if ( !v35 )
  {
LABEL_80:
    v60 = 0LL;
    v35 = (_QWORD *)sub_140026664(v34, v7 + 176, a3, &v60);
    v42 = v35;
    if ( !v35 )
    {
      v28 = 2413LL;
      goto LABEL_58;
    }
  }
  if ( v35[16] == *((_DWORD *)pv + 264) )
  {
    v22 = -2005139429;
    sub_14000C2A8(retaddr, 2417LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827867LL);
LABEL_104:
    if ( v41 )
    {
      LeaveCriticalSection(v41);
      v41 = 0LL;
    }
    sub_140030124(&p_pv);
    goto LABEL_86;
  }
  v50 = 0LL;
  sub_1400B6010(*(_QWORD *)(v7 + 792));
  v10 = (_QWORD *)*v50;
  do
  {
    if ( !v10 )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_57;
    }
    v11 = v10[2];
    v10 = (_QWORD *)*v10;
  }
  while ( *(_QWORD *)(v11 + 16) != a4 );
  if ( lpCriticalSection )
  {
    LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = 0LL;
  }
  if ( !v11 )
  {
LABEL_57:
    v28 = 2421LL;
LABEL_58:
    sub_14000C2A8(retaddr, v28, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827866LL);
    if ( v41 )
    {
      LeaveCriticalSection(v41);
      v41 = 0LL;
    }
    if ( (_BYTE)v44 )
      LeaveCriticalSection(p_pv);
    v29 = pv;
    v30 = pv == 0LL;
    pv = 0LL;
    if ( !v30 )
      CoTaskMemFree(v29);
    return 2289827866LL;
  }
  v12 = 0LL;
  v51 = v11;
  while ( v12 < v42[16] )
  {
    if ( *(_QWORD *)(v42[15] + 8 * v12) == v11 )
    {
      v22 = -2147024809;
      v24 = 2425LL;
      goto LABEL_39;
    }
    ++v12;
  }
  v13 = v42[20];
  if ( !v13 )
  {
    v15 = pv;
    goto LABEL_23;
  }
  v14 = *(_QWORD *)v42[19];
  v15 = pv;
  if ( (*((_BYTE *)pv + 16) & 2) != 0 && *(_DWORD *)(v11 + 40) != *(_DWORD *)(v14 + 40) )
  {
    v22 = -2005139426;
    v31 = 2263LL;
    goto LABEL_67;
  }
  if ( (*((_BYTE *)pv + 16) & 8) != 0
    && (*(_DWORD *)(v11 + 48) != *(_DWORD *)(v14 + 48) || *(_DWORD *)(v11 + 44) != *(_DWORD *)(v14 + 44)) )
  {
    v22 = -2005139426;
    v31 = 2267LL;
    goto LABEL_67;
  }
  if ( (*((_BYTE *)pv + 16) & 4) != 0 && *(float *)(v11 + 52) != *(float *)(v14 + 52) )
  {
    v22 = -2005139426;
    v31 = 2270LL;
LABEL_67:
    sub_14000C2A8(retaddr, v31, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v22);
    v24 = 2429LL;
LABEL_39:
    sub_14000C2A8(retaddr, v24, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v22);
    goto LABEL_40;
  }
LABEL_23:
  if ( (v15[4] & 1) == 0 && v13 )
  {
    for ( i = 0LL; i < v13; ++i )
    {
      if ( *(_QWORD *)(v11 + 72) == *(_QWORD *)(*(_QWORD *)(v42[19] + 8 * i) + 72LL) )
      {
        v22 = -2005139425;
        v31 = 2286LL;
        goto LABEL_67;
      }
    }
  }
  v46 = 0LL;
  v16 = v42;
  v17 = v42[16];
  if ( v17 < v42[17] )
    goto LABEL_25;
  try
  {
    if ( !(unsigned __int8)sub_14000DB20(v42 + 15, v17 + 1) )
      sub_14004639C(2147942414LL, v27);
  }
  catch ( ATL::CAtlException *v52 )
  {
    v38 = v52;
    if ( *(_DWORD *)v52 == -1073741571 )
      o__resetstkoflw();
    LODWORD(v60) = *(_DWORD *)v38;
    v22 = v60;
    if ( (int)v60 < 0 )
    {
      v24 = 2435LL;
      goto LABEL_39;
    }
    v7 = a1;
    v11 = v51;
LABEL_116:
    try
    {
      v53[1] = (ATL::CAtlException *)&v42;
      v53[2] = (ATL::CAtlException *)&v46;
      v54 = 1;
      v48 = 0LL;
      v18 = v42 + 31;
      v19 = v42[32];
      if ( v19 >= v42[33] && !(unsigned __int8)sub_14000DB20(v42 + 31, v19 + 1) )
        sub_14004639C(2147942414LL, v20);
      *(_QWORD *)(*v18 + 8 * v19) = *(_QWORD *)(v11 + 112);
      ++v18[1];
      v48 = v19;
    }
    catch ( ATL::CAtlException *v53 )
    {
      v39 = v53[0];
      if ( *(_DWORD *)v53[0] == -1073741571 )
        o__resetstkoflw();
      LODWORD(v60) = *(_DWORD *)v39;
      v22 = v60;
      if ( (int)v60 >= 0 )
      {
        v7 = a1;
        v11 = v51;
        goto LABEL_29;
      }
      sub_14000C2A8(
        retaddr,
        2441LL,
        "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (unsigned int)v60);
      sub_14000C544(v42 + 15, v46);
LABEL_40:
      if ( v41 )
      {
        LeaveCriticalSection(v41);
        v41 = 0LL;
      }
      if ( (_BYTE)v44 )
        LeaveCriticalSection(p_pv);
      v25 = pv;
      pv = 0LL;
      if ( v25 )
        CoTaskMemFree(v25);
      return v22;
    }
LABEL_29:
    v55 = &v42;
    v56 = (__int64 *)&v48;
    v57 = 1;
    ++*(_DWORD *)(v11 + 12);
    *(_QWORD *)(v11 + 160) = v7;
    v21 = sub_14000D810(v7, v11);
    v22 = v21;
    if ( v21 < 0 )
    {
      sub_14000C2A8(
        retaddr,
        2445LL,
        "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (unsigned int)v21);
      sub_14000C448(v42 + 31, v48);
      sub_14000C544(v42 + 15, v46);
      goto LABEL_104;
    }
    if ( v41 )
      LeaveCriticalSection(v41);
    if ( (_BYTE)v44 )
      LeaveCriticalSection(p_pv);
    v23 = pv;
    pv = 0LL;
    if ( v23 )
      CoTaskMemFree(v23);
    return 0LL;
  }
LABEL_25:
  *(_QWORD *)(v16[15] + 8 * v17) = v11;
  ++v16[16];
  v46 = v17;
  goto LABEL_116;
}
