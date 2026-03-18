/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14033D2A0
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x14033D124 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x140407824 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1402AC4B8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x14033C268 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x14033CF38 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14033D450 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        char a2,
        bool a3,
        struct D3DKMT_HASH **a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  int StringHash; // ebx
  struct D3DKMT_HASH *v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v14)(CCD_BTL *, int *); // rax
  int v15; // eax
  struct D3DKMT_HASH *v16; // rbx
  unsigned int v17; // esi
  struct _STRING *ConnectedSetStr; // rax
  struct CCD_TOPOLOGY *v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v20; // [rsp+38h] [rbp-48h]
  int v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+58h] [rbp-28h]
  __int16 v24; // [rsp+60h] [rbp-20h]
  __int128 v25; // [rsp+68h] [rbp-18h]

  CCD_TOPOLOGY::Clear((CCD_TOPOLOGY *)a4);
  v19 = (struct CCD_TOPOLOGY *)a4;
  v20 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v19, a3);
  StringHash = result;
  if ( (int)result >= 0 )
  {
    v11 = a4[8];
    if ( v11 )
      v12 = *((_WORD *)v11 + 10);
    else
      v12 = 0;
    if ( v20 > v12 )
      StringHash = -1073741789;
    if ( a5 )
      *a5 = v20;
    if ( StringHash < 0 || a2 )
      return (unsigned int)StringHash;
    v13 = *this;
    v21 = 0;
    v23 = 0LL;
    v22 = 0LL;
    v14 = *v13;
    v24 = 0;
    v25 = 0LL;
    v15 = v14((CCD_BTL *)this, &v21);
    v16 = a4[8];
    v17 = v15;
    if ( v15 < 0 )
    {
      WdLogSingleEntry4(2LL, v15, &v21, a4, a4[8]);
      WdLogGlobalForLineNumber = 1203;
    }
    else
    {
      if ( v16 )
      {
        ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr((CCD_SET_STRING_ID *)&v21);
        StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v16);
        if ( StringHash >= 0 )
        {
          CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v21);
          return (unsigned int)StringHash;
        }
      }
      else
      {
        WdLogSingleEntry3(1LL, a4, 0LL, &v21);
        WdLogGlobalForLineNumber = 3509;
        StringHash = -1073741811;
      }
      WdLogSingleEntry4(2LL, StringHash, &v21, a4, a4[8]);
      WdLogGlobalForLineNumber = 1215;
      v17 = StringHash;
    }
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v21);
    return v17;
  }
  return result;
}
