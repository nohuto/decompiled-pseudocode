/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x14006E5A0
 * Callers:
 *     bInitPALOBJ @ 0x1402E8008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402E8494 (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402EA240 (bInitBrush.c)
 *     bInitICM @ 0x1402EA32C (bInitICM.c)
 * Callees:
 *     HmgModifyHandleType @ 0x14006F6A0 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 SessionState; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rcx

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    SessionState = W32GetSessionState(a1);
    v8 = a1 | 0x800000;
    v9 = *(_QWORD *)(SessionState + 88);
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 3016) + 8 * v4) = v8;
      v10 = *(_QWORD *)(v9 + 3016);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v9 + 3008) + 8 * v4) = v8;
      v10 = *(_QWORD *)(v9 + 3008);
    }
    HmgModifyHandleType(*(_QWORD *)(v10 + 8 * v4));
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
