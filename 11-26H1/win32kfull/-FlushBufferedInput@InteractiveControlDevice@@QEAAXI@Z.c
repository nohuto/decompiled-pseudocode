/*
 * XREFs of ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1402FCE84
 * Callers:
 *     ?OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z @ 0x1402F1D74 (-OnDeviceTimerNotification@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402FCD34 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x14013D2FC (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14025560C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402FD944 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 */

void __fastcall InteractiveControlDevice::FlushBufferedInput(InteractiveControlDevice *this, int a2)
{
  struct InteractiveControlInput **v2; // rdi
  struct InteractiveControlInput *v5; // rdx
  struct InteractiveControlInput **v6; // rbp
  int v7; // esi
  struct InteractiveControlInput *v8; // r14
  unsigned int v9; // r15d
  struct tagWND *updated; // rax

  v2 = (struct InteractiveControlInput **)*((_QWORD *)this + 46);
  if ( v2 && *((_DWORD *)this + 91) )
  {
    v5 = *v2;
    v6 = (struct InteractiveControlInput **)((char *)this + 16);
    if ( v2 != (struct InteractiveControlInput **)((char *)this + 16) )
    {
      v7 = ~a2;
      do
      {
        v8 = (struct InteractiveControlInput *)v2;
        v2 = (struct InteractiveControlInput **)v2[1];
        v9 = v7 & InteractiveControlDevice::DetermineMessageCreationFlags(this, v5, v8);
        if ( v9 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v9);
          InteractiveControlInput::GenerateMessages((__int64)v8, updated, *((_DWORD *)this + 16), v9);
        }
        v5 = v8;
      }
      while ( v2 != v6 );
    }
    *((_DWORD *)this + 91) = 0;
    *((_QWORD *)this + 46) = 0LL;
  }
}
