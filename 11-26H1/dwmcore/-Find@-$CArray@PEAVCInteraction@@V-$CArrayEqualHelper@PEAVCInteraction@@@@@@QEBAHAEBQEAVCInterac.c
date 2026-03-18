/*
 * XREFs of ?Find@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEBAHAEBQEAVCInteraction@@@Z @ 0x1801C5738
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A93AC (--1CInteraction@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Find(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  int i; // ecx

  v2 = CInteraction::s_DefaultStateLockedInteractions;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_1803DE4F0 )
      return 0xFFFFFFFFLL;
    if ( *v2 == *a2 )
      break;
    ++v2;
  }
  return (unsigned int)i;
}
