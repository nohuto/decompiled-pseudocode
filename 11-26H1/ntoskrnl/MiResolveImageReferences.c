/*
 * XREFs of MiResolveImageReferences @ 0x14097E950
 * Callers:
 *     MiResolveImageImports @ 0x14087B78C (MiResolveImageImports.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     ApiSetResolveToHost @ 0x14052B7C8 (ApiSetResolveToHost.c)
 *     _strnicmp @ 0x140538790 (_strnicmp.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407F4270 (PsQueryCurrentApiSetSchema.c)
 *     MiDuplicateUnicodeString @ 0x14086DC40 (MiDuplicateUnicodeString.c)
 *     MiFormFullImageName @ 0x14087B608 (MiFormFullImageName.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     MiSnapThunk @ 0x14097ECD8 (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x14097F024 (MiAllocateImportList.c)
 *     MiCompressImportList @ 0x14097F074 (MiCompressImportList.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiDereferenceImports @ 0x140B3D3D0 (MiDereferenceImports.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x140B6F0F4 (MiSnapUnresolvedImport.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiResolveImageReferences(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        const UNICODE_STRING *a4,
        int a5)
{
  char *v5; // r12
  unsigned int *v6; // rax
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 ImportList; // rax
  int SystemImage; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rdi
  wchar_t *Buffer; // r15
  struct _LIST_ENTRY *CurrentApiSetSchema; // rax
  char v18; // r13
  unsigned __int16 *v19; // r12
  PVOID *v20; // rbx
  PVOID v21; // r15
  __int64 v22; // rax
  char *v23; // rdi
  unsigned int v24; // ebx
  int v25; // eax
  unsigned __int16 Length; // bx
  unsigned int v28; // ebx
  int CurrentProcessorColor; // eax
  ULONG v30; // edi
  char v31; // [rsp+48h] [rbp-91h]
  unsigned int v32; // [rsp+4Ch] [rbp-8Dh]
  __int64 v33; // [rsp+50h] [rbp-89h] BYREF
  __int64 v34; // [rsp+58h] [rbp-81h]
  ULONG Size; // [rsp+60h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-71h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-61h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-51h] BYREF
  PVOID *v39; // [rsp+98h] [rbp-41h] BYREF
  UNICODE_STRING *p_String1; // [rsp+A0h] [rbp-39h]
  _QWORD v41[2]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-21h] BYREF
  char *v43; // [rsp+C0h] [rbp-19h]
  STRING DestinationString; // [rsp+D0h] [rbp-9h] BYREF

  v41[0] = 3932218LL;
  v41[1] = L"\\SystemRoot\\System32\\drivers\\";
  *(_QWORD *)&String1.Length = 0LL;
  v5 = *(char **)(a1 + 48);
  v39 = 0LL;
  v42 = 0LL;
  LOBYTE(v33) = 0;
  v43 = v5;
  *(_QWORD *)(a1 + 136) = -2LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  *(_OWORD *)P = 0LL;
  v6 = (unsigned int *)RtlImageDirectoryEntryToData(v5, 1u, 1u, &Size);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v8 = 0;
  v31 = 0;
  v9 = 0LL;
  p_String1 = 0LL;
  v34 = 0LL;
  v32 = 0;
  String1.Buffer = 0LL;
  v10 = 0LL;
  if ( !v6[3] )
    goto LABEL_8;
  do
  {
    if ( !*v6 )
      break;
    v6 += 5;
    v10 = (unsigned int)(v10 + 1);
  }
  while ( v6[3] );
  if ( (_DWORD)v10 )
  {
    ImportList = MiAllocateImportList(v10);
    if ( !ImportList )
    {
      SystemImage = -1073741670;
      v13 = 0LL;
      goto LABEL_51;
    }
  }
  else
  {
LABEL_8:
    ImportList = 0LL;
  }
  v9 = (_QWORD *)ImportList;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = v7[3];
      if ( !(_DWORD)v14 || !*v7 )
      {
        *(_QWORD *)(a1 + 136) = MiCompressImportList(v9);
        return 0LL;
      }
      v15 = &v5[v14];
      p_String1 = 0LL;
      RtlInitAnsiString(&DestinationString, &v5[v14]);
      SystemImage = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      v13 = 0LL;
      if ( SystemImage < 0 )
        goto LABEL_51;
      Buffer = UnicodeString.Buffer;
      if ( !UnicodeString.Buffer )
      {
        SystemImage = -1073741670;
        goto LABEL_51;
      }
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      SystemImage = ApiSetResolveToHost(
                      (__int64)CurrentApiSetSchema,
                      &UnicodeString.Length,
                      a2,
                      (char *)&v33,
                      (__int64)P);
      v13 = 0LL;
      if ( SystemImage < 0 )
        goto LABEL_51;
      v18 = v33;
      if ( !(_BYTE)v33 )
      {
        v19 = a3;
        Size = 0;
        goto LABEL_17;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( LOWORD(P[0]) )
        break;
      v8 = v32;
      v7 += 5;
    }
    Size = 0x80000000;
    v19 = (unsigned __int16 *)v41;
    SystemImage = MiDuplicateUnicodeString(&UnicodeString, (const UNICODE_STRING *)P, 0);
    v13 = 0LL;
    if ( SystemImage < 0 )
      goto LABEL_66;
    Buffer = UnicodeString.Buffer;
LABEL_17:
    if ( a4 )
    {
      if ( strnicmp(v15, "ntoskrnl", 8uLL) )
      {
        if ( strnicmp(v15, "hal", 3uLL) )
        {
          Length = UnicodeString.Length;
          if ( RtlCompareUnicodeStrings(Buffer, (unsigned __int64)UnicodeString.Length >> 1, L"ksrext.sys", 0xAuLL, 1u) )
            break;
        }
      }
    }
    String1 = UnicodeString;
LABEL_19:
    v20 = (PVOID *)PsLoadedModuleList;
    p_String1 = &String1;
    while ( 1 )
    {
      if ( v20 == &PsLoadedModuleList )
        goto LABEL_60;
      if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v20 + 11), 1u) )
        break;
      v20 = (PVOID *)*v20;
    }
    v21 = v20[6];
    if ( v21 )
    {
      if ( (*(_DWORD *)(MiGetBaseLoaderPortion((__int64)v20) + 184) & 0x80u) != 0 )
      {
        SystemImage = -1073740608;
LABEL_74:
        v13 = v34;
        goto LABEL_66;
      }
      if ( ((_DWORD)v20[13] & 0x1000) == 0 )
      {
        if ( v20[17] == (PVOID)1 )
          goto LABEL_45;
        ++*((_WORD *)v20 + 54);
      }
    }
    else
    {
LABEL_60:
      if ( a5 )
      {
        SystemImage = -1073740945;
        goto LABEL_74;
      }
      if ( !(unsigned int)MiFormFullImageName(v19, (const STRING *)&UnicodeString, (STRING *)P) )
        goto LABEL_65;
      v30 = Size | 8;
      SystemImage = MmLoadSystemImageEx((unsigned int)P, (_DWORD)a4, 0, 0, Size | 8, (__int64)&v39, (__int64)&v42);
      if ( SystemImage == -1073741772 )
      {
        ExFreePoolWithTag(P[1], 0);
        if ( v19 == (unsigned __int16 *)v41 )
        {
          if ( !v18 )
          {
            SystemImage = -1073741772;
            goto LABEL_74;
          }
          if ( !(unsigned int)MiFormFullImageName(a3, (const STRING *)&UnicodeString, (STRING *)P) )
          {
            SystemImage = -1073741670;
            goto LABEL_74;
          }
        }
        else if ( !(unsigned int)MiFormFullImageName(
                                   (unsigned __int16 *)v41,
                                   (const STRING *)&UnicodeString,
                                   (STRING *)P) )
        {
          goto LABEL_65;
        }
        SystemImage = MmLoadSystemImageEx((unsigned int)P, (_DWORD)a4, 0, 0, v30, (__int64)&v39, (__int64)&v42);
      }
      ExFreePoolWithTag(P[1], 0);
      v13 = 0LL;
      if ( SystemImage < 0 )
        goto LABEL_66;
      v20 = v39;
      v21 = v39[6];
    }
    if ( v20[17] != (PVOID)1 && ((_DWORD)v20[13] & 0x1000) == 0 )
    {
      v9[v32 + 1] = v20;
      v8 = ++v32;
      goto LABEL_31;
    }
LABEL_45:
    v8 = v32;
LABEL_31:
    v22 = *v7;
    v5 = v43;
    if ( (_DWORD)v22 )
    {
      v23 = &v43[v22];
      v24 = (_DWORD)v43 + v7[4];
      while ( *(_QWORD *)v23 )
      {
        v25 = MiSnapThunk((_DWORD)v21, (_DWORD)v5, (_DWORD)v23, v24, 0LL);
        if ( v25 < 0 )
        {
          if ( v25 == -1073741670 )
            v25 = -1073741213;
          SystemImage = v25;
          v13 = MiSnapUnresolvedImport(v5, v23, v21);
          goto LABEL_51;
        }
        v23 += 8;
        v24 += 8;
      }
    }
    if ( UnicodeString.Buffer )
    {
      ExFreePool(UnicodeString.Buffer);
      UnicodeString = 0LL;
    }
    if ( v31 )
    {
      ExFreePoolWithTag(String1.Buffer, 0);
      v31 = 0;
    }
    v7 += 5;
  }
  v28 = (unsigned __int16)(a4->Length + Length);
  String1.MaximumLength = v28;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  String1.Buffer = (wchar_t *)ExAllocatePoolMm(256LL, v28, 1413770573, CurrentProcessorColor | 0x80000000);
  if ( String1.Buffer )
  {
    String1.Length = 0;
    RtlAppendUnicodeStringToString(&String1, a4);
    RtlAppendUnicodeStringToString(&String1, &UnicodeString);
    v31 = 1;
    goto LABEL_19;
  }
LABEL_65:
  SystemImage = -1073741670;
  v13 = 0LL;
LABEL_66:
  v8 = v32;
LABEL_51:
  MiLogFailedDriverLoad(a2, p_String1, v13, (unsigned int)SystemImage);
  if ( v31 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( v9 )
  {
    if ( v8 != *v9 )
      *v9 = v8;
    MiDereferenceImports(v9);
    ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)SystemImage;
}
