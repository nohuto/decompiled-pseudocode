/*
 * XREFs of _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x180439E08
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___::Run @ 0x18043B140 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a977afc9c59ce0858e320274f367b95a___--.c)
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180074CD0 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180110B94 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18011216C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x180112AEC (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801B63DC (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_a977afc9c59ce0858e320274f367b95a_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  const char *v3; // r9
  int *v4; // r14
  HWND v5; // rdi
  int *v6; // rax
  int *v7; // rsi
  HWND Ancestor; // rax
  __int64 result; // rax
  DWORD WindowThreadProcessId; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)a1;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(*(_QWORD *)a1 + 128LL),
    **(_QWORD **)(a1 + 8));
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2);
    v4 = *(int **)(a1 + 16);
    if ( *(_DWORD *)(v2 + 296) != *v4 )
    {
      v5 = (HWND)*v4;
      *(_QWORD *)&Rect.left = v5;
      if ( ViewManagerInteropTraceLogging::IsEnabled() )
      {
        dwProcessId = 0;
        WindowThreadProcessId = GetWindowThreadProcessId(v5, &dwProcessId);
        v6 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16, v12);
        ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
          v6,
          (__int64 *)&Rect.left,
          (int *)&WindowThreadProcessId,
          (int *)&dwProcessId);
      }
      v7 = *(int **)(a1 + 24);
      if ( *v7 == 1 )
      {
        GetWindowBand(v5, v2 + 508);
        Rect = 0LL;
        GetWindowRect(v5, &Rect);
        *(float *)(v2 + 488) = (float)Rect.left;
        *(float *)(v2 + 492) = (float)Rect.top;
        *(float *)(v2 + 496) = (float)(Rect.right - Rect.left);
        *(float *)(v2 + 500) = (float)(Rect.bottom - Rect.top);
        Ancestor = GetAncestor(v5, 1u);
        if ( Ancestor )
        {
          *(struct tagRECT *)&Points[0].x = Rect;
          if ( MapWindowPoints(0LL, Ancestor, Points, 2u) )
          {
            *(float *)(v2 + 488) = (float)Points[0].x;
            *(float *)(v2 + 492) = (float)Points[0].y;
            *(float *)(v2 + 496) = (float)(Points[1].x - Points[0].x);
            *(float *)(v2 + 500) = (float)(Points[1].y - Points[0].y);
          }
        }
        *(_BYTE *)(v2 + 504) = 1;
        EnumPropsExW(v5, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, v2 + 200);
      }
      else
      {
        LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v2 + 200), v5);
      }
      if ( IsWindowVisible(v5) )
        UwpWindowWrapperBase::SetWindowId(v2, *v4, *v7);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x65D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v3);
  }
  return result;
}
