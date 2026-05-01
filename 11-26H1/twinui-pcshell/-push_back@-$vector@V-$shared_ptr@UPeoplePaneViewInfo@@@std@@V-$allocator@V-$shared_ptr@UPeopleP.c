/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@2@@Z @ 0x18040DE24
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x18040C520 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x18040CBD0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::push_back(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdx
  _QWORD *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
             a1,
             (char *)v3,
             a2);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)v3 = *a2;
  result = (_QWORD *)a2[1];
  *(_QWORD *)(v3 + 8) = result;
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[1] += 16LL;
  return result;
}
