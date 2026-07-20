/*
 * XREFs of GetFinalPathNameByHandleW @ 0x14001B504
 * Callers:
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017244 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     BasepGetFileRedirectionStatus @ 0x14001CE74 (BasepGetFileRedirectionStatus.c)
 * Callees:
 *     BasepGetFileNameInformation @ 0x14001AA60 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14001AB84 (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14001ACB8 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     BasepGetVolumeGUIDFromNTName @ 0x14001B074 (BasepGetVolumeGUIDFromNTName.c)
 *     StringCchCatW @ 0x14001BABC (StringCchCatW.c)
 *     StringCchCopyW @ 0x14001BB34 (StringCchCopyW.c)
 *     GetLongPathNameW @ 0x14001C804 (GetLongPathNameW.c)
 *     memmove_0 @ 0x14001E837 (memmove_0.c)
 */

__int64 __fastcall GetFinalPathNameByHandleW(HANDLE Handle, wchar_t *a2, unsigned int a3, char a4)
{
  unsigned int v5; // r13d
  wchar_t *v6; // rsi
  wchar_t *v7; // r15
  ULONG v8; // ecx
  int v9; // r10d
  unsigned __int16 v10; // cx
  int v11; // r9d
  unsigned __int16 v12; // ax
  int v13; // edi
  int FileNameInformation; // eax
  wchar_t *v15; // r14
  size_t v17; // rbx
  ULONG v18; // ecx
  size_t v19; // rbx
  int v20; // ebx
  wchar_t *v21; // rdi
  const wchar_t *v22; // rcx
  const wchar_t *v23; // rcx
  const wchar_t *v24; // rcx
  int v25; // ebx
  int v26; // eax
  SIZE_T v27; // rbx
  wchar_t *Heap; // rax
  wchar_t *v29; // r12
  const wchar_t *v30; // r8
  size_t v31; // rbx
  unsigned int LongPathNameW; // eax
  unsigned int v33; // ebx
  int v34; // ebx
  int v35; // eax
  const wchar_t *v36; // rcx
  __int64 v37; // rbx
  size_t v38; // rax
  size_t v39; // r11
  STRSAFE_LPCWSTR pszSrc; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-20h] BYREF
  wchar_t *Str[3]; // [rsp+30h] [rbp-18h] BYREF
  int v43; // [rsp+90h] [rbp+48h]
  unsigned int v44; // [rsp+90h] [rbp+48h]
  unsigned int v45; // [rsp+90h] [rbp+48h]

  pszSrc = 0LL;
  v5 = 0;
  Str[0] = 0LL;
  v6 = 0LL;
  BaseAddress = 0LL;
  v7 = 0LL;
  if ( Handle == (HANDLE)-1LL )
  {
    v8 = 6;
LABEL_3:
    RtlSetLastWin32Error(v8);
    return v5;
  }
  v9 = a4 & 1;
  if ( (a4 & 2) != 0 )
    v9 = 2;
  v10 = (a4 & 1) + 1;
  if ( (a4 & 2) == 0 )
    v10 = a4 & 1;
  v11 = a4 & 4;
  v12 = v10 + 1;
  if ( !v11 )
    v12 = v10;
  if ( v12 > 1u )
  {
    v8 = 87;
    goto LABEL_3;
  }
  v13 = 0;
  if ( !v11 )
    v13 = v9;
  if ( !v12 )
    v13 = 3;
  v43 = v13;
  if ( !(unsigned int)BasepGetObjectNTName(Handle, (const void ***)&BaseAddress) )
    goto LABEL_20;
  FileNameInformation = BasepGetFileNameInformation(Handle, FileNameInformation, Str);
  v7 = Str[0];
  if ( !FileNameInformation )
    goto LABEL_20;
  if ( *Str[0] == 92 )
  {
    v15 = (wchar_t *)BaseAddress;
    v17 = wcslen((const wchar_t *)BaseAddress);
    if ( wcslen(v7) >= v17 )
    {
      v18 = 161;
LABEL_30:
      RtlSetLastWin32Error(v18);
      goto LABEL_21;
    }
    v19 = wcslen(v15);
    v15[v19 - wcslen(v7)] = 0;
    if ( v13 != 1 )
    {
      if ( v13 == 2 )
      {
        v20 = 0;
        v6 = v15;
        v15 = 0LL;
      }
      else
      {
        if ( v13 == 3 )
        {
          v20 = 0;
          if ( (unsigned int)BasepGetVolumeDosLetterNameFromNTName(v15, &pszSrc) )
          {
LABEL_35:
            v6 = (wchar_t *)pszSrc;
            goto LABEL_42;
          }
LABEL_40:
          v6 = (wchar_t *)pszSrc;
          goto LABEL_21;
        }
        v20 = 0;
      }
LABEL_42:
      if ( (a4 & 8) == 0 )
      {
        Str[0] = 0LL;
        BaseAddress = 0LL;
        v21 = 0LL;
        if ( (unsigned int)BasepGetFileNameInformation(Handle, FileNormalizedNameInformation, Str) )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
          v7 = Str[0];
        }
        else
        {
          if ( LODWORD(KeGetPcr()->Unused1[0]) != 87
            && LODWORD(KeGetPcr()->Unused1[0]) != 124
            && LODWORD(KeGetPcr()->Unused1[0]) != 50 )
          {
            goto LABEL_21;
          }
          if ( (v43 & 0xFFFFFFFD) != 0 )
            goto LABEL_58;
          v22 = v6;
          if ( v15 )
            v22 = v15;
          if ( !(unsigned int)BasepGetVolumeDosLetterNameFromNTName(v22, &BaseAddress)
            && LODWORD(KeGetPcr()->Unused1[0]) == 8 )
          {
            goto LABEL_21;
          }
          v21 = (wchar_t *)BaseAddress;
          if ( BaseAddress )
            goto LABEL_57;
          v23 = v6;
          if ( v15 )
            v23 = v15;
          if ( !(unsigned int)BasepGetVolumeGUIDFromNTName(v23, &BaseAddress) )
            goto LABEL_21;
          v21 = (wchar_t *)BaseAddress;
          if ( BaseAddress )
LABEL_57:
            v24 = v21;
          else
LABEL_58:
            v24 = v6;
          v25 = wcslen(v24);
          v26 = a3 + v25 + wcslen(v7);
          v27 = (unsigned int)(2 * v26 + 2);
          v44 = 2 * v26 + 2;
          Heap = (wchar_t *)RtlAllocateHeap(
                              *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                              KernelBaseGlobalData,
                              v27);
          v29 = Heap;
          if ( !Heap )
          {
            if ( v21 )
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v21);
LABEL_62:
            v18 = 8;
            goto LABEL_30;
          }
          v30 = v6;
          if ( v21 )
            v30 = v21;
          v31 = v27 >> 1;
          StringCchCopyW(Heap, v31, v30);
          StringCchCatW(v29, v31, v7);
          v45 = v44 >> 1;
          LongPathNameW = GetLongPathNameW(v29, v29);
          v33 = LongPathNameW;
          if ( !LongPathNameW )
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v29);
            if ( v21 )
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v21);
            goto LABEL_21;
          }
          if ( LongPathNameW >= v45 )
          {
            if ( v21 )
            {
              v34 = LongPathNameW - wcslen(v21);
              v35 = 0;
              if ( v6 )
                v35 = wcslen(v6);
              v33 = v35 + v34;
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v21);
            }
            v5 = v33 + 1;
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v29);
            v18 = 0;
            goto LABEL_30;
          }
          v36 = v21;
          if ( !v21 )
            v36 = v6;
          v37 = (unsigned int)wcslen(v36);
          v38 = wcslen(v29);
          memmove_0(v29, &v29[v37], 2 * (1 - v37 + v38));
          v20 = 0;
          if ( v21 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v21);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
          v7 = v29;
        }
      }
      if ( v6 )
        v20 = wcslen(v6);
      v5 = wcslen(v7) + v20;
      if ( v5 + 1 <= a3 )
      {
        v39 = a3;
        *a2 = 0;
        if ( v6 )
          StringCchCopyW(a2, a3, v6);
        StringCchCatW(a2, v39, v7);
        goto LABEL_21;
      }
      ++v5;
      goto LABEL_62;
    }
    v20 = 0;
    if ( (unsigned int)BasepGetVolumeGUIDFromNTName(v15, &pszSrc) )
      goto LABEL_35;
    if ( LODWORD(KeGetPcr()->Unused1[0]) == 1 )
      RtlSetLastWin32Error(3u);
    goto LABEL_40;
  }
  RtlSetLastWin32Error(5u);
LABEL_20:
  v15 = (wchar_t *)BaseAddress;
LABEL_21:
  if ( v15 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v15);
  if ( v7 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
  if ( v6 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v6);
  return v5;
}
