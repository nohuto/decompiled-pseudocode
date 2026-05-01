/*
 * XREFs of ??$_Emplace_one_at_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1802C3428
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1801B0420 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 *     ?TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NU?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@7@W4PreviewOption@34567@I@Z @ 0x180589938 (-TryPreviewWindows@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@Q.c)
 *     ??$emplace_back@PEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@$$QEAPEAU2@@Z @ 0x1805A5F14 (--$emplace_back@PEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPE.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<HWND__ *>::_Emplace_one_at_back<HWND__ *>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  char *result; // rax

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(a1, (__int64)v3, a2);
  *v3 = *a2;
  result = (char *)a1[1];
  a1[1] = (__int64)(result + 8);
  return result;
}
