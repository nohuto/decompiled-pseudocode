/*
 * XREFs of sub_1400EE870 @ 0x1400EE870
 * Callers:
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 * Callees:
 *     sub_1400EE400 @ 0x1400EE400 (sub_1400EE400.c)
 *     sub_1400EF52C @ 0x1400EF52C (sub_1400EF52C.c)
 */

__int64 __fastcall sub_1400EE870(_QWORD *SystemArgument2, char a2)
{
  __int64 result; // rax

  result = sub_1400EE400(SystemArgument2, a2);
  if ( (int)result >= 0 )
  {
    result = sub_1400EF52C(SystemArgument2);
    if ( (int)result < 0 )
      *((_DWORD *)SystemArgument2 + 294) = 22;
  }
  else
  {
    *((_DWORD *)SystemArgument2 + 294) = 23;
  }
  return result;
}
