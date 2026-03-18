/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x14033EAD0
 * Callers:
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x14031E72C (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14033D450 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x14005EC08 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x140340108 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x140340220 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v11; // rax
  SESSION_VIEW *v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  DXGSESSIONDATA *SessionData; // rax
  struct SESSION_VIEW *SessionViewFromSource; // rax
  unsigned int j; // esi
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // eax
  CCD_TOPOLOGY *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int k; // esi
  __int64 v30; // rax
  unsigned __int16 v31; // ax
  const struct _LUID *v32; // rax
  __int64 v33; // r9
  CCD_TOPOLOGY *v34; // rdi
  __int64 v35; // rbx
  __int64 CurrentProcess; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( !v4 || !*(_WORD *)(v4 + 20) )
    return 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    if ( *((_QWORD *)Current + 11) )
    {
      for ( i = 0; ; ++i )
      {
        v8 = *((_QWORD *)*this + 8);
        if ( v8 )
          v9 = *(_WORD *)(v8 + 20);
        else
          v9 = 0;
        if ( i >= v9 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v11 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          *(_QWORD *)PathDescriptor = v11 | 0x4000000000000LL;
          if ( (v11 & 0x1000000000LL) != 0 )
          {
            v24 = i | 0xFE5A0000;
            goto LABEL_24;
          }
          if ( v11 >= 0 )
          {
            v24 = i | 0xFE580000;
LABEL_24:
            *((_DWORD *)PathDescriptor + 46) = v24;
            continue;
          }
          v12 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 35);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v12 )
          {
            if ( *((_DWORD *)SESSION_VIEW::GetPrimaryDisplaySource(v12) + 4) == *((_DWORD *)PathDescriptor + 6) )
            {
              Global = DXGGLOBAL::GetGlobal();
              SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 123), v14, v15, v16);
              if ( SessionData )
              {
                SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                          SessionData,
                                          (const struct _LUID *)PathDescriptor + 2,
                                          *((_DWORD *)PathDescriptor + 6));
                if ( SessionViewFromSource )
                {
                  *((_DWORD *)PathDescriptor + 36) = *((_DWORD *)SessionViewFromSource + 6);
                  *((_DWORD *)PathDescriptor + 37) = *((_DWORD *)SessionViewFromSource + 7);
                }
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v20 = *((_QWORD *)*this + 8);
                v21 = v20 ? *(_WORD *)(v20 + 20) : 0;
                if ( j >= v21 )
                  break;
                v22 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v23 = *(_QWORD *)v22;
                if ( *(__int64 *)v22 < 0
                  && (v23 & 0x4000000000000LL) == 0
                  && *((_QWORD *)PathDescriptor + 35) == *((_QWORD *)v22 + 35) )
                {
                  *((_DWORD *)v22 + 46) = i | 0xFE590000;
                  *(_QWORD *)v22 = v23 | 0x4000000000800LL;
                  *((_QWORD *)v22 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v30 = *((_QWORD *)*this + 8);
              v31 = v30 ? *(_WORD *)(v30 + 20) : 0;
              if ( k >= v31 )
                break;
              v32 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v32 + 2, v32[3].LowPart) )
              {
                *(_QWORD *)v33 |= 0x4000000000000uLL;
                *(_DWORD *)(v33 + 184) = i | 0xFE580000;
              }
            }
          }
          else
          {
            WdLogSingleEntry4(
              2LL,
              *((int *)PathDescriptor + 5),
              *((unsigned int *)PathDescriptor + 4),
              *((unsigned int *)PathDescriptor + 6),
              *((unsigned int *)PathDescriptor + 7));
            WdLogGlobalForLineNumber = 584;
          }
        }
      }
    }
    v34 = *this;
    v35 = *((_QWORD *)*this + 8);
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(2LL, CurrentProcess, v34, v35);
    WdLogGlobalForLineNumber = 516;
  }
  else
  {
    v26 = *this;
    v27 = *((_QWORD *)*this + 8);
    v28 = PsGetCurrentProcess(v6);
    WdLogSingleEntry3(2LL, v28, v26, v27);
    WdLogGlobalForLineNumber = 505;
  }
  return 3221225473LL;
}
