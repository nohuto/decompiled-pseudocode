/*
 * XREFs of ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1400B5258
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 * Callees:
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1400B315C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1400B3944 (-IsClassAtomPinned@@YA_NG@Z.c)
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
