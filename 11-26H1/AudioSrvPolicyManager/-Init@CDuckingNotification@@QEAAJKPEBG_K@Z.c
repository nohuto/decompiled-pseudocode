/*
 * XREFs of ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18001C1E0
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18001B7A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180028BC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18001A8D8 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001B8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180021570 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 */

__int64 __fastcall CDuckingNotification::Init(CDuckingNotification *this, int a2, unsigned __int16 *a3, __int64 a4)
{
  __int64 *v6; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = a2;
  *(_QWORD *)this = a4;
  v6 = Microsoft::WRL::Details::Make<CDuckingNotification::CSharedNotificationData,>(&v13);
  v8 = *v6;
  *v6 = 0LL;
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = v8;
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9);
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v10);
  }
  if ( *((_QWORD *)this + 6) )
  {
    try
    {
      if ( a3 )
        std::wstring::assign((char *)this + 16, a3);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x15F,
                             (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\du"
                                           "ckingmanager.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
