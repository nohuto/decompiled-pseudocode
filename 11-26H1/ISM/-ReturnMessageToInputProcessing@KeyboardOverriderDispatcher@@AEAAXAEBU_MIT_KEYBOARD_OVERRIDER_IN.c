/*
 * XREFs of ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800F6268
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800F58C0 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ @ 0x1800F5BA0 (-DrainMessageQueue@KeyboardOverriderDispatcher@@AEAAXXZ.c)
 *     ?InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z @ 0x1800F5C90 (-InjectKeyEvent@KeyboardOverriderDispatcher@@UEAAJGG@Z.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800F6050 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2)
{
  __int16 v2; // r15
  int v3; // esi
  __int16 v5; // r14
  int v6; // ebx
  __int16 v7; // di
  __int128 v8; // xmm0
  _WORD v9[2]; // [rsp+40h] [rbp-29h] BYREF
  int v10; // [rsp+44h] [rbp-25h]
  __int16 v11; // [rsp+48h] [rbp-21h]
  __int16 v12; // [rsp+4Ah] [rbp-1Fh]
  int v13; // [rsp+4Ch] [rbp-1Dh]
  __int16 v14; // [rsp+50h] [rbp-19h]
  __int16 v15; // [rsp+52h] [rbp-17h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  __int128 v17; // [rsp+70h] [rbp+7h]

  v2 = *((_WORD *)a2 + 176);
  v3 = *((_DWORD *)a2 + 89);
  v5 = *((_WORD *)a2 + 180);
  v6 = *((_DWORD *)a2 + 91);
  v7 = *((_WORD *)a2 + 4);
  memset_0(v9, 0, 0x40uLL);
  v8 = *((_OWORD *)a2 + 21);
  v9[1] = 0;
  v12 = 0;
  v15 = 0;
  v16 = *(_QWORD *)a2;
  v9[0] = v2;
  v10 = v3;
  v11 = v5;
  v13 = v6;
  v14 = v7;
  v17 = v8;
  NtMITSynthesizeKeyboardInput(4LL, v9);
}
