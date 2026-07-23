/*
 * XREFs of MiPrepareDataViewSubsections @ 0x140995B50
 * Callers:
 *     MiMapViewOfDataSection @ 0x140995790 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1402C57D0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140342390 (MiLocatePagefileSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14043B530 (MiCheckPurgeAndUpMapCount.c)
 *     MiGetCommittedPages @ 0x1404560C0 (MiGetCommittedPages.c)
 *     MiDereferenceControlArea @ 0x1404E89D0 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiPrepareDataViewSubsections(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  unsigned __int64 *v4; // r15
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 ControlAreaPtes; // r12
  bool v8; // r14
  struct _KLOCK_ENTRIES *v9; // r9
  volatile LONG **SubsectionNode; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  int v14; // r14d
  volatile LONG *v15; // rax
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[3];
  v3 = *a1;
  v4 = (unsigned __int64 *)a1[2];
  MiCheckPurgeAndUpMapCount(v1);
  v5 = *v4 >> 12;
  v6 = (*v4 + *(_QWORD *)(v3 + 24)) >> 12;
  ControlAreaPtes = MiGetControlAreaPtes(v1);
  if ( v5 >= ControlAreaPtes )
  {
    MiDereferenceControlArea(v1);
    return 3221225503LL;
  }
  else
  {
    v8 = 0;
    if ( *(_QWORD *)(v1 + 64) )
    {
      SubsectionNode = (volatile LONG **)MiLocateSubsectionNode(v1, *v4, 0);
    }
    else
    {
      v17 = v5;
      SubsectionNode = (volatile LONG **)MiLocatePagefileSubsection((unsigned int *)(v1 + 128), &v17);
      if ( !a1[6] && *((_DWORD *)a1 + 8) == 24 )
        v8 = (*(_DWORD *)(v1 + 56) & 0x1000) != 0;
    }
    v11 = *((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_DWORD)SubsectionNode[4] & 0xFFC0) << 26);
    v12 = v6 - v11;
    v13 = v5 - v11;
    if ( v8 )
      v12 = 1LL;
    v14 = MiAddViewsForSection(SubsectionNode, v12, 4, v9);
    if ( v14 < 0 )
    {
      MiDereferenceControlArea(v1);
    }
    else
    {
      a1[10] = (__int64)SubsectionNode;
      v15 = SubsectionNode[1];
      a1[11] = v13;
      a1[12] = v12;
      a1[9] = (__int64)&v15[2 * v13];
      if ( !*(_QWORD *)(v1 + 64) && a1[6] && MiGetCommittedPages((_QWORD *)v1) < ControlAreaPtes )
        a1[8] = ((unsigned __int64)a1[6] >> 12) + ((a1[6] & 0xFFF) != 0);
    }
    return (unsigned int)v14;
  }
}
