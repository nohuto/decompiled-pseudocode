/*
 * XREFs of ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1401A4EC0
 * Callers:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 * Callees:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x14008B010 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToKeyboardOverrider(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        unsigned __int16 a7,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a8)
{
  int v9; // ebp
  _DWORD v12[92]; // [rsp+60h] [rbp-178h] BYREF

  v9 = a1;
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[88]) = a2;
  v12[89] = v9;
  LOWORD(v12[90]) = a3;
  v12[91] = a6;
  CKeyboardProcessor::CreateKeyboardInputMessage(
    v9,
    a2,
    a3,
    a4,
    a5,
    a6,
    0,
    a7,
    0,
    a8,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v12);
  SendMessageTo(13, (int)v12, 368);
}
