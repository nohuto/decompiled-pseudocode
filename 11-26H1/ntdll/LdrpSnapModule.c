/*
 * XREFs of LdrpSnapModule @ 0x18011B2E0
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 *     LdrpMapAndSnapDependency @ 0x18011A410 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlpxLookupFunctionTable @ 0x180035820 (RtlpxLookupFunctionTable.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogDllState @ 0x18007A680 (LdrpLogDllState.c)
 *     LdrpCheckRedirection @ 0x18007AC78 (LdrpCheckRedirection.c)
 *     LdrpNameToOrdinal @ 0x1800B7B90 (LdrpNameToOrdinal.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C4120 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpFreeLoadContext @ 0x1800C4C20 (LdrpFreeLoadContext.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x1800CBB04 (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 *     CompatCachepLookupCdb @ 0x1800D8F50 (CompatCachepLookupCdb.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x18015B628 (LdrpGenericExceptionFilter.c)
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
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
  _QWORD *v44; // rax
  int v45; // eax
  void *v46; // rdx
  __int64 v47; // [rsp+40h] [rbp-1B8h]
  ULONG Size; // [rsp+48h] [rbp-1B0h] BYREF
  ULONG OldProtect; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-1A0h]
  __int64 v51; // [rsp+60h] [rbp-198h]
  __int64 v52; // [rsp+68h] [rbp-190h]
  unsigned int v53; // [rsp+70h] [rbp-188h]
  unsigned int v54; // [rsp+74h] [rbp-184h]
  __int64 *v55; // [rsp+78h] [rbp-180h]
  unsigned __int64 *v56; // [rsp+80h] [rbp-178h]
  _DWORD *v57; // [rsp+88h] [rbp-170h]
  _BYTE *v58; // [rsp+90h] [rbp-168h]
  unsigned __int64 v59; // [rsp+98h] [rbp-160h] BYREF
  char *v60; // [rsp+A0h] [rbp-158h]
  _BYTE *v61; // [rsp+A8h] [rbp-150h]
  __int64 v62; // [rsp+B0h] [rbp-148h]
  _BYTE *v63; // [rsp+B8h] [rbp-140h]
  _BYTE *v64; // [rsp+C0h] [rbp-138h]
  __int64 v65; // [rsp+C8h] [rbp-130h]
  _OWORD Fields[2]; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-108h]
  __int128 v68; // [rsp+F8h] [rbp-100h]
  __int64 v69; // [rsp+108h] [rbp-F0h]
  _GUID ActivityId; // [rsp+110h] [rbp-E8h]
  __int128 v71; // [rsp+120h] [rbp-D8h]
  __int128 v72; // [rsp+130h] [rbp-C8h]
  __int64 v73; // [rsp+140h] [rbp-B8h]
  __int128 v74; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+158h] [rbp-A0h]
  int v76; // [rsp+160h] [rbp-98h]
  int v77; // [rsp+164h] [rbp-94h]
  __int64 v78; // [rsp+168h] [rbp-90h]
  int v79; // [rsp+170h] [rbp-88h]
  int v80; // [rsp+174h] [rbp-84h]
  _OWORD v81[4]; // [rsp+180h] [rbp-78h] BYREF

  v1 = a1;
  v50 = a1;
  v65 = a1;
  Size = 0;
  v59 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  v52 = v2;
  v62 = *(_QWORD *)(v2 + 48);
  v3 = (unsigned __int16 *)(v2 + 72);
  LdrpLogDllState(v62, v2 + 72, 0x14A6u);
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
      LdrpFreeLoadContext(*(PVOID *)(v7 + 176));
      *(_DWORD *)(v7 + 276) = 1;
      *(_DWORD *)(v7 + 104) &= ~0x20u;
      LdrpDereferenceModule((char *)v7);
    }
    *(_QWORD *)(v1 + 80) = 0LL;
  }
  memset(v81, 0, sizeof(v81));
  v53 = 0;
  v54 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v1 + 128);
    if ( v8 >= *(_DWORD *)(v1 + 104) )
    {
      OldProtect = 0;
      v43 = *(_QWORD *)(v1 + 56);
      v19 = 0;
      if ( !*(_QWORD *)(v1 + 112)
        || (v19 = ZwProtectVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    (PVOID *)(v1 + 112),
                    (PSIZE_T)(v1 + 120),
                    *(_DWORD *)(v1 + 144),
                    &OldProtect),
            v19 >= 0) )
      {
        v44 = *(_QWORD **)(v1 + 160);
        if ( v44 && *v44 != *(_QWORD *)(v1 + 152) )
          __fastfail(0x13u);
        if ( *(_WORD *)(v43 + 110) || (v19 = LdrpHandleTlsData(v43), v19 >= 0) )
        {
          if ( LdrSystemDllInitBlock.CfgBitMap )
          {
            if ( (LdrSystemDllInitBlock.Flags & 1) == 0
              && (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) == 3 )
            {
              v45 = LdrpUnsuppressAddressTakenIat(*(char **)(v43 + 48), 0, 0);
              v19 = v45;
              if ( v45 < 0 )
                LdrpLogInternal(
                  "minkernel\\ldr\\ldrsnap.c",
                  590,
                  (__int64)"LdrpDoPostSnapWork",
                  0,
                  "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL b"
                  "ased at 0x%p.Status = 0x%x\n",
                  *(const void **)(v43 + 48),
                  v45);
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
    v51 = v10;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v10 + 176);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 32) & 0x80000) == 0 && *(_QWORD *)(v12 + 56) != v10 )
        {
          v11 = *(_QWORD *)(v12 + 56);
          v51 = v11;
          *(_QWORD *)(v12 + 56) = v10;
        }
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v9);
    if ( v13 != v11 )
    {
      LdrpFreeLoadContext(*(PVOID *)(v13 + 176));
      *(_DWORD *)(v13 + 276) = 1;
      *(_DWORD *)(v13 + 104) &= ~0x20u;
      LdrpDereferenceModule((char *)v13);
      *(_QWORD *)(*(_QWORD *)(v1 + 88) + 8 * v9) = v11;
    }
    v14 = *(_QWORD *)(v1 + 136);
    v15 = *(unsigned int *)(v14 + 20 * v9);
    v55 = (__int64 *)(v62 + v15);
    v16 = (unsigned __int64 *)(v62 + *(unsigned int *)(v14 + 20 * v9 + 16));
    v56 = v16;
    v2 = v52;
    if ( !(_DWORD)v15 || (unsigned int)v15 > *(_DWORD *)(v52 + 64) )
      v55 = (__int64 *)v16;
    if ( v11 )
      break;
LABEL_87:
    ++*(_DWORD *)(v1 + 128);
  }
  v17 = *(_BYTE **)(v11 + 48);
  v58 = v17;
  v18 = RtlImageDirectoryEntryToData(v17, 1u, 0, &Size);
  v57 = v18;
  if ( !v18 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrsnap.c",
      3413,
      (__int64)"LdrpSnapModule",
      0,
      "DLL \"%wZ\" does not contain an export table\n",
      v11 + 72);
    v19 = -1073741701;
    goto LABEL_102;
  }
  v20 = 0LL;
  v21 = v81;
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
  if ( (_DWORD)v20 == 8 || !*((_QWORD *)v81 + v20) )
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      v74 = 0LL;
      v75 = 0LL;
      if ( (unsigned __int64)v17 < *((_QWORD *)&xmmword_1801DF450 + 1)
        || (unsigned __int64)v17 >= *((_QWORD *)&xmmword_1801DF450 + 1)
                                  + (unsigned __int64)(unsigned int)qword_1801DF460 )
      {
        RtlpxLookupFunctionTable(v17, (char **)&v74);
        v18 = v57;
      }
      else
      {
        v74 = xmmword_1801DF450;
        v75 = qword_1801DF460;
      }
      if ( *((_BYTE **)&v74 + 1) != v17 )
        __fastfail(0x18u);
    }
    v22 = v53;
    *((_QWORD *)v81 + v53) = v17;
    v53 = (v22 + 1) & 7;
  }
  v23 = (char *)v18 + Size;
  v60 = v23;
  v24 = &v17[v18[7]];
  v61 = v24;
  OldProtect = v18[6];
  v64 = &v17[v18[8]];
  v63 = &v17[v18[9]];
  v25 = *(unsigned int *)(v1 + 132);
  v26 = &v55[v25];
  v56 = (unsigned __int64 *)((char *)v56 + v25 * 8);
  while ( 1 )
  {
    v55 = v26;
    v27 = *v26;
    if ( !*v26 )
    {
      *(_DWORD *)(v1 + 132) = 0;
      v2 = v52;
      goto LABEL_87;
    }
    v19 = -1073741702;
    LODWORD(v47) = -1073741702;
    v28 = (unsigned __int64)v27 >> 63;
    v29 = -4530927LL;
    v30 = 0LL;
    if ( v27 < 0 )
    {
      v54 = (unsigned __int16)v27;
      v33 = (unsigned __int16)v27 - v18[4];
      goto LABEL_47;
    }
    v31 = (unsigned __int16 *)(*(_QWORD *)(v52 + 48) + (unsigned int)v27);
    v30 = (char *)(v31 + 1);
    if ( (*(_DWORD *)(v50 + 32) & 0x2000000) != 0 )
    {
      v32 = LdrpCheckRedirection(v52, v51, (__int64)(v31 + 1));
      v29 = v32;
      if ( v32 != -4530927 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrsnap.c",
          3511,
          (__int64)"LdrpSnapModule",
          2,
          "Import '%s' of DLL '%wZ' is redirected to 0x%p",
          v31 + 1,
          v3,
          v32,
          v47);
        goto LABEL_71;
      }
    }
    v33 = LdrpNameToOrdinal((const char *)v31 + 2, *v31, v58, OldProtect, (__int64)v64, (__int64)v63);
    if ( v33 >= 0 )
    {
      v11 = v51;
      v18 = v57;
      v23 = v60;
      v24 = v61;
LABEL_47:
      if ( (unsigned int)v33 < v18[5] )
      {
        v34 = *(_DWORD *)&v24[4 * v33];
        if ( v34 )
        {
          v29 = (unsigned __int64)&v58[v34];
          v19 = 0;
          if ( v29 > (unsigned __int64)v18 && v29 < (unsigned __int64)v23 )
          {
            v35 = LdrpResolveForwarder(&v58[v34], v11, v52, (__int64 *)&v59);
            v19 = v35;
            if ( v35 == 259 )
              return 0LL;
            if ( v35 >= 0 )
              v29 = v59;
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
        if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v29 == RtlAllocateHeapExport )
        {
          v29 = (unsigned __int64)RtlAllocateHeapFast;
        }
        else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v29 == RtlFreeHeapExport )
        {
          v29 = (unsigned __int64)RtlFreeHeapFast;
        }
        else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v29 == RtlReAllocateHeapExport )
        {
          v29 = (unsigned __int64)RtlReAllocateHeapFast;
        }
      }
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v29 == RtlAllocateHeapExport )
    {
      v29 = (unsigned __int64)RtlAllocateHeapFull;
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v29 == RtlFreeHeapExport )
    {
      v29 = (unsigned __int64)RtlFreeHeapFull;
    }
    else if ( (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v29 == RtlReAllocateHeapExport )
    {
      v29 = (unsigned __int64)RtlReAllocateHeapFull;
    }
    v42 = v56;
    *v56 = v29;
    v26 = v55 + 1;
    v56 = v42 + 1;
    v1 = v50;
    ++*(_DWORD *)(v50 + 132);
    v11 = v51;
    v18 = v57;
    v23 = v60;
    v24 = v61;
  }
  if ( v19 == -1073741702 || v19 == -1073741515 )
  {
    if ( (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v52 + 80), 128)
      || (unsigned int)CompatCachepLookupCdb(*(wchar_t **)(v51 + 80), 128) )
    {
      v37 = (unsigned __int16 *)(v51 + 72);
      LdrpLogLoadFailureEtwEvent(v3, (unsigned __int16 *)(v51 + 72), 1, &LoadFailure, 0);
      Size = 1;
      OldProtect = 0;
      if ( (LdrpPolicyBits & 0x20) != 0 )
      {
        v38 = *((_QWORD *)v3 + 1);
        v39 = *v3 + 2;
        *((_QWORD *)&v74 + 1) = 4LL;
        v75 = v38;
        v76 = v39;
        v77 = 0;
        *(_QWORD *)&v74 = &Size;
        memset(Fields, 0, sizeof(Fields));
        v69 = 0LL;
        v67 = 0LL;
        ActivityId = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        DWORD1(Fields[0]) = 0;
        v68 = LoadFailureOperational;
        if ( v37 )
        {
          v78 = *((_QWORD *)v37 + 1);
          v79 = *v37 + 2;
          v80 = 0;
          DWORD1(v71) = 3;
        }
        else
        {
          DWORD1(v71) = 2;
        }
        v73 = 0LL;
        *((_QWORD *)&v71 + 1) = &v74;
        ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v71) = 0;
        WORD1(v71) = 0;
        v40 = NtTraceEvent((HANDLE)&UserLoaderGuid, 0x700u, 0x78u, Fields);
        if ( v40 )
          RtlNtStatusToDosError(v40);
      }
    }
    if ( (_BYTE)v28 )
    {
      v19 = -1073741512;
      v30 = (char *)v54;
    }
    else
    {
      v19 = -1073741511;
    }
    LdrpReportError((__int128 *)v3, v30, ((unsigned __int8)v28 ^ 1) - 1073741512);
    v41 = v50;
    goto LABEL_103;
  }
LABEL_102:
  v41 = v50;
LABEL_103:
  v46 = *(void **)(v41 + 192);
  if ( v46 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v46);
    *(_QWORD *)(v41 + 192) = 0LL;
  }
  if ( v19 < 0 )
    LdrpLogError(v19, 25, 0, (unsigned __int16 *)v41);
  return (unsigned int)v19;
}
