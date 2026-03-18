/*
 * XREFs of NVMeGetTemperatureThresholdCompletion @ 0x140027280
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeGetTemperatureThresholdCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _WORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // dl

  result = GetSrbExtension(a2);
  if ( v3 )
  {
    v6 = *(_BYTE *)(v4 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_WORD *)(v5 + 220) = *v3;
      *(_BYTE *)(result + 4225) |= 8u;
    }
  }
  return result;
}
