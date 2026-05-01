/*
 * XREFs of ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x18007110C
 * Callers:
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800FD8A0 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B290 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180070E64 (-Provider@ViewManagerInteropLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
        const WCHAR **a1,
        _DWORD *a2)
{
  const struct _tlgProvider_t *v4; // rax
  const struct _tlgProvider_t *v5; // r10
  const WCHAR *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _DWORD v10[2]; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  const WCHAR *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  _DWORD *v19; // [rsp+80h] [rbp+37h]
  __int64 v20; // [rsp+88h] [rbp+3Fh]

  v4 = ViewManagerInteropLogging::Provider();
  v5 = v4;
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *a1;
    v10[0] = *a2;
    v19 = v10;
    v20 = 4LL;
    if ( v6 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v6[v7] );
      v8 = 2 * v7 + 2;
    }
    else
    {
      v6 = &LocaleName;
      v8 = 2;
    }
    v17 = v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v5 + 1);
    v16 = v6;
    v18 = 0;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v13 = &unk_1807CD05C;
    UserData.Reserved = 2;
    v14 = 68;
    v15 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v4) = EventWriteTransfer(*((_QWORD *)v5 + 4), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (int)v4;
}
