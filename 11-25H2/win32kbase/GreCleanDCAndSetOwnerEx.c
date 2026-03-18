/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x1401C90C0
 * Callers:
 *     ReleaseCacheDC @ 0x140046EA0 (ReleaseCacheDC.c)
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x14001C350 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400436F8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     GreSetDCOwnerEx @ 0x14008A010 (GreSetDCOwnerEx.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, int a4)
{
  BOOL v8; // ebx
  DC *v10[14]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, (HDC)a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GreSetDCOwnerEx(a1, a2, a3, a4) != 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v8;
}
