/*
 * XREFs of ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x14008AF40
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x14008B010 (-CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_IN.c)
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall CKeyboardProcessor::ForwardInputToISM(
        bool a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int64 a8,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a9)
{
  _BYTE v13[352]; // [rsp+60h] [rbp-168h] BYREF

  memset(v13, 0, sizeof(v13));
  CKeyboardProcessor::CreateKeyboardInputMessage(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    0,
    a8,
    a9,
    (struct _MIT_KEYBOARD_INPUT_MESSAGE *)v13);
  SendMessageTo(8LL, v13, 352LL);
}
