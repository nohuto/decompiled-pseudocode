/*
 * XREFs of TryUpdatePTPConfigFromRegistry @ 0x1401462A4
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1400B2B50 (GetDWORDSettingValuesEx.c)
 *     IsValidMouseSensitivity @ 0x140141330 (IsValidMouseSensitivity.c)
 */

__int64 __fastcall TryUpdatePTPConfigFromRegistry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  result = W32GetUserSessionState(a1, a2);
  v3 = result;
  if ( !*(_DWORD *)(result + 17952) )
  {
    result = GetDWORDSettingValuesEx(0LL, *(_QWORD *)(result + 17960), 0x10u, 1);
    if ( (_DWORD)result )
    {
      v6 = *(_DWORD **)(v3 + 17960);
      UserSessionState = W32GetUserSessionState(v5, v4);
      v9 = (_DWORD *)UserSessionState;
      if ( v6[55] )
        *(_DWORD *)(UserSessionState + 16784) |= 0x200u;
      v10 = v6[3];
      if ( v10 <= 4 )
        v9[4197] = v10;
      if ( IsValidMouseSensitivity((unsigned int)v6[7], v8) )
        v9[4198] = v6[7];
      v11 = v6[11];
      if ( v11 <= 0x64 )
        v9[4199] = v11;
      v12 = v6[15];
      if ( v12 <= 0x64 )
        v9[4200] = v12;
      v13 = v6[59];
      if ( v13 <= 0x64 )
        v9[4201] = v13;
      result = (unsigned int)v6[63];
      if ( (unsigned int)result <= 0x64 )
        v9[4202] = result;
      if ( v6[43] )
        v9[4196] |= 0x40u;
      if ( !v6[19] )
        v9[4196] &= ~1u;
      if ( !v6[39] )
        v9[4196] &= ~0x20u;
      if ( !v6[31] )
        v9[4196] &= ~8u;
      if ( !v6[27] )
        v9[4196] &= ~4u;
      if ( !v6[35] )
        v9[4196] &= ~0x10u;
      if ( !v6[47] )
        v9[4196] &= ~0x80u;
      if ( !v6[51] )
        v9[4196] &= ~0x100u;
      if ( !v6[23] )
        v9[4196] &= ~2u;
      *(_DWORD *)(v3 + 17952) = 1;
    }
  }
  return result;
}
