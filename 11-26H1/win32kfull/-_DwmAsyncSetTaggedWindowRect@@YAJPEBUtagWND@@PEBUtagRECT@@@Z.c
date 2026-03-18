/*
 * XREFs of ?_DwmAsyncSetTaggedWindowRect@@YAJPEBUtagWND@@PEBUtagRECT@@@Z @ 0x14026AB0C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     DwmAsyncSetTaggedWindowRect @ 0x140347500 (DwmAsyncSetTaggedWindowRect.c)
 */

__int64 __fastcall _DwmAsyncSetTaggedWindowRect(const struct tagWND *a1, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rax

  v2 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v5 = (void *)ReferenceDwmApiPort(v4, v3);
    return (unsigned int)DwmAsyncSetTaggedWindowRect(v5);
  }
  return v2;
}
