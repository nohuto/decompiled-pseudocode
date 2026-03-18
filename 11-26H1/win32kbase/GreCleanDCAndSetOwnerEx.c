/*
 * XREFs of GreCleanDCAndSetOwnerEx @ 0x140168CE0
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAH_N@Z @ 0x140019F20 (-bCleanDC@XDCOBJ@@QEAAH_N@Z.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall GreCleanDCAndSetOwnerEx(struct HOBJ__ *a1, unsigned int a2, int a3, unsigned int a4)
{
  BOOL v8; // ebx
  DC *v10[14]; // [rsp+30h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, (HDC)a1);
  v8 = 0;
  if ( v10[0] && (unsigned int)XDCOBJ::bCleanDC(v10, 0) )
    v8 = GrepSetDCOwnerEx(v10[2], a1, a2, a3, a4) != 0;
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return v8;
}
