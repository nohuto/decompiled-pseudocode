/*
 * XREFs of bInitBrush @ 0x1402F4AF8
 * Callers:
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x140035570 (HmgMarkUndeletable.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

__int64 __fastcall bInitBrush(int a1, int a2, unsigned int a3, _QWORD *a4, int a5)
{
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 SessionState; // rax
  unsigned int *v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)&v13, a2, a3, 0, 0);
  v8 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( v13 )
  {
    v15 = 1;
    v13[10] |= 0x40200u;
    HmgSetOwner(*(_QWORD *)v13, 0, 16);
    HmgMarkUndeletable(*(_QWORD *)v13, 16);
    if ( a5 )
      v13[10] |= 4u;
    v9 = (unsigned __int64 *)v13;
    if ( a4 )
      *a4 = v13;
    bSetStockObject(*v9, a1, 0);
    if ( !a1 )
    {
      v10 = *(_QWORD *)v13;
      *(_QWORD *)(v8 + 392) = *(_QWORD *)v13;
    }
    if ( v13 )
    {
      SessionState = W32GetSessionState(v10);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v13);
      if ( !v15 )
        bDeleteBrush(*(struct HOBJ__ **)v13, 0, 0);
      v13 = 0LL;
    }
    PopThreadGuardedObject(v14);
    return 1LL;
  }
  else
  {
    PopThreadGuardedObject(v14);
    return 0LL;
  }
}
