/*
 * XREFs of MiPurgeMirrorPacketPages @ 0x1406F0200
 * Callers:
 *     <none>
 * Callees:
 *     MiMirrorRemoveInactivePages @ 0x1404CB2E0 (MiMirrorRemoveInactivePages.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140C037CC (MiMirrorOmitPagesFromCopy.c)
 */

__int64 __fastcall MiPurgeMirrorPacketPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx

  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)a1;
  if ( (_DWORD)v5 )
    MiMirrorOmitPagesFromCopy(v6, v5, a2, a3);
  else
    *(_QWORD *)(a1 + 16) += MiMirrorRemoveInactivePages(v6, a2, a3);
  return 0LL;
}
