/*
 * XREFs of MiSectionDelete @ 0x140A9ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiDereferenceControlAreaBySection @ 0x14036F4A8 (MiDereferenceControlAreaBySection.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiLogSectionObjectEvent @ 0x14077DED8 (MiLogSectionObjectEvent.c)
 *     MiRemoveBasedSection @ 0x14086B204 (MiRemoveBasedSection.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rcx
  __int64 v10; // rdx

  v2 = *(_WORD *)(a1 + 58) & 1;
  v5 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v4 + 24) )
    MiRemoveBasedSection(v4, v3, v6, v7);
  v8 = *(_QWORD *)(a1 + 40);
  if ( (v8 & 3) != 0 )
    ObfDereferenceObjectWithTag((PVOID)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0x43536D4Du);
  if ( (*(_DWORD *)(a1 + 56) & 0x40000000) != 0 && (*(_DWORD *)(v5 + 56) & 0x20) == 0 && *(_QWORD *)(v5 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
  if ( (*(_DWORD *)(v5 + 56) & 8) != 0 && (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
  {
    v10 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( (_DWORD)v10 == 0x7FFFF )
      v10 = 0xFFFFFFFFLL;
    MiDereferencePerSessionProtos(v5, v10);
  }
  if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 && !*(_QWORD *)(v5 + 64) )
    MiLogSectionObjectEvent(a1);
  return MiDereferenceControlAreaBySection(v5, v2);
}
