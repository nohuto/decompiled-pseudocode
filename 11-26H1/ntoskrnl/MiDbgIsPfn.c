/*
 * XREFs of MiDbgIsPfn @ 0x140702CF4
 * Callers:
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 *     MiDbgMarkPfnModified @ 0x1407031F0 (MiDbgMarkPfnModified.c)
 *     MiDbgPrivilegedWriteCheck @ 0x1407036F0 (MiDbgPrivilegedWriteCheck.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
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
    if ( a1 > qword_140E2D920 )
      return 0LL;
    v3 = 48 * a1;
    if ( !MmIsAddressValidEx(48 * a1 - 0x220000000000LL) )
      return 0LL;
  }
  if ( a1 <= qword_140E2D920 )
    return (*(_QWORD *)(v3 - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
  return (unsigned int)v1;
}
