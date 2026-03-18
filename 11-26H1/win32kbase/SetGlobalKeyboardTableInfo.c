/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x14011C544
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x14011B070 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011BC8C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x140219A5C (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rbx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rbx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 14056) = v4;
  if ( *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 14216) != a1 )
    *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 14216) = a1;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 14200) = v11;
  LODWORD(v11) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 14208) = v11;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL);
  result = W32GetUserSessionState(v17, v16, v18);
  *(_QWORD *)(result + 14064) = v15;
  return result;
}
