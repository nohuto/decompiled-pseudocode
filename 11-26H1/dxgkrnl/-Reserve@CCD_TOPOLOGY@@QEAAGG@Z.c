/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC
 * Callers:
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1401C2094 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x140269F64 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1402ABAA0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140317748 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x140319388 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1403195E0 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031AF4C (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1403399A0 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140339B80 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140365C4C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1403CC4F0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1403D7540 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1403DAF18 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x140407824 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned __int16 v2; // bx
  __int64 v3; // r14
  __int64 v5; // rbp
  unsigned __int16 v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r9
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rbx
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  __int64 v29; // rax
  unsigned __int16 v30; // ax
  __int64 v31; // rax
  _OWORD *v32; // rcx
  __int64 v33; // r9
  _OWORD *v34; // rdx
  __int128 v35; // xmm1
  _BYTE v36[352]; // [rsp+20h] [rbp-178h] BYREF

  v2 = 0;
  v3 = (unsigned __int16)a2;
  if ( *((_BYTE *)this + 72) )
  {
    v5 = *((_QWORD *)this + 8);
    if ( v5 )
      v6 = *(_WORD *)(v5 + 22);
    else
      v6 = 0;
    if ( v6 < (unsigned __int16)a2
      && (v7 = operator new[](296 * ((unsigned __int16)a2 - 1LL) + 352, 0x63644356u, 256LL), (v8 = v7) != 0) )
    {
      if ( v6 )
      {
        v32 = (_OWORD *)*((_QWORD *)this + 8);
        v33 = 2LL;
        v34 = (_OWORD *)v7;
        do
        {
          *v34 = *v32;
          v34[1] = v32[1];
          v34[2] = v32[2];
          v34[3] = v32[3];
          v34[4] = v32[4];
          v34[5] = v32[5];
          v34[6] = v32[6];
          v34 += 8;
          v35 = v32[7];
          v32 += 8;
          *(v34 - 1) = v35;
          --v33;
        }
        while ( v33 );
        v24 = v6;
        *v34 = *v32;
        v34[1] = v32[1];
        v34[2] = v32[2];
        v34[3] = v32[3];
        v34[4] = v32[4];
        v34[5] = v32[5];
        memmove((void *)(v7 + 352), (const void *)(*((_QWORD *)this + 8) + 352LL), 296LL * v6 - 296);
      }
      else
      {
        memset(v36, 0, sizeof(v36));
        v9 = 2LL;
        v10 = v36;
        v11 = (_OWORD *)v8;
        do
        {
          v12 = v10[1];
          *v11 = *v10;
          v13 = v10[2];
          v11[1] = v12;
          v14 = v10[3];
          v11[2] = v13;
          v15 = v10[4];
          v11[3] = v14;
          v16 = v10[5];
          v11[4] = v15;
          v17 = v10[6];
          v11[5] = v16;
          v18 = v10[7];
          v10 += 8;
          v11[6] = v17;
          v11 += 8;
          *(v11 - 1) = v18;
          --v9;
        }
        while ( v9 );
        v19 = v10[1];
        *v11 = *v10;
        v20 = v10[2];
        v11[1] = v19;
        v21 = v10[3];
        v11[2] = v20;
        v22 = v10[4];
        v11[3] = v21;
        v23 = v10[5];
        v11[4] = v22;
        v11[5] = v23;
        *(_DWORD *)(v8 + 40) = 0;
        *(_QWORD *)(v8 + 48) = 0LL;
        v24 = 0LL;
      }
      *(_WORD *)(v8 + 22) = v3;
      memset((void *)(v8 + 296 * v24 + 56), 0, 296 * (v3 - v24));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 8));
      *((_QWORD *)this + 8) = v8;
      return *(unsigned __int16 *)(v8 + 22);
    }
    else
    {
      return v6;
    }
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
    v26[3] = this;
    v26[4] = *((_QWORD *)this + 8);
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      v28 = *(_WORD *)(v27 + 20);
    else
      v28 = 0;
    v26[5] = v28;
    v29 = *((_QWORD *)this + 8);
    if ( v29 )
      v30 = *(_WORD *)(v29 + 22);
    else
      v30 = 0;
    v26[6] = v30;
    v26[7] = v3;
    v31 = *((_QWORD *)this + 8);
    WdLogGlobalForLineNumber = 198;
    if ( v31 )
      return *(unsigned __int16 *)(v31 + 22);
    return v2;
  }
}
