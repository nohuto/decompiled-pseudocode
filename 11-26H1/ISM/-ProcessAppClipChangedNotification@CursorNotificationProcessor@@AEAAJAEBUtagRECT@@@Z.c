/*
 * XREFs of ?ProcessAppClipChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagRECT@@@Z @ 0x18000FF08
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x18000FD94 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessAppClipChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagRECT *a2)
{
  std::_Mutex_base *v4; // rbx
  _QWORD *i; // rsi
  _QWORD *v6; // r14
  int v7; // eax
  unsigned int v8; // edi
  __int64 *v9; // rdi
  __int64 *v10; // rsi
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v4 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  std::_Mutex_base::lock(v4);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, &v12);
  v6 = (_QWORD *)*((_QWORD *)&v12 + 1);
  for ( i = (_QWORD *)v12; i != v6; ++i )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT *))(*(_QWORD *)*i + 96LL))(*i, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursor"
                      "notificationprocessor.cpp",
        (const char *)(unsigned int)v7,
        v12);
      if ( (_QWORD)v12 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>(v12, *((_QWORD *)&v12 + 1));
        std::_Deallocate<16>(v12, (v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL);
        v12 = 0LL;
        v13 = 0LL;
      }
      goto LABEL_9;
    }
  }
  v9 = (__int64 *)v12;
  if ( (_QWORD)v12 )
  {
    v10 = (__int64 *)*((_QWORD *)&v12 + 1);
    if ( (_QWORD)v12 != *((_QWORD *)&v12 + 1) )
    {
      do
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9++);
      while ( v9 != v10 );
      v9 = (__int64 *)v12;
    }
    std::_Deallocate<16>(v9, (v13 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
    v12 = 0LL;
    v13 = 0LL;
  }
  v8 = 0;
LABEL_9:
  _Mtx_unlock(v4);
  return v8;
}
