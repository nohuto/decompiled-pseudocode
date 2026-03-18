/*
 * XREFs of ParseOpcode @ 0x140007B60
 * Callers:
 *     ParseScope @ 0x140005CE0 (ParseScope.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     ParsePackage @ 0x1400387D0 (ParsePackage.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1400019D0 (RtlStringCchCopyA.c)
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     ParseNameTail @ 0x140003020 (ParseNameTail.c)
 *     PushCall @ 0x140003230 (PushCall.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     ReadField @ 0x14000CB30 (ReadField.c)
 *     IsCompatableDSDTRevision @ 0x140014C60 (IsCompatableDSDTRevision.c)
 *     WPP_RECORDER_SF_Ds @ 0x14003DC80 (WPP_RECORDER_SF_Ds.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v4; // rax
  int v7; // edx
  PVOID v8; // rcx
  unsigned __int8 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  _BYTE *v12; // r8
  unsigned int Field; // edi
  const char **v14; // rax
  int v15; // ebx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  unsigned __int8 *v25; // rbx
  const void *v26; // rsi
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 *v34; // rsi
  unsigned int v35; // ecx
  __int64 v36; // r15
  int v37; // ebx
  unsigned int v38; // ebx
  KIRQL v39; // al
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 **v43; // r8
  __int64 *v44; // rsi
  unsigned int v45; // ecx
  _QWORD *i; // rcx
  __int64 v47; // r10
  void *v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  unsigned int v53; // ecx
  __int64 v54; // rbx
  bool v55; // zf
  void *v56; // rax
  __int64 v57; // rdx
  char *v58; // r10
  __int64 v59; // r15
  __int64 v60; // r12
  size_t v61; // rbx
  __int64 v62; // rdx
  char *p_pszDest; // rcx
  char v64; // al
  char *v65; // rax
  char *v66; // r11
  int v67; // edi
  __int64 v68; // rcx
  char v69; // al
  int v70; // r8d
  char *v71; // rdx
  unsigned __int64 v72; // r9
  unsigned __int64 v73; // r10
  __int64 v74; // r11
  char v75; // al
  char *v76; // rax
  unsigned int v77; // eax
  _BYTE *Pool2; // rsi
  KIRQL v79; // bl
  __int64 k; // rsi
  __int64 v81; // rbx
  __int16 v82; // ax
  __int64 v83; // r14
  int v84; // esi
  unsigned __int64 v85; // rdx
  char *v86; // rcx
  unsigned __int64 v87; // r9
  char *v88; // r10
  char v89; // al
  char *v90; // rax
  __int64 v91; // rcx
  char v92; // al
  int v93; // r8d
  char *v94; // rdx
  unsigned __int64 v95; // r9
  unsigned __int64 v96; // r11
  __int64 v97; // r10
  char v98; // al
  char *v99; // rax
  int v100; // eax
  int v101; // r11d
  unsigned __int64 v102; // rdx
  char *v103; // rcx
  unsigned __int64 v104; // r9
  char *v105; // r10
  char v106; // al
  char *v107; // rax
  __int64 v108; // rax
  __int64 v109; // r14
  unsigned __int8 *v110; // rax
  __int64 v111; // rbx
  char *v112; // rcx
  _BYTE *v113; // rax
  unsigned int j; // r8d
  _BYTE *v115; // rdx
  __int64 v116; // r9
  __int64 **v117; // rcx
  __int64 **v118; // r9
  unsigned int v119; // eax
  __int64 *m; // rax
  __int64 **v121; // rcx
  __int64 *v122; // r11
  _QWORD *v123; // rbx
  __int64 v124; // rcx
  __int64 **v125; // rax
  __int64 **v126; // rbx
  _QWORD *v127; // r9
  __int64 v128; // rcx
  _QWORD *v129; // rax
  __int64 v130; // r15
  __int64 v131; // rcx
  _QWORD *v132; // rax
  __int64 v133; // rcx
  __int64 *v134; // rcx
  __int64 **v135; // rax
  int UserData; // [rsp+20h] [rbp-E0h]
  __int64 v137; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v138; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v139; // [rsp+58h] [rbp-A8h]
  int v140; // [rsp+60h] [rbp-A0h]
  int v141; // [rsp+64h] [rbp-9Ch]
  __int64 *v142; // [rsp+68h] [rbp-98h]
  __int64 v143; // [rsp+70h] [rbp-90h]
  __int64 v144; // [rsp+78h] [rbp-88h] BYREF
  __int16 v145; // [rsp+80h] [rbp-80h]
  __int64 v146; // [rsp+88h] [rbp-78h] BYREF
  __int16 v147; // [rsp+90h] [rbp-70h]
  char pszDest; // [rsp+A0h] [rbp-60h] BYREF
  char v149; // [rsp+A1h] [rbp-5Fh] BYREF
  _BYTE P[128]; // [rsp+1A0h] [rbp+A0h] BYREF

  v137 = a3;
  v4 = (PVOID *)&unk_14008EC70;
  v7 = 0;
  v8 = *(PVOID *)(a1 + 120);
  do
  {
    if ( v8 == *v4 )
      break;
    ++v7;
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&qword_14008ED10 );
  if ( v7 != 10 && (dword_14008EC68[4 * v7] & 1) != 0 && v7 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger();
  }
  v9 = *(unsigned __int8 **)(a1 + 120);
  v10 = *v9;
  if ( (_BYTE)v10 == 91 )
  {
    v12 = v9 + 1;
    v11 = 0LL;
    *(_QWORD *)(a1 + 120) = v9 + 1;
    for ( i = &ExOpcodeTable; i[1]; i += 2 )
    {
      if ( (unsigned __int8)*v12 == *(_DWORD *)i )
      {
        v11 = i[1];
        break;
      }
    }
  }
  else
  {
    v11 = (__int64)*(&OpcodeTable + v10);
    v12 = *(_BYTE **)(a1 + 120);
  }
  if ( !v11 )
  {
    Field = -1072431103;
    dword_14008ED38 = -1072431103;
    v14 = (const char **)&unk_14008DC50;
    v15 = 0;
    while ( v14[1] )
    {
      if ( *(_DWORD *)v14 == -1072431103 )
      {
        RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1072431103, v14[1]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ds(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            v18,
            UserData,
            1,
            *((_QWORD *)&unk_14008DC50 + 2 * v15 + 1));
        break;
      }
      ++v15;
      v14 += 2;
    }
    LODWORD(v137) = -1072431103;
    v146 = 0x41002F004ELL;
    v144 = 0x41002F004ELL;
    v19 = 3;
    v20 = *(_QWORD *)(a1 + 80);
    v21 = 3;
    v147 = 0;
    v145 = 0;
    if ( v20 )
    {
      v22 = *(_DWORD *)(v20 + 40);
      v21 = 5;
      LOWORD(v144) = (char)v22;
      WORD1(v144) = SBYTE1(v22);
      WORD2(v144) = SBYTE2(v22);
      HIWORD(v144) = SHIBYTE(v22);
      v145 = 0;
    }
    v23 = *(_QWORD *)(a1 + 72);
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 40);
      v19 = 5;
      LOWORD(v146) = (char)v24;
      WORD1(v146) = SBYTE1(v24);
      WORD2(v146) = SBYTE2(v24);
      HIWORD(v146) = SHIBYTE(v24);
      v147 = 0;
    }
    v138.Ptr = (unsigned __int64)&v144;
    v138.Size = 2 * v21;
    v138.Reserved = 0;
    v139 = &v146;
    v140 = 2 * v19;
    v141 = 0;
    v142 = &v137;
    v143 = 4LL;
    EtwWrite(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v138);
    v25 = *(unsigned __int8 **)(a1 + 120);
    v26 = (const void *)*v25;
    if ( (_BYTE)KdDebuggerEnabled )
    {
      DbgPrintEx(0x19u, 0, off_14008D5C8, v26, v25, 0LL, 0LL);
      if ( (gDebugger & 0x40000) != 0 )
      {
        RtlStringCbPrintfA(&pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 134, v26, v25, 0LL, 0LL);
        DbgCommandString("ACPI", &pszDest);
      }
    }
    else
    {
      RtlStringCbPrintfA(&pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 134, v26, v25, 0LL, 0LL);
      DbgPrintEx(0x19u, 0, "%s\n", &pszDest);
    }
    return Field;
  }
  v28 = *(_DWORD *)(v11 + 28);
  if ( (v28 & 8) != 0 )
  {
    v45 = (unsigned __int8)*v12;
    *(_QWORD *)(a1 + 120) = v12 + 1;
    *(_WORD *)(a3 + 2) = 1;
    Field = 0;
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( v45 == 10 )
    {
      *(_BYTE *)(a3 + 16) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
      goto LABEL_47;
    }
    if ( v45 == 12 )
    {
      *(_DWORD *)(a3 + 16) = **(_DWORD **)(a1 + 120);
      *(_QWORD *)(a1 + 120) += 4LL;
    }
    else
    {
      if ( v45 <= 0xC )
      {
        if ( !(_BYTE)v45 )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Zero");
          return Field;
        }
        if ( v45 == 1 )
        {
          *(_QWORD *)(a3 + 16) = 1LL;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("One");
          return Field;
        }
        if ( v45 == 11 )
        {
          *(_WORD *)(a3 + 16) = **(_WORD **)(a1 + 120);
          *(_QWORD *)(a1 + 120) += 2LL;
          goto LABEL_47;
        }
LABEL_224:
        --*(_QWORD *)(a1 + 120);
        Field = -1072431103;
        LogError(-1072431103);
        AcpiDiagTraceAmlError(a1, -1072431103);
        PrintDebugMessage(0x80u, (const void *)**(unsigned __int8 **)(a1 + 120), *(const void **)(a1 + 120), 0LL, 0LL);
        return Field;
      }
      if ( v45 == 255 )
      {
        v111 = -1LL;
        if ( !(unsigned __int8)IsCompatableDSDTRevision() )
          v111 = 0xFFFFFFFFLL;
        *(_QWORD *)(a3 + 16) = v111;
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Ones");
        return Field;
      }
      if ( v45 != 14 )
        goto LABEL_224;
      *(_QWORD *)(a3 + 16) = **(_QWORD **)(a1 + 120);
      *(_QWORD *)(a1 + 120) += 8LL;
    }
LABEL_47:
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("0x%I64x");
    return Field;
  }
  if ( (v28 & 0x10) != 0 )
  {
    Field = 0;
    if ( *v12 == 13 )
    {
      v54 = -1LL;
      *(_QWORD *)(a1 + 120) = v12 + 1;
      *(_WORD *)(a3 + 2) = 2;
      do
        v55 = *(_BYTE *)(*(_QWORD *)(a1 + 120) + v54++ + 1) == 0;
      while ( !v55 );
      *(_DWORD *)(a3 + 24) = v54 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("\"%s\"");
      v56 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, *(unsigned int *)(a3 + 24));
      *(_QWORD *)(a3 + 32) = v56;
      if ( v56 )
      {
        memmove(v56, *(const void **)(a1 + 120), *(unsigned int *)(a3 + 24));
      }
      else
      {
        Field = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(0x8Bu, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)(a1 + 120) += *(unsigned int *)(a3 + 24);
    }
    else
    {
      Field = -1072431103;
      LogError(-1072431103);
      AcpiDiagTraceAmlError(a1, -1072431103);
      PrintDebugMessage(0x8Cu, (const void *)**(unsigned __int8 **)(a1 + 120), *(const void **)(a1 + 120), 0LL, 0LL);
    }
    return Field;
  }
  if ( (v28 & 2) != 0 )
  {
    v49 = *(_QWORD *)(a1 + 96);
    Field = 0;
    v50 = (unsigned int)(unsigned __int8)*v12 - 104;
    v51 = (unsigned int)v50;
    if ( (unsigned int)v50 >= *(_DWORD *)(v49 + 60) )
    {
      Field = -1072431099;
      LogError(-1072431099);
      AcpiDiagTraceAmlError(a1, -1072431099);
      PrintDebugMessage(0x7Au, (const void *)v51, 0LL, 0LL, 0LL);
    }
    else
    {
      v52 = *(_QWORD *)(v49 + 64) + 40 * v50;
      if ( a3 != v52 )
      {
        *(_OWORD *)a3 = *(_OWORD *)v52;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v52 + 16);
        *(_QWORD *)(a3 + 32) = *(_QWORD *)(v52 + 32);
        if ( (*(_BYTE *)v52 & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v52 + 8) + 8LL));
        }
        else if ( *(_QWORD *)(v52 + 32) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v52 + 8));
          *(_WORD *)a3 |= 1u;
          *(_QWORD *)(a3 + 8) = v52;
        }
      }
      ++*(_QWORD *)(a1 + 120);
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("Arg%d=");
        PrintObject(a3);
      }
    }
    return Field;
  }
  if ( (v28 & 4) != 0 )
  {
    v57 = *(_QWORD *)(a1 + 96)
        + 8 * ((unsigned int)(unsigned __int8)*v12 - 96 + 4LL * ((unsigned int)(unsigned __int8)*v12 - 96) + 9);
    if ( a3 != v57 )
    {
      *(_OWORD *)a3 = *(_OWORD *)v57;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v57 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(v57 + 32);
      if ( (*(_BYTE *)v57 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v57 + 8) + 8LL));
      }
      else if ( *(_QWORD *)(v57 + 32) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v57 + 8));
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = v57;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Local%d=");
      PrintObject(a3);
    }
    ++*(_QWORD *)(a1 + 120);
    return 0;
  }
  if ( (v28 & 0x20) != 0 )
  {
    v58 = *(char **)(a1 + 120);
    v59 = 0LL;
    v60 = *(_QWORD *)(a1 + 80);
    v61 = -1LL;
    v144 = 0LL;
    if ( *v58 == 92 )
    {
      v62 = 256LL;
      p_pszDest = &pszDest;
      do
      {
        if ( v62 == -2147483390 )
          break;
        v64 = p_pszDest["\\" - &pszDest];
        if ( !v64 )
          break;
        *p_pszDest++ = v64;
        --v62;
      }
      while ( v62 );
      v65 = p_pszDest - 1;
      v66 = v58 + 1;
      v67 = 0;
      if ( v62 )
        v65 = p_pszDest;
      *(_QWORD *)(a1 + 120) = v66;
      v68 = -1LL;
      *v65 = 0;
      do
        ++v68;
      while ( *(&pszDest + v68) );
      v69 = *v66;
      if ( *v66 )
      {
        if ( v69 != 47 )
        {
          if ( v69 == 46 )
          {
            v66 = v58 + 2;
            v70 = 2;
            *(_QWORD *)(a1 + 120) = v58 + 2;
          }
          else
          {
            v70 = 1;
          }
LABEL_109:
          while ( (unsigned __int64)(unsigned int)v68 + 4 < 0x100 )
          {
            v71 = &pszDest + (unsigned int)v68;
            v72 = (unsigned int)(256 - v68);
            if ( (_DWORD)v68 != 256 )
            {
              if ( v72 > 0x7FFFFFFF )
              {
                *v71 = 0;
              }
              else
              {
                v73 = 4 - v72;
                v74 = v66 - v71;
                do
                {
                  if ( !(v72 + v73) )
                    break;
                  v75 = v71[v74];
                  if ( !v75 )
                    break;
                  *v71++ = v75;
                  --v72;
                }
                while ( v72 );
                v76 = v71 - 1;
                if ( v72 )
                  v76 = v71;
                *v76 = 0;
              }
            }
            LODWORD(v68) = v68 + 4;
            v66 = (char *)(*(_QWORD *)(a1 + 120) + 4LL);
            *(_QWORD *)(a1 + 120) = v66;
            if ( --v70 && (v84 = v68 + 1, (unsigned int)(v68 + 1) < 0x100) )
            {
              v55 = (_DWORD)v68 == 256;
              v85 = (unsigned int)(256 - v68);
              v86 = &pszDest + (unsigned int)v68;
              if ( !v55 )
              {
                if ( v85 > 0x7FFFFFFF )
                {
                  *v86 = 0;
                }
                else
                {
                  v87 = 2147483646 - v85;
                  v88 = (char *)("." - v86);
                  do
                  {
                    if ( !(v85 + v87) )
                      break;
                    v89 = v88[(_QWORD)v86];
                    if ( !v89 )
                      break;
                    *v86++ = v89;
                    --v85;
                  }
                  while ( v85 );
                  v90 = v86 - 1;
                  if ( v85 )
                    v90 = v86;
                  *v90 = 0;
                }
              }
              v66 = *(char **)(a1 + 120);
              LODWORD(v68) = v84;
            }
            else if ( !v70 )
            {
              goto LABEL_121;
            }
          }
LABEL_268:
          v67 = -1073741562;
          LogError(-1073741562);
          AcpiDiagTraceAmlError(a1, -1073741562);
          PrintDebugMessage(0x82u, &pszDest, 0LL, 0LL, 0LL);
          goto LABEL_121;
        }
        *(_QWORD *)(a1 + 120) = v58 + 2;
        v66 = v58 + 3;
        v70 = (unsigned __int8)v58[2];
        *(_QWORD *)(a1 + 120) = v58 + 3;
        if ( v70 )
          goto LABEL_109;
      }
      else
      {
        *(_QWORD *)(a1 + 120) = v58 + 2;
      }
    }
    else if ( *v58 == 94 )
    {
      RtlStringCchCopyA(&pszDest, 0x100uLL, "^");
      ++*(_QWORD *)(a1 + 120);
      v112 = &v149;
      v113 = *(_BYTE **)(a1 + 120);
      for ( j = 1; j < 0xFF; ++j )
      {
        v115 = v113;
        if ( *v113 != 94 )
          break;
        ++v113;
        *v112++ = 94;
        *(_QWORD *)(a1 + 120) = v113;
        v115 = v113;
      }
      *(&pszDest + j) = 0;
      if ( *v115 == 94 )
      {
        Field = -1073741562;
        LogError(-1073741562);
        AcpiDiagTraceAmlError(a1, -1073741562);
        PrintDebugMessage(0x81u, &pszDest, 0LL, 0LL, 0LL);
        return Field;
      }
      v67 = ParseNameTail(a1, (char **)(a1 + 120), (__int64)&pszDest);
    }
    else
    {
      pszDest = 0;
      v67 = 0;
      v91 = -1LL;
      do
        ++v91;
      while ( *(&pszDest + v91) );
      v92 = *v58;
      if ( *v58 )
      {
        if ( v92 != 47 )
        {
          if ( v92 == 46 )
          {
            ++v58;
            v93 = 2;
            *(_QWORD *)(a1 + 120) = v58;
          }
          else
          {
            v93 = 1;
          }
LABEL_171:
          while ( (unsigned __int64)(unsigned int)v91 + 4 < 0x100 )
          {
            v94 = &pszDest + (unsigned int)v91;
            v95 = (unsigned int)(256 - v91);
            if ( (_DWORD)v91 != 256 )
            {
              if ( v95 > 0x7FFFFFFF )
              {
                *v94 = 0;
              }
              else
              {
                v96 = 4 - v95;
                v97 = v58 - v94;
                do
                {
                  if ( !(v95 + v96) )
                    break;
                  v98 = v94[v97];
                  if ( !v98 )
                    break;
                  *v94++ = v98;
                  --v95;
                }
                while ( v95 );
                v99 = v94 - 1;
                if ( v95 )
                  v99 = v94;
                *v99 = 0;
              }
            }
            LODWORD(v91) = v91 + 4;
            v58 = (char *)(*(_QWORD *)(a1 + 120) + 4LL);
            *(_QWORD *)(a1 + 120) = v58;
            if ( --v93 && (v101 = v91 + 1, (unsigned int)(v91 + 1) < 0x100) )
            {
              v55 = (_DWORD)v91 == 256;
              v102 = (unsigned int)(256 - v91);
              v103 = &pszDest + (unsigned int)v91;
              if ( !v55 )
              {
                if ( v102 > 0x7FFFFFFF )
                {
                  *v103 = 0;
                }
                else
                {
                  v104 = 2147483646 - v102;
                  v105 = (char *)("." - v103);
                  do
                  {
                    if ( !(v102 + v104) )
                      break;
                    v106 = v103[(_QWORD)v105];
                    if ( !v106 )
                      break;
                    *v103++ = v106;
                    --v102;
                  }
                  while ( v102 );
                  v107 = v103 - 1;
                  if ( v102 )
                    v107 = v103;
                  *v107 = 0;
                }
              }
              v58 = *(char **)(a1 + 120);
              LODWORD(v91) = v101;
            }
            else if ( !v93 )
            {
              goto LABEL_121;
            }
          }
          goto LABEL_268;
        }
        v110 = (unsigned __int8 *)(v58 + 1);
        v58 += 2;
        *(_QWORD *)(a1 + 120) = v110;
        v93 = *v110;
        *(_QWORD *)(a1 + 120) = v58;
        if ( v93 )
          goto LABEL_171;
      }
      else
      {
        *(_QWORD *)(a1 + 120) = v58 + 1;
      }
    }
LABEL_121:
    if ( v67 || (gDebugger & 0xD0) == 0 )
    {
      v77 = v67;
      if ( v67 )
      {
LABEL_130:
        Field = v77;
        if ( !v77 )
        {
          for ( k = v59; *(_WORD *)(k + 66) == 128; k = *(_QWORD *)(k + 80) )
            ;
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(k + 112));
          if ( *(_WORD *)(k + 66) == 8 )
          {
            Field = PushCall((_QWORD *)a1, k, v137);
          }
          else
          {
            v81 = k + 64;
            Field = 0;
            while ( 1 )
            {
              while ( 1 )
              {
                v82 = *(_WORD *)(v81 + 2);
                if ( v82 != 128 )
                  break;
                v81 = *(_QWORD *)(v81 + 16) + 64LL;
              }
              if ( v82 != 129 )
                break;
              v81 = *(_QWORD *)(v81 + 16);
            }
            if ( v82 == 5 )
            {
              v108 = HeapAlloc(a1 + 480, 1297237576LL, 48LL);
              if ( v108 )
              {
                v109 = v137;
                *(_QWORD *)(v108 + 8) = *(_QWORD *)(a1 + 416);
                *(_QWORD *)(a1 + 416) = v108;
                *(_QWORD *)(v108 + 24) = AccFieldUnit;
                *(_DWORD *)v108 = 1430668097;
                *(_QWORD *)(v108 + 32) = v81;
                *(_DWORD *)(v108 + 16) = 0x10000;
                *(_QWORD *)(v108 + 40) = v109;
              }
              else
              {
                Field = -1072431102;
                LogError(-1072431102);
                AcpiDiagTraceAmlError(a1, -1072431102);
                PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
              }
            }
            else if ( v82 == 14 )
            {
              Field = ReadField(a1, v81, *(_QWORD *)(v81 + 32) + 12LL, v137);
            }
            else
            {
              v83 = v137;
              if ( v137 != v81 )
              {
                *(_OWORD *)v137 = *(_OWORD *)v81;
                *(_OWORD *)(v83 + 16) = *(_OWORD *)(v81 + 16);
                *(_QWORD *)(v83 + 32) = *(_QWORD *)(v81 + 32);
                if ( (*(_BYTE *)v81 & 1) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v81 + 8) + 8LL));
                }
                else if ( *(_QWORD *)(v81 + 32) )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v81 + 8));
                  *(_WORD *)v83 |= 1u;
                  *(_QWORD *)(v83 + 8) = v81;
                }
              }
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("=");
                PrintObject(v83);
              }
            }
          }
          DereferenceObjectEx(k);
          DereferenceObjectEx(v59);
        }
        return Field;
      }
    }
    else
    {
      ConPrintf("%s");
    }
    do
      ++v61;
    while ( *(&pszDest + v61) );
    if ( v61 + 1 >= 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v61 + 1, 1768973121LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = P;
    }
    memmove(Pool2, &pszDest, v61);
    Pool2[v61] = 0;
    v79 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    Field = GetNameSpaceObjectNoLock(Pool2, v60, &v144, 0);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v79);
    if ( P != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v77 = Field;
    if ( Field == -1073741772 )
    {
      LogError(-1073741772);
      AcpiDiagTraceAmlError(a1, -1073741772);
      PrintDebugMessage(0x78u, &pszDest, 0LL, 0LL, 0LL);
      return Field;
    }
    v59 = v144;
    goto LABEL_130;
  }
  if ( (v28 & 0x40) != 0 )
  {
    Field = -1072431098;
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    PrintDebugMessage(0x85u, 0LL, 0LL, 0LL, 0LL);
    return Field;
  }
  *(_QWORD *)(a1 + 120) = v12 + 1;
  v29 = HeapAlloc(a1 + 480, 1297237576LL, 96LL);
  v30 = v29;
  if ( !v29 )
  {
    Field = -1072431102;
    LogError(-1072431102);
    AcpiDiagTraceAmlError(a1, -1072431102);
    v53 = 153;
    goto LABEL_71;
  }
  *(_QWORD *)(v29 + 8) = *(_QWORD *)(a1 + 416);
  Field = 0;
  *(_QWORD *)(a1 + 416) = v29;
  *(_DWORD *)v29 = 1297237332;
  *(_QWORD *)(v29 + 24) = ParseTerm;
  *(_QWORD *)(v29 + 32) = v9;
  *(_QWORD *)(v29 + 48) = a2;
  *(_QWORD *)(v29 + 56) = v11;
  *(_QWORD *)(v29 + 88) = a3;
  v31 = *(_QWORD *)(v11 + 16);
  if ( !v31 )
  {
    *(_DWORD *)(v30 + 76) = 0;
    return Field;
  }
  v32 = -1LL;
  do
    ++v32;
  while ( *(_BYTE *)(v31 + v32) );
  *(_DWORD *)(v30 + 76) = v32;
  if ( (_DWORD)v32 )
  {
    v33 = *(_QWORD *)(a1 + 320);
    v34 = 0LL;
    v35 = 40 * v32 + 16;
    v36 = 0LL;
    if ( v35 >= 40 * (int)v32 )
    {
      if ( v35 < 0x20 )
      {
        v37 = 39;
        goto LABEL_35;
      }
      v37 = 40 * v32 + 23;
      if ( v35 + 7 >= v35 )
      {
LABEL_35:
        v38 = v37 & 0xFFFFFFF8;
        v39 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v40 = v33;
        byte_14008EB20 = v39;
        v137 = v33;
        v41 = v33;
        v42 = v33;
        v43 = (__int64 **)v33;
        while ( 2 )
        {
          if ( v42 )
          {
            v44 = v43[5];
            v43 += 5;
            v36 = v41;
            while ( 1 )
            {
              v34 = v44 - 2;
              if ( v43 == (__int64 **)(v34 + 2) )
              {
                v34 = 0LL;
                goto LABEL_40;
              }
              if ( v38 <= *((_DWORD *)v34 + 1) )
                break;
              v44 = (__int64 *)v34[2];
            }
            if ( v34 )
            {
              v116 = v34[2];
              if ( *(__int64 **)(v116 + 8) != v34 + 2 )
                goto LABEL_256;
              v117 = (_QWORD *)v34[3];
              if ( (__int64 *)*v117 != v34 + 2 )
                goto LABEL_256;
              *v117 = v116;
              *(_QWORD *)(v116 + 8) = v117;
              v47 = v38;
              if ( *((unsigned int *)v34 + 1) >= (unsigned __int64)v38 + 32 )
              {
                v118 = (__int64 **)((char *)v34 + v38);
                *(_DWORD *)v118 = 0;
                v119 = *((_DWORD *)v34 + 1) - v38;
                v118[1] = (__int64 *)v40;
                *((_DWORD *)v118 + 1) = v119;
                *((_DWORD *)v34 + 1) = v38;
                for ( m = *v43; m != (__int64 *)v43; m = (__int64 *)*m )
                {
                  if ( v118 + 2 < (__int64 **)m )
                    break;
                }
                v121 = (__int64 **)m[1];
                v122 = (__int64 *)(v118 + 2);
                if ( *v121 != m )
                  goto LABEL_256;
                v118[3] = (__int64 *)v121;
                *v122 = (__int64)m;
                *v121 = v122;
                m[1] = (__int64)v122;
                v123 = (_QWORD *)*v122;
                v124 = *v122 - 16;
                if ( (__int64 **)*v122 != v43 )
                {
                  v130 = *((unsigned int *)v118 + 1);
                  if ( (__int64 **)v124 == (__int64 **)((char *)v118 + v130) )
                  {
                    *((_DWORD *)v118 + 1) = v130 + *(_DWORD *)(v124 + 4);
                    v131 = *v123;
                    if ( *(_QWORD **)(*v123 + 8LL) == v123 )
                    {
                      v132 = (_QWORD *)v123[1];
                      if ( (_QWORD *)*v132 == v123 )
                      {
                        *v132 = v131;
                        *(_QWORD *)(v131 + 8) = v132;
                        goto LABEL_251;
                      }
                    }
LABEL_256:
                    __fastfail(3u);
                  }
                }
LABEL_251:
                v125 = (__int64 **)v118[3];
                v126 = v125 - 2;
                if ( v125 != v43 )
                {
                  v133 = *((unsigned int *)v126 + 1);
                  if ( v118 == (__int64 **)((char *)v126 + v133) )
                  {
                    *((_DWORD *)v126 + 1) = *((_DWORD *)v118 + 1) + v133;
                    v134 = (__int64 *)*v122;
                    if ( *(__int64 **)(*v122 + 8) != v122 )
                      goto LABEL_256;
                    v135 = (__int64 **)v118[3];
                    if ( *v135 != v122 )
                      goto LABEL_256;
                    *v135 = v134;
                    v118 = v126;
                    v134[1] = (__int64)v135;
                  }
                }
                if ( *(_QWORD *)(v40 + 32) <= (unsigned __int64)v118 + *((unsigned int *)v118 + 1) )
                {
                  *(_QWORD *)(v40 + 32) = v118;
                  v127 = v118 + 2;
                  v128 = *v127;
                  if ( *(_QWORD **)(*v127 + 8LL) != v127 )
                    goto LABEL_256;
                  v129 = (_QWORD *)v127[1];
                  if ( (_QWORD *)*v129 != v127 )
                    goto LABEL_256;
                  *v129 = v128;
                  *(_QWORD *)(v128 + 8) = v129;
                }
              }
              goto LABEL_57;
            }
LABEL_40:
            if ( v38 > *(_DWORD *)(v40 + 8) - *(_DWORD *)(v40 + 32) )
            {
              v42 = *(_QWORD *)(v40 + 24);
              v40 = v42;
              v137 = v42;
              v41 = v42;
              v43 = (__int64 **)v42;
              continue;
            }
            v34 = *(__int64 **)(v40 + 32);
            v47 = v38;
            *(_QWORD *)(v40 + 32) = (char *)v34 + v38;
            *((_DWORD *)v34 + 1) = v38;
            if ( v34 )
              goto LABEL_57;
          }
          break;
        }
        if ( v33 == gpheapGlobal )
        {
          if ( v38 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
          {
            v40 = v38 % (unsigned int)gdwGlobalHeapBlkSize;
            if ( (unsigned int)gdwGlobalHeapBlkSize * (v38 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
            {
              if ( v38 > 0x800000 )
                goto LABEL_58;
              LODWORD(gdwGlobalHeapBlkSize) = v38;
            }
            else
            {
              LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v38 / (unsigned int)gdwGlobalHeapBlkSize + 1);
            }
          }
          v100 = NewGlobalHeap(&v137, v40, v43, v41);
        }
        else
        {
          v100 = NewLocalHeap(&v137);
        }
        if ( !v100 )
        {
          v40 = v137;
          v47 = v38;
          *(_QWORD *)(v137 + 16) = v33;
          *(_QWORD *)(v36 + 24) = v40;
          v34 = *(__int64 **)(v40 + 32);
          *(_QWORD *)(v40 + 32) = (char *)v34 + v38;
          *((_DWORD *)v34 + 1) = v38;
          if ( v34 )
          {
LABEL_57:
            v34[1] = v40;
            *(_DWORD *)v34 = 1413563464;
            memset(v34 + 2, 0, v47 - 16);
          }
        }
LABEL_58:
        KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
        v48 = v34 + 2;
        if ( !v34 )
          v48 = 0LL;
        *(_QWORD *)(v30 + 80) = v48;
        if ( v48 )
        {
          memset(v48, 0, 40LL * *(unsigned int *)(v30 + 76));
          return Field;
        }
        goto LABEL_70;
      }
    }
    *(_QWORD *)(v30 + 80) = 0LL;
LABEL_70:
    Field = -1073741670;
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v53 = 154;
LABEL_71:
    PrintDebugMessage(v53, 0LL, 0LL, 0LL, 0LL);
  }
  return Field;
}
