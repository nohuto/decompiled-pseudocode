/*
 * XREFs of ?bIncludeSprites@SURFACE@@SAHXZ @ 0x14018B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall SURFACE::bIncludeSprites(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *result; // rax

  result = GreGetCurrentThread(a1, a2);
  if ( result )
    return (struct _GRETHREAD *)((*((_DWORD *)result + 84) >> 1) & 1);
  return result;
}
