/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_::_Do_call @ 0x1800CC410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z @ 0x1800CA7C0 (-ReevaluateStreamGroups@CAudioResourceManager@@IEAAJPEBGU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_::_Do_call(__int64 a1)
{
  const unsigned __int16 *v1; // rdx
  struct _GUID v2; // xmm0
  CAudioResourceManager *v3; // rcx
  int v4; // eax
  struct _GUID v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(const unsigned __int16 **)(a1 + 16);
  if ( *((_QWORD *)v1 + 3) > 7uLL )
    v1 = *(const unsigned __int16 **)v1;
  v2 = *(struct _GUID *)(a1 + 32);
  v3 = *(CAudioResourceManager **)(a1 + 8);
  v5 = v2;
  v4 = CAudioResourceManager::ReevaluateStreamGroups(v3, v1, &v5);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
}
