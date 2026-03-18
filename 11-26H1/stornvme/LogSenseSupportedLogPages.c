/*
 * XREFs of LogSenseSupportedLogPages @ 0x14001CF20
 * Callers:
 *     ScsiLogSenseRequest @ 0x140010E30 (ScsiLogSenseRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall LogSenseSupportedLogPages(__int64 a1, __int64 a2)
{
  _DWORD *SrbDataBuffer; // rbx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  __int64 result; // rax
  unsigned int *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  SrbDataBuffer = (_DWORD *)GetSrbDataBuffer(a2, &v7);
  if ( SrbDataBuffer && (v4 = *v7, *v7 >= 7) )
  {
    if ( (v4 & 3) != 0 )
    {
      memset(SrbDataBuffer, 0, *v7);
    }
    else
    {
      v5 = v4 >> 2;
      if ( v5 )
        memset(SrbDataBuffer, 0, 4LL * v5);
    }
    *SrbDataBuffer = 50331648;
    result = 0LL;
    *((_WORD *)SrbDataBuffer + 2) = 3328;
    *((_BYTE *)SrbDataBuffer + 6) = 47;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002694LL;
  }
  return result;
}
