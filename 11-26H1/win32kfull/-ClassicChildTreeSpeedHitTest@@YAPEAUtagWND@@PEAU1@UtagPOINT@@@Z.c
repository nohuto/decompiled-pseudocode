/*
 * XREFs of ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x140087E8C (TouchTargetChildTree.c)
 *     EditionNonDwmSpeedHitTest @ 0x14008B110 (EditionNonDwmSpeedHitTest.c)
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     EditionNonDwmTouchHitTest @ 0x1402C2960 (EditionNonDwmTouchHitTest.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x14008C5C0 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 */

struct tagWND *__fastcall ClassicChildTreeSpeedHitTest(struct tagWND *a1, struct tagPOINT a2)
{
  struct tagWND *i; // rdi
  struct tagWND *v6; // rax

  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); ; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( !i )
      return a1;
    if ( (unsigned int)ClassicIsWindowHit(i, a2) )
      break;
  }
  if ( *((_QWORD *)i + 14) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)i + 5) + 104LL, a2) )
    {
      v6 = ClassicChildTreeSpeedHitTest(i, a2);
      if ( v6 )
      {
        if ( v6 != i )
          return v6;
      }
    }
  }
  return i;
}
