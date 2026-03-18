/*
 * XREFs of PushTerm @ 0x140002590
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 * Callees:
 *     NewLocalHeap @ 0x140002E5C (NewLocalHeap.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     NewGlobalHeap @ 0x14006F800 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall PushTerm(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // esi
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  KIRQL v13; // al
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v28; // r14
  unsigned int v29; // ecx
  __int64 *v30; // rdi
  unsigned int v31; // eax
  _QWORD *v32; // r13
  int v33; // ebp
  unsigned int v34; // ebp
  KIRQL v35; // al
  __int64 v36; // r9
  __int64 v37; // rdx
  _QWORD *v38; // r10
  _QWORD *v39; // rax
  __int64 **v40; // r8
  __int64 *v41; // rdi
  void *v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // r9
  unsigned int v51; // eax
  char *v52; // r9
  __int64 *v53; // rax
  __int64 **v54; // rcx
  __int64 *v55; // r10
  _QWORD *v56; // r11
  __int64 v57; // rcx
  _QWORD *v58; // rax
  _QWORD *v59; // r11
  _QWORD *v60; // r9
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  __int64 *v67; // rcx
  __int64 **v68; // rax
  __int64 v69; // r9
  __int64 **v70; // rcx
  __int64 **v71; // r10
  unsigned int v72; // eax
  __int64 *i; // rax
  __int64 **v74; // rcx
  __int64 *v75; // r11
  _QWORD *v76; // r14
  __int64 v77; // rcx
  __int64 **v78; // rax
  __int64 **v79; // rbp
  _QWORD *v80; // r10
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rbp
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 *v87; // rcx
  __int64 **v88; // rax
  _QWORD *v89; // [rsp+40h] [rbp-158h] BYREF
  _QWORD *v90; // [rsp+48h] [rbp-150h]
  char pszDest[256]; // [rsp+60h] [rbp-138h] BYREF

  v5 = 0;
  v90 = a1;
  v7 = a1 + 60;
  v8 = 0LL;
  v9 = 0LL;
  v13 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v14 = v7;
  v89 = v7;
  byte_14008EB20 = v13;
  v15 = v7;
  v16 = v7;
  v17 = (unsigned __int64)v7;
  while ( 2 )
  {
    if ( v16 )
    {
      v18 = *(_QWORD *)(v17 + 40);
      v17 += 40LL;
      v9 = v15;
      while ( 1 )
      {
        v8 = v18 - 16;
        if ( v17 == v8 + 16 )
        {
          v8 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v8 + 4) >= 0x70u )
          break;
        v18 = *(_QWORD *)(v8 + 16);
      }
      if ( v8 )
      {
        v49 = *(_QWORD *)(v8 + 16);
        if ( *(_QWORD *)(v49 + 8) != v8 + 16 )
          goto LABEL_88;
        v50 = *(_QWORD **)(v8 + 24);
        if ( *v50 != v8 + 16 )
          goto LABEL_88;
        *v50 = v49;
        *(_QWORD *)(v49 + 8) = v50;
        v51 = *(_DWORD *)(v8 + 4);
        if ( v51 >= 0x90 )
        {
          v52 = (char *)(v8 + 112);
          *(_DWORD *)(v8 + 112) = 0;
          *(_DWORD *)(v8 + 116) = v51 - 112;
          *(_QWORD *)(v8 + 120) = v14;
          *(_DWORD *)(v8 + 4) = 112;
          v53 = *(__int64 **)v17;
          if ( *(_QWORD *)v17 != v17 )
          {
            do
            {
              if ( v8 + 128 < (unsigned __int64)v53 )
                break;
              v53 = (__int64 *)*v53;
            }
            while ( v53 != (__int64 *)v17 );
          }
          v54 = (__int64 **)v53[1];
          v55 = (__int64 *)(v8 + 128);
          if ( *v54 != v53 )
            goto LABEL_88;
          *(_QWORD *)(v8 + 136) = v54;
          *v55 = (__int64)v53;
          *v54 = v55;
          v53[1] = (__int64)v55;
          v56 = (_QWORD *)*v55;
          v57 = *v55 - 16;
          if ( *v55 != v17 )
          {
            v63 = *(unsigned int *)(v8 + 116);
            if ( (char *)v57 == &v52[v63] )
            {
              *(_DWORD *)(v8 + 116) = v63 + *(_DWORD *)(v57 + 4);
              v64 = *v56;
              if ( *(_QWORD **)(*v56 + 8LL) != v56 )
                goto LABEL_88;
              v65 = (_QWORD *)v56[1];
              if ( (_QWORD *)*v65 != v56 )
                goto LABEL_88;
              *v65 = v64;
              *(_QWORD *)(v64 + 8) = v65;
            }
          }
          v58 = *(_QWORD **)(v8 + 136);
          v59 = v58 - 2;
          if ( v58 != (_QWORD *)v17 )
          {
            v66 = *((unsigned int *)v59 + 1);
            if ( v52 == (char *)v59 + v66 )
            {
              *((_DWORD *)v59 + 1) = *(_DWORD *)(v8 + 116) + v66;
              v67 = (__int64 *)*v55;
              if ( *(__int64 **)(*v55 + 8) != v55 )
                goto LABEL_88;
              v68 = *(__int64 ***)(v8 + 136);
              if ( *v68 != v55 )
                goto LABEL_88;
              *v68 = v67;
              v52 = (char *)v59;
              v67[1] = (__int64)v68;
            }
          }
          if ( v14[4] <= (unsigned __int64)&v52[*((unsigned int *)v52 + 1)] )
          {
            v14[4] = v52;
            v60 = v52 + 16;
            v61 = *v60;
            if ( *(_QWORD **)(*v60 + 8LL) != v60 )
              goto LABEL_88;
            v62 = (_QWORD *)v60[1];
            if ( (_QWORD *)*v62 != v60 )
              goto LABEL_88;
            *v62 = v61;
            *(_QWORD *)(v61 + 8) = v62;
          }
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*((_DWORD *)v14 + 2) - *((_DWORD *)v14 + 8)) < 0x70 )
      {
        v16 = (_QWORD *)v14[3];
        v14 = v16;
        v89 = v16;
        v15 = v16;
        v17 = (unsigned __int64)v16;
        continue;
      }
      v8 = v14[4];
      v14[4] = v8 + 112;
      *(_DWORD *)(v8 + 4) = 112;
      if ( v8 )
        goto LABEL_11;
    }
    break;
  }
  if ( v7 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0xA8 )
    {
      v17 = 0x70 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x70 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 112;
    }
    v46 = NewGlobalHeap(&v89, v17, v14, v15);
  }
  else
  {
    v46 = NewLocalHeap(&v89, v17, v14, v15);
  }
  if ( !v46 )
  {
    v14 = v89;
    v89[2] = v7;
    v9[3] = v14;
    v8 = v14[4];
    v14[4] = v8 + 112;
    *(_DWORD *)(v8 + 4) = 112;
    if ( v8 )
    {
LABEL_11:
      *(_DWORD *)v8 = 1297237576;
      *(_QWORD *)(v8 + 8) = v14;
      *(_OWORD *)(v8 + 16) = 0LL;
      *(_OWORD *)(v8 + 32) = 0LL;
      *(_OWORD *)(v8 + 48) = 0LL;
      *(_OWORD *)(v8 + 64) = 0LL;
      *(_OWORD *)(v8 + 80) = 0LL;
      *(_OWORD *)(v8 + 96) = 0LL;
    }
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  v19 = v8 + 16;
  if ( !v8 )
    v19 = 0LL;
  if ( !v19 )
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  *(_QWORD *)(v19 + 8) = a1[52];
  a1[52] = v19;
  *(_QWORD *)(v19 + 24) = ParseTerm;
  v20 = v8 + 48;
  *(_DWORD *)v19 = 1297237332;
  if ( !v8 )
    v20 = 32LL;
  *(_QWORD *)v20 = a2;
  v21 = v8 + 64;
  if ( !v8 )
    v21 = 48LL;
  *(_QWORD *)v21 = a3;
  v22 = v8 + 72;
  if ( !v8 )
    v22 = 56LL;
  v23 = v8 + 104;
  *(_QWORD *)v22 = a4;
  if ( !v8 )
    v23 = 88LL;
  *(_QWORD *)v23 = a5;
  v24 = *(_QWORD *)(a4 + 16);
  if ( !v24 )
  {
    v48 = v8 + 92;
    if ( !v8 )
      v48 = 76LL;
    *(_DWORD *)v48 = 0;
    return v5;
  }
  v25 = -1LL;
  do
    ++v25;
  while ( *(_BYTE *)(v24 + v25) );
  v26 = v8 + 92;
  if ( !v8 )
    v26 = 76LL;
  *(_DWORD *)v26 = v25;
  if ( !(_DWORD)v25 )
    return v5;
  v28 = (_QWORD *)a1[40];
  v29 = 40 * v25;
  v30 = 0LL;
  v31 = 40 * v25 + 16;
  v32 = 0LL;
  if ( v31 >= v29 )
  {
    if ( v31 < 0x20 )
    {
      v33 = 39;
      goto LABEL_33;
    }
    v33 = v31 + 7;
    if ( v31 + 7 >= v31 )
    {
LABEL_33:
      v34 = v33 & 0xFFFFFFF8;
      v35 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v37 = (__int64)v28;
      byte_14008EB20 = v35;
      v89 = v28;
      v38 = v28;
      v39 = v28;
      v40 = (__int64 **)v28;
      while ( 2 )
      {
        if ( v39 )
        {
          v41 = v40[5];
          v40 += 5;
          v32 = v38;
          while ( 1 )
          {
            v30 = v41 - 2;
            if ( v40 == (__int64 **)(v30 + 2) )
            {
              v30 = 0LL;
              goto LABEL_38;
            }
            if ( v34 <= *((_DWORD *)v30 + 1) )
              break;
            v41 = (__int64 *)v30[2];
          }
          if ( v30 )
          {
            v69 = v30[2];
            if ( *(__int64 **)(v69 + 8) != v30 + 2 )
              goto LABEL_88;
            v70 = (_QWORD *)v30[3];
            if ( (__int64 *)*v70 != v30 + 2 )
              goto LABEL_88;
            *v70 = v69;
            *(_QWORD *)(v69 + 8) = v70;
            v36 = v34;
            if ( *((unsigned int *)v30 + 1) >= (unsigned __int64)v34 + 32 )
            {
              v71 = (__int64 **)((char *)v30 + v34);
              *(_DWORD *)v71 = 0;
              v72 = *((_DWORD *)v30 + 1) - v34;
              v71[1] = (__int64 *)v37;
              *((_DWORD *)v71 + 1) = v72;
              *((_DWORD *)v30 + 1) = v34;
              for ( i = *v40; i != (__int64 *)v40; i = (__int64 *)*i )
              {
                if ( v71 + 2 < (__int64 **)i )
                  break;
              }
              v74 = (__int64 **)i[1];
              v75 = (__int64 *)(v71 + 2);
              if ( *v74 != i )
                goto LABEL_88;
              v71[3] = (__int64 *)v74;
              *v75 = (__int64)i;
              *v74 = v75;
              i[1] = (__int64)v75;
              v76 = (_QWORD *)*v75;
              v77 = *v75 - 16;
              if ( (__int64 **)*v75 != v40 )
              {
                v83 = *((unsigned int *)v71 + 1);
                if ( (__int64 **)v77 == (__int64 **)((char *)v71 + v83) )
                {
                  *((_DWORD *)v71 + 1) = v83 + *(_DWORD *)(v77 + 4);
                  v84 = *v76;
                  if ( *(_QWORD **)(*v76 + 8LL) == v76 )
                  {
                    v85 = (_QWORD *)v76[1];
                    if ( (_QWORD *)*v85 == v76 )
                    {
                      *v85 = v84;
                      *(_QWORD *)(v84 + 8) = v85;
                      goto LABEL_107;
                    }
                  }
LABEL_88:
                  __fastfail(3u);
                }
              }
LABEL_107:
              v78 = (__int64 **)v71[3];
              v79 = v78 - 2;
              if ( v78 != v40 )
              {
                v86 = *((unsigned int *)v79 + 1);
                if ( v71 == (__int64 **)((char *)v79 + v86) )
                {
                  *((_DWORD *)v79 + 1) = *((_DWORD *)v71 + 1) + v86;
                  v87 = (__int64 *)*v75;
                  if ( *(__int64 **)(*v75 + 8) != v75 )
                    goto LABEL_88;
                  v88 = (__int64 **)v71[3];
                  if ( *v88 != v75 )
                    goto LABEL_88;
                  *v88 = v87;
                  v71 = v79;
                  v87[1] = (__int64)v88;
                }
              }
              if ( *(_QWORD *)(v37 + 32) <= (unsigned __int64)v71 + *((unsigned int *)v71 + 1) )
              {
                *(_QWORD *)(v37 + 32) = v71;
                v80 = v71 + 2;
                v81 = *v80;
                if ( *(_QWORD **)(*v80 + 8LL) != v80 )
                  goto LABEL_88;
                v82 = (_QWORD *)v80[1];
                if ( (_QWORD *)*v82 != v80 )
                  goto LABEL_88;
                *v82 = v81;
                *(_QWORD *)(v81 + 8) = v82;
              }
            }
            goto LABEL_43;
          }
LABEL_38:
          if ( v34 > *(_DWORD *)(v37 + 8) - *(_DWORD *)(v37 + 32) )
          {
            v39 = *(_QWORD **)(v37 + 24);
            v37 = (__int64)v39;
            v89 = v39;
            v38 = v39;
            v40 = (__int64 **)v39;
            continue;
          }
          v30 = *(__int64 **)(v37 + 32);
          v36 = v34;
          *(_QWORD *)(v37 + 32) = (char *)v30 + v34;
          *((_DWORD *)v30 + 1) = v34;
          if ( v30 )
            goto LABEL_43;
        }
        break;
      }
      if ( v28 == (_QWORD *)gpheapGlobal )
      {
        if ( v34 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
        {
          v37 = v34 % (unsigned int)gdwGlobalHeapBlkSize;
          if ( (unsigned int)gdwGlobalHeapBlkSize * (v34 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
          {
            if ( v34 > 0x800000 )
              goto LABEL_44;
            LODWORD(gdwGlobalHeapBlkSize) = v34;
          }
          else
          {
            LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v34 / (unsigned int)gdwGlobalHeapBlkSize + 1);
          }
        }
        v47 = NewGlobalHeap(&v89, v37, v40, v36);
      }
      else
      {
        v47 = NewLocalHeap(&v89, v37, v40, v36);
      }
      if ( !v47 )
      {
        v37 = (__int64)v89;
        v36 = v34;
        v89[2] = v28;
        v32[3] = v37;
        v30 = *(__int64 **)(v37 + 32);
        *(_QWORD *)(v37 + 32) = (char *)v30 + v34;
        *((_DWORD *)v30 + 1) = v34;
        if ( v30 )
        {
LABEL_43:
          v30[1] = v37;
          *(_DWORD *)v30 = 1413563464;
          memset(v30 + 2, 0, v36 - 16);
        }
      }
LABEL_44:
      KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
      v42 = v30 + 2;
      v43 = v8 + 96;
      if ( !v30 )
        v42 = 0LL;
      if ( !v8 )
        v43 = 80LL;
      *(_QWORD *)v43 = v42;
      if ( v42 )
      {
        v44 = v8 + 92;
        if ( !v8 )
          v44 = 76LL;
        memset(v42, 0, 40LL * *(unsigned int *)v44);
        return v5;
      }
      goto LABEL_55;
    }
  }
  v45 = v8 + 96;
  if ( !v8 )
    v45 = 80LL;
  *(_QWORD *)v45 = 0LL;
LABEL_55:
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(v90, 3221225626LL);
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_14008D708, 0LL, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 154, 0LL, 0LL, 0LL, 0LL);
      DbgCommandString("ACPI", pszDest);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 154, 0LL, 0LL, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
  return (unsigned int)-1073741670;
}
