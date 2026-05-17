/*
 * XREFs of RtlpProbeAssemblyStorageRootForAssembly @ 0x1800A3520
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800A28EC (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x1800A4880 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpProbeAssemblyStorageRootForAssembly(
        __int64 a1,
        const void **a2,
        const void **a3,
        const void *a4,
        __int64 a5,
        __int64 *a6,
        HANDLE *a7)
{
  __int64 v8; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  _BYTE *Atom; // rbx
  _WORD *v13; // rsi
  __int64 v14; // rax
  unsigned __int16 v15; // si
  NTSTATUS v16; // edi
  __int64 v17; // r12
  void *v18; // rax
  __int64 *v19; // rdx
  HANDLE *v20; // rcx
  _WORD *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  void *v25; // rax
  unsigned __int8 v26; // [rsp+60h] [rbp-A0h]
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  __m128i v28; // [rsp+70h] [rbp-90h] BYREF
  __int128 v29; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v30; // [rsp+90h] [rbp-70h]
  HANDLE *v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE Src[528]; // [rsp+100h] [rbp+0h] BYREF

  v30 = a6;
  v31 = a7;
  v8 = (__int64)a4;
  v26 = 0;
  FileHandle = 0LL;
  v28 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( !a2 || !a3 || !a4 || !a5 || !a6 || !a7 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() bad parameters\n"
      "SXS:  Flags:               0x%lx\n"
      "SXS:  Root:                %p\n"
      "SXS:  AssemblyDirectory:   %p\n"
      "SXS:  PreAllocatedString:  %p\n"
      "SXS:  DynamicString:       %p\n"
      "SXS:  StringUsed:          %p\n"
      "SXS:  OpenDirectoryHandle: %p\n",
      "RtlpProbeAssemblyStorageRootForAssembly",
      0,
      a2,
      a3,
      a4,
      (const void *)a5,
      a6,
      a7);
    v16 = -1073741811;
    goto LABEL_52;
  }
  v10 = *(unsigned __int16 *)a2;
  if ( (_WORD)v10 )
  {
    v22 = a2[1];
    if ( v22[(v10 >> 1) - 1] != 92 && v22[(v10 >> 1) - 1] != 47 )
    {
      v26 = 1;
      v10 += 2LL;
    }
  }
  v11 = v10 + *(unsigned __int16 *)a3 + 4LL;
  if ( v11 > 0xFFFE )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: Assembly storage resolution failing probe because combined path length does not fit in an UNICODE_STRING.\n",
      92LL);
    v16 = -1073741562;
LABEL_52:
    Atom = (_BYTE *)v28.m128i_i64[1];
    goto LABEL_28;
  }
  if ( v11 > 0x208 )
  {
    Atom = (_BYTE *)RtlpAllocateAtom((unsigned __int16)v11);
    if ( !Atom )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: Assembly storage resolution failing probe because attempt to allocate %u bytes failed.\n",
        (unsigned __int16)v11);
      v16 = -1073741801;
      goto LABEL_28;
    }
  }
  else
  {
    Atom = Src;
  }
  memmove(Atom, a2[1], *(unsigned __int16 *)a2);
  v13 = &Atom[*(unsigned __int16 *)a2];
  if ( v26 )
    *v13++ = 92;
  memmove(v13, a3[1], *(unsigned __int16 *)a3);
  v14 = *(unsigned __int16 *)a3;
  v28 = 0LL;
  *(_WORD *)((char *)v13 + v14) = 0;
  v15 = *(_WORD *)a2 + *(_WORD *)a3 + 2 * v26;
  if ( (int)RtlInitUnicodeStringEx(&v28, Atom) < 0
    || (int)RtlpDosPathNameToRelativeNtPathName(2, &v28, 0LL, (unsigned __int16 *)&v29, 0LL, 0LL, (__int64)&v32) < 0 )
  {
    DbgPrintEx(51, 0, "SXS: Attempt to translate DOS path name \"%S\" to NT format failed\n", (const wchar_t *)Atom);
    v16 = -1073741766;
    goto LABEL_28;
  }
  v17 = *((_QWORD *)&v29 + 1);
  if ( (_WORD)v32 )
  {
    v18 = (void *)v33;
    v29 = v32;
  }
  else
  {
    v18 = 0LL;
    *(_QWORD *)&v33 = 0LL;
  }
  ObjectAttributes.RootDirectory = v18;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v29;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlReleaseRelativeName(&v32);
  if ( v16 < 0 )
  {
    v23 = (unsigned int)(v16 + 1073741809);
    if ( (unsigned int)v23 <= 0x2B && (v24 = 0x82000000001LL, _bittest64(&v24, v23)) )
      v16 = -1072365564;
    else
      DbgPrintEx(
        51,
        0,
        "SXS: Unable to open assembly directory under storage root \"%S\"; Status = 0x%08lx\n",
        (const wchar_t *)Atom,
        v16);
  }
  else
  {
    if ( v11 <= *(unsigned __int16 *)(v8 + 2) )
    {
      memmove(*(void **)(v8 + 8), Atom, v15);
LABEL_25:
      v19 = v30;
      v16 = 0;
      *v30 = v8;
      *(_DWORD *)(*(_QWORD *)(v8 + 8) + v15) = 92;
      v20 = v31;
      *(_WORD *)*v19 = v15 + 2;
      *v20 = FileHandle;
      FileHandle = 0LL;
      goto LABEL_26;
    }
    if ( Atom != Src )
    {
      *(_QWORD *)(a5 + 8) = Atom;
      Atom = 0LL;
LABEL_50:
      *(_WORD *)(a5 + 2) = v11;
      v8 = a5;
      goto LABEL_25;
    }
    v25 = (void *)RtlpAllocateAtom(v11);
    *(_QWORD *)(a5 + 8) = v25;
    if ( v25 )
    {
      memmove(v25, Atom, v15);
      goto LABEL_50;
    }
    v16 = -1073741801;
  }
LABEL_26:
  if ( v17 )
    RtlFreeHeap_0();
LABEL_28:
  if ( Atom && Atom != Src )
    RtlpSysVolFree((__int64)Atom);
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v16;
}
