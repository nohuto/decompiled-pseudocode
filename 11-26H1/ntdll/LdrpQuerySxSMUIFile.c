/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x18001D5D8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionString @ 0x18002C1A0 (RtlFindActivationContextSectionString.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFreeAnsiString @ 0x1800410A0 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     RtlCompareUnicodeStrings @ 0x18007B0A0 (RtlCompareUnicodeStrings.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(
        PUNICODE_STRING StringToFind,
        unsigned __int16 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        PUNICODE_STRING *NewName)
{
  LCID v7; // r15d
  NTSTATUS ActivationContextSectionString; // ebx
  __int64 hActCtx; // rdi
  unsigned int v12; // r13d
  const WCHAR *v13; // r14
  SIZE_T v14; // r15
  unsigned __int64 v15; // rdx
  ULONG NewFlags; // [rsp+54h] [rbp-1F4h] BYREF
  NTSTATUS v18; // [rsp+58h] [rbp-1F0h]
  __int64 v19; // [rsp+60h] [rbp-1E8h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+68h] [rbp-1E0h] BYREF
  PUNICODE_STRING StaticString; // [rsp+78h] [rbp-1D0h]
  PCWCH v22; // [rsp+80h] [rbp-1C8h]
  PUNICODE_STRING *v23; // [rsp+88h] [rbp-1C0h]
  _QWORD v24[2]; // [rsp+90h] [rbp-1B8h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-1A8h]
  __int128 v26; // [rsp+B0h] [rbp-198h]
  __int128 v27; // [rsp+C0h] [rbp-188h]
  __int64 v28; // [rsp+D0h] [rbp-178h]
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+E0h] [rbp-168h] BYREF
  char v30; // [rsp+150h] [rbp-F8h] BYREF

  StaticString = a3;
  v7 = a2;
  v23 = NewName;
  v19 = 0LL;
  LocaleName = 0LL;
  NewFlags = 0;
  ReturnedData.cbSize = 112;
  memset_thunk_772440563353939046(&ReturnedData.ulDataFormatVersion, 0, 0x6CuLL);
  v24[0] = 72LL;
  v24[1] = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     StringToFind,
                                     0LL,
                                     a3,
                                     a4,
                                     NewName,
                                     &NewFlags,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0LL, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion == 1 )
          {
            if ( (ReturnedData.ulFlags & 1) != 0 )
            {
              hActCtx = 0LL;
              ReturnedData.hActCtx = 0LL;
            }
            else
            {
              hActCtx = (__int64)ReturnedData.hActCtx;
              if ( (ReturnedData.ulFlags & 2) != 0 )
                hActCtx = -4LL;
              ReturnedData.hActCtx = (HANDLE)hActCtx;
            }
            v12 = *((unsigned __int16 *)ReturnedData.AssemblyMetadata.lpInformation + 46);
            v13 = (const WCHAR *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
            LocaleName.Buffer = (wchar_t *)&v30;
            LocaleName.MaximumLength = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, &LocaleName, 2u, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              v14 = (unsigned __int64)LocaleName.Length >> 1;
              if ( RtlCompareUnicodeStrings(v13, (unsigned __int64)v12 >> 1, LocaleName.Buffer, v14, 1u) )
              {
                ActivationContextSectionString = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                                                   hActCtx,
                                                   a2,
                                                   &v19);
                if ( ActivationContextSectionString >= 0 )
                {
                  if ( v19 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast(v24, v19);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       StringToFind,
                                                       0LL,
                                                       StaticString,
                                                       a4,
                                                       v23,
                                                       &NewFlags,
                                                       0LL,
                                                       0LL);
                    v18 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7u,
                                                         0LL,
                                                         2u,
                                                         StringToFind,
                                                         &ReturnedData);
                      v18 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( ReturnedData.ulDataFormatVersion == 1 )
                        {
                          v15 = *((unsigned __int16 *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                          WORD1(StaticString) = v15;
                          LOWORD(StaticString) = v15;
                          v22 = (PCWCH)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                      + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                          if ( RtlCompareUnicodeStrings(v22, v15 >> 1, LocaleName.Buffer, v14, 1u) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v18 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast(v24);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
