/*
 * XREFs of PiNormalizeDeviceText @ 0x140A3B018
 * Callers:
 *     PnpQueryDeviceText @ 0x1409DAEC4 (PnpQueryDeviceText.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     _wcstoi64 @ 0x14053B008 (_wcstoi64.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x140728280 (ZwQueryKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PiGetDefaultMessageString @ 0x140A39904 (PiGetDefaultMessageString.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiNormalizeDeviceText(const WCHAR *Src, wchar_t **a2)
{
  void *v3; // r14
  unsigned __int16 *v4; // r15
  wchar_t *v5; // rsi
  int inited; // ebx
  void *Pool2; // rax
  const wchar_t *v8; // rbx
  wchar_t *v9; // rax
  const wchar_t *v10; // r12
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  ULONG v13; // r13d
  unsigned int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rbx
  wchar_t *v20; // rax
  UNICODE_STRING String2; // [rsp+50h] [rbp-59h] BYREF
  wchar_t *EndPtr; // [rsp+60h] [rbp-49h] BYREF
  void *v24; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-39h] BYREF
  size_t pcbRemaining; // [rsp+80h] [rbp-29h] BYREF
  wchar_t *v27; // [rsp+88h] [rbp-21h]
  PVOID P; // [rsp+90h] [rbp-19h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-11h] BYREF
  ULONG Length; // [rsp+120h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  *a2 = 0LL;
  EndPtr = 0LL;
  v3 = 0LL;
  Length = 0;
  DestinationString = 0LL;
  pcbRemaining = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v24 = 0LL;
  v5 = 0LL;
  KeyHandle = 0LL;
  String2 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  inited = RtlInitUnicodeStringEx(&String2, Src);
  if ( inited < 0 )
    goto LABEL_24;
  if ( !RtlPrefixUnicodeString((PCUNICODE_STRING)&PspSiloMonitorLock.648, &String2, 1u) )
  {
    inited = 0;
    goto LABEL_24;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  v8 = (const wchar_t *)Pool2;
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_24;
  }
  memmove(Pool2, Src, String2.Length);
  v8[(unsigned __int64)String2.Length >> 1] = 0;
  v9 = wcschr(v8, 0x2Cu);
  if ( !v9 )
    goto LABEL_35;
  v10 = v9 + 1;
  *v9 = 0;
  v11 = wcschr(v9 + 1, 0x2Cu);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0;
    v12 = v11 + 1;
  }
  v13 = wcstoi64(v10, &EndPtr, 10);
  if ( *EndPtr )
    goto LABEL_35;
  RtlInitUnicodeString(&String2, v8);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  inited = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( inited >= 0 )
  {
    inited = ZwQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
    if ( inited == -1073741789 )
    {
      v4 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
      if ( !v4 )
      {
LABEL_21:
        inited = -1073741670;
        goto LABEL_22;
      }
      inited = ZwQueryKey(KeyHandle, KeyBasicInformation, v4, Length, &Length);
      if ( inited >= 0 )
      {
        String2.Length = v4[6];
        String2.MaximumLength = v4[6];
        String2.Buffer = v4 + 8;
        inited = IopBuildFullDriverPath(&String2, KeyHandle, &DestinationString);
        if ( inited >= 0 )
        {
          *(_DWORD *)&String2.Length = 1703960;
          String2.Buffer = (wchar_t *)L"\\SystemRoot\\";
          if ( RtlPrefixUnicodeString(&String2, &DestinationString, 1u) )
          {
            v27 = DestinationString.Buffer + 12;
            v14 = (unsigned __int16)(DestinationString.Length - 24);
            inited = PiGetDefaultMessageString(KeyHandle, v13, &v24);
            if ( inited < 0 )
            {
              v3 = v24;
            }
            else
            {
              v15 = -1LL;
              v16 = v14;
              v3 = v24;
              v17 = -1LL;
              do
                ++v17;
              while ( *((_WORD *)v24 + v17) );
              v18 = -1LL;
              do
                ++v18;
              while ( v10[v18] );
              v19 = v16 + 2 * (v17 + v18 + 5);
              if ( v12 )
              {
                do
                  ++v15;
                while ( v12[v15] );
                v19 += 2 * v15 + 6;
              }
              v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
              v5 = v20;
              if ( !v20 )
                goto LABEL_21;
              inited = RtlStringCbPrintfExW(v20, v19, &EndPtr, &pcbRemaining, 0, L"@%s,#%s;%s", v27, v10, v3);
              if ( inited >= 0 )
              {
                if ( !v12 || (inited = RtlStringCbPrintfW(EndPtr, pcbRemaining, L";(%s)", v12), inited >= 0) )
                {
                  *a2 = v5;
LABEL_35:
                  inited = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_24:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( inited < 0 && v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)inited;
}
