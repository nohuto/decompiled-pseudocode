/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180021F9C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpMUIEnumerateFolder @ 0x180022388 (RtlpMUIEnumerateFolder.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18002DE10 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18002DEB0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetImageFileMachines @ 0x18002F2C0 (RtlGetImageFileMachines.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18003FCD0 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpGetNtPathFromDosPath @ 0x18007C310 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180099440 (LdrAddDllDirectory.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A1A1C (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A2650 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A462C (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapResourceFile @ 0x1800A4CE0 (LdrpMapResourceFile.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800A50E0 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A5230 (RtlDosSearchPath_Ustr.c)
 *     LdrpIsReparsePoint @ 0x1800C3638 (LdrpIsReparsePoint.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x1800C9170 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800CEE00 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U @ 0x1800D64C0 (RtlDosPathNameToNtPathName_U.c)
 *     LdrpCheckAppDirType @ 0x180114CCC (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlGetFullPathName_Ustr @ 0x180032060 (RtlGetFullPathName_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A4340 (RtlpReferenceCurrentDirectory.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A5F50 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlPrefixUnicodeString @ 0x1800A6410 (RtlPrefixUnicodeString.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
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
  const _UNICODE_STRING *v23; // r13
  unsigned int v24; // esi
  PVOID v25; // rax
  unsigned int Length; // esi
  wchar_t *Buffer; // rdx
  size_t v28; // r8
  __int64 v29; // r8
  char *v30; // rdx
  unsigned __int16 v31; // si
  void *v32; // r12
  const void **v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rsi
  _WORD *v37; // rcx
  __int16 v38; // bp
  unsigned int v39; // eax
  __int16 v41; // dx
  unsigned int v42; // r12d
  PVOID Heap_0; // rax
  unsigned __int16 v44; // dx
  unsigned __int64 v45; // rdx
  unsigned __int16 v46; // r14
  void *v47; // r12
  __int16 v48; // ax
  __int16 v49; // ax
  __int16 v50; // ax
  unsigned __int64 v51; // rdx
  _WORD *v52; // rcx
  _WORD *v53; // rax
  char v54[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v55; // [rsp+34h] [rbp-2A4h]
  __int64 v56; // [rsp+38h] [rbp-2A0h]
  PVOID BaseAddress; // [rsp+40h] [rbp-298h]
  __int64 v58; // [rsp+48h] [rbp-290h]
  __int64 v59; // [rsp+50h] [rbp-288h] BYREF
  _UNICODE_STRING String2; // [rsp+58h] [rbp-280h] BYREF
  const void **v61; // [rsp+68h] [rbp-270h]
  void *v62; // [rsp+70h] [rbp-268h]
  _QWORD *v63; // [rsp+78h] [rbp-260h]
  _BYTE v64[528]; // [rsp+80h] [rbp-258h] BYREF

  v7 = 0;
  v8 = a6;
  v10 = a1;
  v55 = a1;
  v63 = a5;
  v12 = a2->m128i_u16[0];
  v13 = a3;
  v61 = a6;
  v59 = 0LL;
  v54[0] = 0;
  String2 = 0LL;
  if ( v12 > 8 )
  {
    v14 = (_WORD *)a2->m128i_i64[1];
    if ( *v14 == 92 )
    {
      v41 = v14[1];
      if ( v41 != 92 && v41 != 63 || v14[2] != 63 || v14[3] != 92 )
      {
        v10 = v55;
        goto LABEL_3;
      }
      v42 = v12 + 2;
      if ( v12 + 2 <= 0xFFFE )
      {
        if ( !a3 )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          goto LABEL_61;
        }
        if ( v42 <= a3[1] )
        {
          v44 = *a3;
LABEL_63:
          if ( (unsigned int)v44 + 8 <= v13[1] )
          {
            v45 = *((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)v44 >> 1);
            *(_QWORD *)v45 = *(_QWORD *)RtlpDosDevicesPrefix.Buffer;
            *v13 += 8;
            if ( (unsigned int)*v13 + 1 < v13[1] )
              *(_WORD *)(v45 + 8) = 0;
          }
          v46 = a2->m128i_i32[0] - 8;
          if ( (unsigned __int16)a2->m128i_i32[0] != 8 && *v13 + (unsigned int)v46 <= v13[1] )
          {
            v47 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
            memmove(v47, (const void *)(a2->m128i_i64[1] + 8), v46);
            *v13 += v46;
            if ( (unsigned int)*v13 + 1 < v13[1] )
              *((_WORD *)v47 + ((unsigned __int64)v46 >> 1)) = 0;
          }
          if ( a5 )
            *a5 = v13;
          *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1)) = 0;
          if ( a6 )
          {
            v51 = *((_QWORD *)v13 + 1);
            v52 = (_WORD *)(v51 + 2 * ((unsigned __int64)*v13 >> 1));
            while ( 1 )
            {
              v53 = v52--;
              if ( (unsigned __int64)v52 < v51 )
                break;
              if ( *v52 == 92 )
              {
                if ( v53 && *v53 )
                {
                  *a6 = v53;
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
          Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v42);
          *((_QWORD *)a4 + 1) = Heap_0;
          if ( Heap_0 )
          {
            *a4 = 0;
            v13 = a4;
            a4[1] = v42;
            v44 = 0;
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
  v15 = v64;
  BaseAddress = v64;
  v16 = 520;
  v56 = 4LL;
  v17 = 2;
  if ( (v10 & 1) != 0 )
  {
    v18 = (_WORD *)a2->m128i_i64[1];
    v19 = _mm_cvtsi128_si32(*a2);
    String2 = (_UNICODE_STRING)*a2;
    LOWORD(v20) = v19;
    if ( v19 >= 2u && (*v18 == 92 || *v18 == 47) )
    {
      if ( v19 >= 4u && ((v48 = v18[1], v48 == 92) || v48 == 47) )
      {
        if ( (unsigned __int16)v20 >= 6u && ((v49 = v18[2], v49 == 46) || v49 == 63) )
        {
          if ( (unsigned __int16)v20 >= 8u && ((v50 = v18[3], v50 == 92) || v50 == 47) )
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
    LODWORD(v59) = v22;
LABEL_16:
    if ( v22 == 5 )
      goto LABEL_17;
    if ( v22 == 1 )
    {
      v23 = &RtlpDosDevicesUncPrefix;
      LOWORD(v58) = 4;
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
            Length = v23->Length;
            if ( (_WORD)Length )
            {
              if ( *v13 + Length <= v13[1] )
              {
                Buffer = v23->Buffer;
                v28 = v23->Length;
                v62 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
                memmove(v62, Buffer, v28);
                *v13 += Length;
                if ( (unsigned int)*v13 + 1 < v13[1] )
                  *((_WORD *)v62 + ((unsigned __int64)Length >> 1)) = 0;
              }
            }
            v29 = v56;
            v30 = (char *)&v18[(unsigned __int64)v56 / 2];
            v31 = v20 - v58;
            if ( (_WORD)v20 != (_WORD)v58 )
            {
              if ( *v13 + (unsigned int)v31 > v13[1] )
              {
                v29 = v56;
              }
              else
              {
                v32 = (void *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1));
                memmove(v32, v30, v31);
                *v13 += v31;
                v29 = v56;
                if ( (unsigned int)*v13 + 1 < v13[1] )
                  *((_WORD *)v32 + ((unsigned __int64)v31 >> 1)) = 0;
              }
            }
            if ( v63 )
              *v63 = v13;
            *(_WORD *)(*((_QWORD *)v13 + 1) + 2 * ((unsigned __int64)*v13 >> 1)) = 0;
            v33 = v61;
            if ( v61 )
            {
              v30 = (char *)*v61;
              if ( *v61 )
                *v61 = &v30[v23->Length - v29 - (_QWORD)BaseAddress + *((_QWORD *)v13 + 1)];
            }
            if ( a7 )
            {
              v34 = (_DWORD)v59 == 5;
              *(_DWORD *)a7 = 0;
              *(_QWORD *)(a7 + 8) = 0LL;
              *(_QWORD *)(a7 + 16) = 0LL;
              *(_QWORD *)(a7 + 24) = 0LL;
              if ( v34 )
              {
                LOBYTE(v33) = 1;
                v35 = RtlpReferenceCurrentDirectory(v33, v30);
                v36 = v35;
                if ( v35 )
                {
                  if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v35 + 24), &String2, 1u) )
                    goto LABEL_108;
                  v37 = (_WORD *)(*(unsigned __int16 *)(v36 + 24) + v23->Length + *((_QWORD *)v13 + 1) - v56);
                  *(_QWORD *)(a7 + 8) = v37;
                  v38 = v20 - *(_WORD *)(v36 + 24);
                  *(_WORD *)a7 = v38;
                  if ( *v37 == 92 )
                  {
                    v38 -= 2;
                    *(_WORD *)a7 = v38;
                    *(_QWORD *)(a7 + 8) = v37 + 1;
                  }
                  v34 = (v55 & 2) == 0;
                  *(_WORD *)(a7 + 2) = v38;
                  if ( v34 )
                  {
LABEL_108:
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF) == 1 )
                    {
                      NtClose(*(HANDLE *)(v36 + 8));
                      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v36);
                    }
                  }
                  else
                  {
                    *(_QWORD *)(a7 + 24) = v36;
                    *(_QWORD *)(a7 + 16) = *(_QWORD *)(v36 + 8);
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
        v25 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v24);
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
      if ( BaseAddress != v64 )
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return v7;
    }
    if ( v22 != 6 )
    {
LABEL_17:
      LOWORD(v58) = 0;
      v17 = 10;
      v56 = 0LL;
    }
    else
    {
      v58 = 8LL;
      v56 = 8LL;
    }
    v23 = &RtlpDosDevicesPrefix;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v39 = ((__int64 (__fastcall *)(__m128i *, _QWORD, _BYTE *, const void **, char *, __int64 *))RtlGetFullPathName_Ustr)(
            a2,
            v16,
            v15,
            v8,
            v54,
            &v59);
    v20 = v39;
    if ( !v39 || v54[0] )
    {
      v7 = -1073741773;
      goto LABEL_50;
    }
    if ( v39 <= v16 )
    {
      String2.MaximumLength = v16;
      v18 = BaseAddress;
      String2.Buffer = (wchar_t *)BaseAddress;
      String2.Length = v39;
      v22 = RtlDetermineDosPathNameType_Ustr(&String2);
      v17 = 2;
      goto LABEL_16;
    }
    if ( (v55 & 4) == 0 && ((v55 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
      goto LABEL_116;
    v15 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v39);
    BaseAddress = v15;
    if ( !v15 )
      return 3221225495LL;
    v16 = v20;
    v8 = v61;
  }
}
