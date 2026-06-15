/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x1800183E8
 * Callers:
 *     PbmReportAppClosing @ 0x1800181C0 (PbmReportAppClosing.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x180018D14 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180018F10 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // edi
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-58h]
  volatile signed __int32 *v11; // [rsp+28h] [rbp-50h]
  __int64 v12[4]; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  __int64 *v14; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  try
  {
    std::make_shared<std::wstring,unsigned short const * &>();
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    v12[0] = (__int64)off_180052DC0;
    v12[1] = v10;
    v12[2] = (__int64)v11;
    v12[3] = a3;
    v13 = a4;
    v14 = v12;
    v6 = QueueGenericWorkItem(v12);
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( v11 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)(unsigned int)v6);
      if ( v11 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x71,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
                           v7);
  }
  return result;
}
