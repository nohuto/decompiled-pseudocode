/*
 * XREFs of UnpackPenSettings @ 0x1402175C4
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x140136570 (RIMIsDefaultUILanguageRTL.c)
 *     GetUserHandedness @ 0x140157278 (GetUserHandedness.c)
 *     EditionxxxBroadcastSPIChange @ 0x14023EC20 (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackPenSettings(_DWORD *a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v2 = a1[3];
  if ( v2 != (unsigned int)GetUserHandedness((__int64)a1, a2) )
  {
    v8 = 0;
    if ( RIMIsDefaultUILanguageRTL() )
      LOBYTE(v8) = v2 == 0;
    else
      LOBYTE(v8) = v2 != 0;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872) + 2056LL) = v8;
    EditionxxxBroadcastSPIChange(8229LL, v9, 0LL);
  }
  v10 = a1[4];
  if ( v10 != *(_DWORD *)(W32GetUserSessionState(v5, v4) + 67072) )
  {
    *(_DWORD *)(W32GetUserSessionState(v12, v11) + 67072) = v10;
    EditionxxxBroadcastSPIChange(8223LL, v13, 0LL);
  }
  result = W32GetUserSessionState(v12, v11);
  v16 = *(unsigned int *)(result + 67136);
  if ( a1[5] != (_DWORD)v16 )
  {
    result = W32GetUserSessionState(v16, v15);
    *(_DWORD *)(result + 67136) = a1[5];
  }
  return result;
}
