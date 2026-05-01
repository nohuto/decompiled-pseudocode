/*
 * XREFs of ?Position@TaskViewFrame@@UEAA?AUtagRECT@@XZ @ 0x1806967E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180061EB0 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z @ 0x1802C2274 (--0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z.c)
 */

struct tagRECT *__fastcall TaskViewFrame::Position(TaskViewFrame *this, struct tagRECT *__return_ptr retstr)
{
  struct tagRECT v3; // xmm0
  struct tagRECT *result; // rax
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v7[6]; // [rsp+40h] [rbp-18h] BYREF

  v5 = *winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
          (__int64 *)this + 9,
          &v6);
  v3 = *(struct tagRECT *)Geometry::CRect::CRect(v7, (float *)&v5);
  result = retstr;
  *retstr = v3;
  return result;
}
