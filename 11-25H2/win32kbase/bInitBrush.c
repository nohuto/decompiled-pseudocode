/*
 * XREFs of bInitBrush @ 0x1402EA240
 * Callers:
 *     bInitBRUSHOBJ @ 0x1402E9AB8 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14006E5A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140087560 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     HmgMarkUndeletable @ 0x14010C3A0 (HmgMarkUndeletable.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, struct HOBJ__ ***a4, int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 *v9; // rcx
  struct HOBJ__ **v11[6]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+60h] [rbp-18h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v11, a2, a3, 0, 0);
  v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( v11[0] )
  {
    v12 = 1;
    *((_DWORD *)v11[0] + 10) |= 0x40200u;
    HmgSetOwner((__int64)*v11[0], 0, 16);
    HmgMarkUndeletable((unsigned int)*v11[0], 16);
    if ( a5 )
      *((_DWORD *)v11[0] + 10) |= 4u;
    v9 = (unsigned __int64 *)v11[0];
    if ( a4 )
      *a4 = v11[0];
    bSetStockObject(*v9, a1, 0);
    if ( !a1 )
      *(_QWORD *)(v8 + 304) = *v11[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v11);
    return 1LL;
  }
  else
  {
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v11);
    return 0LL;
  }
}
