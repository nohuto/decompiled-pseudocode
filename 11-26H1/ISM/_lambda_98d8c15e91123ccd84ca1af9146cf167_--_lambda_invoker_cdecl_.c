/*
 * XREFs of _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x1800FDD20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 */

_BOOL8 __fastcall lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_(HWND a1, _DWORD *a2)
{
  int v3; // ebx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax

  v3 = (int)a1;
  ViewHierarchy = ISMStatics::GetViewHierarchy();
  ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v3);
  *a2 = ViewIdFromWindowId;
  return ViewIdFromWindowId == 0;
}
