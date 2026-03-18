/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160
 * Callers:
 *     CleanupGDI @ 0x140136A50 (CleanupGDI.c)
 * Callees:
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14008D308 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  __int64 v1; // rbx
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    SURFREF::SURFREF((SURFREF *)v3);
    if ( HmgShareLockCheck(v1, 5) )
    {
      if ( (v1 & 0x800000) == 0 )
        HmgSetOwner(v1, -2147483646, 5);
    }
    SURFREF::~SURFREF((SURFREF *)v3);
    GreDeleteObject((struct HOBJ__ *)*a1);
    *a1 = 0LL;
  }
}
