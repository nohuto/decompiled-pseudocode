/*
 * XREFs of ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1402FEB00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1402FF280 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 */

__int64 __fastcall InkDevice::PreProcessInkFeedbackCommand_NoLock(__int64 a1, int a2, unsigned int *a3, int a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  struct tagTHREADINFO *v8; // rax
  unsigned int v9; // edx
  InkDevice *v10; // rcx

  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( a4 != 64 )
      return (unsigned int)-1073741811;
    v9 = *a3;
    v10 = (InkDevice *)(a1 - 32);
    return (unsigned int)InkDevice::ValidatePointer(v10, v9);
  }
  if ( v6 == 1 )
  {
    if ( a4 != 4 )
      return (unsigned int)-1073741811;
    v8 = PtiCurrent(a1);
    v7 = 0;
    if ( (unsigned int)IsProcessDwm(**((_QWORD **)v8 + 57)) )
      return v7;
    v9 = *a3;
    v10 = (InkDevice *)(a1 - 32);
    return (unsigned int)InkDevice::ValidatePointer(v10, v9);
  }
  return (unsigned int)-1073741637;
}
