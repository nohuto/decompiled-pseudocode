/*
 * XREFs of sub_14000A8A0 @ 0x14000A8A0
 * Callers:
 *     sub_14002B664 @ 0x14002B664 (sub_14002B664.c)
 * Callees:
 *     sub_140006C48 @ 0x140006C48 (sub_140006C48.c)
 *     sub_14000A760 @ 0x14000A760 (sub_14000A760.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000C2F8 @ 0x14000C2F8 (sub_14000C2F8.c)
 *     sub_14000C3C4 @ 0x14000C3C4 (sub_14000C3C4.c)
 *     sub_14000DD04 @ 0x14000DD04 (sub_14000DD04.c)
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 *     sub_140030124 @ 0x140030124 (sub_140030124.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14000A8A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  int v11; // r14d
  _QWORD *v12; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // r12
  _QWORD *i; // r14
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 ***v20; // rax
  __int64 **j; // rdx
  int v22; // r15d
  ATL::CAtlException *v23; // rbx
  ATL::CAtlException *v24; // rbx
  _QWORD *v25; // [rsp+30h] [rbp-78h] BYREF
  __int64 v26; // [rsp+38h] [rbp-70h]
  _QWORD *v27; // [rsp+40h] [rbp-68h]
  __int64 v28; // [rsp+48h] [rbp-60h]
  ATL::CAtlException *v29; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v30; // [rsp+58h] [rbp-50h] BYREF
  LPCRITICAL_SECTION v31; // [rsp+60h] [rbp-48h] BYREF
  char v32; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+C8h] [rbp+20h]

  v5 = a1;
  v6 = (_QWORD *)a1;
  v27 = (_QWORD *)a1;
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 2166LL;
    goto LABEL_4;
  }
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = -2147024890;
    v8 = 2167LL;
LABEL_4:
    sub_14000C2A8(retaddr, v8, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", v7);
    return v7;
  }
  v31 = (LPCRITICAL_SECTION)(a1 + 88);
  v32 = 0;
  sub_14000C2F8(&v31);
  v10 = sub_14000A760(v5, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_14000C2A8(retaddr, 2173LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", (unsigned int)v10);
LABEL_55:
    sub_140030124(&v31);
    return (unsigned int)v11;
  }
  else
  {
    v26 = 0LL;
    sub_1400B6010(*(_QWORD *)(v5 + 792));
    v12 = ***(_QWORD ****)(v5 + 768);
    do
    {
      if ( !v12 )
        goto LABEL_8;
      v13 = (_QWORD *)v12[2];
      v12 = (_QWORD *)*v12;
    }
    while ( *v13 != a3 );
    v25 = v13;
    if ( !v13 )
    {
LABEL_8:
      sub_14000C2A8(retaddr, 2181LL, "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp", 2289827866LL);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      if ( v32 )
        LeaveCriticalSection(v31);
      return 2289827866LL;
    }
    v14 = v5 + 128;
    v28 = v5 + 128;
    for ( i = *(_QWORD **)(v5 + 128); i; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)i[2] == *v13 )
      {
        v27 = i;
        do
        {
          try
          {
            v22 = 0;
            sub_14000DD04(v26, &v25);
          }
          catch ( ATL::CAtlException *v29 )
          {
            v23 = v29;
            if ( *(_DWORD *)v29 == -1073741571 )
              o__resetstkoflw();
            v5 = a1;
            v13 = v25;
            i = v27;
            v22 = *(_DWORD *)v23;
            v14 = v28;
          }
          if ( !*(_BYTE *)(v5 + 779) )
            break;
          if ( v22 < 0 )
            Sleep(1u);
        }
        while ( *(_BYTE *)(v5 + 779) && v22 < 0 );
        if ( v22 < 0 )
        {
          sub_14000C2A8(
            retaddr,
            2193LL,
            "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
            (unsigned int)v22);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v11 = v22;
          goto LABEL_55;
        }
        sub_14000C3C4(v14, i);
        sub_140006C48((__int64)v13);
        goto LABEL_24;
      }
    }
    do
    {
      try
      {
        v11 = 0;
        v16 = v5 + 176;
        v17 = *(_QWORD *)(v5 + 176);
        sub_14000DD74(v5 + 176);
      }
      catch ( ATL::CAtlException *v30 )
      {
        v24 = v30;
        if ( *(_DWORD *)v30 == -1073741571 )
          o__resetstkoflw();
        v5 = a1;
        v13 = v25;
        v11 = *(_DWORD *)v24;
        v6 = v27;
        goto LABEL_22;
      }
      v18 = (__int64 *)v6[26];
      v19 = *v18;
      v18[2] = (__int64)v13;
      v6[26] = v19;
      v18[1] = 0LL;
      *v18 = v17;
      ++v6[24];
      if ( *(_QWORD *)v16 )
        *(_QWORD *)(*(_QWORD *)v16 + 8LL) = v18;
      else
        v6[23] = v18;
      *(_QWORD *)v16 = v18;
LABEL_22:
      if ( !*(_BYTE *)(v5 + 779) )
        break;
      if ( v11 < 0 )
        Sleep(1u);
    }
    while ( *(_BYTE *)(v5 + 779) && v11 < 0 );
    if ( v11 < 0 )
    {
      sub_14000C2A8(
        retaddr,
        2206LL,
        "avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (unsigned int)v11);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_55;
    }
LABEL_24:
    v20 = *(__int64 ****)(v5 + 768);
    for ( j = (__int64 **)**v20; j; j = (__int64 **)*j )
    {
      if ( *j[2] == *v13 )
        goto LABEL_29;
    }
    j = 0LL;
LABEL_29:
    sub_14000C3C4(*v20, j);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( v32 )
      LeaveCriticalSection(v31);
    return 0LL;
  }
}
