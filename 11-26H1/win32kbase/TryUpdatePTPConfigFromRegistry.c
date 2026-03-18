/*
 * XREFs of TryUpdatePTPConfigFromRegistry @ 0x14017C970
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1401AA660 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1400F04A0 (GetDWORDSettingValuesEx.c)
 *     IsValidMouseSensitivity @ 0x14017AED0 (IsValidMouseSensitivity.c)
 */

__int64 __fastcall TryUpdatePTPConfigFromRegistry(int a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _DWORD *v8; // rdi
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // r8d
  _DWORD *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax

  result = W32GetUserSessionState(a1, a2, a3);
  v4 = result;
  if ( !*(_DWORD *)(result + 17944) )
  {
    result = GetDWORDSettingValuesEx(0LL, *(_QWORD *)(result + 17952), 0x10u, 1);
    if ( (_DWORD)result )
    {
      v8 = *(_DWORD **)(v4 + 17952);
      UserSessionState = W32GetUserSessionState(v6, v5, v7);
      v12 = (_DWORD *)UserSessionState;
      if ( v8[55] )
        *(_DWORD *)(UserSessionState + 16776) |= 0x200u;
      v13 = v8[3];
      if ( v13 <= 4 )
        v12[4195] = v13;
      if ( IsValidMouseSensitivity(v8[7], v10, v11) )
        v12[4196] = v8[7];
      v14 = v8[11];
      if ( v14 <= 0x64 )
        v12[4197] = v14;
      v15 = v8[15];
      if ( v15 <= 0x64 )
        v12[4198] = v15;
      v16 = v8[59];
      if ( v16 <= 0x64 )
        v12[4199] = v16;
      result = (unsigned int)v8[63];
      if ( (unsigned int)result <= 0x64 )
        v12[4200] = result;
      if ( v8[43] )
        v12[4194] |= 0x40u;
      if ( !v8[19] )
        v12[4194] &= ~1u;
      if ( !v8[39] )
        v12[4194] &= ~0x20u;
      if ( !v8[31] )
        v12[4194] &= ~8u;
      if ( !v8[27] )
        v12[4194] &= ~4u;
      if ( !v8[35] )
        v12[4194] &= ~0x10u;
      if ( !v8[47] )
        v12[4194] &= ~0x80u;
      if ( !v8[51] )
        v12[4194] &= ~0x100u;
      if ( !v8[23] )
        v12[4194] &= ~2u;
      *(_DWORD *)(v4 + 17944) = 1;
    }
  }
  return result;
}
