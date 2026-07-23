/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x180141F90
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlpInitMuiCriticalSection @ 0x1800537F0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180053AA0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180055E80 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180056350 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlCleanUpTEBLangLists @ 0x18008FCA0 (RtlCleanUpTEBLangLists.c)
 *     LdrpOpenKey @ 0x1800D92C0 (LdrpOpenKey.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DACF0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlStringLengthWorkerW_0 @ 0x1800E9478 (RtlStringLengthWorkerW_0.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     _MuiRegAllocArray_0 @ 0x180143DC8 (_MuiRegAllocArray_0.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtEnumerateKey @ 0x18015F480 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x1801609B0 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160E10 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x180160FB0 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  wchar_t *Heap_0; // r15
  int SystemDefaultUILanguage; // ebx
  wchar_t *v3; // r11
  ULONG v4; // r14d
  unsigned int v5; // edi
  _QWORD *v6; // rsi
  NTSTATUS v7; // r14d
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  void *v14; // rcx
  char v16; // [rsp+38h] [rbp-D0h]
  __int64 DefaultUILanguageId; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PLCID Lcid; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING KeyHandle_8; // [rsp+68h] [rbp-A0h] BYREF
  ULONG ResultLength[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING String; // [rsp+88h] [rbp-80h] BYREF
  char v26; // [rsp+98h] [rbp-70h] BYREF

  v0 = 0;
  Handle = 0LL;
  Heap_0 = 0LL;
  LOWORD(DefaultUILanguageId) = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  KeyHandle_8 = 0LL;
  LOWORD(v18) = 0;
  v16 = 0;
  Lcid = 0LL;
  ResultLength[0] = 0;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  String.Buffer = (wchar_t *)&v26;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName((unsigned __int16)DefaultUILanguageId, &String) || !Lcid )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_47;
  }
  DefaultUILanguageId = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW_0(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &DefaultUILanguageId);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_47:
    if ( KeyHandle )
      NtClose(KeyHandle);
    if ( Heap_0 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  }
  else
  {
    KeyHandle_8.Buffer = v3;
    KeyHandle_8.Length = 2 * DefaultUILanguageId;
    KeyHandle_8.MaximumLength = 2 * DefaultUILanguageId + 2;
    SystemDefaultUILanguage = LdrpOpenKey(&KeyHandle_8, 0LL, 0xF003Fu, &KeyHandle);
    if ( SystemDefaultUILanguage >= 0 )
    {
      LODWORD(DefaultUILanguageId) = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0LL;
      Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
      if ( !Heap_0 )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_47;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v7 = NtEnumerateKey(KeyHandle, v4, KeyBasicInformation, Heap_0, 0x200u, ResultLength);
            if ( v7 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v7 != -2147483622 )
                SystemDefaultUILanguage = v7;
              if ( v6 )
              {
                if ( v5 )
                {
                  if ( SystemDefaultUILanguage < 0 )
                  {
                    do
                    {
                      v14 = (void *)v6[--v5];
                      Handle = v14;
                      if ( v14 )
                        NtClose(v14);
                    }
                    while ( v5 );
                  }
                  else
                  {
                    do
                    {
                      v10 = (void *)v6[--v5];
                      Handle = v10;
                      if ( v10 )
                      {
                        v16 = 1;
                        NtDeleteKey(v10);
                        NtClose(Handle);
                      }
                    }
                    while ( v5 );
                  }
                }
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
              }
              if ( SystemDefaultUILanguage >= 0 && v16 )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              goto LABEL_47;
            }
            v8 = *((unsigned int *)Heap_0 + 3);
            v4 = DefaultUILanguageId + 1;
            LODWORD(DefaultUILanguageId) = DefaultUILanguageId + 1;
            if ( v8 + 24 <= 0x200 )
            {
              Heap_0[(v8 >> 1) + 8] = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap_0 + 8, 0, &v18) < 0 )
              {
                if ( wcsicmp(Heap_0 + 8, String.Buffer) )
                  break;
              }
            }
          }
          KeyHandle_8 = 0LL;
          if ( Heap_0 != (wchar_t *)-16LL )
            break;
LABEL_17:
          if ( LdrpOpenKey(&KeyHandle_8, KeyHandle, 0xF003Fu, &Handle) >= 0 )
          {
            if ( v6 )
            {
              if ( v5 >= v0 )
              {
                v11 = (_QWORD *)MuiRegAllocArray_0(v9, v0 + 10);
                v12 = v11;
                if ( !v11 )
                {
LABEL_20:
                  v7 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v11, v6, v0);
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
                v0 += 10;
                v6 = v12;
              }
            }
            else
            {
              v0 = 10;
              v6 = (_QWORD *)MuiRegAllocArray_0(v9, 10LL);
              if ( !v6 )
                goto LABEL_20;
            }
            v13 = v5++;
            v6[v13] = Handle;
            Handle = 0LL;
          }
        }
        v24 = 0LL;
        if ( (int)RtlStringLengthWorkerW_0(Heap_0 + 8, 0x7FFFLL, &v24) >= 0 )
        {
          KeyHandle_8.Buffer = Heap_0 + 8;
          KeyHandle_8.Length = 2 * v24;
          KeyHandle_8.MaximumLength = 2 * v24 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
