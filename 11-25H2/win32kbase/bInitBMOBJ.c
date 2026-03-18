/*
 * XREFs of bInitBMOBJ @ 0x1402E8494
 * Callers:
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14006E5A0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     GreCreateBitmap @ 0x14008BDE0 (GreCreateBitmap.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140093C3C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

struct HOBJ__ *__fastcall bInitBMOBJ(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  struct HOBJ__ *result; // rax
  unsigned __int64 v4; // rdi
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v1 = 0;
  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = (struct HOBJ__ *)GreCreateBitmap(1, 1, 1, 1, 0LL);
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
      *(_QWORD *)(v2 + 4264) = v6;
    }
    SURFREF::~SURFREF((SURFREF *)v5);
    return (struct HOBJ__ *)v1;
  }
  return result;
}
