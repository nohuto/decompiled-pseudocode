/*
 * XREFs of RtlLcidToLocaleName @ 0x180005EB0
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800024D0 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpGetParentLangId @ 0x180002608 (LdrpGetParentLangId.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x180032478 (LdrpQuerySxSMUIFile.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800AA63C (LdrpResSearchResourceHandle.c)
 *     LdrResSearchResource @ 0x1800AB1B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlpGetUserLocaleName @ 0x180001200 (RtlpGetUserLocaleName.c)
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180006140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180112ED0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLcidToLocaleName(int a1, __int64 a2, int a3, unsigned __int8 a4)
{
  char v5; // bp
  int v7; // ebx
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
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[176]; // [rsp+40h] [rbp-C8h] BYREF

  v21 = 85LL;
  v5 = a3;
  v7 = a1;
  DestinationString = 0LL;
  if ( (a1 & 0xFFFFEFFF) == 0 )
    return 3221225711LL;
  if ( a2 )
  {
    if ( (a3 & 0xFFFFFFFD) != 0 )
      return 3221225713LL;
    if ( a4 || *(_QWORD *)(a2 + 8) )
    {
      if ( a1 == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v23, &v21) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(a4, v23, (unsigned int)v21, a2);
      }
      else
      {
        if ( ((a1 - 1024) & 0xFFFFF7FF) != 0 )
        {
          v8 = pTblPtrs;
          if ( pTblPtrs )
            goto LABEL_9;
          if ( RtlpLoadNlsData() )
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
                  return 3221225711LL;
                if ( (v5 & 2) == 0 )
                {
                  _mm_lfence();
                  if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                                 * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 4)
                                 + *(_QWORD *)(pTblPtrs + 8)
                                 + 24LL) & 1) == 0 )
                    return 3221225711LL;
                }
                _mm_lfence();
                v16 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + v13 + 6);
                v17 = *(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16;
                if ( !v17 )
                  return 3221225473LL;
                v18 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v16);
                v19 = 84LL;
                while ( *v18 )
                {
                  ++v18;
                  if ( !--v19 )
                  {
                    v21 = 0LL;
                    return 3221225473LL;
                  }
                }
                return RtlpInitUnicodeStringUsingBuffer(a4, v17, 84 - v19, a2);
              }
              if ( v15 >= 0 )
                v9 = v12 + 1;
              v10 = v12 - 1;
              if ( v15 >= 0 )
                v10 = v11;
            }
            return 3221225711LL;
          }
          return 3221225473LL;
        }
        DestinationString.Buffer = (wchar_t *)v23;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
          return RtlpInitUnicodeStringUsingBuffer(a4, DestinationString.Buffer, DestinationString.Length >> 1, a2);
      }
      return 3221225473LL;
    }
  }
  return 3221225712LL;
}
