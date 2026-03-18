/*
 * XREFs of UsbhWmiEnumerationFailure @ 0x1400562B0
 * Callers:
 *     UsbhExecuteWmiMethod @ 0x140055100 (UsbhExecuteWmiMethod.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhWmiEnumerationFailure(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r11
  unsigned int v9; // r10d
  __int64 result; // rax
  __int64 PortData; // rax

  Log(a1, 64, 1299474532, 0LL, a5);
  *a4 = v7;
  if ( v9 < 0x18 )
    return 3221225507LL;
  PortData = UsbhGetPortData(v8, *(unsigned __int16 *)(a5 + 4), v6, v7);
  if ( !PortData )
    return 3221225485LL;
  *(_DWORD *)(a5 + 12) = *(_DWORD *)(PortData + 424);
  result = 0LL;
  *a4 = 24;
  return result;
}
