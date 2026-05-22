/*
 * XREFs of ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x180054D4C
 * Callers:
 *     ??0InfoMetadata@@QEAA@XZ @ 0x180054B4C (--0InfoMetadata@@QEAA@XZ.c)
 * Callees:
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x180054DC8 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??$emplace_back@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAAEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801A8134 (--$emplace_back@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4InputTyp.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InfoMetadata::AddInput(_DWORD **a1, int a2, InfoMetadata::InputInfoMetadata *a3)
{
  _DWORD *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  for ( i = *a1; i != a1[1]; i += 98 )
  {
    if ( (a2 & *i) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
        (const char *)retaddr);
  }
  std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::emplace_back<enum InputType &,InfoMetadata::InputInfoMetadata &>(
    a1,
    &v6);
  InfoMetadata::InputInfoMetadata::~InputInfoMetadata(a3);
}
