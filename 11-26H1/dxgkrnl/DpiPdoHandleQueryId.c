/*
 * XREFs of DpiPdoHandleQueryId @ 0x1404007B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005CF34 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiAppendStringToString @ 0x14024ADF8 (DpiAppendStringToString.c)
 *     DpiAppendNumberToString @ 0x14041B7B4 (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int appended; // edi
  char v5; // si
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  const WCHAR *v10; // rax
  int v11; // eax
  const WCHAR *v12; // rdx
  bool IsAdapterSessionized; // al
  unsigned __int16 *v14; // r11
  unsigned __int16 v15; // cx
  unsigned __int16 *v16; // rdx
  const WCHAR *v17; // rcx
  void *v18; // rbx
  unsigned int v19; // r14d
  void *Pool2; // rax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  void *v25; // rax
  void *v26; // r14
  unsigned int MaximumLength; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp+27h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+67h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  DestinationString = 0LL;
  appended = 0;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v6 )
  {
    v24 = *(_DWORD *)(v3 + 496);
    v16 = (unsigned __int16 *)(v3 + 512);
    if ( v24 == 1 && !*v16 )
    {
      v12 = L"DISPLAY\\Default_Monitor";
      goto LABEL_12;
    }
    v17 = L"LOGICALGPU\\";
    if ( v24 != 4 )
      v17 = L"DISPLAY\\";
    goto LABEL_45;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *(_DWORD *)(v3 + 496) != 1 )
    {
      v18 = 0LL;
      v19 = 0;
      do
      {
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 += 256;
        Pool2 = (void *)ExAllocatePool2(256LL, v19, 1953656900LL);
        v18 = Pool2;
        if ( !Pool2 )
        {
          appended = -1073741801;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 5734;
          return appended;
        }
        memset(Pool2, 0, v19);
        v21 = RtlStringCbPrintfW(
                (unsigned __int16 *)v18,
                v19,
                (size_t *)L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X"
                           "&%ws,VIDEO\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
      }
      while ( v21 == -2147483643 );
      if ( v21 < 0 )
      {
        ExFreePoolWithTag(v18, 0);
        appended = -1073741823;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5781;
        return appended;
      }
      appended = DpiAppendStringToString((PCWSTR)v18, L",,", &DestinationString);
      ExFreePoolWithTag(v18, 0);
      if ( (appended & 0x80000000) != 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5796;
        return appended;
      }
      if ( DestinationString.Length >> 1 )
      {
        v22 = 0LL;
        v23 = DestinationString.Length >> 1;
        do
        {
          if ( DestinationString.Buffer[v22] == 44 )
            DestinationString.Buffer[v22] = 0;
          ++v22;
          --v23;
        }
        while ( v23 );
      }
LABEL_47:
      v5 = 1;
      goto LABEL_48;
    }
    IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(
                             *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL) + 4032LL),
                             (struct _LUID *)v3,
                             &v30,
                             0LL);
    v15 = *v14;
    if ( IsAdapterSessionized )
    {
      if ( !v15 )
      {
        v12 = L"MONITOR\\Remote_Monitor";
        goto LABEL_12;
      }
      v16 = v14;
      v17 = L"MONITOR\\Remote_Monitor_";
    }
    else
    {
      if ( !v15 )
      {
        v12 = L"MONITOR\\Default_Monitor";
        goto LABEL_12;
      }
      v16 = v14;
      v17 = L"MONITOR\\";
    }
LABEL_45:
    v11 = DpiAppendStringToString(v17, v16, &DestinationString);
LABEL_46:
    appended = v11;
    if ( v11 < 0 )
      return appended;
    goto LABEL_47;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = (const WCHAR *)(v3 + 716);
    if ( *(_DWORD *)(v3 + 496) == 1 && !*v10 )
    {
      v12 = L"*PNP09FF";
      goto LABEL_12;
    }
LABEL_11:
    v12 = v10;
LABEL_12:
    RtlInitUnicodeString(&DestinationString, v12);
    goto LABEL_48;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = (const WCHAR *)(v3 + 614);
    if ( !*(_WORD *)(v3 + 614) )
    {
      v11 = DpiAppendNumberToString(L"UID", *(_DWORD *)(v3 + 504), &DestinationString);
      goto LABEL_46;
    }
    goto LABEL_11;
  }
  if ( v9 != 2 || !*(_QWORD *)(v3 + 968) )
    return *(unsigned int *)(a2 + 48);
  DestinationString = *(struct _UNICODE_STRING *)(v3 + 960);
LABEL_48:
  v25 = (void *)ExAllocatePool2(256LL, DestinationString.MaximumLength + 2LL, 1953656900LL);
  v26 = v25;
  if ( v25 )
  {
    MaximumLength = DestinationString.MaximumLength;
    memset(v25, 0, DestinationString.MaximumLength + 2LL);
    memmove(v26, DestinationString.Buffer, MaximumLength);
    *(_QWORD *)(a2 + 56) = v26;
  }
  else
  {
    appended = -1073741801;
  }
  if ( v5 == 1 )
    RtlFreeUnicodeString(&DestinationString);
  return appended;
}
