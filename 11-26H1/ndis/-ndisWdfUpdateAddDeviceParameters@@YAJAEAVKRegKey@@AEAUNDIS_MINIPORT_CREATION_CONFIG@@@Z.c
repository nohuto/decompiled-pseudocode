/*
 * XREFs of ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x14016C370
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140056870 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x14008E860 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14014A178 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall ndisWdfUpdateAddDeviceParameters(struct KRegKey *a1, struct _GUID *a2)
{
  struct _GUID *v3; // rsi
  NTSTATUS SubkeyName; // ebx
  void *m_ptr; // r9
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int16 v8; // cx
  int v9; // eax
  ULONG i; // ebp
  __int64 v12; // [rsp+28h] [rbp-60h]
  char v13[4]; // [rsp+28h] [rbp-60h]
  PCUNICODE_STRING GuidString[2]; // [rsp+30h] [rbp-58h] BYREF
  KRegKey v15; // [rsp+40h] [rbp-48h] BYREF
  GUID Guid; // [rsp+48h] [rbp-40h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      58,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
  }
  if ( IsIfBlockAvailable(v3) )
  {
    SubkeyName = 0;
    goto LABEL_23;
  }
  m_ptr = a1->m_ptr;
  v15.m_ptr = 0LL;
  *(_OWORD *)GuidString = 0LL;
  v6 = L"NetworkInterface";
  v7 = 0x7FFFLL;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  SubkeyName = -1073741811;
  if ( v7 )
  {
    SubkeyName = 0;
    v8 = 2 * v7;
    GuidString[1] = (PCUNICODE_STRING)L"NetworkInterface";
    LOWORD(GuidString[0]) = -2 - v8;
    WORD1(GuidString[0]) = -v8;
  }
  if ( SubkeyName < 0 )
  {
    v9 = SubkeyName;
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = v9;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x3Bu,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        *(_DWORD *)v13,
        GuidString[0],
        GuidString[1],
        v15.m_ptr);
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v15.m_ptr);
    goto LABEL_23;
  }
  v9 = KRegKey::Open(&v15, 9u, (struct _UNICODE_STRING *)GuidString, m_ptr);
  SubkeyName = v9;
  if ( v9 < 0 )
    goto LABEL_13;
  for ( i = 0; ; ++i )
  {
    GuidString[0] = 0LL;
    SubkeyName = KRegKey::GetSubkeyName(&v15.m_ptr, i, (void **)GuidString);
    if ( SubkeyName < 0 )
      break;
    Guid = 0LL;
    if ( RtlGUIDFromString(GuidString[0], &Guid) >= 0 && IsIfBlockAvailable(&Guid) )
    {
      SubkeyName = 0;
      *v3 = Guid;
      break;
    }
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)GuidString, 0LL);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)GuidString, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v15.m_ptr);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = SubkeyName;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Cu,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      v12);
  }
  return (unsigned int)SubkeyName;
}
