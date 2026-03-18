/*
 * XREFs of ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1403F6200
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?SetGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z @ 0x1403F6480 (-SetGivenDescriptionFlagOnAllPaths@CCD_TOPOLOGY@@QEAAX_K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(
        CCD_TOPOLOGY *this,
        unsigned __int64 a2)
{
  unsigned int i; // ebx
  __int64 v4; // rax
  unsigned __int16 v5; // cx
  unsigned int k; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rsi
  __int64 v13; // r14
  unsigned int j; // edi
  __int64 v15; // rax
  unsigned __int16 v16; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // r8
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *((_QWORD *)this + 8);
    v5 = v4 ? *(_WORD *)(v4 + 20) : 0;
    if ( i >= v5 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v12 = PathDescriptor;
    if ( _bittest64((const signed __int64 *)PathDescriptor, 0x33u) )
    {
      v13 = *((unsigned int *)PathDescriptor + 46);
      for ( j = i + 1; ; ++j )
      {
        v15 = *((_QWORD *)this + 8);
        v16 = v15 ? *(_WORD *)(v15 + 20) : 0;
        if ( j >= v16 )
          break;
        v17 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
        if ( *((_DWORD *)v17 + 46) == (_DWORD)v13 )
        {
          *(_QWORD *)v17 &= ~0x8000000000000uLL;
          if ( ((*((_BYTE *)v17 + 129) ^ *((_BYTE *)v12 + 129)) & 3) != 0 )
          {
            WdLogSingleEntry3(3LL, i, j, v13);
            WdLogGlobalForLineNumber = 2958;
            goto LABEL_27;
          }
          if ( !*((_BYTE *)v12 + 129)
            && (*((_DWORD *)v12 + 4) != *((_DWORD *)v17 + 4) || *((_DWORD *)v12 + 5) != *((_DWORD *)v17 + 5)) )
          {
            WdLogSingleEntry4(3LL, i, *((_QWORD *)v12 + 2), j, *((_QWORD *)v17 + 2));
            WdLogGlobalForLineNumber = 2971;
            goto LABEL_27;
          }
        }
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( k >= v8 )
      break;
    v9 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
    v10 = v9;
    if ( !*((_BYTE *)v9 + 129) )
    {
      a2 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 0x20100LL) == 0x20100 )
      {
        if ( (a2 & 0x200) != 0 && ((v19 = *((_DWORD *)v9 + 33), v19 == 2) || v19 == 4) )
        {
          v20 = *((_DWORD *)v10 + 39);
          if ( *((_DWORD *)v10 + 24) != v20 || *((_DWORD *)v10 + 25) != *((_DWORD *)v10 + 38) )
          {
            v21 = *((_DWORD *)v10 + 38);
            *((_QWORD *)v10 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
            *(_QWORD *)v10 = a2 & 0xFFFFFFFFFF7FFFFFuLL;
            *((_DWORD *)v10 + 24) = v20;
            *((_DWORD *)v10 + 25) = v21;
            WdLogSingleEntry2(3LL, *((unsigned int *)v10 + 7), *((_QWORD *)v10 + 2));
            WdLogGlobalForLineNumber = 3021;
          }
        }
        else
        {
          v22 = *((_DWORD *)v10 + 38);
          if ( *((_DWORD *)v10 + 24) != v22 || *((_DWORD *)v10 + 25) != *((_DWORD *)v10 + 39) )
          {
            v23 = *((_DWORD *)v10 + 39);
            *((_QWORD *)v10 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
            *(_QWORD *)v10 = a2 & 0xFFFFFFFFFF7DFF78uLL;
            *((_DWORD *)v10 + 24) = v22;
            *((_DWORD *)v10 + 25) = v23;
            WdLogSingleEntry2(3LL, *((unsigned int *)v10 + 7), *((_QWORD *)v10 + 2));
            WdLogGlobalForLineNumber = 3040;
          }
        }
      }
    }
  }
LABEL_27:
  CCD_TOPOLOGY::SetGivenDescriptionFlagOnAllPaths(this, a2);
  return 0LL;
}
