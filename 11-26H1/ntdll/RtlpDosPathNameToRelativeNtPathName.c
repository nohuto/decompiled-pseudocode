/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x180044540
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180036E3C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800438A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180043940 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetImageFileMachines @ 0x180044D50 (RtlGetImageFileMachines.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpGetNtPathFromDosPath @ 0x180084F70 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x18009A310 (LdrAddDllDirectory.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A54FC (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A5BB0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A5FB0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A6100 (RtlDosSearchPath_Ustr.c)
 *     LdrpIsReparsePoint @ 0x1800C5E78 (LdrpIsReparsePoint.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800CBA00 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800D1690 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D9500 (RtlDosPathNameToNtPathName_U.c)
 *     RtlpMUIEnumerateFolder @ 0x18010288C (RtlpMUIEnumerateFolder.c)
 *     LdrpCheckAppDirType @ 0x1801154EC (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlGetFullPathName_Ustr @ 0x180047AE0 (RtlGetFullPathName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A5210 (RtlpReferenceCurrentDirectory.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A6E20 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A72E0 (RtlPrefixUnicodeString.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        __m128i *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        const void **a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  const void **v8; // rbp
  char v10; // dl
  unsigned int v12; // ecx
  unsigned __int16 *v13; // rdi
  _WORD *v14; // rax
  _BYTE *v15; // rax
  unsigned int v16; // r12d
  int v17; // ecx
  _WORD *v18; // r12
  unsigned __int16 v19; // ax
  unsigned int v20; // ebp
  __int16 v21; // ax
  int v22; // r8d
  const wchar_t *v23; // r13
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // esi
  const void *v27; // rdx
  size_t v28; // r8
  __int64 v29; // r8
  char *v30; // rdx
  unsigned __int16 v31; // si
  void *v32; // r12
  const void **v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rsi
  _WORD *v38; // rcx
  __int16 v39; // bp
  unsigned int v40; // eax
  __int16 v42; // dx
  unsigned int v43; // r12d
  __int64 Heap_0; // rax
  unsigned __int16 v45; // dx
  unsigned __int64 v46; // rdx
  unsigned __int16 v47; // r14
  void *v48; // r12
  __int16 v49; // ax
  __int16 v50; // ax
  __int16 v51; // ax
  unsigned __int64 v52; // rdx
  _WORD *v53; // rcx
  _WORD *v54; // rax
  char v55[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v56; // [rsp+34h] [rbp-2A4h]
  __int64 v57; // [rsp+38h] [rbp-2A0h]
  _BYTE *v58; // [rsp+40h] [rbp-298h]
  __int64 v59; // [rsp+48h] [rbp-290h]
  __int64 v60; // [rsp+50h] [rbp-288h] BYREF
  __m128i v61; // [rsp+58h] [rbp-280h] BYREF
  const void **v62; // [rsp+68h] [rbp-270h]
  void *v63; // [rsp+70h] [rbp-268h]
  _QWORD *v64; // [rsp+78h] [rbp-260h]
  _BYTE v65[528]; // [rsp+80h] [rbp-258h] BYREF

  v7 = 0;
  v8 = a6;
  v10 = a1;
  v56 = a1;
  v64 = a5;
  v12 = a2->m128i_u16[0];
  v13 = a3;
  v62 = a6;
  v60 = 0LL;
  v55[0] = 0;
  v61 = 0LL;
  if ( v12 > 8 )
  {
    v14 = (_WORD *)a2->m128i_i64[1];
    if ( *v14 == 92 )
    {
      v42 = v14[1];
      if ( v42 != 92 && v42 != 63 || v14[2] != 63 || v14[3] != 92 )
      {
        v10 = v56;
        goto LABEL_3;
      }
      v43 = v12 + 2;
      if ( v12 + 2 <= 0xFFFE )
      {
        if ( !a3 )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          goto LABEL_61;
        }
        if ( v43 <= a3[1] )
        {
          v45 = *a3;
LABEL_63:
          if ( (unsigned int)v45 + 8 <= v13[1] )
          {
            v46 = *((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)v45 >> 1);
            *(_QWORD *)v46 = *(_QWORD *)L"\\??\\";
            *v13 += 8;
            if ( (unsigned int)*v13 + 1 < v13[1] )
              *(_WORD *)(v46 + 8) = 0;
          }
          v47 = a2->m128i_i32[0] - 8;
          if ( (unsigned __int16)a2->m128i_i32[0] != 8 && *v13 + (unsigned int)v47 <= v13[1] )
          {
            v48 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
            memmove(v48, (const void *)(a2->m128i_i64[1] + 8), v47);
            *v13 += v47;
            if ( (unsigned int)*v13 + 1 < v13[1] )
              *((_WORD *)v48 + ((unsigned __int64)v47 >> 1)) = 0;
          }
          if ( a5 )
            *a5 = v13;
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1)) = 0;
          if ( a6 )
          {
            v52 = *((_QWORD *)v13 + 1);
            v53 = (_WORD *)(v52 + 2 * ((unsigned __int64)*v13 >> 1));
            while ( 1 )
            {
              v54 = v53--;
              if ( (unsigned __int64)v53 < v52 )
                break;
              if ( *v53 == 92 )
              {
                if ( v54 && *v54 )
                {
                  *a6 = v54;
                  goto LABEL_73;
                }
                break;
              }
            }
            *a6 = 0LL;
          }
LABEL_73:
          if ( a7 )
          {
            *(_DWORD *)a7 = 0;
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)(a7 + 16) = 0LL;
            *(_QWORD *)(a7 + 24) = 0LL;
          }
          return v7;
        }
        if ( a4 )
        {
LABEL_61:
          Heap_0 = RtlAllocateHeap_0();
          *((_QWORD *)a4 + 1) = Heap_0;
          if ( Heap_0 )
          {
            *a4 = 0;
            v13 = a4;
            a4[1] = v43;
            v45 = 0;
            goto LABEL_63;
          }
          return (unsigned int)-1073741801;
        }
      }
      return (unsigned int)-1073741562;
    }
  }
LABEL_3:
  if ( a6 )
    *a6 = 0LL;
  v15 = v65;
  v58 = v65;
  v16 = 520;
  v57 = 4LL;
  v17 = 2;
  if ( (v10 & 1) != 0 )
  {
    v18 = (_WORD *)a2->m128i_i64[1];
    v19 = _mm_cvtsi128_si32(*a2);
    v61 = *a2;
    LOWORD(v20) = v19;
    if ( v19 >= 2u && (*v18 == 92 || *v18 == 47) )
    {
      if ( v19 >= 4u && ((v49 = v18[1], v49 == 92) || v49 == 47) )
      {
        if ( (unsigned __int16)v20 >= 6u && ((v50 = v18[2], v50 == 46) || v50 == 63) )
        {
          if ( (unsigned __int16)v20 >= 8u && ((v51 = v18[3], v51 == 92) || v51 == 47) )
          {
            v22 = 6;
          }
          else
          {
            v22 = 1;
            if ( (_WORD)v20 == 6 )
              v22 = 7;
          }
        }
        else
        {
          v22 = 1;
        }
      }
      else
      {
        v22 = 4;
      }
    }
    else if ( v19 >= 4u && *v18 && v18[1] == 58 )
    {
      if ( v19 >= 6u && ((v21 = v18[2], v21 == 92) || v21 == 47) )
        v22 = 2;
      else
        v22 = 3;
    }
    else
    {
      v22 = 5;
    }
    LODWORD(v60) = v22;
LABEL_16:
    if ( v22 == 5 )
      goto LABEL_17;
    if ( v22 == 1 )
    {
      v23 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
      LOWORD(v59) = 4;
      v17 = 14;
LABEL_19:
      v24 = v17 + (unsigned __int16)v20;
      if ( v24 > 0xFFFE )
      {
LABEL_116:
        v7 = -1073741562;
      }
      else
      {
        if ( v13 )
        {
          if ( v24 <= v13[1] )
          {
LABEL_24:
            v26 = *v23;
            if ( (_WORD)v26 )
            {
              if ( *v13 + v26 <= v13[1] )
              {
                v27 = (const void *)*((_QWORD *)v23 + 1);
                v28 = *v23;
                v63 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
                memmove(v63, v27, v28);
                *v13 += v26;
                if ( (unsigned int)*v13 + 1 < v13[1] )
                  *((_WORD *)v63 + ((unsigned __int64)v26 >> 1)) = 0;
              }
            }
            v29 = v57;
            v30 = (char *)&v18[(unsigned __int64)v57 / 2];
            v31 = v20 - v59;
            if ( (_WORD)v20 != (_WORD)v59 )
            {
              if ( *v13 + (unsigned int)v31 > v13[1] )
              {
                v29 = v57;
              }
              else
              {
                v32 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
                memmove(v32, v30, v31);
                *v13 += v31;
                v29 = v57;
                if ( (unsigned int)*v13 + 1 < v13[1] )
                  *((_WORD *)v32 + ((unsigned __int64)v31 >> 1)) = 0;
              }
            }
            if ( v64 )
              *v64 = v13;
            *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1)) = 0;
            v33 = v62;
            if ( v62 )
            {
              v30 = (char *)*v62;
              if ( *v62 )
                *v62 = &v30[*v23 - v29 - (_QWORD)v58 + *((_QWORD *)v13 + 1)];
            }
            if ( a7 )
            {
              v34 = (_DWORD)v60 == 5;
              *(_DWORD *)a7 = 0;
              *(_QWORD *)(a7 + 8) = 0LL;
              *(_QWORD *)(a7 + 16) = 0LL;
              *(_QWORD *)(a7 + 24) = 0LL;
              if ( v34 )
              {
                LOBYTE(v33) = 1;
                v35 = RtlpReferenceCurrentDirectory(v33, v30);
                v37 = v35;
                if ( v35 )
                {
                  LOBYTE(v36) = 1;
                  if ( !(unsigned __int8)RtlPrefixUnicodeString(v35 + 24, &v61, v36) )
                    goto LABEL_108;
                  v38 = (_WORD *)(*(unsigned __int16 *)(v37 + 24) + *v23 + *((_QWORD *)v13 + 1) - v57);
                  *(_QWORD *)(a7 + 8) = v38;
                  v39 = v20 - *(_WORD *)(v37 + 24);
                  *(_WORD *)a7 = v39;
                  if ( *v38 == 92 )
                  {
                    v39 -= 2;
                    *(_WORD *)a7 = v39;
                    *(_QWORD *)(a7 + 8) = v38 + 1;
                  }
                  v34 = (v56 & 2) == 0;
                  *(_WORD *)(a7 + 2) = v39;
                  if ( v34 )
                  {
LABEL_108:
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF) == 1 )
                    {
                      NtClose(*(HANDLE *)(v37 + 8));
                      RtlFreeHeap_0();
                    }
                  }
                  else
                  {
                    *(_QWORD *)(a7 + 24) = v37;
                    *(_QWORD *)(a7 + 16) = *(_QWORD *)(v37 + 8);
                  }
                }
                else
                {
                  RtlLeaveCriticalSection(&FastPebLock);
                }
              }
            }
            goto LABEL_50;
          }
          if ( !a4 )
          {
            v7 = -1073741562;
            goto LABEL_50;
          }
        }
        else if ( !a4 )
        {
          v7 = -1073741811;
          goto LABEL_50;
        }
        v25 = RtlAllocateHeap_0();
        *((_QWORD *)a4 + 1) = v25;
        if ( v25 )
        {
          *a4 = 0;
          v13 = a4;
          a4[1] = v24;
          goto LABEL_24;
        }
        v7 = -1073741801;
      }
LABEL_50:
      if ( v58 != v65 )
        RtlFreeHeap_0();
      return v7;
    }
    if ( v22 != 6 )
    {
LABEL_17:
      LOWORD(v59) = 0;
      v17 = 10;
      v57 = 0LL;
    }
    else
    {
      v59 = 8LL;
      v57 = 8LL;
    }
    v23 = L"\b\n";
    goto LABEL_19;
  }
  while ( 1 )
  {
    v40 = ((__int64 (__fastcall *)(__m128i *, _QWORD, _BYTE *, const void **, char *, __int64 *))RtlGetFullPathName_Ustr)(
            a2,
            v16,
            v15,
            v8,
            v55,
            &v60);
    v20 = v40;
    if ( !v40 || v55[0] )
    {
      v7 = -1073741773;
      goto LABEL_50;
    }
    if ( v40 <= v16 )
    {
      v61.m128i_i16[1] = v16;
      v18 = v58;
      v61.m128i_i64[1] = (__int64)v58;
      v61.m128i_i16[0] = v40;
      v22 = RtlDetermineDosPathNameType_Ustr(&v61);
      v17 = 2;
      goto LABEL_16;
    }
    if ( (v56 & 4) == 0 && ((v56 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
      goto LABEL_116;
    v15 = (_BYTE *)RtlAllocateHeap_0();
    v58 = v15;
    if ( !v15 )
      return 3221225495LL;
    v16 = v20;
    v8 = v62;
  }
}
