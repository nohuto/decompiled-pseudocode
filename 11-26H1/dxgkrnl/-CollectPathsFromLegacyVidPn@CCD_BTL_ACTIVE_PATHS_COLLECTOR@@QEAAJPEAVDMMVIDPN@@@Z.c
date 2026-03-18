/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x140269C0C
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269D98 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14002DFE8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x14005EC08 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x14033BAA4 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x14033D0A4 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x14034482C (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // r10
  int v7; // eax
  __int64 v8; // r11
  int v9; // edx
  int v10; // r8d
  _DWORD *v11; // rcx
  int *v12; // rax
  int v13; // eax
  unsigned int v14; // r9d
  const struct _LUID *v15; // rdx
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  int v18; // r9d
  char v20; // [rsp+30h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v20, 96LL);
  v4 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0);
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( *(_WORD *)(v6 + 20) )
    {
      do
      {
        v7 = D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*(_DWORD *)(296LL * v5 + v6 + 188));
        if ( v7 == 1 || v7 == 3 )
        {
          v10 = *(_DWORD *)(v8 + v6 + 156);
          v12 = (int *)(v8 + v6 + 152);
          v11 = (_DWORD *)(v8 + v6 + 208);
          v9 = *v12;
        }
        else
        {
          v9 = *(_DWORD *)(v8 + v6 + 156);
          v10 = *(_DWORD *)(v8 + v6 + 152);
          v11 = (_DWORD *)(v8 + v6 + 208);
          v12 = (int *)(v8 + v6 + 152);
        }
        v11[1] = v10;
        *v11 = v9;
        v13 = *v12;
        *(_QWORD *)(v8 + v6 + 56) |= 0x820000uLL;
        *(_DWORD *)(v8 + v6 + 232) = v13;
        *(_DWORD *)(v8 + v6 + 236) = *(_DWORD *)(v8 + v6 + 156);
        *(_QWORD *)(v8 + v6 + 224) = 0LL;
        if ( (*(_QWORD *)(v8 + v6 + 56) & 0x4000000000000LL) == 0 )
        {
          v14 = v5;
          if ( v5 < *(unsigned __int16 *)(v6 + 20) )
          {
            v15 = (const struct _LUID *)(v8 + v6 + 72);
            do
            {
              v16 = 296LL * v14;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v16 + v6 + 56),
                     v15,
                     *(_DWORD *)(v8 + v6 + 80)) )
              {
                *v17 |= 0x4000000000000uLL;
                *(_DWORD *)(v16 + v6 + 240) = v5 | 0xFE570000;
              }
              v14 = v18 + 1;
            }
            while ( v14 < *(unsigned __int16 *)(v6 + 20) );
          }
        }
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(v6 + 20) );
    }
    v4 = 0;
  }
  AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v20);
  return (unsigned int)v4;
}
