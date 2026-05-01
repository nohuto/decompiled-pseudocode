/*
 * XREFs of ?_DetermineSnapAssistLocation@CSnapAssistControllerBase@@IEAAJPEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUtagRECT@@@Z @ 0x180215AE8
 * Callers:
 *     ?TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAPPING_MODE@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18022B940 (-TriggerSnapAssistFromApplicationArrangedNotification@CSnapAssistControllerBase@@UEAAJPEAUIAppli.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::_DetermineSnapAssistLocation(
        __int64 a1,
        __int64 a2,
        _QWORD **a3,
        struct tagRECT *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  HRGN v10; // rbx
  const char *v11; // r9
  HRGN v12; // rax
  const char *v13; // r9
  HRGN v14; // rdi
  unsigned int LastError; // esi
  unsigned int v16; // r14d
  unsigned __int64 v17; // r12
  HRGN v18; // rax
  const char *v19; // r9
  HRGN v20; // rsi
  const char *v21; // r9
  RECT rect; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT v24; // [rsp+50h] [rbp-30h] BYREF
  RECT v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  SetRectEmpty(a4);
  rect = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)a2 + 88LL))(a2, &rect);
  v8 = v7;
  if ( v7 >= 0 )
  {
    rc = 0LL;
    v10 = CreateRectRgnIndirect(&rect);
    if ( v10 )
    {
      if ( a3[1] - *a3 )
      {
        (*(void (__fastcall **)(_QWORD, RECT *))(*(_QWORD *)**a3 + 56LL))(**a3, &v24);
        v12 = CreateRectRgnIndirect(&v24);
        v14 = v12;
        if ( v12 )
        {
          v16 = CombineRgn(v10, v10, v12, 4);
          v17 = 1LL;
          while ( v16 > 1 )
          {
            if ( v17 >= a3[1] - *a3 )
            {
              if ( v16 == 2 )
              {
                DeleteObject(v14);
                goto LABEL_16;
              }
              break;
            }
            (*(void (__fastcall **)(_QWORD, RECT *))(*(_QWORD *)(*a3)[v17] + 56LL))((*a3)[v17], &v25);
            v18 = CreateRectRgnIndirect(&v25);
            v20 = v18;
            if ( !v18 )
            {
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x3D9,
                            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                            v19);
              DeleteObject(v14);
              goto LABEL_20;
            }
            v16 = CombineRgn(v10, v10, v18, 4);
            DeleteObject(v20);
            ++v17;
          }
          DeleteObject(v14);
          LastError = -2147019873;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3D0,
                        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                        v13);
        }
      }
      else
      {
LABEL_16:
        if ( GetRgnBox(v10, &rc) )
        {
          CopyRect(a4, &rc);
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x3E1,
                        (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
                        v21);
        }
      }
LABEL_20:
      DeleteObject(v10);
      return LastError;
    }
    else
    {
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x3C7,
               (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
               v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
