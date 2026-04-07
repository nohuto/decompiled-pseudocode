/*
 * XREFs of ?_FindProjectionVisualByAdapter@CProjectionBorderManager@@AEAAHAEBU_LUID@@I@Z @ 0x1800C3BC0
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800C2880 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::_FindProjectionVisualByAdapter(
        CProjectionBorderManager *this,
        const struct _LUID *a2,
        int a3)
{
  unsigned int v3; // r10d
  unsigned int i; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx

  v3 = -1;
  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v7 = *((_QWORD *)this + 50);
    v8 = 56LL * i;
    if ( *(_DWORD *)(v8 + v7 + 24) == a2->LowPart
      && *(_DWORD *)(v8 + v7 + 28) == a2->HighPart
      && *(_DWORD *)(v8 + v7 + 32) == a3 )
    {
      return i;
    }
  }
  return v3;
}
