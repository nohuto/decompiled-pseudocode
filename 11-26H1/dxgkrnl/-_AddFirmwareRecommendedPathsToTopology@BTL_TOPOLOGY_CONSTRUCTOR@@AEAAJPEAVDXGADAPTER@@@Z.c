/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x14026BB04
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x14026BC88 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140269D98 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1402AC2B8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14033D260 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  struct DMMVIDPN *v5; // rbx
  int v6; // ebx
  CCD_BTL *v7; // rax
  CCD_TOPOLOGY *v8; // rcx
  int v10; // [rsp+20h] [rbp-39h] BYREF
  __int128 v11; // [rsp+28h] [rbp-31h]
  __int64 v12; // [rsp+38h] [rbp-21h]
  __int16 v13; // [rsp+40h] [rbp-19h]
  __int128 v14; // [rsp+48h] [rbp-11h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v16; // [rsp+60h] [rbp+7h]
  bool v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  int v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+74h] [rbp+1Bh]
  __int64 v21; // [rsp+80h] [rbp+27h]
  struct D3DKMT_GETPATHSMODALITY *v22; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DMMVIDPN *v23; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 395) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v24, v3);
  v4 = *(_QWORD *)(v3 + 320);
  v23 = 0LL;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 32));
  auto_rc<DMMVIDPN>::reset((__int64 *)&v23, *(_QWORD *)(v3 + 320));
  v5 = v23;
  if ( v23 )
  {
    v22 = 0LL;
    v7 = CCD_BTL::Global();
    v6 = CCD_BTL::ConvertVidPnToPathsModality(v7, v5, &v22);
    if ( v6 >= 0 )
    {
      v8 = *this;
      v18 = 0;
      v10 = 0;
      v17 = v22 == 0LL;
      v12 = 0LL;
      v11 = 0LL;
      v13 = 0;
      v14 = 0LL;
      v15 = 0LL;
      v16 = v22;
      v19 = 1;
      v20 = 0LL;
      v21 = 0LL;
      v6 = CCD_TOPOLOGY::CopyInheritScope(v8, (const struct CCD_TOPOLOGY *)&v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
      if ( v6 >= 0 )
      {
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v10);
        v6 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2497;
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v10);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2486;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2476;
    v6 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v23, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v24 + 40));
  return (unsigned int)v6;
}
