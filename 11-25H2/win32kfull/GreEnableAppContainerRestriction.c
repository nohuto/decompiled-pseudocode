/*
 * XREFs of GreEnableAppContainerRestriction @ 0x140208DD0
 * Callers:
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

struct _GRETHREAD *__fastcall GreEnableAppContainerRestriction(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _GRETHREAD *result; // rax

  v2 = a1;
  result = GreGetCurrentThread(a1, a2);
  if ( result )
    *((_DWORD *)result + 86) = *((_DWORD *)result + 86) & 0xFFFFFFFB | (v2 == 0 ? 4 : 0);
  return result;
}
