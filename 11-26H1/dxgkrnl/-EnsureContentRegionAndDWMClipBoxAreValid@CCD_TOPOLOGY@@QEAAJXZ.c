/*
 * XREFs of ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318DA0
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14031811C (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14033EDCC (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnsureContentRegionAndDWMClipBoxAreValid(CCD_TOPOLOGY *this)
{
  unsigned int i; // ebx
  unsigned int v3; // edx
  int CloneGroupContentResolutionValid; // eax
  unsigned int v5; // esi
  int CloneGroupDWMClipBoxValid; // eax

  for ( i = 0; ; ++i )
  {
    if ( i >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
    if ( !CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i) )
      continue;
    CloneGroupContentResolutionValid = CCD_TOPOLOGY::MakeCloneGroupContentResolutionValid(this, v3);
    v5 = CloneGroupContentResolutionValid;
    if ( CloneGroupContentResolutionValid < 0 )
      break;
    CloneGroupDWMClipBoxValid = CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(this, i);
    v5 = CloneGroupDWMClipBoxValid;
    if ( CloneGroupDWMClipBoxValid < 0 )
    {
      WdLogSingleEntry2(2LL, i, CloneGroupDWMClipBoxValid);
      WdLogGlobalForLineNumber = 4670;
      return v5;
    }
  }
  WdLogSingleEntry2(2LL, i, CloneGroupContentResolutionValid);
  WdLogGlobalForLineNumber = 4660;
  return v5;
}
