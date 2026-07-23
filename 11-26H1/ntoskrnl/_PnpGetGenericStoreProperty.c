/*
 * XREFs of _PnpGetGenericStoreProperty @ 0x14095E780
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14095C6C0 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14095D088 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x14095D7B0 (PiDqPnPGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14095E340 (PnpGetObjectProperty.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140B4AC70 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetGenericStoreProperty(
        __int64 a1,
        char *a2,
        _WORD *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  _WORD *i; // rax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  wchar_t *v14; // rax
  wchar_t *Pool2; // rbx
  unsigned int v16; // edi
  __int64 v17; // rbp
  int v18; // edi
  __int64 v19; // rax
  NTSTATUS v20; // eax
  HANDLE Handle; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-160h]
  char *v23; // [rsp+B0h] [rbp-158h]
  __int64 v24; // [rsp+B8h] [rbp-150h]
  _DWORD *v25; // [rsp+C0h] [rbp-148h]
  wchar_t pszDest[48]; // [rsp+D0h] [rbp-138h] BYREF
  wchar_t P[64]; // [rsp+130h] [rbp-D8h] BYREF

  v8 = 0LL;
  v22 = a1;
  *a5 = 0;
  *a8 = 0;
  v23 = a2;
  v25 = a5;
  v24 = a6;
  Handle = 0LL;
  if ( a3 )
  {
    v9 = 85LL;
    for ( i = a3; *i; ++i )
    {
      if ( !--v9 )
        return 3221225485LL;
    }
  }
  v12 = RtlStringCchPrintfExW(
          pszDest,
          0x30uLL,
          0LL,
          0LL,
          0x800u,
          L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
          *(_DWORD *)a4,
          *(unsigned __int16 *)(a4 + 4),
          *(unsigned __int16 *)(a4 + 6),
          *(unsigned __int8 *)(a4 + 8),
          *(unsigned __int8 *)(a4 + 9),
          *(unsigned __int8 *)(a4 + 10),
          *(unsigned __int8 *)(a4 + 11),
          *(unsigned __int8 *)(a4 + 12),
          *(unsigned __int8 *)(a4 + 13),
          *(unsigned __int8 *)(a4 + 14),
          *(unsigned __int8 *)(a4 + 15),
          *(_DWORD *)(a4 + 16),
          0);
  if ( v12 >= 0 )
  {
    Handle = 0LL;
    v13 = 512LL;
    v14 = pszDest;
    while ( *v14 )
    {
      ++v14;
      if ( !--v13 )
      {
        v12 = -1073741811;
        goto LABEL_24;
      }
    }
    if ( (unsigned __int64)(512 - v13) >= 0x30 )
    {
      v16 = 512 - v13 + 12;
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v12 = -1073741801;
        goto LABEL_24;
      }
    }
    else
    {
      Pool2 = P;
      v16 = 59;
    }
    v17 = v22;
    v18 = RtlStringCchPrintfExW(Pool2, v16, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
    if ( v18 >= 0 )
    {
      if ( v22 )
      {
        v19 = *(_QWORD *)(v22 + 224);
        if ( v19 )
          v8 = *(_QWORD *)(v19 + 8);
      }
      v18 = RegRtlOpenKeyTransacted(v23, Pool2, 0, 1u, &Handle, v8);
      if ( v18 == -1073741444 )
        v18 = -1073741772;
    }
    if ( Pool2 && Pool2 != P )
      ExFreePoolWithTag(Pool2, 0);
    if ( v18 != -1073741772 )
    {
      v12 = v18;
      if ( v18 < 0 )
        goto LABEL_24;
      v20 = guard_dispatch_icall_no_overrides(v17, (__int64)Handle);
      if ( v20 != -1073741772 && v20 != -1073741444 )
      {
        if ( !v20 || v20 == -1073741789 )
        {
          *v25 = 0;
          *a8 = a7;
          if ( v20 || !a7 )
            v12 = -1073741789;
        }
        else
        {
          v12 = v20;
        }
        goto LABEL_24;
      }
    }
    v12 = -1073741275;
  }
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
