/*
 * XREFs of ?CalculateMouseTable@@YAXXZ @ 0x1400A6D40
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400A57B0 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall CalculateMouseTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 UserSessionState; // r9
  int v4; // edi
  int v5; // r11d
  unsigned int v6; // r15d
  int v7; // ebp
  int v8; // r14d
  int v9; // r10d
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax

  v2 = 256LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = 50 * *(_DWORD *)(UserSessionState + 20584);
  v5 = 0;
  v6 = 50000 * *(_DWORD *)(UserSessionState + 20584) / (unsigned int)(20 * *(_DWORD *)(UserSessionState + 20588));
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    v11 = v5 + v6;
    v5 = v4;
    if ( v11 <= v4 )
      v5 = v11;
    v7 += v5;
    v12 = (v7 - 1000 * v8 + 500) / 1000;
    v8 += v12;
    if ( v5 < v4 )
    {
      if ( v10 < 128 )
      {
        v14 = v10++;
        *(_BYTE *)(v14 + UserSessionState + 20629) = v12;
      }
    }
    else if ( v5 == v4 && v9 < 128 )
    {
      v13 = v9++;
      *(_BYTE *)(v13 + UserSessionState + 20758) = v12;
    }
    --v2;
  }
  while ( v2 );
  *(_BYTE *)(UserSessionState + 20628) = v10;
  *(_BYTE *)(UserSessionState + 20757) = v9;
}
