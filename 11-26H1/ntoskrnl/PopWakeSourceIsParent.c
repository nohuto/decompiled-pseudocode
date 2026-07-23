/*
 * XREFs of PopWakeSourceIsParent @ 0x1407D2A50
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

char __fastcall PopWakeSourceIsParent(const wchar_t **a1, __int64 a2)
{
  const wchar_t **v2; // rax
  char v3; // bl
  const wchar_t **v4; // rdi
  const wchar_t **v7; // rax
  const wchar_t **v8; // rax

  v2 = (const wchar_t **)a1[1];
  v3 = 0;
  v4 = 0LL;
  while ( v2 )
  {
    v4 = v2;
    v2 = (const wchar_t **)v2[1];
  }
  while ( v4 )
  {
    if ( *((_WORD *)v4 + 20) == *(_WORD *)a2
      && !wcsncmp(v4[6], *(const wchar_t **)(a2 + 8), (unsigned __int64)*((unsigned __int16 *)v4 + 20) >> 1) )
    {
      return 1;
    }
    v7 = (const wchar_t **)*v4;
    if ( *v4 )
    {
      do
      {
        v4 = v7;
        v7 = (const wchar_t **)v7[1];
      }
      while ( v7 );
    }
    else
    {
      v8 = (const wchar_t **)v4[2];
      v4 = 0LL;
      if ( v8 != IopRootDeviceNode )
        v4 = v8;
      if ( v4 == a1 )
        v4 = 0LL;
    }
  }
  return v3;
}
