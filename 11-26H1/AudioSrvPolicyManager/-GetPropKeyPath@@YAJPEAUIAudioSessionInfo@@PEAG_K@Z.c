/*
 * XREFs of ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x180002A70
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x1800027F4 (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180002044 (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180002280 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800049D0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180008978 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetPropKeyPath(struct IAudioSessionInfo *a1, unsigned __int16 *a2, void *a3)
{
  DWORD v5; // eax
  void *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int ThreadUserStringSid; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+18h] BYREF

  pv = a3;
  if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 128LL))(a1)
    && (v5 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 136LL))(a1),
        pv = 0LL,
        TsSessionGetUserSid(v5, (unsigned __int16 **)&pv),
        (v6 = pv) != 0LL) )
  {
    v7 = StringCbPrintfW(a2, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", pv);
    v8 = v7;
    if ( v7 >= 0 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)v7,
        v13);
      CoTaskMemFree(v6);
      return v8;
    }
  }
  else
  {
    pv = 0LL;
    ThreadUserStringSid = GetThreadUserStringSid((unsigned __int16 **)&pv);
    v11 = ThreadUserStringSid;
    if ( ThreadUserStringSid >= 0 )
    {
      v12 = StringCbPrintfW(a2, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", pv);
      v11 = v12;
      if ( v12 >= 0 )
        v11 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBF,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v12,
          v13);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&pv);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)(unsigned int)ThreadUserStringSid,
        v13);
      if ( pv )
        LocalFree(pv);
    }
    return v11;
  }
}
