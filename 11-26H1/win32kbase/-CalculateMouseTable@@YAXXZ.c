/*
 * XREFs of ?CalculateMouseTable@@YAXXZ @ 0x1400DF500
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1400DFA30 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void __fastcall CalculateMouseTable(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 UserSessionState; // r9
  int v5; // edi
  int v6; // r11d
  unsigned int v7; // r15d
  int v8; // ebp
  int v9; // r14d
  int v10; // r10d
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = 256LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = 50 * *(_DWORD *)(UserSessionState + 20616);
  v6 = 0;
  v7 = 50000 * *(_DWORD *)(UserSessionState + 20616) / (unsigned int)(20 * *(_DWORD *)(UserSessionState + 20620));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = v6 + v7;
    v6 = v5;
    if ( v12 <= v5 )
      v6 = v12;
    v8 += v6;
    v13 = (v8 - 1000 * v9 + 500) / 1000;
    v9 += v13;
    if ( v6 < v5 )
    {
      if ( v11 < 128 )
      {
        v15 = v11++;
        *(_BYTE *)(v15 + UserSessionState + 20661) = v13;
      }
    }
    else if ( v6 == v5 && v10 < 128 )
    {
      v14 = v10++;
      *(_BYTE *)(v14 + UserSessionState + 20790) = v13;
    }
    --v3;
  }
  while ( v3 );
  *(_BYTE *)(UserSessionState + 20660) = v11;
  *(_BYTE *)(UserSessionState + 20789) = v10;
}
