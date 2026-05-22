/*
 * XREFs of ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x18015F3E8
 * Callers:
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180086FB0 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800F6520 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 * Callees:
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 */

_DWORD *__fastcall InputServiceProcessor::CreateKeyboardEvent(_DWORD *a1, __int64 a2)
{
  __int16 v3; // cx
  int v5; // r13d
  __int16 v6; // si
  __int16 v7; // r14
  __int16 v8; // r12
  __int16 v9; // r15
  __int16 v10; // di
  __int16 v11; // di
  __int16 v12; // ax
  _DWORD *result; // rax

  v3 = *(_WORD *)(a2 + 94);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (v3 & 0x20) != 0 )
  {
    v8 = *(_WORD *)(a2 + 58);
  }
  else
  {
    v7 = *(_WORD *)(a2 + 60);
    v6 = *(_WORD *)(a2 + 58) | 0xE000;
    if ( (v3 & 2) == 0 )
      v6 = *(_WORD *)(a2 + 58);
    if ( (v3 & 4) != 0 )
      v6 |= 0xE100u;
  }
  v9 = *(_WORD *)(a2 + 56);
  v10 = (v3 & 1) != 0 ? 4 : 1;
  if ( v9 == -3 || v9 == -2 )
  {
    v10 |= 0x4000u;
    if ( v9 == -3 )
      v5 = 1;
  }
  v11 = v10 | 8;
  memset_0(a1, 0, 0x128uLL);
  a1[8] = *(_DWORD *)(a2 + 8);
  *((_WORD *)a1 + 11) = *(_WORD *)(a2 + 4);
  *((_WORD *)a1 + 18) = *(_WORD *)(a2 + 356);
  a1[3] = v5;
  a1[1] = 0;
  if ( v8 )
  {
    *a1 = 2;
    *((_WORD *)a1 + 10) = v8;
    v12 = 255;
    if ( v9 != -3 )
      v12 = 0;
    v11 |= 0x4000u;
    *((_WORD *)a1 + 9) = v12;
  }
  else
  {
    if ( !v7 || v6 )
    {
      *a1 = 0;
      *((_WORD *)a1 + 8) = v6;
    }
    else
    {
      *((_QWORD *)a1 + 3) = *(_QWORD *)(a2 + 32);
      *a1 = 1;
    }
    *((_WORD *)a1 + 9) = v7;
  }
  result = a1;
  *((_WORD *)a1 + 4) = v11;
  return result;
}
