/*
 * XREFs of WmipDoDisableRequest @ 0x140A0A320
 * Callers:
 *     WmipSendDisableRequest @ 0x140A0A2CC (WmipSendDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140A0CDA0 (WmipEnableCollectionForNewGuid.c)
 * Callees:
 *     WmipReleaseCollectionEnabled @ 0x140A09BAC (WmipReleaseCollectionEnabled.c)
 *     WmipSendEnableDisableRequest @ 0x140A0A3D0 (WmipSendEnableDisableRequest.c)
 */

__int64 __fastcall WmipDoDisableRequest(__int64 a1, char a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rbx
  char v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r15d

  v3 = a3;
  v5 = a1;
  v6 = a2 != 0 ? 5 : 7;
  v7 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFCuLL;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v6;
    v10 = WmipSendEnableDisableRequest(a1, v5, a3);
    if ( !*(_DWORD *)(v7 + v5 + 92) )
      break;
    LOBYTE(v9) = a2;
    LOBYTE(v8) = a2 != 0 ? 4 : 6;
    v10 = WmipSendEnableDisableRequest(v8, v5, v9);
  }
  while ( !*(_DWORD *)(v7 + v5 + 92) );
  *(_DWORD *)(v5 + 16) &= ~v3;
  if ( !a2 )
    WmipReleaseCollectionEnabled(v5);
  return v10;
}
