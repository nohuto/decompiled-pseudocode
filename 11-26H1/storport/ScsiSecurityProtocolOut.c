/*
 * XREFs of ScsiSecurityProtocolOut @ 0x140116A44
 * Callers:
 *     ScsiToNVMeCommand @ 0x140116B04 (ScsiToNVMeCommand.c)
 * Callees:
 *     SetSrbSenseData @ 0x140117078 (SetSrbSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolOut(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned __int16 v10; // [rsp+48h] [rbp+10h]
  unsigned int v11; // [rsp+50h] [rbp+18h]

  HIBYTE(v10) = a3[2];
  LOBYTE(v10) = a3[3];
  HIBYTE(v11) = a3[6];
  BYTE2(v11) = a3[7];
  BYTE1(v11) = a3[8];
  LOBYTE(v11) = a3[9];
  v5 = v11;
  if ( (char)a3[4] < 0 )
    v5 = v11 << 9;
  v6 = 60LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v6 = 16LL;
  if ( *(_DWORD *)(v6 + a2) >= v5 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    *(_BYTE *)(a4 + 43) = a3[1];
    *(_DWORD *)(a4 + 4) = v8;
    v9 = *(_DWORD *)(a4 + 40) & 0xFF0000FF | (v10 << 8);
    *(_BYTE *)a4 = -127;
    *(_DWORD *)(a4 + 40) = v9;
    result = 259LL;
    *(_DWORD *)(a4 + 44) = v5;
    *(_BYTE *)(a2 + 3) = 0;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v5) = 6;
    SetSrbSenseData(a2, v5, (_DWORD)a3, a4, 0);
    return 3221225485LL;
  }
  return result;
}
