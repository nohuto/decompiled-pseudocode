/*
 * XREFs of bInitBMOBJ @ 0x1402F039C
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140025488 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreCreateBitmap @ 0x140025CE0 (GreCreateBitmap.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1400546C0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1401794C0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

HSURF __fastcall bInitBMOBJ(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  HSURF result; // rax
  unsigned __int64 v4; // rdi
  unsigned int *v5[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = (HSURF)GreCreateBitmap(1, 1, 1, 1, 0LL);
  v4 = (unsigned __int64)result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v5, result, (struct Gre::Base::SESSION_GLOBALS *)v2);
    if ( v6 )
    {
      HmgSetOwner(*(_QWORD *)(v6 + 32), 0, 5);
      bSetStockObject(v4, 21, 0);
      v1 = 1;
      *(_QWORD *)(v6 + 32) = v4 | 0x800000;
      *(_QWORD *)(v2 + 4376) = v6;
    }
    SURFREF::~SURFREF(v5);
    return (HSURF)v1;
  }
  return result;
}
