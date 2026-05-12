/*
 * XREFs of TcglibpConfigureLockingSp @ 0x140134684
 * Callers:
 *     TcglibConfigureLockingSpEx @ 0x140130B4C (TcglibConfigureLockingSpEx.c)
 * Callees:
 *     TcglibEalLogError @ 0x14008D638 (TcglibEalLogError.c)
 *     TcglibEalLogInfo @ 0x14008D804 (TcglibEalLogInfo.c)
 *     TcglibpSetACEBooleanExpr @ 0x1401348F8 (TcglibpSetACEBooleanExpr.c)
 */

__int64 __fastcall TcglibpConfigureLockingSp(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  unsigned int i; // esi
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = 0LL;
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
  {
    v5 = TcglibpSetACEBooleanExpr(a1, a2, i + 0x800043000LL, 0x900000001LL);
    if ( v5 < 0 )
      break;
    if ( i >= 0x80 )
    {
      if ( i >= 0x800 )
      {
        v5 = -1073741637;
        break;
      }
      v9 = 0x800045000LL;
    }
    else
    {
      v9 = 0x80003FC00LL;
    }
    v5 = TcglibpSetACEBooleanExpr(a1, a2, v9 + 2 * i, 0x900000001LL);
    if ( v5 < 0 )
      break;
    v10 = i >= 0x80 ? 0x800045001LL : 0x80003FC01LL;
    v5 = TcglibpSetACEBooleanExpr(a1, a2, v10 + 2 * i, i + 0x900030001LL);
    if ( v5 < 0 )
      break;
  }
  if ( a3 )
  {
    if ( v5 < 0 )
    {
LABEL_20:
      LOBYTE(v3) = a3 != 0;
      TcglibEalLogError(*(int **)a1, "TcglibConfigureLockingSp failed", v5, *(_DWORD *)(a1 + 48), i, v3);
      return (unsigned int)v5;
    }
    v5 = TcglibpSetACEBooleanExpr(a1, a2, 0x800038002LL, 0x900000001LL);
  }
  if ( v5 < 0 )
    goto LABEL_20;
  TcglibEalLogInfo(*(int **)a1, "TcglibConfigureLockingSp success", *(_DWORD *)(a1 + 48), a3 != 0, 0LL);
  return (unsigned int)v5;
}
