/*
 * XREFs of VfCheckDifDdiExist @ 0x140C2810C
 * Callers:
 *     DifRegisterPlugin @ 0x14064BBB0 (DifRegisterPlugin.c)
 * Callees:
 *     ViCheckDifDdiExist @ 0x140C28468 (ViCheckDifDdiExist.c)
 */

char __fastcall VfCheckDifDdiExist(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  char **i; // rcx
  char **v4; // rax

  if ( !(unsigned __int8)ViCheckDifDdiExist(&VfDifThunks, a1) && !(unsigned __int8)ViCheckDifDdiExist(&VfPoolThunks, v1) )
  {
    for ( i = &off_140FE41A0; *((_DWORD *)i - 2) != (_DWORD)v2; i += 4 )
    {
      v4 = i;
      if ( !*v4 )
        return ViCheckDifDdiExist(&VfRegularThunks, v2);
    }
  }
  return 1;
}
