/*
 * XREFs of ?TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002600
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180002654 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::TryGetAudioSessionPropertyStore(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = LoadPropertyStore(a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024894 && (_DWORD)result != -2147024891 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x392,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)result,
      v5);
    return v4;
  }
  return result;
}
