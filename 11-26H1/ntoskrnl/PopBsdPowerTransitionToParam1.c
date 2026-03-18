/*
 * XREFs of PopBsdPowerTransitionToParam1 @ 0x1407DA978
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBsdPowerTransitionToParam1(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v2; // r9d
  bool v3; // zf

  result = stru_140E66FF0.SavedApcStateFill[32];
  v2 = stru_140E66FF0.SavedApcStateFill[32] & 0xF0 | ((stru_140E66FF0.SavedApcStateFill[39] & 0x80) << 19) | (((stru_140E66FF0.SavedApcStateFill[35] >> 2) | stru_140E66FF0.SavedApcStateFill[38] & 0xCFu) >> 4) | ((stru_140E66FF0.SavedApcStateFill[38] & 0xF | (16 * (stru_140E66FF0.SavedApcStateFill[34] & 0x3F | ((stru_140E66FF0.SavedApcStateFill[34] ^ (stru_140E66FF0.SavedApcStateFill[35] ^ stru_140E66FF0.SavedApcStateFill[34]) & 0x3F) << 6)))) << 8);
  v3 = stru_140E66FF0.PriorityFloorCounts[27] == 1;
  *a1 = v2;
  if ( v3 )
  {
    v2 |= 0x8000000u;
    *a1 = v2;
  }
  if ( stru_140E66FF0.PriorityFloorCounts[28] == 1 )
    *a1 = v2 | 0x10000000;
  return result;
}
