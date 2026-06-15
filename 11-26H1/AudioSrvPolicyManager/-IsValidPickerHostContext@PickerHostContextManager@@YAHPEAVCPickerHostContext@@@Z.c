/*
 * XREFs of ?IsValidPickerHostContext@PickerHostContextManager@@YAHPEAVCPickerHostContext@@@Z @ 0x18001BEE8
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001BA30 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PickerHostContextManager::IsValidPickerHostContext(
        PickerHostContextManager *this,
        struct CPickerHostContext *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  EnterCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  v3 = PickerHostContextManager::s_PickerHostContextList;
  v4 = 0;
  while ( v3 )
  {
    if ( *(PickerHostContextManager **)(v3 + 16) == this )
    {
      v4 = 1;
      goto LABEL_5;
    }
    v3 = *(_QWORD *)v3;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x63,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\pickerhostcontext.cpp",
    (const char *)0x8000FFFFLL,
    v6);
LABEL_5:
  LeaveCriticalSection(&PickerHostContextManager::s_csPickerHostContextList);
  return v4;
}
