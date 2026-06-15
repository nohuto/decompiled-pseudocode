/*
 * XREFs of ?RuntimeClassInitialize@CApplication@@QEAAJPEBG_KK@Z @ 0x1800052BC
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180005A70 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x1800079B4 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002CDC4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplication::RuntimeClassInitialize(
        CApplication *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // eax
  BOOL v13; // ecx
  __int64 v14; // rax
  const char *v15; // r9
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 53) = a4;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 24,
    0LL);
  v9 = _AllocString<CTCoAllocPolicy>(v8, v7, a2, (char *)this + 24);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = CApplication::s_lastAppToken + 1;
    *((_QWORD *)this + 87) = a3;
    *((_DWORD *)this + 4) = v12;
    CApplication::s_lastAppToken = v12;
    v13 = *a2 != 0;
    *((_DWORD *)this + 163) = v13;
    *((_DWORD *)this + 162) = v13;
    if ( !v13 )
    {
      *((_DWORD *)this + 52) = 1;
      *((_DWORD *)this + 54) = 2;
      *((_DWORD *)this + 81) = 2;
      *((_DWORD *)this + 82) = 2;
    }
    v14 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
            ThreadPool,
            CApplication::SoundLevelChangeCompletionCallback,
            this);
    *((_QWORD *)this + 33) = v14;
    if ( v14 )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xD8,
               (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
               v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v9,
      v16);
    return v10;
  }
}
