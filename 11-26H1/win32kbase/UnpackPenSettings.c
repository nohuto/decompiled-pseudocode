/*
 * XREFs of UnpackPenSettings @ 0x14021C800
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMIsDefaultUILanguageRTL @ 0x140170150 (RIMIsDefaultUILanguageRTL.c)
 *     GetUserHandedness @ 0x140193BEC (GetUserHandedness.c)
 *     EditionxxxBroadcastSPIChange @ 0x1401C1AC8 (EditionxxxBroadcastSPIChange.c)
 */

__int64 __fastcall UnpackPenSettings(_DWORD *a1)
{
  int v1; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d

  v1 = a1[3];
  if ( v1 != (unsigned int)GetUserHandedness((__int64)a1) )
  {
    v9 = 0;
    if ( RIMIsDefaultUILanguageRTL() )
      LOBYTE(v9) = v1 == 0;
    else
      LOBYTE(v9) = v1 != 0;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 19904) + 2056LL) = v9;
    EditionxxxBroadcastSPIChange(8229LL, v10, 0);
  }
  v11 = a1[4];
  if ( v11 != *(_DWORD *)(W32GetUserSessionState(v4, v3, v5) + 67064) )
  {
    *(_DWORD *)(W32GetUserSessionState(v13, v12, v14) + 67064) = v11;
    EditionxxxBroadcastSPIChange(8223LL, v15, 0);
  }
  result = *(unsigned int *)(W32GetUserSessionState(v13, v12, v14) + 67128);
  if ( a1[5] != (_DWORD)result )
  {
    result = W32GetUserSessionState(v18, v17, v19);
    *(_DWORD *)(result + 67128) = a1[5];
  }
  return result;
}
