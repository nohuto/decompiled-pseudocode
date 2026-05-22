/*
 * XREFs of ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18008151C
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x18000FD94 (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@0@@Z @ 0x18001075C (--$_Destroy_range@V-$allocator@V-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CursorNotificationProcessor::ProcessPositionChangedNotification(
        CursorNotificationProcessor *this,
        const struct tagPOINT *a2)
{
  std::_Mutex_base *v4; // rbx
  _QWORD *i; // rsi
  _QWORD *v6; // r15
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v4 = (std::_Mutex_base *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 128LL))(*(_QWORD *)this);
  std::_Mutex_base::lock(v4);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, &v11);
  v6 = (_QWORD *)*((_QWORD *)&v11 + 1);
  for ( i = (_QWORD *)v11; i != v6; ++i )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(
           *i,
           (unsigned int)a2->x,
           (unsigned int)a2->y);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 179LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursor"
                      "notificationprocessor.cpp",
        (const char *)(unsigned int)v7,
        v11);
      if ( (_QWORD)v11 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>((__int64 *)v11, *((__int64 **)&v11 + 1));
        std::_Deallocate<16>(v11, (v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL);
        v11 = 0LL;
        v12 = 0LL;
      }
      goto LABEL_13;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 32LL))(
           *i,
           (unsigned int)a2->x,
           (unsigned int)a2->y);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 183LL;
      goto LABEL_7;
    }
  }
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<CUIWindow>>>((__int64 *)v11, *((__int64 **)&v11 + 1));
    std::_Deallocate<16>(v11, (v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL);
    v11 = 0LL;
    v12 = 0LL;
  }
  v8 = 0;
LABEL_13:
  _Mtx_unlock(v4);
  return v8;
}
