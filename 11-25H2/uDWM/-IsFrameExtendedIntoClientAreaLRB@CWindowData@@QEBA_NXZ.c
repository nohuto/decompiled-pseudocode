/*
 * XREFs of ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ @ 0x180071EEC
 * Callers:
 *     ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x18000F5B8 (-CalculateBackgroundType@CTopLevelWindow@@AEBA-AW4BackgroundType@1@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CWindowData::IsFrameExtendedIntoClientAreaLRB(CWindowData *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 24) || *((_DWORD *)this + 25) || *((_DWORD *)this + 27) )
    return 1;
  return result;
}
