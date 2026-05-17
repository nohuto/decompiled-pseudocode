/*
 * XREFs of RtlGetImageFileMachines @ 0x180044D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     RtlpFilterCorruptedModuleException @ 0x18013B11C (RtlpFilterCorruptedModuleException.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     NtQuerySection @ 0x18015F960 (NtQuerySection.c)
 *     ZwMapViewOfSectionEx @ 0x180161310 (ZwMapViewOfSectionEx.c)
 *     NtUnmapViewOfSectionEx @ 0x180162B30 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall RtlGetImageFileMachines(const wchar_t *a1, int *a2)
{
  size_t v3; // rax
  int v4; // eax
  __int16 v5; // dx
  int v6; // eax
  unsigned __int64 v7; // rdi
  int v8; // edi
  bool v9; // zf
  int v10; // edi
  int v11; // edi
  int v12; // edi
  unsigned int v13; // r14d
  unsigned __int64 v14; // r15
  bool v15; // r12
  unsigned __int64 v16; // rsi
  int v17; // edx
  __int16 v18; // ax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned int v23; // r11d
  unsigned int i; // r8d
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // ecx
  NTSTATUS Section; // [rsp+50h] [rbp-148h]
  HANDLE FileHandle; // [rsp+70h] [rbp-128h] BYREF
  __int64 v31; // [rsp+78h] [rbp-120h] BYREF
  __int64 v32; // [rsp+80h] [rbp-118h]
  __int64 v33; // [rsp+88h] [rbp-110h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-108h] BYREF
  _DWORD *v35; // [rsp+98h] [rbp-100h]
  __int128 v36; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v37; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int64 v39; // [rsp+D0h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp-90h] BYREF
  _BYTE v42[48]; // [rsp+120h] [rbp-78h] BYREF
  __int128 v43; // [rsp+150h] [rbp-48h]
  unsigned __int64 v44; // [rsp+1A8h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+1B0h] [rbp+18h] BYREF
  unsigned __int64 v46; // [rsp+1B8h] [rbp+20h] BYREF

  v36 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  Handle = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  *a2 = 0;
  v32 = 0LL;
  v37.m128i_i64[0] = 0LL;
  v37.m128i_i64[1] = (__int64)a1;
  if ( a1 )
  {
    v3 = wcslen(a1);
    v32 = v3;
    if ( v3 > 0x7FFE )
    {
      v4 = -1073741562;
      goto LABEL_5;
    }
    v32 = 2 * v3;
    v37.m128i_i16[0] = 2 * v3;
    v37.m128i_i16[1] = 2 * v3 + 2;
  }
  v4 = RtlpDosPathNameToRelativeNtPathName(0, &v37, 0LL, (unsigned __int16 *)&v36, 0LL, 0LL, 0LL);
LABEL_5:
  Section = v4;
  if ( v4 < 0 )
    goto LABEL_17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v36;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Section = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( Section < 0 )
    goto LABEL_17;
  Section = NtCreateSection(&Handle, 5LL, 0LL, 0LL, 2, 285212672, FileHandle);
  if ( Section < 0 )
    goto LABEL_17;
  Section = NtQuerySection(Handle, 1LL, v42, 64LL, 0LL);
  if ( Section < 0 )
    goto LABEL_17;
  v5 = v43;
  switch ( (unsigned __int16)v43 )
  {
    case 0x14Cu:
      *a2 |= 1u;
      break;
    case 0x1C4u:
      *a2 |= 4u;
      break;
    case 0x8664u:
      *a2 |= 2u;
      break;
    case 0xAA64u:
      *a2 |= 8u;
      break;
  }
  if ( (BYTE3(v43) & 2) != 0 && (BYTE3(v43) & 1) != 0 && v5 == 332 )
  {
    *a2 |= 4u;
    v6 = *a2 | 2;
    *a2 = v6;
    *a2 = v6 | 8;
LABEL_17:
    v7 = v44;
    goto LABEL_91;
  }
  v8 = 43620;
  v9 = v5 == -31132;
  if ( v5 == -31132 )
    goto LABEL_21;
  if ( v5 == -21916 )
  {
    v9 = 0;
LABEL_21:
    if ( !v9 )
      v8 = 34404;
    *(_QWORD *)&v38 = v38 & 0xFFFFFFFFFFFFFF00uLL | 6;
    DWORD2(v38) = v8;
    if ( (int)ZwMapViewOfSectionEx(Handle, -1LL, &v33, 0LL, &v46, 0, 2, &v38, 1) >= 0 )
    {
      v10 = v8 - 332;
      if ( v10 )
      {
        v11 = v10 - 120;
        if ( v11 )
        {
          v12 = v11 - 33952;
          if ( v12 )
          {
            if ( v12 == 9216 )
              *a2 |= 8u;
          }
          else
          {
            *a2 |= 2u;
          }
        }
        else
        {
          *a2 |= 4u;
        }
      }
      else
      {
        *a2 |= 1u;
      }
      NtUnmapViewOfSectionEx(-1LL, v33, 0LL);
    }
  }
  if ( (*(_BYTE *)a2 & 2) == 0 )
    goto LABEL_17;
  v13 = 0;
  Section = ZwMapViewOfSectionEx(Handle, -1LL, &v44, 0LL, &v46, 0, 2, 0LL, 0);
  if ( Section < 0 )
    goto LABEL_17;
  Section = 0;
  v34 = 0LL;
  RtlImageNtHeaderEx(1LL, v44, 0LL, &v34);
  v7 = v44;
  if ( v34 + 264 > v46 + v44 || v46 + v44 <= v44 || v34 < v44 || v34 + 264 <= v34 )
    goto LABEL_49;
  if ( *(_WORD *)(v34 + 24) == 267 )
    goto LABEL_91;
  v14 = *(unsigned int *)(v34 + 80);
  if ( v14 > v46 )
    goto LABEL_49;
  v15 = 1;
  v39 = v44;
  v31 = 0LL;
  v16 = 0LL;
  if ( (v44 & 2) != 0 || (v44 & 1) != 0 )
  {
    v15 = (v44 & 1) == 0;
    v7 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
    v39 = v44 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v17 = RtlImageNtHeaderEx(1LL, v7, 0LL, &v31);
  if ( !v31 )
    goto LABEL_46;
  v18 = *(_WORD *)(v31 + 24);
  if ( v18 != 267 )
  {
    if ( v18 == 523 && *(_DWORD *)(v31 + 132) > 0xAu )
    {
      v19 = *(unsigned int *)(v31 + 216);
      if ( (_DWORD)v19 )
      {
        v13 = *(_DWORD *)(v31 + 220);
        if ( v15 || (unsigned int)v19 < *(_DWORD *)(v31 + 84) )
        {
          v16 = v7 + v19;
          v17 = 0;
        }
        else
        {
          v16 = RtlAddressInSectionTable(v31, v7, (unsigned int)v19);
          v27 = 0;
          if ( !v16 )
            v27 = -1073741811;
          v17 = v27;
        }
      }
      else
      {
        v17 = -1073741822;
      }
      goto LABEL_46;
    }
LABEL_65:
    v17 = -1073741811;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v31 + 116) <= 0xAu )
    goto LABEL_65;
  v21 = *(unsigned int *)(v31 + 200);
  if ( (_DWORD)v21 )
  {
    v13 = *(_DWORD *)(v31 + 204);
    if ( v15 || (unsigned int)v21 < *(_DWORD *)(v31 + 84) )
    {
      v16 = v7 + v21;
      v17 = 0;
    }
    else
    {
      v35 = 0LL;
      v22 = (_DWORD *)(v31 + *(unsigned __int16 *)(v31 + 20) + 24LL);
      v35 = v22;
      v23 = *(unsigned __int16 *)(v31 + 6);
      for ( i = 0; i < v23; ++i )
      {
        v25 = v22[3];
        if ( (unsigned int)v21 >= v25 && (unsigned int)v21 < v22[4] + v25 )
        {
          if ( v22 )
          {
            v16 = v21 + v7 + (unsigned int)v22[5] - (unsigned __int64)(unsigned int)v22[3];
            goto LABEL_61;
          }
          break;
        }
        v22 += 10;
        v35 = v22;
      }
      v16 = 0LL;
LABEL_61:
      v26 = 0;
      if ( !v16 )
        v26 = -1073741811;
      v17 = v26;
    }
  }
  else
  {
    v17 = -1073741822;
  }
LABEL_46:
  v7 = v44;
  if ( v17 < 0 || !v16 )
    goto LABEL_91;
  v20 = v16 + v13;
  if ( v20 > v14 + v44 || v14 + v44 <= v44 || v16 < v44 || v20 <= v16 || *(_DWORD *)v16 != v13 )
  {
LABEL_49:
    Section = -1073741701;
    goto LABEL_91;
  }
  if ( v13 >= 0xD0 && *(_QWORD *)(v16 + 200) )
  {
    *a2 &= ~2u;
    *a2 |= 0x10u;
  }
LABEL_91:
  if ( v7 )
    NtUnmapViewOfSectionEx(-1LL, v7, 0LL);
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( *((_QWORD *)&v36 + 1) )
    RtlpSysVolFree(*((__int64 *)&v36 + 1));
  return (unsigned int)Section;
}
