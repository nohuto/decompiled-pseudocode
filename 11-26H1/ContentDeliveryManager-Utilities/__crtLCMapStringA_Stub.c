/*
 * XREFs of __crtLCMapStringA_Stub @ 0x18000DE20
 * Callers:
 *     _Tolower @ 0x180005D68 (_Tolower.c)
 *     _Toupper @ 0x18000E840 (_Toupper.c)
 *     _Strxfrm @ 0x180021300 (_Strxfrm.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall _crtLCMapStringA_Stub(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  return _crtLCMapStringA_0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
