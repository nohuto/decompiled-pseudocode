/*
 * XREFs of LdrpResolveForwarder @ 0x180039370
 * Callers:
 *     LdrpSnapModule @ 0x18011B530 (LdrpSnapModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlCharToInteger @ 0x1800399A0 (RtlCharToInteger.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003AF90 (LdrpLoadDependentModuleInternal.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18003B3C0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     LdrpCheckRedirection @ 0x1800838D8 (LdrpCheckRedirection.c)
 *     strrchr @ 0x18012CC40 (strrchr.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpResolveForwarder(char *Str, int a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r15
  int v5; // r12d
  __int64 v6; // r13
  char *v9; // rax
  __int16 v10; // bx
  char *ArgList; // r14
  int appended; // ebx
  unsigned __int64 v13; // r15
  int v14; // r13d
  __int64 v15; // rbx
  bool v16; // si
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int16 v19; // ax
  __int64 v20; // rax
  char *v21; // rsi
  int v22; // r10d
  int v23; // ebx
  int j; // eax
  int v25; // eax
  int v26; // r11d
  __int64 v27; // r9
  char *v28; // rcx
  unsigned __int64 v29; // r8
  int v30; // eax
  int v31; // edx
  ULONG v32; // eax
  unsigned __int64 v33; // rdi
  __int64 v35; // r10
  unsigned int *v36; // rdx
  unsigned int i; // r8d
  __int64 v38; // r9
  ULONG v39; // ebx
  __int64 v40; // rax
  __int64 v41; // [rsp+40h] [rbp-C0h]
  ULONG Value; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h]
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  _DWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 *v53; // [rsp+A8h] [rbp-58h]
  __int16 v54; // [rsp+B0h] [rbp-50h] BYREF
  char v55[254]; // [rsp+B2h] [rbp-4Eh] BYREF

  v4 = *(_QWORD *)(a3 + 176);
  Value = 0;
  v45 = 0LL;
  v5 = 0;
  v43 = 0;
  v44 = 0LL;
  v6 = a3;
  v51 = v4;
  v49 = 0LL;
  v48 = a4;
  v50 = a3;
  while ( 1 )
  {
    v9 = strrchr(Str, 46);
    if ( !v9 || (v10 = (_WORD)v9 - (_WORD)Str, (unsigned __int64)(v9 - Str) > 0xFFFF) )
    {
LABEL_68:
      appended = -1073741701;
      goto LABEL_46;
    }
    ArgList = v9 + 1;
    *((_QWORD *)&v45 + 1) = Str;
    LOWORD(v45) = (_WORD)v9 - (_WORD)Str;
    WORD1(v45) = (_WORD)v9 - (_WORD)Str;
    if ( v9[1] == 35 )
    {
      if ( RtlCharToInteger(v9 + 2, 0, &Value) < 0 )
        goto LABEL_68;
      ArgList = 0LL;
    }
    if ( v10 == 5 && (*(_DWORD *)Str | 0x20202020) == 0x6C64746E && ((unsigned __int8)Str[4] | 0x20) == 0x6C )
    {
      v41 = LdrpNtDllDataTableEntry;
      v44 = LdrpNtDllDataTableEntry;
    }
    else
    {
      v52[1] = 0;
      memset_thunk_772440563353939046(v55, 0, 0xFEuLL);
      v52[0] = 0x1000000;
      v53 = &v54;
      v54 = 0;
      appended = LdrpAppendAnsiStringToFilenameBuffer(v52, &v45);
      if ( appended < 0
        || (appended = LdrpLoadDependentModuleInternal((unsigned int)v52, v4, a2, 1, (__int64)&v44, (__int64)&v49),
            appended < 0) )
      {
        v41 = 0LL;
        v44 = 0LL;
        **(_DWORD **)(v4 + 40) = appended;
      }
      else
      {
        v41 = v44;
      }
      if ( &v54 != v53 )
        RtlpSysVolFree((__int64)v53);
      v52[0] = 0x1000000;
      v53 = &v54;
      v54 = 0;
      if ( appended < 0 || appended == 259 )
        goto LABEL_46;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 176) + 32LL) & 0x2000000) != 0 )
    {
      if ( ArgList )
      {
        v40 = LdrpCheckRedirection(v6, v41, ArgList);
        *v48 = v40;
        if ( v40 != -4530927 )
          return 0LL;
      }
    }
    v13 = *(_QWORD *)(v41 + 48);
    v14 = 0;
    v47 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v17 = v13;
    if ( (v13 & 2) != 0 || (v13 & 1) != 0 )
    {
      v17 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      v16 = !(v13 & 1);
    }
    v18 = RtlImageNtHeaderEx(1LL, v17, 0LL, &v47);
    if ( v47 )
    {
      v19 = *(_WORD *)(v47 + 24);
      if ( v19 == 267 )
      {
        if ( *(_DWORD *)(v47 + 116) )
        {
          v35 = *(unsigned int *)(v47 + 120);
          if ( (_DWORD)v35 )
          {
            v14 = *(_DWORD *)(v47 + 124);
            if ( !v16 && (unsigned int)v35 >= *(_DWORD *)(v47 + 84) )
            {
              v36 = (unsigned int *)(v47 + *(unsigned __int16 *)(v47 + 20) + 24LL);
              for ( i = 0; i < *(unsigned __int16 *)(v47 + 6); ++i )
              {
                v38 = v36[3];
                if ( (unsigned int)v35 >= (unsigned int)v38 && (unsigned int)v35 < (unsigned int)v38 + v36[4] )
                {
                  v15 = v17 + v36[5] - v38 + v35;
                  if ( !v15 )
                    break;
                  v18 = 0;
                  goto LABEL_28;
                }
                v36 += 10;
              }
LABEL_71:
              v18 = -1073741811;
              goto LABEL_28;
            }
            v15 = v17 + v35;
LABEL_27:
            v18 = 0;
            goto LABEL_28;
          }
          v18 = -1073741822;
        }
        else
        {
          v18 = -1073741811;
        }
      }
      else
      {
        if ( v19 != 523 )
          goto LABEL_66;
        if ( !*(_DWORD *)(v47 + 132) )
          goto LABEL_71;
        v20 = *(unsigned int *)(v47 + 136);
        if ( !(_DWORD)v20 )
        {
          v18 = -1073741822;
          goto LABEL_28;
        }
        v14 = *(_DWORD *)(v47 + 140);
        if ( v16 || (unsigned int)v20 < *(_DWORD *)(v47 + 84) )
        {
          v15 = v17 + v20;
          goto LABEL_27;
        }
        v15 = RtlAddressInSectionTable(v47, v17, (unsigned int)v20);
        v18 = 0;
        if ( !v15 )
          v18 = -1073741811;
      }
    }
LABEL_28:
    v21 = 0LL;
    if ( v18 >= 0 )
      v21 = (char *)v15;
    if ( !v21 )
      goto LABEL_66;
    if ( ArgList )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        838,
        (int)"LdrpGetProcedureAddress",
        2,
        "Locating procedure \"%s\" by name\n",
        (char)ArgList);
      v22 = *((_DWORD *)v21 + 6) - 1;
      v23 = 0;
      for ( j = v22; ; j = v23 + v22 )
      {
        v25 = j / 2;
        v26 = v25;
        if ( v22 < v23 )
          break;
        v27 = v25;
        v28 = ArgList;
        v29 = v13 + *(unsigned int *)(v13 + *((unsigned int *)v21 + 8) + 4LL * v25) - (_QWORD)ArgList;
        do
        {
          v30 = (unsigned __int8)v28[v29];
          v31 = (unsigned __int8)*v28 - v30;
          if ( v31 )
            break;
          ++v28;
        }
        while ( v30 );
        if ( !v31 )
        {
          v32 = *(unsigned __int16 *)(v13 + *((unsigned int *)v21 + 9) + 2 * v27);
          v5 = v43;
          goto LABEL_39;
        }
        if ( v31 >= 0 )
          v23 = v26 + 1;
        else
          v22 = v26 - 1;
      }
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrsnap.c",
        2286,
        (int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        (char)ArgList);
LABEL_66:
      appended = -1073741702;
      goto LABEL_46;
    }
    v39 = Value;
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      856,
      (int)"LdrpGetProcedureAddress",
      2,
      "Loading procedure 0x%lx by ordinal\n",
      Value);
    if ( !v39 )
    {
      appended = -1073741811;
      goto LABEL_46;
    }
    v32 = v39 - *((_DWORD *)v21 + 4);
LABEL_39:
    if ( v32 >= *((_DWORD *)v21 + 5) )
    {
      appended = (ArgList != 0LL) - 1073741512;
      goto LABEL_46;
    }
    Str = (char *)(v13 + *(unsigned int *)(v13 + *((unsigned int *)v21 + 7) + 4LL * (int)v32));
    *v48 = (__int64)Str;
    if ( Str < v21 || Str >= &v21[v14] )
      break;
    v43 = ++v5;
    if ( v5 == 32 )
      goto LABEL_68;
    a2 = v41;
    v6 = v50;
    v4 = v51;
  }
  appended = 0;
  v33 = *(_QWORD *)(v41 + 48);
  if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 )
  {
    v46 = 0LL;
    v45 = 0LL;
    if ( v33 < *((_QWORD *)&xmmword_1801E0450 + 1)
      || v33 >= *((_QWORD *)&xmmword_1801E0450 + 1) + (unsigned __int64)(unsigned int)qword_1801E0460 )
    {
      RtlpxLookupFunctionTable(v33, &v45);
    }
    else
    {
      v45 = xmmword_1801E0450;
    }
    if ( *((_QWORD *)&v45 + 1) != v33 )
      __fastfail(0x18u);
  }
LABEL_46:
  if ( v49 )
    RtlFreeHeap_0(LdrpHeap, 0LL, v49);
  return (unsigned int)appended;
}
