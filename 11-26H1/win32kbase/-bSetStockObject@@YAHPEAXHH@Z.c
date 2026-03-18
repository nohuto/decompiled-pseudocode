/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0
 * Callers:
 *     bInitPALOBJ @ 0x1402F0008 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1402F039C (bInitBMOBJ.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402F4AF8 (bInitBrush.c)
 *     bInitICM @ 0x1402F4C30 (bInitICM.c)
 * Callees:
 *     HmgModifyHandleType @ 0x140057BB0 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  __int64 SessionState; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rcx

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    SessionState = W32GetSessionState(a1);
    v9 = a1 | 0x800000;
    v10 = *(_QWORD *)(SessionState + 88);
    if ( a3 )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 3096) + 8 * v4) = v9;
      v11 = *(_QWORD *)(v10 + 3096);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 3088) + 8 * v4) = v9;
      v11 = *(_QWORD *)(v10 + 3088);
    }
    HmgModifyHandleType(*(_QWORD *)(v11 + 8 * v4));
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
