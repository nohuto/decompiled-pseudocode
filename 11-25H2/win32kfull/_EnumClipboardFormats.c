/*
 * XREFs of _EnumClipboardFormats @ 0x140112A5C
 * Callers:
 *     NtUserEnumClipboardFormats @ 0x140112170 (NtUserEnumClipboardFormats.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWINDOWSTATION *v5; // rdi
  unsigned int *v6; // rcx
  struct tagCLIP *ClipFormat; // rax

  v2 = 0;
  v5 = CheckClipboardAccess();
  if ( !v5 )
    return 0LL;
  if ( *((struct tagTHREADINFO **)v5 + 10) != PtiCurrent(v4, v3) )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  v6 = (unsigned int *)*((_QWORD *)v5 + 16);
  if ( v6 )
  {
    if ( !a1 )
      goto LABEL_8;
    ClipFormat = FindClipFormat(v5, a1, 1u);
    v6 = (unsigned int *)((char *)ClipFormat + 32);
    if ( !ClipFormat )
      v6 = 0LL;
    if ( v6 )
    {
LABEL_8:
      if ( (unsigned __int64)v6 < *((_QWORD *)v5 + 16) + 32 * (unsigned __int64)*((unsigned int *)v5 + 34) )
        return *v6;
    }
  }
  return v2;
}
