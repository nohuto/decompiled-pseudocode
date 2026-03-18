/*
 * XREFs of ParseSuperName @ 0x140001A40
 * Callers:
 *     ParseArg @ 0x140006850 (ParseArg.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1400019D0 (RtlStringCchCopyA.c)
 *     PushTerm @ 0x140002590 (PushTerm.c)
 *     GetBaseData @ 0x140002FE0 (GetBaseData.c)
 *     ParseNameTail @ 0x140003020 (ParseNameTail.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     GetNameSpaceObjectNoLock @ 0x140007700 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // edi
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rbx
  size_t v16; // rbx
  __int64 v17; // rdx
  char *p_Src; // rcx
  char v19; // al
  char *v20; // rax
  char *v21; // r9
  int NameSpaceObjectNoLock; // r14d
  __int64 v23; // rcx
  char v24; // al
  int v25; // r15d
  char *v26; // rdx
  unsigned __int64 v27; // r10
  __int64 v28; // r9
  char v29; // al
  char *v30; // rax
  _BYTE *Pool2; // rsi
  KIRQL v32; // bl
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // r8d
  __int64 v38; // rcx
  int v39; // edx
  int v40; // ecx
  __int64 v41; // rcx
  int v42; // ecx
  int v43; // eax
  unsigned __int8 *v44; // rbx
  const void *v45; // rsi
  int v46; // edx
  __int64 v47; // rcx
  int v48; // r8d
  int v49; // ecx
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // r10d
  bool v53; // zf
  unsigned __int64 v54; // rdx
  char *v55; // rcx
  unsigned __int64 v56; // r8
  char *v57; // r9
  char v58; // al
  char *v59; // rax
  __int64 v60; // rdx
  int v61; // r15d
  char *v62; // rcx
  unsigned __int64 v63; // r9
  __int64 v64; // r10
  char v65; // al
  char *v66; // rax
  int v67; // r11d
  char *v68; // rcx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdx
  char *v71; // r9
  char v72; // al
  char *v73; // rax
  unsigned int v74; // eax
  unsigned __int8 *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  char *v78; // rdx
  _BYTE *v79; // rax
  unsigned int i; // r15d
  _BYTE *v81; // rcx
  char v82; // [rsp+40h] [rbp-C0h]
  __int64 v83; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v85; // [rsp+60h] [rbp-A0h]
  int v86; // [rsp+68h] [rbp-98h]
  int v87; // [rsp+6Ch] [rbp-94h]
  __int64 *v88; // [rsp+70h] [rbp-90h]
  __int64 v89; // [rsp+78h] [rbp-88h]
  __int64 v90; // [rsp+80h] [rbp-80h] BYREF
  __int16 v91; // [rsp+88h] [rbp-78h]
  __int64 v92; // [rsp+90h] [rbp-70h] BYREF
  __int16 v93; // [rsp+98h] [rbp-68h]
  char Src; // [rsp+A0h] [rbp-60h] BYREF
  char v95; // [rsp+A1h] [rbp-5Fh] BYREF
  _BYTE P[128]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = (unsigned __int8 *)a1[15];
  v5 = 0;
  v92 = a2;
  v82 = a3;
  v83 = 0LL;
  v9 = *v4;
  v10 = v4 + 1;
  v11 = 0LL;
  if ( !(_BYTE)v9 )
  {
    a1[15] = v10;
    return v5;
  }
  if ( (_BYTE)v9 == 91 && *v10 == 49 )
  {
    a1[15] = v4 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v5;
  }
  v12 = (__int64)*(&OpcodeTable + v9);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 28);
    if ( (v13 & 0x20) == 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v76 = a1[12];
        v77 = (unsigned int)(v9 - 104);
        a1[15] = v10;
        if ( (unsigned int)v77 >= *(_DWORD *)(v76 + 60) )
        {
          LogError(3222536197LL);
          AcpiDiagTraceAmlError(a1, 3222536197LL);
          PrintDebugMessage(142, v77, 0, 0, 0LL);
          return (unsigned int)-1072431099;
        }
        else
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Arg%d");
          *(_WORD *)(a2 + 2) = 129;
          *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v77);
        }
        return v5;
      }
      if ( (v13 & 4) != 0 )
      {
        a1[15] = v10;
        v14 = (unsigned int)(v9 - 96);
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Local%d");
        *(_WORD *)(a2 + 2) = 129;
        *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v14 + 4 * v14 + 9);
        return v5;
      }
      if ( (v13 & 0x80u) != 0 )
      {
        v74 = PushTerm((_DWORD)a1, (_DWORD)v4, a4, v12, a2);
        ++a1[15];
        return v74;
      }
      LogError(3222536199LL);
      LODWORD(v83) = -1072431097;
      v90 = 0x41002F004ELL;
      v91 = 0;
      v46 = 3;
      v47 = a1[10];
      v48 = 3;
      v92 = 0x41002F004ELL;
      v93 = 0;
      if ( v47 )
      {
        v49 = *(_DWORD *)(v47 + 40);
        v48 = 5;
        LOWORD(v92) = (char)v49;
        WORD1(v92) = SBYTE1(v49);
        WORD2(v92) = SBYTE2(v49);
        HIWORD(v92) = SHIBYTE(v49);
        v93 = 0;
      }
      v50 = a1[9];
      if ( v50 )
      {
        v51 = *(_DWORD *)(v50 + 40);
        v46 = 5;
        LOWORD(v90) = (char)v51;
        WORD1(v90) = SBYTE1(v51);
        WORD2(v90) = SBYTE2(v51);
        HIWORD(v90) = SHIBYTE(v51);
        v91 = 0;
      }
      UserData.Ptr = (unsigned __int64)&v92;
      UserData.Size = 2 * v48;
      v85 = &v90;
      v43 = 2 * v46;
      goto LABEL_58;
    }
    v16 = -1LL;
    v90 = a1[10];
    if ( (_BYTE)v9 == 92 )
    {
      v17 = 256LL;
      a3 = "\\" - &Src;
      p_Src = &Src;
      do
      {
        if ( v17 == -2147483390 )
          break;
        v19 = p_Src[a3];
        if ( !v19 )
          break;
        *p_Src++ = v19;
        --v17;
      }
      while ( v17 );
      v20 = p_Src - 1;
      v21 = (char *)(v4 + 1);
      NameSpaceObjectNoLock = 0;
      if ( v17 )
        v20 = p_Src;
      a1[15] = v21;
      v23 = -1LL;
      *v20 = 0;
      do
        ++v23;
      while ( *(&Src + v23) );
      v24 = *v21;
      if ( !*v21 )
      {
        a1[15] = v4 + 2;
        goto LABEL_37;
      }
      if ( v24 != 47 )
      {
        if ( v24 == 46 )
        {
          v21 = (char *)(v4 + 2);
          v25 = 2;
          a1[15] = v4 + 2;
        }
        else
        {
          v25 = 1;
        }
LABEL_25:
        while ( (unsigned __int64)(unsigned int)v23 + 4 < 0x100 )
        {
          v26 = &Src + (unsigned int)v23;
          a3 = (unsigned int)(256 - v23);
          if ( (_DWORD)v23 != 256 )
          {
            if ( a3 > 0x7FFFFFFF )
            {
              *v26 = 0;
            }
            else
            {
              v27 = 4 - a3;
              v28 = v21 - v26;
              do
              {
                if ( !(v27 + a3) )
                  break;
                v29 = v26[v28];
                if ( !v29 )
                  break;
                *v26++ = v29;
                --a3;
              }
              while ( a3 );
              v30 = v26 - 1;
              if ( a3 )
                v30 = v26;
              *v30 = 0;
            }
          }
          LODWORD(v23) = v23 + 4;
          v21 = (char *)(a1[15] + 4LL);
          a1[15] = v21;
          if ( --v25 && (v52 = v23 + 1, (unsigned int)(v23 + 1) < 0x100) )
          {
            v53 = (_DWORD)v23 == 256;
            v54 = (unsigned int)(256 - v23);
            v55 = &Src + (unsigned int)v23;
            if ( !v53 )
            {
              if ( v54 > 0x7FFFFFFF )
              {
                *v55 = 0;
              }
              else
              {
                v56 = 2147483646 - v54;
                v57 = (char *)("." - v55);
                do
                {
                  if ( !(v56 + v54) )
                    break;
                  v58 = v57[(_QWORD)v55];
                  if ( !v58 )
                    break;
                  *v55++ = v58;
                  --v54;
                }
                while ( v54 );
                v59 = v55 - 1;
                if ( v54 )
                  v59 = v55;
                *v59 = 0;
              }
            }
            v21 = (char *)a1[15];
            LODWORD(v23) = v52;
          }
          else if ( !v25 )
          {
            goto LABEL_37;
          }
        }
LABEL_143:
        NameSpaceObjectNoLock = -1073741562;
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
        goto LABEL_37;
      }
      a1[15] = v4 + 2;
      v21 = (char *)(v4 + 3);
      v25 = v4[2];
      a1[15] = v4 + 3;
      if ( v25 )
        goto LABEL_25;
    }
    else if ( (_BYTE)v9 == 94 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++a1[15];
      v78 = &v95;
      v79 = (_BYTE *)a1[15];
      for ( i = 1; i < 0xFF; ++i )
      {
        v81 = v79;
        if ( *v79 != 94 )
          break;
        ++v79;
        *v78++ = 94;
        a1[15] = v79;
        v81 = v79;
      }
      *(&Src + i) = 0;
      if ( *v81 == 94 )
      {
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
        return (unsigned int)-1073741562;
      }
      NameSpaceObjectNoLock = ParseNameTail(a1, a1 + 15, &Src);
    }
    else
    {
      Src = 0;
      NameSpaceObjectNoLock = 0;
      v60 = -1LL;
      do
        ++v60;
      while ( *(&Src + v60) );
      if ( (_BYTE)v9 != 47 )
      {
        if ( (_BYTE)v9 == 46 )
        {
          ++v4;
          v61 = 2;
          a1[15] = v4;
        }
        else
        {
          v61 = 1;
        }
LABEL_83:
        while ( (unsigned __int64)(unsigned int)v60 + 4 < 0x100 )
        {
          v62 = &Src + (unsigned int)v60;
          a3 = (unsigned int)(256 - v60);
          if ( (_DWORD)v60 != 256 )
          {
            if ( a3 > 0x7FFFFFFF )
            {
              *v62 = 0;
            }
            else
            {
              v63 = 4 - a3;
              v64 = v4 - (unsigned __int8 *)v62;
              do
              {
                if ( !(v63 + a3) )
                  break;
                v65 = v62[v64];
                if ( !v65 )
                  break;
                *v62++ = v65;
                --a3;
              }
              while ( a3 );
              v66 = v62 - 1;
              if ( a3 )
                v66 = v62;
              *v66 = 0;
            }
          }
          v60 = (unsigned int)(v60 + 4);
          v4 = (unsigned __int8 *)(a1[15] + 4LL);
          a1[15] = v4;
          if ( --v61 && (v67 = v60 + 1, (unsigned int)(v60 + 1) < 0x100) )
          {
            v68 = &Src + v60;
            v69 = (unsigned int)(256 - v60);
            if ( (_DWORD)v60 != 256 )
            {
              if ( v69 > 0x7FFFFFFF )
              {
                *v68 = 0;
              }
              else
              {
                v70 = 2147483646 - v69;
                v71 = (char *)("." - v68);
                do
                {
                  if ( !(v70 + v69) )
                    break;
                  v72 = v68[(_QWORD)v71];
                  if ( !v72 )
                    break;
                  *v68++ = v72;
                  --v69;
                }
                while ( v69 );
                v73 = v68 - 1;
                if ( v69 )
                  v73 = v68;
                *v73 = 0;
              }
            }
            v4 = (unsigned __int8 *)a1[15];
            LODWORD(v60) = v67;
          }
          else if ( !v61 )
          {
            goto LABEL_37;
          }
        }
        goto LABEL_143;
      }
      v75 = v4 + 1;
      v4 += 2;
      a1[15] = v75;
      v61 = *v75;
      a1[15] = v4;
      if ( v61 )
        goto LABEL_83;
    }
LABEL_37:
    if ( !NameSpaceObjectNoLock )
    {
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("%s");
      do
        ++v16;
      while ( *(&Src + v16) );
      if ( v16 + 1 >= 0x80 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(64LL, v16 + 1, 1768973121LL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
      }
      else
      {
        Pool2 = P;
      }
      memmove(Pool2, &Src, v16);
      Pool2[v16] = 0;
      v32 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v90, &v83, 0LL);
      ExReleaseSpinLockShared(&ACPINamespaceLock, v32);
      if ( P != Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( NameSpaceObjectNoLock == -1073741772 )
      {
        if ( !v82 )
        {
          LogError(3221225524LL);
          AcpiDiagTraceAmlError(a1, 3221225524LL);
          PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
          return (unsigned int)-1073741772;
        }
        return v5;
      }
      v11 = v83;
    }
    v5 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock && v11 )
    {
      v33 = v92;
      v34 = v11;
      for ( *(_WORD *)(v92 + 2) = 128; *(_WORD *)(v34 + 66) == 128; v34 = *(_QWORD *)(v34 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 112));
      *(_QWORD *)(v33 + 16) = v34;
      DereferenceObjectEx(v11, v34, a3);
      DereferenceObjectEx(*(_QWORD *)(v33 + 16), v35, v36);
    }
    return v5;
  }
  LogError(3222536199LL);
  LODWORD(v83) = -1072431097;
  v90 = 0x41002F004ELL;
  v91 = 0;
  v37 = 3;
  v38 = a1[10];
  v39 = 3;
  v92 = 0x41002F004ELL;
  v93 = 0;
  if ( v38 )
  {
    v40 = *(_DWORD *)(v38 + 40);
    v39 = 5;
    LOWORD(v92) = (char)v40;
    WORD1(v92) = SBYTE1(v40);
    WORD2(v92) = SBYTE2(v40);
    HIWORD(v92) = SHIBYTE(v40);
    v93 = 0;
  }
  v41 = a1[9];
  if ( v41 )
  {
    v42 = *(_DWORD *)(v41 + 40);
    v37 = 5;
    LOWORD(v90) = (char)v42;
    WORD1(v90) = SBYTE1(v42);
    WORD2(v90) = SBYTE2(v42);
    HIWORD(v90) = SHIBYTE(v42);
    v91 = 0;
  }
  UserData.Ptr = (unsigned __int64)&v92;
  UserData.Size = 2 * v39;
  v85 = &v90;
  v43 = 2 * v37;
LABEL_58:
  v86 = v43;
  UserData.Reserved = 0;
  v88 = &v83;
  v87 = 0;
  v89 = 4LL;
  EtwWrite(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
  v44 = (unsigned __int8 *)a1[15];
  v45 = (const void *)*v44;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_14008D638, *v44, v44, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(&Src, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 141, v45, v44, 0LL, 0LL);
      DbgCommandString("ACPI", &Src);
      return (unsigned int)-1072431097;
    }
  }
  else
  {
    RtlStringCbPrintfA(&Src, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 141, v45, v44, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", &Src);
  }
  return (unsigned int)-1072431097;
}
