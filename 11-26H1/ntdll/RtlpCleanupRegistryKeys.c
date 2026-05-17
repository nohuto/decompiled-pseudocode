/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x180142090
 * Callers:
 *     <none>
 * Callees:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlpInitMuiCriticalSection @ 0x1800080C0 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180008370 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18000A750 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18000AC20 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlCleanUpTEBLangLists @ 0x18006F850 (RtlCleanUpTEBLangLists.c)
 *     LdrpOpenKey @ 0x1800DC350 (LdrpOpenKey.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800DDD80 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlStringLengthWorkerW_0 @ 0x1800EA268 (RtlStringLengthWorkerW_0.c)
 *     _wcsicmp @ 0x180128F40 (_wcsicmp.c)
 *     _MuiRegAllocArray_0 @ 0x180143EC8 (_MuiRegAllocArray_0.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtEnumerateKey @ 0x18015F580 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x180160AB0 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180160F10 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1801610B0 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned int v0; // r13d
  __int64 Heap_0; // r15
  int ProcessRegistryInfo; // ebx
  __int64 v3; // r8
  void *v4; // r11
  unsigned int v5; // r14d
  unsigned int v6; // edi
  _QWORD *v7; // rsi
  int v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  void *v15; // rcx
  char v17; // [rsp+38h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  _WORD *v21; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v22; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v23[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v26[2]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t *String2; // [rsp+90h] [rbp-78h]
  char v28; // [rsp+98h] [rbp-70h] BYREF

  v0 = 0;
  Handle = 0LL;
  Heap_0 = 0LL;
  LOWORD(v18) = 0;
  v26[1] = 0;
  *(_OWORD *)v23 = 0LL;
  LOWORD(v19) = 0;
  v17 = 0;
  v21 = 0LL;
  LODWORD(v24) = 0;
  v22 = 0LL;
  NtIsUILanguageComitted();
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v21);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_47;
  ProcessRegistryInfo = RtlpGetSystemDefaultUILanguage(&v18, v21, v3);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_47;
  String2 = (wchar_t *)&v28;
  v26[0] = 11272192;
  if ( !(unsigned __int8)RtlLCIDToCultureName((unsigned __int16)v18, (__int64)v26) || !v21 )
  {
    ProcessRegistryInfo = -1073741823;
    goto LABEL_47;
  }
  v18 = 0LL;
  ProcessRegistryInfo = RtlStringLengthWorkerW_0(
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                          0x7FFFLL,
                          &v18);
  if ( ProcessRegistryInfo < 0 )
  {
LABEL_47:
    if ( v22 )
      NtClose(v22);
    if ( Heap_0 )
      RtlFreeHeap_0();
  }
  else
  {
    v23[1] = v4;
    LOWORD(v23[0]) = 2 * v18;
    WORD1(v23[0]) = 2 * v18 + 2;
    ProcessRegistryInfo = LdrpOpenKey((__int64)v23, 0LL, 0xF003Fu, &v22);
    if ( ProcessRegistryInfo >= 0 )
    {
      LODWORD(v18) = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0LL;
      Heap_0 = RtlAllocateHeap_0();
      if ( !Heap_0 )
      {
        ProcessRegistryInfo = -1073741801;
        goto LABEL_47;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = NtEnumerateKey(v22, v5, 0LL, Heap_0, 512, &v24);
            if ( v8 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              ProcessRegistryInfo = 0;
              if ( v8 != -2147483622 )
                ProcessRegistryInfo = v8;
              if ( v7 )
              {
                if ( v6 )
                {
                  if ( ProcessRegistryInfo < 0 )
                  {
                    do
                    {
                      v15 = (void *)v7[--v6];
                      Handle = v15;
                      if ( v15 )
                        NtClose(v15);
                    }
                    while ( v6 );
                  }
                  else
                  {
                    do
                    {
                      v11 = (void *)v7[--v6];
                      Handle = v11;
                      if ( v11 )
                      {
                        v17 = 1;
                        NtDeleteKey(v11);
                        NtClose(Handle);
                      }
                    }
                    while ( v6 );
                  }
                }
                RtlFreeHeap_0();
              }
              if ( ProcessRegistryInfo >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo(2LL, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                ProcessRegistryInfo = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
                if ( ProcessRegistryInfo >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap_0();
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
              }
              goto LABEL_47;
            }
            v9 = *(unsigned int *)(Heap_0 + 12);
            v5 = v18 + 1;
            LODWORD(v18) = v18 + 1;
            if ( v9 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap_0 + 2 * (v9 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v21, (const wchar_t *)(Heap_0 + 16), 0, &v19) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap_0 + 16), String2) )
                  break;
              }
            }
          }
          *(_OWORD *)v23 = 0LL;
          if ( Heap_0 != -16 )
            break;
LABEL_17:
          if ( (int)LdrpOpenKey((__int64)v23, (__int64)v22, 0xF003Fu, &Handle) >= 0 )
          {
            if ( v7 )
            {
              if ( v6 >= v0 )
              {
                v12 = (_QWORD *)MuiRegAllocArray_0(v10, v0 + 10);
                v13 = v12;
                if ( !v12 )
                {
LABEL_20:
                  v8 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v12, v7, v0);
                RtlFreeHeap_0();
                v0 += 10;
                v7 = v13;
              }
            }
            else
            {
              v0 = 10;
              v7 = (_QWORD *)MuiRegAllocArray_0(v10, 10LL);
              if ( !v7 )
                goto LABEL_20;
            }
            v14 = v6++;
            v7[v14] = Handle;
            Handle = 0LL;
          }
        }
        v25 = 0LL;
        if ( (int)RtlStringLengthWorkerW_0((_WORD *)(Heap_0 + 16), 0x7FFFLL, &v25) >= 0 )
        {
          v23[1] = (HANDLE)(Heap_0 + 16);
          LOWORD(v23[0]) = 2 * v25;
          WORD1(v23[0]) = 2 * v25 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)ProcessRegistryInfo;
}
