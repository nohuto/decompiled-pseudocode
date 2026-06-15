/*
 * XREFs of sub_14000B7C0 @ 0x14000B7C0
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
__int64 __fastcall sub_14000B7C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        __int64 a32,
        int a33,
        int a34)
{
  __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rdi
  int v42; // r8d
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  _DWORD *v46; // rax
  int v47; // ecx
  _QWORD *v48; // r14
  unsigned __int64 v49; // r15
  __int64 *v50; // r14
  unsigned __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // edi
  void *v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 i; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  void *v61; // rcx
  __int64 v62; // rdx
  void *v63; // rcx
  bool v64; // zf
  __int64 v65; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 v67; // rax
  _QWORD *v68; // rcx
  _QWORD *v69; // rdx
  unsigned int v70; // ebx
  __int64 v71; // rdx
  ATL::CAtlException *v72; // rbx
  ATL::CAtlException *v73; // rbx
  __int64 *v74; // rdx
  __int64 v75; // [rsp+0h] [rbp-F8h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION v77; // [rsp+38h] [rbp-C0h]
  _QWORD *v78; // [rsp+40h] [rbp-B8h] BYREF
  LPCRITICAL_SECTION p_pv; // [rsp+48h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION_DEBUG *v80; // [rsp+50h] [rbp-A8h]
  char v81; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v82; // [rsp+60h] [rbp-98h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-90h]
  unsigned __int64 v84; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v85; // [rsp+78h] [rbp-80h]
  _QWORD *v86; // [rsp+80h] [rbp-78h]
  __int64 v87; // [rsp+88h] [rbp-70h]
  ATL::CAtlException *v88; // [rsp+90h] [rbp-68h] BYREF
  ATL::CAtlException *v89[3]; // [rsp+98h] [rbp-60h] BYREF
  char v90; // [rsp+B0h] [rbp-48h]
  _QWORD *v91; // [rsp+B8h] [rbp-40h]
  __int64 *v92; // [rsp+C0h] [rbp-38h]
  char v93; // [rsp+C8h] [rbp-30h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  __int64 v96; // [rsp+110h] [rbp+18h] BYREF

  v37 = a1;
  if ( !a3 )
  {
    v55 = -2147024809;
    sub_14000C2A8(retaddr, 2588LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942487LL);
    return v55;
  }
  if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v38 = 2589LL;
LABEL_4:
    sub_14000C2A8(retaddr, v38, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2147942406LL);
    return 2147942406LL;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v38 = 2590LL;
    goto LABEL_4;
  }
  pv = 0LL;
  p_pv = (LPCRITICAL_SECTION)&pv;
  v80 = 0LL;
  v81 = 1;
  v55 = sub_1400B6010(a3);
  if ( v81 )
  {
    DebugInfo = p_pv->DebugInfo;
    p_pv->DebugInfo = v80;
    if ( DebugInfo )
      CoTaskMemFree(DebugInfo);
  }
  if ( (v55 & 0x80000000) != 0 )
  {
    sub_14000C2A8(retaddr, 2593LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v55);
    goto LABEL_88;
  }
  p_pv = (LPCRITICAL_SECTION)(v37 + 88);
  LOBYTE(v80) = 0;
  sub_14000C2F8(&p_pv);
  v67 = *(_QWORD *)(v37 + 768);
  if ( !v67 )
  {
    v70 = -2147024890;
    v71 = 1909LL;
    goto LABEL_87;
  }
  if ( a2 != *(_QWORD *)(v67 + 16) )
  {
    v70 = -2147024890;
    v71 = 1912LL;
LABEL_87:
    sub_14000C2A8(retaddr, v71, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v70);
    sub_14000C2A8(retaddr, 2598LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v70);
    sub_140030124(&p_pv);
    v55 = v70;
LABEL_88:
    sub_140008C08(&pv, 0LL);
    return v55;
  }
  if ( *(_BYTE *)(v37 + 777) )
  {
    v70 = -2005139407;
    v71 = 1915LL;
    goto LABEL_87;
  }
  if ( *(_BYTE *)(v37 + 778) )
  {
    v70 = -2005139406;
    v71 = 1916LL;
    goto LABEL_87;
  }
  v85 = 0LL;
  sub_1400B6010(*(_QWORD *)(v37 + 792));
  v68 = (_QWORD *)*v85;
  do
  {
    if ( !v68 )
      goto LABEL_82;
    v69 = (_QWORD *)v68[2];
    v68 = (_QWORD *)*v68;
  }
  while ( *v69 != a3 );
  v78 = v69;
  if ( v69 )
    goto LABEL_6;
LABEL_82:
  v96 = 0LL;
  v69 = (_QWORD *)sub_140026664(v68, v37 + 176, a3, &v96);
  v78 = v69;
  if ( v69 )
  {
LABEL_6:
    if ( v69[20] == *((_DWORD *)pv + 266) )
    {
      v55 = -2005139429;
      v57 = 2615LL;
      goto LABEL_39;
    }
    v86 = 0LL;
    sub_1400B6010(*(_QWORD *)(v37 + 792));
    v40 = (_QWORD *)*v86;
    while ( v40 )
    {
      v41 = v40[2];
      v40 = (_QWORD *)*v40;
      if ( *(_QWORD *)(v41 + 16) == a4 )
      {
        if ( lpCriticalSection )
        {
          LeaveCriticalSection(lpCriticalSection);
          lpCriticalSection = 0LL;
        }
        if ( v41 )
        {
          v42 = (int)v78;
          v43 = 0LL;
          v87 = v41;
          while ( v43 < v78[20] )
          {
            if ( *(_QWORD *)(v78[19] + 8 * v43) == v41 )
            {
              v55 = -2147024809;
              v57 = 2623LL;
              goto LABEL_39;
            }
            ++v43;
          }
          v44 = v78[16];
          if ( !v44 )
          {
            v46 = pv;
            goto LABEL_23;
          }
          v45 = *(_QWORD *)v78[15];
          v46 = pv;
          if ( (*((_BYTE *)pv + 16) & 2) != 0 && *(_DWORD *)(v41 + 40) != *(_DWORD *)(v45 + 40) )
          {
            v55 = -2005139426;
            v65 = 2263LL;
          }
          else if ( (*((_BYTE *)pv + 16) & 8) == 0
                 || *(_DWORD *)(v41 + 48) == *(_DWORD *)(v45 + 48) && *(_DWORD *)(v41 + 44) == *(_DWORD *)(v45 + 44) )
          {
            if ( (*((_BYTE *)pv + 16) & 4) == 0 || *(float *)(v41 + 52) == *(float *)(v45 + 52) )
            {
LABEL_23:
              v47 = v46[4];
              if ( (v47 & 1) == 0 && v44 )
              {
                for ( i = 0LL; i < v44; ++i )
                {
                  v59 = *(_QWORD *)(v78[15] + 8 * i);
                  if ( *(_QWORD *)(v41 + 72) == *(_QWORD *)(v59 + 72) )
                  {
                    v55 = -2005139425;
                    v65 = 2286LL;
                    goto LABEL_68;
                  }
                }
              }
              v82 = 0LL;
              v48 = v78 + 19;
              v49 = v78[20];
              if ( v49 < v78[21] )
                goto LABEL_25;
              try
              {
                if ( !(unsigned __int8)sub_14000DB20(v78 + 19, v49 + 1) )
                  sub_14004639C(2147942414LL, v60);
              }
              catch ( ATL::CAtlException *v88 )
              {
                v72 = v88;
                if ( *(_DWORD *)v88 == -1073741571 )
                  o__resetstkoflw();
                LODWORD(v96) = *(_DWORD *)v72;
                v55 = v96;
                if ( (int)v96 >= 0 )
                {
                  v37 = a1;
                  v41 = v87;
                  goto LABEL_111;
                }
                v57 = 2633LL;
LABEL_39:
                sub_14000C2A8(retaddr, v57, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v55);
LABEL_48:
                if ( v77 )
                {
                  LeaveCriticalSection(v77);
                  v77 = 0LL;
                }
                if ( (_BYTE)v80 )
                  LeaveCriticalSection(p_pv);
                v61 = pv;
                pv = 0LL;
                if ( v61 )
                  CoTaskMemFree(v61);
                return v55;
              }
LABEL_25:
              *(_QWORD *)(*v48 + 8 * v49) = v41;
              ++v48[1];
              v82 = v49;
LABEL_111:
              try
              {
                v89[1] = (ATL::CAtlException *)&v78;
                v89[2] = (ATL::CAtlException *)&v82;
                v90 = 1;
                v84 = 0LL;
                v50 = v78 + 35;
                v51 = v78[36];
                if ( v51 >= v78[37] && !(unsigned __int8)sub_14000DB20(v78 + 35, v51 + 1) )
                  sub_14004639C(2147942414LL, v52);
                v53 = *v50;
                *(_QWORD *)(*v50 + 8 * v51) = *(_QWORD *)(v41 + 112);
                ++v50[1];
                v84 = v51;
              }
              catch ( ATL::CAtlException *v89 )
              {
                v74 = &v75;
                v73 = v89[0];
                if ( *(_DWORD *)v89[0] == -1073741571 )
                  o__resetstkoflw();
                LODWORD(v96) = *(_DWORD *)v73;
                return sub_14000BF40(
                         v53,
                         (_DWORD)v74,
                         v42,
                         v44,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9,
                         a10,
                         a11,
                         a12,
                         a13,
                         a14,
                         a15,
                         a16,
                         a17,
                         a18,
                         a19,
                         a20,
                         a21,
                         a22,
                         a23,
                         a24,
                         a25,
                         a26,
                         a27,
                         a28,
                         a29,
                         a30,
                         a31,
                         a32,
                         a33,
                         a34);
              }
              v91 = &v78;
              v92 = (__int64 *)&v84;
              v93 = 1;
              ++*(_DWORD *)(v41 + 12);
              *(_QWORD *)(v41 + 160) = v37;
              v54 = sub_14000D810(v37, v41);
              v55 = v54;
              if ( v54 < 0 )
              {
                sub_14000C2A8(
                  retaddr,
                  2643LL,
                  "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
                  (unsigned int)v54);
                sub_14000C448(v78 + 35, v84);
                sub_14000C544(v78 + 19, v82);
                goto LABEL_48;
              }
              if ( v77 )
                LeaveCriticalSection(v77);
              if ( (_BYTE)v80 )
                LeaveCriticalSection(p_pv);
              v56 = pv;
              pv = 0LL;
              if ( v56 )
                CoTaskMemFree(v56);
              return 0LL;
            }
            v55 = -2005139426;
            v65 = 2270LL;
          }
          else
          {
            v55 = -2005139426;
            v65 = 2267LL;
          }
LABEL_68:
          sub_14000C2A8(retaddr, v65, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v55);
          v57 = 2627LL;
          goto LABEL_39;
        }
LABEL_59:
        v62 = 2619LL;
        goto LABEL_60;
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_59;
  }
  v62 = 2611LL;
LABEL_60:
  sub_14000C2A8(retaddr, v62, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827866LL);
  if ( v77 )
  {
    LeaveCriticalSection(v77);
    v77 = 0LL;
  }
  if ( (_BYTE)v80 )
    LeaveCriticalSection(p_pv);
  v63 = pv;
  v64 = pv == 0LL;
  pv = 0LL;
  if ( !v64 )
    CoTaskMemFree(v63);
  return 2289827866LL;
}
