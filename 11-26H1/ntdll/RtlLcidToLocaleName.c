/*
 * XREFs of RtlLcidToLocaleName @ 0x1800515E0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001B390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18004DC00 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpGetParentLangId @ 0x18004DD38 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A71F0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800A976C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x18004C938 (RtlpGetUserLocaleName.c)
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180051870 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112980 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // bp
  LCID v7; // ebx
  __int64 v8; // r11
  int v9; // r8d
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _WORD *v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[176]; // [rsp+40h] [rbp-C8h] BYREF

  v21 = 85LL;
  v5 = Flags;
  v7 = lcid;
  DestinationString = 0LL;
  if ( (lcid & 0xFFFFEFFF) == 0 )
    return -1073741585;
  if ( LocaleName )
  {
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v23, &v21) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v23, (unsigned int)v21, LocaleName);
      }
      else
      {
        if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
        {
          v8 = pTblPtrs;
          if ( pTblPtrs )
            goto LABEL_9;
          if ( RtlpLoadNlsData(
                 *(__int64 *)&lcid,
                 (__int64)LocaleName,
                 *(__int64 *)&Flags,
                 (ULONG *)AllocateDestinationString) )
          {
            v8 = pTblPtrs;
LABEL_9:
            if ( v7 == 2048 )
              v7 = gSystemLocale;
            v9 = 0;
            v10 = *(unsigned __int16 *)(v8 + 4) - 1;
            while ( 1 )
            {
              v11 = v10;
              if ( v9 > v10 )
                break;
              v12 = (v9 + v10) / 2;
              v13 = 8LL * v12;
              v14 = *(_QWORD *)(v8 + 16);
              v15 = v7 - *(_DWORD *)(v14 + v13);
              if ( v7 == *(_DWORD *)(v14 + v13) )
              {
                if ( v12 < 0 )
                  return -1073741585;
                if ( (v5 & 2) == 0 )
                {
                  _mm_lfence();
                  if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                                 * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 4)
                                 + *(_QWORD *)(pTblPtrs + 8)
                                 + 24LL) & 1) == 0 )
                    return -1073741585;
                }
                _mm_lfence();
                v16 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 6);
                v17 = *(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16;
                if ( !v17 )
                  return -1073741823;
                v18 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16);
                v19 = 84LL;
                while ( *v18 )
                {
                  ++v18;
                  if ( !--v19 )
                  {
                    v21 = 0LL;
                    return -1073741823;
                  }
                }
                return RtlpInitUnicodeStringUsingBuffer(AllocateDestinationString, v17, 84 - v19, LocaleName);
              }
              if ( v15 >= 0 )
                v9 = v12 + 1;
              v10 = v12 - 1;
              if ( v15 >= 0 )
                v10 = v11;
            }
            return -1073741585;
          }
          return -1073741823;
        }
        DestinationString.Buffer = (wchar_t *)v23;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(
                   AllocateDestinationString,
                   DestinationString.Buffer,
                   DestinationString.Length >> 1,
                   LocaleName);
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
