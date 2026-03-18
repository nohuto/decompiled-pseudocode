/*
 * XREFs of MiDbgIsPfn @ 0x1406FE024
 * Callers:
 *     MiDbgMapPhysicalAddress @ 0x1406FE368 (MiDbgMapPhysicalAddress.c)
 *     MiDbgMarkPfnModified @ 0x1406FE520 (MiDbgMarkPfnModified.c)
 *     MiDbgPrivilegedWriteCheck @ 0x1406FEA20 (MiDbgPrivilegedWriteCheck.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall MiDbgIsPfn(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi

  LODWORD(v1) = 0;
  if ( _bittest64(&MiFlags, 0x1Fu) )
  {
    v3 = 48 * a1;
  }
  else
  {
    if ( a1 > qword_140E2D7A0 )
      return 0LL;
    v3 = 48 * a1;
    if ( !MmIsAddressValidEx(48 * a1 - 0x220000000000LL) )
      return 0LL;
  }
  if ( a1 <= qword_140E2D7A0 )
    return (*(_QWORD *)(v3 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
  return (unsigned int)v1;
}
