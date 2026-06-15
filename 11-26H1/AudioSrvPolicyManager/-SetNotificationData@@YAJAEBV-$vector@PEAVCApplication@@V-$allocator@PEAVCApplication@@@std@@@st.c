/*
 * XREFs of ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x180015194
 * Callers:
 *     ?GenerateMediaManagerNotification@@YAJAEAV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@AEAV?$unique_ptr@UMEDIAMANAGER_NOTIFICATION_BLOCK@@U?$default_delete@UMEDIAMANAGER_NOTIFICATION_BLOCK@@@std@@@2@@Z @ 0x180015A9C (-GenerateMediaManagerNotification@@YAJAEAV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplicati.c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800153A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180015470 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180015490 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18001681C (-clear@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SetNotificationData(CApplication ***a1, __int64 a2, unsigned __int64 a3)
{
  size_t v5; // r15
  CApplication **v6; // rsi
  CApplication **v7; // r13
  int SmtcProcesses; // eax
  unsigned int v9; // edi
  _QWORD *i; // rbx
  volatile signed __int32 **v11; // rdi
  volatile signed __int32 *v12; // rbx
  _WORD *v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r8
  __int64 v16; // rax
  size_t v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  while ( 1 )
  {
    if ( v6 == v7 )
      return 0LL;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v22);
    SmtcProcesses = CApplication::GetSmtcProcesses(*v6, &v22, 0LL);
    v9 = SmtcProcesses;
    if ( SmtcProcesses < 0 )
      break;
    for ( i = v22; i; i = (_QWORD *)*i )
    {
      v13 = (_WORD *)*((_QWORD *)*v6 + 3);
      if ( !v13 )
      {
        v9 = -2147024809;
LABEL_19:
        v18 = v9;
        v19 = 379LL;
        goto LABEL_20;
      }
      v14 = 1024LL;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v14;
      }
      while ( v14 );
      v9 = v14 == 0 ? 0x80070057 : 0;
      if ( !v14 )
        goto LABEL_19;
      v15 = ((2 * (1024 - v14)) & -(__int64)(v14 != 0)) + 2;
      v16 = v5 + 4;
      if ( v5 + 4 > a3 )
      {
        v9 = -2147024774;
        v18 = 2147942522LL;
        v19 = 383LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v5 + a2) = v15;
      v17 = v16 + v15;
      if ( v16 + v15 > a3 )
      {
        v9 = -2147024774;
        v18 = 2147942522LL;
        v19 = 388LL;
        goto LABEL_20;
      }
      memcpy_0((void *)(v16 + a2), *((const void **)*v6 + 3), v15);
      if ( v17 + 4 > a3 )
      {
        v9 = -2147024774;
        v18 = 2147942522LL;
        v19 = 393LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v17 + a2) = *(_DWORD *)(i[1] + 160LL);
      v5 = v17 + 8;
      if ( v17 + 8 > a3 )
      {
        v9 = -2147024774;
        v18 = 2147942522LL;
        v19 = 398LL;
        goto LABEL_20;
      }
      *(_DWORD *)(v17 + 4 + a2) = CApplication::IsBackgroundAudioCapable(*v6);
    }
    v11 = (volatile signed __int32 **)v22;
    v22 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = *v11;
        wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v11 + 1);
        operator delete(v11, (const struct std::nothrow_t *)0x10);
        v11 = (volatile signed __int32 **)v12;
      }
      while ( v12 );
    }
    ++v6;
  }
  v18 = (unsigned int)SmtcProcesses;
  v19 = 373LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v18);
  std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear(&v22);
  return v9;
}
