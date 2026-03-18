/*
 * XREFs of ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x14017D4C8
 * Callers:
 *     fnHkINLPMSG @ 0x1400C4FD0 (fnHkINLPMSG.c)
 *     WCSToMBEx @ 0x14011BD24 (WCSToMBEx.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x14017CAC8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     EngMultiByteToWideChar @ 0x14017CF00 (EngMultiByteToWideChar.c)
 *     cUnicodeRangesSupported @ 0x14017D0AC (cUnicodeRangesSupported.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1401EEA10 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x14022458C (RtlMBMessageWParamCharToWCS.c)
 *     EngWideCharToMultiByte @ 0x14026F1A0 (EngWideCharToMultiByte.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?GetNlsTablePath@@YAHIPEAG@Z @ 0x1402284C4 (-GetNlsTablePath@@YAHIPEAG@Z.c)
 *     ?ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z @ 0x14026E420 (-ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        unsigned __int16 *a2,
        ULONG a3,
        char *a4,
        ULONG MaxBytesInMultiByteString,
        int a6)
{
  struct _CPTABLEINFO *p_CodePageTable; // rsi
  void *v11; // rdi
  Gre::Base *v12; // rcx
  NTSTATUS v13; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // r14
  __int64 v16; // rdx
  int v17; // ecx
  _DWORD *v18; // rbx
  ULONG v19; // esi
  void *Buffer; // rax
  NTSTATUS v21; // eax
  struct _FAST_MUTEX *v22; // rcx
  void *v23; // rsi
  ULONG BytesInUnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+6Ch] [rbp-94h]
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-28h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  v27 = a1;
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
      v13 = RtlMultiByteToUnicodeN(a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v13 = RtlUnicodeToMultiByteN(a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v13 < 0 || (BytesInUnicodeString & 0x80000000) != 0 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    if ( a1 == 42 )
      return ConvertToAndFromWideCharSymCP(a2, a3, a4, MaxBytesInMultiByteString, a6);
    v15 = Gre::Base::Globals(v12);
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v15 + 1456LL));
    v18 = *(_DWORD **)(W32GetSessionState(v17, v16) + 96);
    if ( v27 == v18[6013] && v18[6031] == 1 )
    {
      ++v18[6030];
      p_CodePageTable = (struct _CPTABLEINFO *)(v18 + 6014);
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v15 + 1456LL));
    if ( !p_CodePageTable )
    {
      if ( !GetNlsTablePath(v27, SourceString) )
        return 0xFFFFFFFFLL;
      FileHandle = 0LL;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      DestinationString = 0LL;
      IoStatusBlock = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      v33 = 0LL;
      FileInformation = 0LL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v19 = DWORD2(FileInformation);
        if ( DWORD2(FileInformation) )
        {
          Buffer = (void *)PALLOCMEM(DWORD2(FileInformation), 1668768583LL);
          v11 = Buffer;
          if ( Buffer )
          {
            if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v19, 0LL, 0LL) < 0 )
            {
              Win32FreePool(v11);
              v11 = 0LL;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v11 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable((PUSHORT)v11, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v21 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v21 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v21 < 0 || (BytesInUnicodeString & 0x80000000) != 0 )
      BytesInUnicodeString = -1;
    v22 = (struct _FAST_MUTEX *)(*(_QWORD *)v15 + 1456LL);
    if ( p_CodePageTable == &CodePageTable )
    {
      KeAcquireGuardedMutex(v22);
      if ( v18[6030] )
      {
        v23 = v11;
      }
      else
      {
        v18[6013] = v27;
        memmove(v18 + 6014, p_CodePageTable, 0x40uLL);
        v23 = (void *)*((_QWORD *)v15 + 355);
        *((_QWORD *)v15 + 355) = v11;
        v18[6031] = 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v15 + 1456LL));
      if ( v23 )
        Win32FreePool(v23);
    }
    else
    {
      KeAcquireGuardedMutex(v22);
      --v18[6030];
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(*(_QWORD *)v15 + 1456LL));
    }
  }
  return BytesInUnicodeString;
}
