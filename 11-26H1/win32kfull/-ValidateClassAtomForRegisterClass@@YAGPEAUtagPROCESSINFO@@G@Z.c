/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1401507F4
 * Callers:
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x14014F808 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x14014FB1C (-IsClassAtomPinned@@YA_NG@Z.c)
 */

__int64 __fastcall ValidateClassAtomForRegisterClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // bx

  v3 = a2;
  v4 = 0;
  if ( IsClassAtomPinned((unsigned __int16)a2, a2) || v3 < 0xC000u || IsClassAtomRegistered(a1, v3) )
    return v3;
  return v4;
}
