/*
 * XREFs of GetWindowsDirectoryDevicePath @ 0x14011B9E0
 * Callers:
 *     ?ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z @ 0x14011B724 (-ConvertHandleAndVerifyLoc@@YAPEAXPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x14011BB5C (-GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     wcsrchr @ 0x1401C766C (wcsrchr.c)
 */

__int64 __fastcall GetWindowsDirectoryDevicePath(PUNICODE_STRING DestinationString)
{
  WCHAR *v2; // rdi
  wchar_t *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  WCHAR *v8; // rsi
  int SymbolicLink; // ebx
  WCHAR *v10; // rbx
  wchar_t *v11; // rax
  wchar_t *Str[2]; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF

  v2 = 0LL;
  *(_OWORD *)Str = 0LL;
  Destination = 0LL;
  v3 = (wchar_t *)Win32AllocPoolZInitImpl(256LL, 0x208uLL, 0x626B7355u);
  v4 = Win32AllocPoolZInitImpl(256LL, 0x208uLL, 0x626B7355u);
  v8 = (WCHAR *)v4;
  if ( v3 && v4 )
  {
    Str[1] = v3;
    LODWORD(Str[0]) = 34078720;
    SymbolicLink = GetSymbolicLink((PUNICODE_STRING)Str, L"\\SystemRoot");
    if ( SymbolicLink >= 0 )
    {
      Destination.Buffer = v8;
      *(_DWORD *)&Destination.Length = 34078720;
      while ( 1 )
      {
        v10 = v2;
        v11 = wcsrchr(Str[1], 0x5Cu);
        v2 = v11;
        if ( v10 )
          *v10 = 92;
        if ( !v11 )
          break;
        *v11 = 0;
        SymbolicLink = GetSymbolicLink(&Destination, Str[1]);
        if ( SymbolicLink >= 0 )
        {
          *v2 = 92;
          RtlAppendUnicodeToString(&Destination, v2);
          RtlCopyUnicodeString(DestinationString, &Destination);
          goto LABEL_11;
        }
      }
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)Str);
      SymbolicLink = 0;
    }
  }
  else
  {
    SymbolicLink = -1073741801;
    if ( !v3 )
      goto LABEL_12;
  }
LABEL_11:
  GreDeleteFastMutex((char *)v3, v5, v6, v7);
LABEL_12:
  if ( v8 )
    GreDeleteFastMutex((char *)v8, v5, v6, v7);
  return (unsigned int)SymbolicLink;
}
