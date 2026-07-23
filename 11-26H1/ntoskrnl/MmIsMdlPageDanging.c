/*
 * XREFs of MmIsMdlPageDanging @ 0x1406F3AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MmIsMdlPageDanging(unsigned __int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  int v3; // ecx

  v1 = 0;
  v2 = 48 * a1;
  if ( a1 > qword_140E2D920 || ((*(_QWORD *)(v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    NT_ASSERT("MiIsPfn (PageFrameIndex)");
  if ( (*(_QWORD *)(v2 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    NT_ASSERT("(MiReadPfnBlink (Pfn1).ShareCount) == 1");
  if ( (*(_QWORD *)(v2 - 0x220000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0
    || (*(_BYTE *)(v2 - 0x220000000000LL + 34) & 7) != 6
    || (*(_QWORD *)(v2 - 0x220000000000LL + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
  {
    NT_ASSERT(
      "(((MiReadPfnBlink (Pfn1).ShareCount) != 0) && (Pfn1->u3.e1.PageLocation == ActiveAndValid) && ((MiGetPfnContaining"
      "Frame (Pfn1) == (((((PFN_NUMBER) 1) << (50 - 12)) - 1) - 1))))");
  }
  v3 = *(_DWORD *)(v2 - 0x220000000000LL + 32);
  if ( (unsigned __int16)v3 < 2u )
    NT_ASSERT("ReferenceCount >= 2");
  LOBYTE(v1) = (unsigned __int16)v3 > 2u;
  return v1;
}
