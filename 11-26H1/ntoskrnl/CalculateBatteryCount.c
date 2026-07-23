/*
 * XREFs of CalculateBatteryCount @ 0x140B38264
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculateBatteryCount(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  int v6; // ecx

  v3 = qword_140F10640;
  *a3 = 0;
  *a2 = 0;
  while ( (__int64 *)v3 != &qword_140F10640 )
  {
    v6 = *(_DWORD *)(v3 + 104);
    if ( v6 == 2 )
    {
      ++*a2;
    }
    else if ( v6 == 4 )
    {
      ++*a3;
    }
    v3 = *(_QWORD *)v3;
  }
  result = (unsigned int)dword_140F10634;
  *a1 = dword_140F10634;
  return result;
}
