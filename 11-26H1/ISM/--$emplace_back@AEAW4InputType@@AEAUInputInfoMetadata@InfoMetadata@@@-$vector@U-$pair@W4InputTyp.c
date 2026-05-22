/*
 * XREFs of ??$emplace_back@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAAEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A8134
 * Callers:
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x180054D4C (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 * Callees:
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x180081FB8 (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@AEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1800876B8 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 */

_DWORD *__fastcall std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::emplace_back<enum InputType &,InfoMetadata::InputInfoMetadata &>(
        _QWORD *a1,
        _DWORD *a2,
        const struct InfoMetadata::InputInfoMetadata *a3)
{
  _DWORD *v5; // rdx
  __int64 v6; // rdx

  v5 = (_DWORD *)a1[1];
  if ( v5 == (_DWORD *)a1[2] )
    return std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
             a1,
             v5,
             a2,
             a3);
  *v5 = *a2;
  InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v5 + 2), a3);
  v6 = a1[1];
  a1[1] = v6 + 392;
  return (_DWORD *)v6;
}
