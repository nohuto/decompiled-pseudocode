/*
 * XREFs of LdrpSnapModule @ 0x18011B530
 * Callers:
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x18011A660 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpResolveForwarder @ 0x180039370 (LdrpResolveForwarder.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlpxLookupFunctionTable @ 0x18004B2A0 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogDllState @ 0x1800832E0 (LdrpLogDllState.c)
 *     LdrpCheckRedirection @ 0x1800838D8 (LdrpCheckRedirection.c)
 *     LdrpNameToOrdinal @ 0x1800BA660 (LdrpNameToOrdinal.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpFreeLoadContext @ 0x1800C7460 (LdrpFreeLoadContext.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CE394 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 *     CompatCachepLookupCdb @ 0x1800DBFE0 (CompatCachepLookupCdb.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18015B768 (LdrpGenericExceptionFilter.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpSnapModule(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r14
  unsigned __int16 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // rax
  _BYTE *v17; // rsi
  _DWORD *v18; // r8
  int v19; // edi
  __int64 v20; // rax
  _QWORD *v21; // rcx
  char v22; // cl
  char *v23; // rdx
  _BYTE *v24; // r9
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rsi
  char *v30; // r14
  unsigned __int16 *v31; // r13
  __int64 v32; // rax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  unsigned __int16 *v37; // rdi
  __int64 v38; // rcx
  int v39; // eax
  NTSTATUS v40; // eax
  __int64 v41; // rsi
  unsigned __int64 *v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // [rsp+40h] [rbp-1B8h]
  unsigned int v49; // [rsp+48h] [rbp-1B0h] BYREF
  unsigned int v50; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-1A0h]
  __int64 v52; // [rsp+60h] [rbp-198h]
  __int64 v53; // [rsp+68h] [rbp-190h]
  unsigned int v54; // [rsp+70h] [rbp-188h]
  unsigned int v55; // [rsp+74h] [rbp-184h]
  __int64 *v56; // [rsp+78h] [rbp-180h]
  unsigned __int64 *v57; // [rsp+80h] [rbp-178h]
  _DWORD *v58; // [rsp+88h] [rbp-170h]
  _BYTE *v59; // [rsp+90h] [rbp-168h]
  unsigned __int64 v60; // [rsp+98h] [rbp-160h] BYREF
  char *v61; // [rsp+A0h] [rbp-158h]
  _BYTE *v62; // [rsp+A8h] [rbp-150h]
  __int64 v63; // [rsp+B0h] [rbp-148h]
  __int64 v64; // [rsp+B8h] [rbp-140h]
  __int64 v65; // [rsp+C0h] [rbp-138h]
  __int64 v66; // [rsp+C8h] [rbp-130h]
  _OWORD v67[2]; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-108h]
  __int128 v69; // [rsp+F8h] [rbp-100h]
  __int64 v70; // [rsp+108h] [rbp-F0h]
  _GUID ActivityId; // [rsp+110h] [rbp-E8h]
  __int128 v72; // [rsp+120h] [rbp-D8h]
  __int128 v73; // [rsp+130h] [rbp-C8h]
  __int64 v74; // [rsp+140h] [rbp-B8h]
  __int128 v75; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v76; // [rsp+158h] [rbp-A0h]
  int v77; // [rsp+160h] [rbp-98h]
  int v78; // [rsp+164h] [rbp-94h]
  __int64 v79; // [rsp+168h] [rbp-90h]
  int v80; // [rsp+170h] [rbp-88h]
  int v81; // [rsp+174h] [rbp-84h]
  _OWORD v82[4]; // [rsp+180h] [rbp-78h] BYREF

  v1 = a1;
  v51 = a1;
  v66 = a1;
  v49 = 0;
  v60 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  v53 = v2;
  v63 = *(_QWORD *)(v2 + 48);
  v3 = (unsigned __int16 *)(v2 + 72);
  LdrpLogDllState(v63, v2 + 72, 0x14A6u);
  v4 = *(_QWORD *)(v1 + 80);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v1 + 80);
    v6 = *(_QWORD *)(v4 + 176);
    if ( v6 && (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v4 )
    {
      v5 = *(_QWORD *)(v6 + 56);
      *(_QWORD *)(v6 + 56) = v4;
    }
    v7 = *(_QWORD *)(v1 + 80);
    if ( v5 != v7 )
    {
      LdrpFreeLoadContext(*(_QWORD *)(v7 + 176));
      *(_DWORD *)(v7 + 276) = 1;
      *(_DWORD *)(v7 + 104) &= ~0x20u;
      LdrpDereferenceModule(v7);
    }
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  memset(v82, 0, sizeof(v82));
  v54 = 0;
  v55 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v1 + 128);
    if ( v8 >= *(_DWORD *)(v1 + 104) )
    {
      v50 = 0;
      v43 = *(_QWORD *)(v1 + 56);
      v19 = 0;
      v44 = v1 + 112;
      if ( !*(_QWORD *)(v1 + 112)
        || (v19 = ZwProtectVirtualMemory(-1LL, v44, v1 + 120, *(unsigned int *)(v1 + 144), &v50), v19 >= 0) )
      {
        v45 = *(_QWORD **)(v1 + 160);
        if ( v45 && *v45 != *(_QWORD *)(v1 + 152) )
          __fastfail(0x13u);
        if ( *(_WORD *)(v43 + 110) || (v19 = LdrpHandleTlsData(v43, v44), v19 >= 0) )
        {
          if ( qword_1801E3518 )
          {
            if ( (dword_1801E34FC & 1) == 0 && (BYTE5(qword_1801E3500) & 3) == 3 )
            {
              v46 = LdrpUnsuppressAddressTakenIat(*(_QWORD *)(v43 + 48), 0, 0);
              v19 = v46;
              if ( v46 < 0 )
                LdrpLogInternal(
                  (int)"minkernel\\ldr\\ldrsnap.c",
                  590,
                  (__int64)"LdrpDoPostSnapWork",
                  0,
                  "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL b"
                  "ased at 0x%p.Status = 0x%x\n",
                  *(const void **)(v43 + 48),
                  v46);
            }
          }
        }
      }
      if ( v19 >= 0 )
      {
        LdrpLogDllState(*(_QWORD *)(v2 + 48), (__int64)v3, 0x14A7u);
        *(_DWORD *)(*(_QWORD *)(v2 + 152) + 56LL) = 5;
      }
      goto LABEL_102;
    }
    _mm_lfence();
    v9 = v8;
    v10 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8LL * v8);
    v11 = v10;
    v52 = v10;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 176);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 32) & 0x80000) == 0 && *(_QWORD *)(v12 + 56) != v10 )
        {
          v11 = *(_QWORD *)(v12 + 56);
          v52 = v11;
          *(_QWORD *)(v12 + 56) = v10;
        }
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v9);
    if ( v13 != v11 )
    {
      LdrpFreeLoadContext(*(_QWORD *)(v13 + 176));
      *(_DWORD *)(v13 + 276) = 1;
      *(_DWORD *)(v13 + 104) &= ~0x20u;
      LdrpDereferenceModule(v13);
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v9) = v11;
    }
    v14 = *(_QWORD *)(v1 + 136);
    v15 = *(unsigned int *)(v14 + 20 * v9);
    v56 = (__int64 *)(v63 + v15);
    v16 = (unsigned __int64 *)(v63 + *(unsigned int *)(v14 + 20 * v9 + 16));
    v57 = v16;
    v2 = v53;
    if ( !(_DWORD)v15 || (unsigned int)v15 > *(_DWORD *)(v53 + 64) )
      v56 = (__int64 *)v16;
    if ( v11 )
      break;
LABEL_87:
    ++*(_DWORD *)(v1 + 128);
  }
  v17 = *(_BYTE **)(v11 + 48);
  v59 = v17;
  v18 = RtlImageDirectoryEntryToData((unsigned __int64)v17, 1, 0, &v49);
  v58 = v18;
  if ( !v18 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      3413,
      (__int64)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v11 + 72);
    v19 = -1073741701;
    goto LABEL_102;
  }
  v20 = 0LL;
  v21 = v82;
  do
  {
    if ( !*v21 )
      break;
    if ( v17 == (_BYTE *)*v21 )
      break;
    v20 = (unsigned int)(v20 + 1);
    ++v21;
  }
  while ( (unsigned int)v20 < 8 );
  if ( (_DWORD)v20 == 8 || !*((_QWORD *)v82 + v20) )
  {
    if ( qword_1801E3518 && (dword_1801E34FC & 1) == 0 )
    {
      v75 = 0LL;
      v76 = 0LL;
      if ( (unsigned __int64)v17 < *((_QWORD *)&xmmword_1801E0450 + 1)
        || (unsigned __int64)v17 >= *((_QWORD *)&xmmword_1801E0450 + 1)
                                  + (unsigned __int64)(unsigned int)qword_1801E0460 )
      {
        RtlpxLookupFunctionTable((unsigned __int64)v17, (__int64)&v75);
        v18 = v58;
      }
      else
      {
        v75 = xmmword_1801E0450;
        v76 = qword_1801E0460;
      }
      if ( *((_BYTE **)&v75 + 1) != v17 )
        __fastfail(0x18u);
    }
    v22 = v54;
    *((_QWORD *)v82 + v54) = v17;
    v54 = (v22 + 1) & 7;
  }
  v23 = (char *)v18 + v49;
  v61 = v23;
  v24 = &v17[v18[7]];
  v62 = v24;
  v50 = v18[6];
  v65 = (__int64)&v17[v18[8]];
  v64 = (__int64)&v17[v18[9]];
  v25 = *(unsigned int *)(v1 + 132);
  v26 = &v56[v25];
  v57 = (unsigned __int64 *)((char *)v57 + v25 * 8);
  while ( 1 )
  {
    v56 = v26;
    v27 = *v26;
    if ( !*v26 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v53;
      goto LABEL_87;
    }
    v19 = -1073741702;
    LODWORD(v48) = -1073741702;
    v28 = (unsigned __int64)v27 >> 63;
    v29 = -4530927LL;
    v30 = 0LL;
    if ( v27 < 0 )
    {
      v55 = (unsigned __int16)v27;
      v33 = (unsigned __int16)v27 - v18[4];
      goto LABEL_47;
    }
    v31 = (unsigned __int16 *)(*(_QWORD *)(v53 + 48) + (unsigned int)v27);
    v30 = (char *)(v31 + 1);
    if ( (*(_DWORD *)(v51 + 32) & 0x2000000) != 0 )
    {
      v32 = LdrpCheckRedirection(v53, v52, (__int64)(v31 + 1));
      v29 = v32;
      if ( v32 != -4530927 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrsnap.c",
          3511,
          (__int64)"LdrpSnapModule",
          2,
          "Import '%s' of DLL '%wZ' is redirected to 0x%p",
          v31 + 1,
          v3,
          v32,
          v48);
        goto LABEL_71;
      }
    }
    v33 = LdrpNameToOrdinal((const char *)v31 + 2, *v31, v59, v50, v65, v64);
    if ( v33 >= 0 )
    {
      LODWORD(v11) = v52;
      v18 = v58;
      v23 = v61;
      v24 = v62;
LABEL_47:
      if ( (unsigned int)v33 < v18[5] )
      {
        v34 = *(_DWORD *)&v24[4 * v33];
        if ( v34 )
        {
          v29 = (unsigned __int64)&v59[v34];
          v19 = 0;
          if ( v29 > (unsigned __int64)v18 && v29 < (unsigned __int64)v23 )
          {
            v35 = LdrpResolveForwarder(&v59[v34], v11, v53, (__int64 *)&v60);
            v19 = v35;
            if ( v35 == 259 )
              return 0LL;
            if ( v35 >= 0 )
              v29 = v60;
          }
        }
      }
    }
    if ( v19 < 0 )
      break;
LABEL_71:
    if ( RtlpHpExportType )
    {
      if ( RtlpHpExportType == 1 )
      {
        if ( (__int64 (*)(void))v29 == RtlAllocateHeapExport )
        {
          v29 = (unsigned __int64)RtlAllocateHeapFast;
        }
        else if ( (__int64 (*)(void))v29 == RtlFreeHeapExport )
        {
          v29 = (unsigned __int64)RtlFreeHeapFast;
        }
        else if ( (__int64 (*)(void))v29 == RtlReAllocateHeapExport )
        {
          v29 = (unsigned __int64)RtlReAllocateHeapFast;
        }
      }
    }
    else if ( (__int64 (*)(void))v29 == RtlAllocateHeapExport )
    {
      v29 = (unsigned __int64)RtlAllocateHeapFull;
    }
    else if ( (__int64 (*)(void))v29 == RtlFreeHeapExport )
    {
      v29 = (unsigned __int64)RtlFreeHeapFull;
    }
    else if ( (__int64 (*)(void))v29 == RtlReAllocateHeapExport )
    {
      v29 = (unsigned __int64)RtlReAllocateHeapFull;
    }
    v42 = v57;
    *v57 = v29;
    v26 = v56 + 1;
    v57 = v42 + 1;
    v1 = v51;
    ++*(_DWORD *)(v51 + 132);
    LODWORD(v11) = v52;
    v18 = v58;
    v23 = v61;
    v24 = v62;
  }
  if ( v19 == -1073741702 || v19 == -1073741515 )
  {
    if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v53 + 80), 128)
      || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v52 + 80), 128) )
    {
      v37 = (unsigned __int16 *)(v52 + 72);
      LdrpLogLoadFailureEtwEvent(v3, (unsigned __int16 *)(v52 + 72), 1, (__int64)&LoadFailure, 0);
      v49 = 1;
      v50 = 0;
      if ( (LdrpPolicyBits & 0x20) != 0 )
      {
        v38 = *((_QWORD *)v3 + 1);
        v39 = *v3 + 2;
        *((_QWORD *)&v75 + 1) = 4LL;
        v76 = v38;
        v77 = v39;
        v78 = 0;
        *(_QWORD *)&v75 = &v49;
        memset(v67, 0, sizeof(v67));
        v70 = 0LL;
        v68 = 0LL;
        ActivityId = 0LL;
        v72 = 0LL;
        v73 = 0LL;
        DWORD1(v67[0]) = 0;
        v69 = LoadFailureOperational;
        if ( v37 )
        {
          v79 = *((_QWORD *)v37 + 1);
          v80 = *v37 + 2;
          v81 = 0;
          DWORD1(v72) = 3;
        }
        else
        {
          DWORD1(v72) = 2;
        }
        v74 = 0LL;
        *((_QWORD *)&v72 + 1) = &v75;
        ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v72) = 0;
        WORD1(v72) = 0;
        v40 = NtTraceEvent(&UserLoaderGuid, 1792LL, 120LL, v67);
        if ( v40 )
          RtlNtStatusToDosError(v40);
      }
    }
    if ( (_BYTE)v28 )
    {
      v19 = -1073741512;
      v30 = (char *)v55;
    }
    else
    {
      v19 = -1073741511;
    }
    LdrpReportError((char *)v3, v30, ((unsigned __int8)v28 ^ 1) - 1073741512);
    v41 = v51;
    goto LABEL_103;
  }
LABEL_102:
  v41 = v51;
LABEL_103:
  v47 = *(_QWORD *)(v41 + 192);
  if ( v47 )
  {
    NtUnmapViewOfSection(-1LL, v47);
    *(_QWORD *)(v41 + 192) = 0LL;
  }
  if ( v19 < 0 )
    LdrpLogError(v19, 25, 0, (unsigned __int16 *)v41);
  return (unsigned int)v19;
}
