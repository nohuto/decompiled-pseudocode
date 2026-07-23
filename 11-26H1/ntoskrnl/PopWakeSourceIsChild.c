/*
 * XREFs of PopWakeSourceIsChild @ 0x1407D29E0
 * Callers:
 *     PopProcessWakeSourceWork @ 0x140C0F390 (PopProcessWakeSourceWork.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

char __fastcall PopWakeSourceIsChild(__int64 a1, __int64 a2)
{
  const wchar_t **v2; // rax
  char v4; // di
  const wchar_t **v5; // rbx

  v2 = *(const wchar_t ***)(a1 + 16);
  v4 = 0;
  while ( 1 )
  {
    v5 = 0LL;
    if ( v2 != IopRootDeviceNode )
      v5 = v2;
    if ( !v5 )
      break;
    if ( *((_WORD *)v5 + 20) == *(_WORD *)a2
      && !wcsncmp(v5[6], *(const wchar_t **)(a2 + 8), (unsigned __int64)*((unsigned __int16 *)v5 + 20) >> 1) )
    {
      return 1;
    }
    v2 = (const wchar_t **)v5[2];
  }
  return v4;
}
