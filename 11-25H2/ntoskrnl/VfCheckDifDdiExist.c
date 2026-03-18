/*
 * XREFs of VfCheckDifDdiExist @ 0x140B7A000
 * Callers:
 *     DifRegisterPlugin @ 0x14060CC10 (DifRegisterPlugin.c)
 * Callees:
 *     ViCheckDifDdiExist @ 0x140B7A70C (ViCheckDifDdiExist.c)
 */

char __fastcall VfCheckDifDdiExist(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  char **v3; // rax

  if ( !(unsigned __int8)ViCheckDifDdiExist(&VfDifThunks, a1) && !(unsigned __int8)ViCheckDifDdiExist(&VfPoolThunks, v1) )
  {
    v3 = &VfDifIoCallbackThunks;
    while ( *((_DWORD *)v3 + 6) != (_DWORD)v2 )
    {
      v3 += 4;
      if ( !*v3 )
        return ViCheckDifDdiExist(&VfRegularThunks, v2);
    }
  }
  return 1;
}
