/*
 * XREFs of _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180446234
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run @ 0x180447760 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___--.c)
 * Callees:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18004BB0C (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801B0FC0 (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1801F32C8 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_a977afc9c59ce0858e320274f367b95a_::operator()(int **a1)
{
  const char *v2; // r9
  __int64 v3; // rcx
  HWND v4; // rdi
  int *v5; // rax
  int *v6; // rcx
  HWND Ancestor; // rax
  __int64 result; // rax
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  _BYTE v11[8]; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)*a1 + 16,
    *(_QWORD *)a1[1]);
  try
  {
    (*(void (__fastcall **)(int *))(*(_QWORD *)*a1 + 192LL))(*a1);
    v3 = *a1[2];
    if ( (*a1)[74] != (_DWORD)v3 )
    {
      v4 = (HWND)*a1[2];
      *(_QWORD *)&Rect.left = v4;
      if ( ViewManagerInteropTraceLogging::IsEnabled(v3) )
      {
        dwProcessId = 0;
        WindowThreadProcessId = GetWindowThreadProcessId(v4, &dwProcessId);
        v5 = (int *)(*(__int64 (__fastcall **)(int *, _BYTE *))(*((_QWORD *)*a1 + 2) + 288LL))(*a1 + 4, v11);
        ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
          v5,
          (__int64 *)&Rect.left,
          (int *)&WindowThreadProcessId,
          (int *)&dwProcessId);
      }
      v6 = *a1;
      if ( *a1[3] == 1 )
      {
        GetWindowBand(v4, v6 + 123);
        Rect = 0LL;
        GetWindowRect(v4, &Rect);
        *((float *)*a1 + 118) = (float)Rect.left;
        *((float *)*a1 + 119) = (float)Rect.top;
        *((float *)*a1 + 120) = (float)(Rect.right - Rect.left);
        *((float *)*a1 + 121) = (float)(Rect.bottom - Rect.top);
        Ancestor = GetAncestor(v4, 1u);
        if ( Ancestor )
        {
          *(struct tagRECT *)&Points[0].x = Rect;
          if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          {
            *((float *)*a1 + 118) = (float)Points[0].x;
            *((float *)*a1 + 119) = (float)Points[0].y;
            *((float *)*a1 + 120) = (float)(Points[1].x - Points[0].x);
            *((float *)*a1 + 121) = (float)(Points[1].y - Points[0].y);
          }
        }
        *((_BYTE *)*a1 + 488) = 1;
        EnumPropsExW(v4, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 50));
      }
      else
      {
        LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v6 + 50), v4);
      }
      if ( IsWindowVisible(v4) )
        UwpWindowWrapperBase::SetWindowId((__int64)*a1, *a1[2], *a1[3]);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x65D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v2);
  }
  return result;
}
