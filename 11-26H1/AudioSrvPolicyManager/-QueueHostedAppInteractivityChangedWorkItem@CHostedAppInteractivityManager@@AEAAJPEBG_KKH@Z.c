/*
 * XREFs of ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x180017F08
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18001B1D8 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x18001BBD0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x180018D14 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-58h]
  volatile signed __int32 *v12; // [rsp+28h] [rbp-50h]
  __int64 v13[4]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  __int64 *v16; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    std::make_shared<std::wstring,unsigned short const * &>();
    if ( v12 )
      _InterlockedIncrement(v12 + 2);
    v13[0] = (__int64)off_180053000;
    v13[1] = v11;
    v13[2] = (__int64)v12;
    v13[3] = a3;
    v14 = a4;
    v15 = a5;
    v16 = v13;
    v7 = QueueGenericWorkItem(v13);
    v9 = v7;
    if ( v7 >= 0 )
    {
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
        (const char *)(unsigned int)v7);
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E7,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pick"
                                         "erhostcontext.cpp",
                           v8);
  }
  return result;
}
