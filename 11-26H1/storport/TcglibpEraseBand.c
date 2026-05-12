/*
 * XREFs of TcglibpEraseBand @ 0x140132B48
 * Callers:
 *     TcglibEraseBand @ 0x140130ED0 (TcglibEraseBand.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpEraseBand(int **a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v4; // esi
  bool v5; // zf
  char v6; // r8
  int v8; // ebx

  v3 = a3;
  v4 = (int)a1;
  v5 = a3 == 0;
  v6 = 1;
  if ( !v5 )
    v6 = v3;
  v8 = v3 + 196608;
  TcglibEalLogCommand(*a1, "EraseBand", v6, 3, v3, 0LL);
  if ( !(_DWORD)v3 )
    v8 = 1;
  return TcglibpCallMethod(v4, a2, v8, 2051, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
