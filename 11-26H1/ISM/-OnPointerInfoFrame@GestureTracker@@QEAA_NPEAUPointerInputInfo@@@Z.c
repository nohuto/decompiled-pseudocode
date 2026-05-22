/*
 * XREFs of ?OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z @ 0x18007841C
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086670 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x1800985D4 (-GetKeyModifiers@PointerManipulationHelper@@SA-AW4VirtualKeyModifiers@System@Windows@@PEAUInputI.c)
 *     ?ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ @ 0x1801A8C40 (-ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ.c)
 */

char __fastcall GestureTracker::OnPointerInfoFrame(GestureTracker *this, struct PointerInputInfo *a2)
{
  char v4; // bp
  char v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // r8
  float v10; // xmm0_4

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 6) = PointerManipulationHelper::GetKeyModifiers(a2);
  if ( *((_DWORD *)a2 + 79) )
  {
    do
    {
      LOBYTE(v7) = *((_BYTE *)this + 52);
      v8 = 144 * v6;
      v9 = (char *)a2 + 144 * v6 + 320;
      if ( (_BYTE)v7 || *(_DWORD *)((char *)a2 + v8 + 324) == *((_DWORD *)this + 10) )
      {
        v5 = 1;
        if ( !(_BYTE)v7 )
        {
          v10 = (float)*(int *)((char *)a2 + v8 + 352);
          *((float *)this + 1) = (float)*(int *)((char *)a2 + v8 + 356);
          *(float *)this = v10;
        }
        if ( (*((_BYTE *)a2 + v8 + 332) & 4) != 0 )
          v4 = 1;
        BufferPointerPacketsInteractionContext(*((_QWORD *)this + 4), 1LL, v9);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)a2 + 79) );
    if ( v5 && (int)ProcessBufferedPacketsInteractionContext(*((_QWORD *)this + 4), v7, v9) < 0 )
      GestureTracker::ResetAndInitializeInteractionContext(this);
  }
  return v4;
}
