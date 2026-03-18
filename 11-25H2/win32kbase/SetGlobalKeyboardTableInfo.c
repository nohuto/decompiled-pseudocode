/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x1400F4394
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3EF0 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011CA28 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140212D78 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14064) = v3;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 14224) != a1 )
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224) = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14208) = v8;
  LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  *(_DWORD *)(W32GetUserSessionState(v10, v9) + 14216) = v8;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL);
  result = W32GetUserSessionState(v13, v12);
  *(_QWORD *)(result + 14072) = v11;
  return result;
}
