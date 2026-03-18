/*
 * XREFs of ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x14026AF50
 * Callers:
 *     ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x14026A5DC (-ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1404190F4 (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 * Callees:
 *     ?IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z @ 0x140059AF4 (-IsPrimaryClonePathByModality@CCD_TOPOLOGY@@QEBA_NI@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x14005EC08 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x140098548 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z @ 0x140269228 (-RemoveCloneGroupByModality@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026B150 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x14037F138 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 */

__int64 __fastcall CDS_JOURNAL::_CommitEntry(const struct CDS_JOURNAL::_ENTRY *a1, struct CCD_TOPOLOGY *this)
{
  char IsPrimaryClonePathByModality; // r13
  int v3; // r12d
  unsigned int i; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  _DWORD *v9; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rcx
  unsigned int *v11; // r14
  __int64 result; // rax
  unsigned int v13; // edi
  unsigned int j; // r14d
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // r13
  bool v19; // bl
  char v20; // al
  int v21; // [rsp+80h] [rbp+18h]

  IsPrimaryClonePathByModality = 0;
  v21 = -1;
  v3 = -1;
  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    v9 = (_DWORD *)((char *)a1 + 20);
    if ( i >= v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v11 = (unsigned int *)((char *)a1 + 32);
    if ( *((_DWORD *)PathDescriptor + 7) == *((_DWORD *)a1 + 8)
      && *((_DWORD *)PathDescriptor + 4) == *v9
      && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)a1 + 6) )
    {
      v3 = *((_DWORD *)PathDescriptor + 6);
      v21 = *((_DWORD *)PathDescriptor + 46);
      IsPrimaryClonePathByModality = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, i);
      goto LABEL_12;
    }
  }
  v11 = (unsigned int *)((char *)a1 + 32);
LABEL_12:
  if ( CDS_JOURNAL::_IsUnextend(a1) )
  {
    if ( v3 != -1 && IsPrimaryClonePathByModality )
    {
      result = CCD_TOPOLOGY::RemoveCloneGroupByModality(this, (const struct _LUID *)((char *)a1 + 20), v3);
      goto LABEL_16;
    }
    WdLogSingleEntry5(3LL, *((int *)a1 + 6), (unsigned int)*v9, *v11, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 1183;
    return 0LL;
  }
  if ( v3 != -1 )
  {
    if ( IsPrimaryClonePathByModality )
    {
      for ( j = 0; ; ++j )
      {
        v15 = *((_QWORD *)this + 8);
        v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
        if ( j >= v16 )
          break;
        v17 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        v18 = v17;
        if ( v21 == *((_DWORD *)v17 + 46) )
        {
          v19 = !CCD_TOPOLOGY::IsMatchingSource(v17, (const struct _LUID *)((char *)a1 + 20), v3);
          v20 = CCD_TOPOLOGY::IsPrimaryClonePathByModality(this, j);
          CDS_JOURNAL::_FillPathDescriptor(v18, a1, v20, v19, 0LL);
        }
      }
      return 0;
    }
    WdLogSingleEntry5(3LL, *((int *)a1 + 6), (unsigned int)*v9, *v11, this, *((_QWORD *)this + 8));
    WdLogGlobalForLineNumber = 1234;
    return 0LL;
  }
  result = CDS_JOURNAL::_ExtendTopology(this, a1);
LABEL_16:
  v13 = result;
  if ( (int)result >= 0 )
    return v13;
  return result;
}
