/*
 * XREFs of ParseTerm @ 0x140006120
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     ParseArg @ 0x140006850 (ParseArg.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseTerm(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // ecx
  _DWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v10; // r8
  _DWORD *v11; // rsi
  _DWORD *v12; // rsi
  __int64 v13; // rax
  void (__fastcall *v14)(__int64, __int64, __int64, __int64); // r10
  __int64 v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  _QWORD *i; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  _QWORD *j; // rax
  _QWORD *v33; // rcx
  _QWORD *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  unsigned __int8 *v42; // rax
  unsigned int v43; // r9d
  unsigned __int8 *v44; // r10
  unsigned int v45; // r8d
  unsigned __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r9
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  unsigned __int8 v59; // r11
  unsigned __int8 v60; // cl
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // ecx
  __int64 v65; // rcx
  int v66; // eax
  int v67; // ecx

  v3 = a3;
  if ( a3 )
    goto LABEL_27;
  v6 = *(_DWORD *)(a2 + 16);
  v7 = (_DWORD *)(a2 + 16);
  switch ( v6 & 0xF )
  {
    case 0:
      *v7 = v6 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        v64 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
        if ( v64 == 18 || v64 == 19 )
        {
          ++dword_14008EC34;
          PrintIndent(a1);
        }
        ConPrintf("%s");
        if ( *(_DWORD *)(a2 + 76) )
          ConPrintf("(");
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 28LL) & 1) != 0 )
      {
        v41 = (_QWORD *)(a2 + 40);
        if ( a2 != -40 )
          *v41 = *(_QWORD *)(a1 + 120);
        v42 = *(unsigned __int8 **)(a1 + 120);
        v43 = *v42;
        v44 = v42 + 1;
        *(_QWORD *)(a1 + 120) = v42 + 1;
        v45 = v43 >> 6;
        if ( (unsigned __int8)(v43 >> 6) )
        {
          v43 &= 0xFu;
          v59 = 0;
          do
          {
            v60 = v59++;
            v43 |= *v44++ << (8 * v60 + 4);
            *(_QWORD *)(a1 + 120) = v44;
          }
          while ( v59 < (unsigned __int8)v45 );
        }
        if ( a2 != -40 )
          *v41 += v43;
        if ( (gOverrideFlags & 4) == 0 )
        {
          v46 = *(_QWORD *)(a2 + 48);
          if ( v46 )
          {
            if ( *(_QWORD *)(a2 + 40) > v46 )
            {
              v3 = -1072431089;
              LogError(3222536207LL);
              AcpiDiagTraceAmlError(a1, 3222536207LL);
              PrintDebugMessage(143, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), 0, 0LL);
              return v3;
            }
          }
        }
      }
      do
      {
LABEL_5:
        while ( 1 )
        {
          v8 = *(unsigned int *)(a2 + 72);
          if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 76) )
            break;
          *(_DWORD *)(a2 + 72) = v8 + 1;
          if ( (gDebugger & 0xD0) != 0 && (_DWORD)v8 )
            ConPrintf(",");
          v3 = ParseArg(
                 a1,
                 *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL) + v8),
                 *(_QWORD *)(a2 + 80) + 40 * v8,
                 *(_QWORD *)(a2 + 48));
          if ( v3 || a2 != *(_QWORD *)(a1 + 416) )
            return v3;
        }
        if ( a2 != *(_QWORD *)(a1 + 416) )
          return v3;
      }
      while ( *(_DWORD *)(a2 + 72) < *(_DWORD *)(a2 + 76) );
      ++*(_DWORD *)(a2 + 16);
      v7 = (_DWORD *)(a2 + 16);
LABEL_19:
      v10 = *(_QWORD *)(a2 + 56);
      v11 = v7;
      ++*v7;
      if ( *(int *)(v10 + 28) < 0 )
      {
        if ( *(_QWORD *)(v10 + 32) )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))(v10 + 32))(
                 12LL,
                 1LL,
                 *(unsigned int *)(v10 + 8),
                 *(_QWORD *)(a2 + 64) + 120LL,
                 *(_DWORD *)(v10 + 40),
                 a1);
          v7 = v11;
          if ( v3 == 259 )
            return 32772;
        }
      }
      goto LABEL_20;
    case 1:
      goto LABEL_5;
    case 2:
      goto LABEL_19;
  }
  if ( (v6 & 0xF) != 3 )
  {
    if ( (v6 & 0xF) == 4 )
      goto LABEL_24;
    if ( (v6 & 0xF) == 5 )
      goto LABEL_27;
    return v3;
  }
LABEL_20:
  ++*v7;
  v12 = v7;
  if ( (gDebugger & 0xD0) != 0 && *(_DWORD *)(a2 + 76) )
    ConPrintf(")");
  v7 = v12;
  if ( !*(_QWORD *)(*(_QWORD *)(a2 + 56) + 48LL)
    || (v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a2 + 56) + 48LL))(a1, a2)) == 0
    && (v7 = v12, a2 == *(_QWORD *)(a1 + 416)) )
  {
LABEL_24:
    ++*v7;
    if ( (gDebugger & 0xD0) != 0 )
    {
      v65 = *(_QWORD *)(a2 + 56);
      v66 = *(_DWORD *)(v65 + 8);
      if ( v66 != 17 && (unsigned int)(v66 - 18) > 1 && *(_DWORD *)(v65 + 24) == 4 )
      {
        ConPrintf("=");
        PrintObject(*(_QWORD *)(a2 + 88));
      }
    }
    if ( (gDebugger & 0x40) != 0 )
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFBF);
      AMLIDebugger();
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 56);
      v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(v13 + 32);
      if ( v14 )
      {
        v61 = *(unsigned int *)(v13 + 40);
        v62 = *(_QWORD *)(a2 + 64) + 120LL;
        v63 = *(unsigned int *)(v13 + 8);
        if ( *(int *)(v13 + 28) >= 0 )
        {
          v14(1LL, v63, v62, v61);
        }
        else
        {
          v3 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _DWORD, __int64))v14)(
                 12LL,
                 2LL,
                 (unsigned int)v63,
                 v62,
                 v61,
                 a1);
          if ( v3 == 259 )
            return 32772;
        }
      }
    }
LABEL_27:
    if ( (gDebugger & 0xD0) != 0 )
    {
      v67 = *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
      if ( v67 == 18 || v67 == 19 )
        --dword_14008EC34;
    }
    v15 = *(_QWORD *)(a2 + 80);
    if ( v15 )
    {
      FreeDataBuffs(v15, *(unsigned int *)(a2 + 76));
      v16 = *(_QWORD **)(a2 + 80);
      *((_DWORD *)v16 - 4) = 0;
      v17 = v16 - 2;
      byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v18 = *(v16 - 1);
      for ( i = *(_QWORD **)(v18 + 40); i != (_QWORD *)(v18 + 40); i = (_QWORD *)*i )
      {
        if ( v16 < i )
          break;
      }
      v20 = (_QWORD *)i[1];
      if ( (_QWORD *)*v20 != i )
        goto LABEL_49;
      *v16 = i;
      v16[1] = v20;
      *v20 = v16;
      i[1] = v16;
      v21 = (_QWORD *)*v16;
      v22 = *v16 - 16LL;
      if ( *v16 != v18 + 40 )
      {
        v50 = *((unsigned int *)v17 + 1);
        if ( (_QWORD *)v22 == (_QWORD *)((char *)v17 + v50) )
        {
          *((_DWORD *)v17 + 1) = v50 + *(_DWORD *)(v22 + 4);
          v51 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 )
            goto LABEL_49;
          v52 = (_QWORD *)v21[1];
          if ( (_QWORD *)*v52 != v21 )
            goto LABEL_49;
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
        }
      }
      v23 = v17[3];
      v24 = v23 - 16;
      if ( v23 != v18 + 40 )
      {
        v56 = *(unsigned int *)(v24 + 4);
        if ( v17 == (_QWORD *)(v24 + v56) )
        {
          *(_DWORD *)(v24 + 4) = *((_DWORD *)v17 + 1) + v56;
          v57 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 )
            goto LABEL_49;
          v58 = (_QWORD *)v16[1];
          if ( (_QWORD *)*v58 != v16 )
            goto LABEL_49;
          *v58 = v57;
          v17 = (_QWORD *)v24;
          *(_QWORD *)(v57 + 8) = v58;
        }
      }
      if ( *(_QWORD *)(v18 + 32) <= (unsigned __int64)v17 + *((unsigned int *)v17 + 1) )
      {
        *(_QWORD *)(v18 + 32) = v17;
        v25 = v17 + 2;
        v26 = *v25;
        if ( *(_QWORD **)(*v25 + 8LL) != v25 )
          goto LABEL_49;
        v27 = (_QWORD *)v25[1];
        if ( (_QWORD *)*v27 != v25 )
          goto LABEL_49;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
      }
      KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
    }
    v28 = *(_QWORD *)(a2 + 64);
    if ( v28 )
    {
      DereferenceObjectEx(v28);
      *(_QWORD *)(a2 + 64) = 0LL;
    }
    v29 = *(_QWORD **)(a1 + 416);
    v30 = v29 - 2;
    *(_QWORD *)(a1 + 416) = v29[1];
    *((_DWORD *)v29 - 4) = 0;
    byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v31 = *(v29 - 1);
    for ( j = *(_QWORD **)(v31 + 40); j != (_QWORD *)(v31 + 40); j = (_QWORD *)*j )
    {
      if ( v29 < j )
        break;
    }
    v33 = (_QWORD *)j[1];
    if ( (_QWORD *)*v33 == j )
    {
      *v29 = j;
      v29[1] = v33;
      *v33 = v29;
      j[1] = v29;
      v34 = (_QWORD *)*v29;
      v35 = *v29 - 16LL;
      if ( *v29 != v31 + 40 )
      {
        v47 = *((unsigned int *)v30 + 1);
        if ( (_QWORD *)v35 == (_QWORD *)((char *)v30 + v47) )
        {
          *((_DWORD *)v30 + 1) = v47 + *(_DWORD *)(v35 + 4);
          v48 = *v34;
          if ( *(_QWORD **)(*v34 + 8LL) != v34 )
            goto LABEL_49;
          v49 = (_QWORD *)v34[1];
          if ( (_QWORD *)*v49 != v34 )
            goto LABEL_49;
          *v49 = v48;
          *(_QWORD *)(v48 + 8) = v49;
        }
      }
      v36 = v30[3];
      v37 = v36 - 16;
      if ( v36 != v31 + 40 )
      {
        v53 = *(unsigned int *)(v37 + 4);
        if ( v30 == (_QWORD *)(v37 + v53) )
        {
          *(_DWORD *)(v37 + 4) = *((_DWORD *)v30 + 1) + v53;
          v54 = *v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 )
            goto LABEL_49;
          v55 = (_QWORD *)v29[1];
          if ( (_QWORD *)*v55 != v29 )
            goto LABEL_49;
          *v55 = v54;
          v30 = (_QWORD *)v37;
          *(_QWORD *)(v54 + 8) = v55;
        }
      }
      if ( *(_QWORD *)(v31 + 32) > (unsigned __int64)v30 + *((unsigned int *)v30 + 1) )
      {
LABEL_48:
        KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
        return v3;
      }
      *(_QWORD *)(v31 + 32) = v30;
      v38 = v30 + 2;
      v39 = *v38;
      if ( *(_QWORD **)(*v38 + 8LL) == v38 )
      {
        v40 = (_QWORD *)v38[1];
        if ( (_QWORD *)*v40 == v38 )
        {
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          goto LABEL_48;
        }
      }
    }
LABEL_49:
    __fastfail(3u);
  }
  return v3;
}
