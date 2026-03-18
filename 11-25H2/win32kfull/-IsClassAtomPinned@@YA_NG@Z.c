/*
 * XREFs of ?IsClassAtomPinned@@YA_NG@Z @ 0x1400B3944
 * Callers:
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1400B5258 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsClassAtomPinned(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = a1;
  return (unsigned __int16)a1 >= *(_WORD *)(W32GetUserSessionState(a1, a2) + 41320)
      && v2 <= *(_WORD *)(W32GetUserSessionState(v4, v3) + 41322);
}
