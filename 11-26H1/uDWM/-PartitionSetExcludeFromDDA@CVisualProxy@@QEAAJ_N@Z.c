/*
 * XREFs of ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z @ 0x18007C3DC
 * Callers:
 *     ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z @ 0x180062B84 (-SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ @ 0x1800BEAA0 (-_UpdateFilteredVisualList@CProjectionBorderManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::PartitionSetExcludeFromDDA(CVisualProxy *this, char a2, __int64 a3)
{
  LOBYTE(a3) = a2;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 160LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           a3);
}
