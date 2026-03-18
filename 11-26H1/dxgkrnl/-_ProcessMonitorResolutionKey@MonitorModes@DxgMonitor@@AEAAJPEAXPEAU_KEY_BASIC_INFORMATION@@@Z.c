/*
 * XREFs of ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403E398C
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403E3788 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140007048 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1400077C0 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1400546F4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005B35C (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x140098D1C (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ParseFreqRangeValue @ 0x14027F3C0 (ParseFreqRangeValue.c)
 *     xwcschr @ 0x140426A30 (xwcschr.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x14042A730 (-xwtol@@YAKPEBG@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
        DxgMonitor::MonitorModes *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned int NameLength_low; // ebx
  WCHAR *Name; // rdi
  size_t v7; // r8
  int v8; // r11d
  _BYTE *v9; // r10
  unsigned int v10; // r9d
  _WORD *v11; // rax
  const unsigned __int16 *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // r9d
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r14d
  int v18; // r15d
  NTSTATUS v19; // ebx
  unsigned __int16 i; // di
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rbx
  DxgMonitor::MonitorModes *v29; // rbx
  DxgMonitor::MonitorModes **v30; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING v37; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  void *v39[2]; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[12]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v41[528]; // [rsp+90h] [rbp-70h] BYREF

  NameLength_low = LOWORD(a3->NameLength);
  Name = a3->Name;
  v37.Length = NameLength_low;
  v37.MaximumLength = NameLength_low;
  v37.Buffer = a3->Name;
  *(_DWORD *)(&v37.MaximumLength + 1) = 0;
  Handle = 0LL;
  memset(v41, 0, 0x208uLL);
  v7 = 518LL;
  if ( (unsigned __int16)NameLength_low <= 0x206u )
    v7 = NameLength_low;
  memmove(v41, Name, v7);
  v8 = -1;
  v39[0] = (void *)0xFFFFFFFF00000000LL;
  v9 = v41;
  v10 = 0;
  do
  {
    if ( v10 >= 4 )
      break;
    v11 = (_WORD *)xwcschr(v9, 44LL);
    if ( v11 )
      *v11 = 0;
    v13 = xwtol(v12);
    v15 = v14;
    v9 = (_BYTE *)(v16 + 2);
    v10 = v14 + 1;
    *((_DWORD *)v39 + v15) = v13;
  }
  while ( v16 );
  v17 = (int)v39[0];
  if ( !LODWORD(v39[0]) || (v18 = HIDWORD(v39[0]), HIDWORD(v39[0]) == v8) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1028;
    if ( Handle )
      ZwClose(Handle);
    return 3221225473LL;
  }
  else
  {
    if ( Handle )
      ZwClose(Handle);
    v19 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, a2, &v37);
    if ( v19 >= 0 )
    {
      wcscpy(SourceString, L"ModeX");
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      for ( i = 1; i < 9u; ++i )
      {
        v39[0] = 0LL;
        SourceString[4] = i + 48;
        v21 = DxgkRetrieveValueFromRegistry(Handle, &DestinationString, (__int64)v39);
        v24 = v21;
        if ( v21 >= 0 )
        {
          v33 = 0;
          v34 = 0;
          v35 = 0;
          v36 = 0;
          if ( !ParseFreqRangeValue((_DWORD *)v39[0], (int)&v33, (int)&v34, (__int64)&v35, (__int64)&v36) )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1084;
            wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
              v39,
              0LL);
            v19 = -1073741823;
            goto LABEL_30;
          }
          v27 = operator new(0x40uLL, 0x4D677844u, 256LL);
          v28 = (_QWORD *)v27;
          if ( !v27 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1098;
            wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
              v39,
              0LL);
            v19 = -1073741801;
            goto LABEL_30;
          }
          *(_DWORD *)(v27 + 4) = v33;
          *(_DWORD *)(v27 + 12) = v34;
          *(_DWORD *)(v27 + 20) = v35;
          *(_DWORD *)v27 = 4;
          *(_DWORD *)(v27 + 36) = 1;
          *(_DWORD *)(v27 + 40) = v17;
          *(_DWORD *)(v27 + 44) = v18;
          *(_DWORD *)(v27 + 8) = 1;
          *(_DWORD *)(v27 + 16) = 1;
          *(_DWORD *)(v27 + 24) = 1;
          *(_DWORD *)(v27 + 28) = v36;
          *(_DWORD *)(v27 + 32) = 1;
          if ( (int)IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v27) < 0 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 1131;
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
          }
          else
          {
            v29 = (DxgMonitor::MonitorModes *)(v28 + 6);
            v30 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 23);
            if ( *v30 != (DxgMonitor::MonitorModes *)((char *)this + 176) )
              __fastfail(3u);
            *(_QWORD *)v29 = (char *)this + 176;
            *((_QWORD *)v29 + 1) = v30;
            *v30 = v29;
            *((_QWORD *)this + 23) = v29;
            ++*((_DWORD *)this + 42);
            ++*((_DWORD *)this + 43);
          }
          wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
            v39,
            0LL);
        }
        else
        {
          v25 = WdLogNewEntry5_WdTrace(v23, v22);
          *(_QWORD *)(v25 + 24) = i;
          v26 = v39[0];
          *(_QWORD *)(v25 + 32) = v24;
          WdLogGlobalForLineNumber = 1066;
          if ( v26 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
        }
      }
      if ( Handle )
        ZwClose(Handle);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1037;
LABEL_30:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return (unsigned int)v19;
    }
  }
}
