/*
 * XREFs of IsKeyStateCached @ 0x1400E8580
 * Callers:
 *     NtUserGetKeyboardState @ 0x1400E83A0 (NtUserGetKeyboardState.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x14010FC20 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     _GetKeyboardState @ 0x1401BD130 (_GetKeyboardState.c)
 * Callees:
 *     <none>
 */

char __fastcall IsKeyStateCached(unsigned __int8 a1)
{
  unsigned int v1; // edx
  _BYTE *v2; // rax
  char result; // al

  if ( a1 < 0x20u )
    return 1;
  v1 = 0;
  v2 = &unk_140269938;
  while ( v1 < 0xE )
  {
    if ( *v2 == a1 )
      return 1;
    ++v1;
    ++v2;
  }
  if ( a1 == 165 )
    return 1;
  switch ( a1 )
  {
    case 0x5Bu:
    case 0x5Cu:
    case 0xA0u:
    case 0xA1u:
    case 0xA2u:
    case 0xA3u:
    case 0xA4u:
      return 1;
    default:
      result = 0;
      break;
  }
  return result;
}
