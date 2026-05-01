/*
 * XREFs of _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x180439A38
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___::Run @ 0x18043DF40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7e2780c5544860c2230bb0766c4bf63e___--.c)
 * Callees:
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18004DF74 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801B0FC0 (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1801F32C8 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_7e2780c5544860c2230bb0766c4bf63e_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  unsigned int *v4; // rcx
  HWND Ancestor; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  DWORD dwProcessId; // [rsp+24h] [rbp-44h] BYREF
  DWORD WindowThreadProcessId; // [rsp+28h] [rbp-40h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-28h] BYREF

  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)*a1 + 16,
    *(_QWORD *)a1[1]);
  v2 = (int)*a1[2];
  if ( (*a1)[74] != (_DWORD)v2 )
  {
    v3 = (HWND)(int)*a1[2];
    *(_QWORD *)&Rect.left = v3;
    if ( ViewManagerInteropTraceLogging::IsEnabled(v2) )
    {
      dwProcessId = 0;
      WindowThreadProcessId = GetWindowThreadProcessId(v3, &dwProcessId);
      v7 = (*(__int64 (__fastcall **)(unsigned int *))(*((_QWORD *)*a1 + 2) + 288LL))(*a1 + 4);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        &v7,
        (__int64 *)&Rect.left,
        (int *)&WindowThreadProcessId,
        (int *)&dwProcessId);
    }
    v4 = *a1;
    if ( *a1[3] == 1 )
    {
      GetWindowBand(v3, v4 + 123);
      Rect = 0LL;
      GetWindowRect(v3, &Rect);
      *((float *)*a1 + 118) = (float)Rect.left;
      *((float *)*a1 + 119) = (float)Rect.top;
      *((float *)*a1 + 120) = (float)(Rect.right - Rect.left);
      *((float *)*a1 + 121) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v3, 1u);
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
      EnumPropsExW(v3, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 50));
    }
    else
    {
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v4 + 50), v3);
    }
    if ( IsWindowVisible(v3) )
      WindowWrapperBase::SetWindowId(*a1, *a1[2], *a1[3]);
  }
  return 0LL;
}
