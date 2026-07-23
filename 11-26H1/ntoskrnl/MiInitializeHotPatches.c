/*
 * XREFs of MiInitializeHotPatches @ 0x140D01A44
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // ecx

  xmmword_140E366C0 = 0LL;
  qword_140E366B8 = 0LL;
  qword_140E366D0 = 0LL;
  *(_QWORD *)&stru_140E366D8.Header.Lock = 0LL;
  v1 = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
  HIDWORD(stru_140E366D8.SListFaultAddress) = v1;
  if ( (v1 & 0x1FFF) != 0 )
    return 0LL;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3872LL);
  LODWORD(stru_140E366D8.QuantumTarget) = v3;
  if ( v1 && (_bittest64(&MiFlags, 0x10u) || dword_140FBF270 == 1) )
    HIDWORD(stru_140E366D8.QuantumTarget) |= 1u;
  if ( v3
    && (MiFlags & 0x10000) != 0
    && ((MiFlags & 0x20000) != 0 || (stru_140E366D8.QuantumTarget & 0x400000000LL) != 0) )
  {
    HIDWORD(stru_140E366D8.QuantumTarget) |= 2u;
  }
  return 1LL;
}
