/*
 * XREFs of ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14018462C
 * Callers:
 *     fnHkINLPMSG @ 0x14003B750 (fnHkINLPMSG.c)
 *     RtlWCSMessageWParamCharToMB @ 0x14003DEC4 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14003E354 (RtlMBMessageWParamCharToWCS.c)
 *     WCSToMBEx @ 0x140129570 (WCSToMBEx.c)
 *     cUnicodeRangesSupported @ 0x14018435C (cUnicodeRangesSupported.c)
 *     EngMultiByteToWideChar @ 0x140258360 (EngMultiByteToWideChar.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x140260378 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     EngWideCharToMultiByte @ 0x140296DE0 (EngWideCharToMultiByte.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?GetNlsTablePath@@YAHIPEAG@Z @ 0x140261C80 (-GetNlsTablePath@@YAHIPEAG@Z.c)
 *     ?ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z @ 0x140295CFC (-ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        unsigned __int16 *a2,
        ULONG a3,
        char *a4,
        ULONG BytesInMultiByteString,
        int a6)
{
  struct _CPTABLEINFO *p_CodePageTable; // rsi
  void *v11; // rdi
  Gre::Base *v12; // rcx
  struct _FAST_MUTEX **v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  NTSTATUS v18; // eax
  struct _FAST_MUTEX *v19; // rcx
  NTSTATUS v21; // eax
  ULONG v22; // esi
  void *v23; // rax
  void *v24; // rsi
  ULONG BytesInUnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+6Ch] [rbp-94h]
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  v28 = a1;
  OemCodePage[0] = 0;
  AnsiCodePage = 0;
  BytesInUnicodeString = 0;
  p_CodePageTable = 0LL;
  v11 = 0LL;
  memset_0(&CodePageTable, 0, sizeof(CodePageTable));
  RtlGetDefaultCodePage(&AnsiCodePage, OemCodePage);
  if ( AnsiCodePage == a1 )
  {
    if ( a6 )
      v21 = RtlMultiByteToUnicodeN(a2, a3, &BytesInUnicodeString, a4, BytesInMultiByteString);
    else
      v21 = RtlUnicodeToMultiByteN(a4, BytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v21 >= 0 && (BytesInUnicodeString & 0x80000000) == 0 )
      return BytesInUnicodeString;
    return 0xFFFFFFFFLL;
  }
  if ( a1 != 42 )
  {
    v13 = (struct _FAST_MUTEX **)Gre::Base::Globals(v12);
    KeAcquireGuardedMutex(*v13 + 26);
    v17 = *(_QWORD *)(W32GetSessionState(v15, v14, v16) + 96);
    if ( v28 == *(_DWORD *)(v17 + 24028) && *(_DWORD *)(v17 + 24108) == 1 )
    {
      ++*(_DWORD *)(v17 + 24104);
      p_CodePageTable = (struct _CPTABLEINFO *)(v17 + 24032);
    }
    KeReleaseGuardedMutex(*v13 + 26);
    if ( p_CodePageTable )
      goto LABEL_5;
    if ( GetNlsTablePath(v28, SourceString) )
    {
      FileHandle = 0LL;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      DestinationString = 0LL;
      IoStatusBlock = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) >= 0 )
      {
        v34 = 0LL;
        FileInformation = 0LL;
        if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
        {
          v22 = DWORD2(FileInformation);
          if ( DWORD2(FileInformation) )
          {
            v23 = (void *)PALLOCMEM(DWORD2(FileInformation), 1668768583LL);
            v11 = v23;
            if ( v23 )
            {
              if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v23, v22, 0LL, 0LL) < 0 )
              {
                Win32FreePool(v11);
                v11 = 0LL;
              }
            }
          }
        }
        ZwClose(FileHandle);
        if ( v11 )
        {
          RtlInitCodePageTable((PUSHORT)v11, &CodePageTable);
          p_CodePageTable = &CodePageTable;
LABEL_5:
          if ( a6 )
            v18 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInUnicodeString, a4, BytesInMultiByteString);
          else
            v18 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, BytesInMultiByteString, &BytesInUnicodeString, a2, a3);
          if ( v18 < 0 || (BytesInUnicodeString & 0x80000000) != 0 )
            BytesInUnicodeString = -1;
          v19 = *v13 + 26;
          if ( p_CodePageTable == &CodePageTable )
          {
            KeAcquireGuardedMutex(v19);
            if ( *(_DWORD *)(v17 + 24104) )
            {
              v24 = v11;
            }
            else
            {
              *(_DWORD *)(v17 + 24028) = v28;
              memmove((void *)(v17 + 24032), p_CodePageTable, 0x40uLL);
              v24 = *(void **)(v17 + 24096);
              *(_QWORD *)(v17 + 24096) = v11;
              *(_DWORD *)(v17 + 24108) = 1;
            }
            KeReleaseGuardedMutex(*v13 + 26);
            if ( v24 )
              Win32FreePool(v24);
          }
          else
          {
            KeAcquireGuardedMutex(v19);
            --*(_DWORD *)(v17 + 24104);
            KeReleaseGuardedMutex(*v13 + 26);
          }
          return BytesInUnicodeString;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  return ConvertToAndFromWideCharSymCP(a2, a3, a4, BytesInMultiByteString, a6);
}
