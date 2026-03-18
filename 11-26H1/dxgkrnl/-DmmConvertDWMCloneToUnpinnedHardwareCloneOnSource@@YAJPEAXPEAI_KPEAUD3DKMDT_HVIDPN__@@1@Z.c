/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x140363614
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140363C84 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025CB60 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x14025D854 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402AA9B4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1402DCD14 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        struct D3DKMDT_HVIDPN__ *a4,
        unsigned int *a5)
{
  char *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  VIDPN_MGR *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 v13; // rbp
  DMMVIDPNTOPOLOGY *v14; // r15
  __int64 v15; // r14
  unsigned int v16; // eax
  int NumPathsFromSource; // eax
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  int v22; // eax
  unsigned int v23; // r14d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v27[9]; // [rsp+50h] [rbp-48h] BYREF
  struct DMMVIDPNPRESENTPATH *v28; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v29; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v30; // [rsp+B0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v6 = (char *)a1 + 3160;
  v7 = a3;
  LODWORD(v8) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14608;
  }
  v9 = *(VIDPN_MGR **)(*(_QWORD *)v6 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, (__int64)v9);
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a4);
  v11 = v10;
  if ( v10 )
  {
    if ( *(VIDPN_MGR **)(v10 + 48) == v9 )
    {
      v13 = 0LL;
      v14 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
      while ( v13 < v7 )
      {
        v27[0] = 0LL;
        LODWORD(v28) = 0;
        v15 = v29[v13];
        v16 = v29[v13];
        if ( v13 )
          v16 = v8;
        v8 = v16;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v14, v29[v13], v27);
        if ( NumPathsFromSource < 0 )
        {
          if ( NumPathsFromSource == -1071774919 )
          {
            v12 = -1073741811;
            WdLogSingleEntry3(2LL, v15, v11, -1073741811LL);
            WdLogGlobalForLineNumber = 14671;
            goto LABEL_34;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14664;
        }
        if ( v27[0] > 1 )
        {
          v12 = -1073741811;
          WdLogSingleEntry4(2LL, v15, v27[0], v11, -1073741811LL);
          WdLogGlobalForLineNumber = 14681;
          goto LABEL_34;
        }
        v18 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, v15, 0LL, (unsigned int *)&v28);
        v19 = (unsigned int)v28;
        if ( v18 < 0 || (_DWORD)v28 == -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 14695;
        }
        if ( a5 )
          a5[v13] = v19;
        if ( v13 )
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(v14, v15, v19);
          v28 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            Path = v28;
            WdLogGlobalForLineNumber = 14727;
          }
          v25 = *((_DWORD *)Path + 26);
          LOWORD(v28) = *((_WORD *)Path + 54);
          if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v9, v14, v15, v19, 0) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 14739;
          }
          v22 = VIDPN_MGR::AddPathToVidPnTopology(v9, v14, v8, v19, v25, (unsigned __int16)v28, 1, D3DKMDT_MCC_ENFORCE);
          v23 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry4(2LL, v19, v8, v11, v22);
            WdLogGlobalForLineNumber = 14757;
            v12 = v23;
            goto LABEL_34;
          }
        }
        else
        {
          v20 = VIDPN_MGR::UnpinPathModalityFromSource(v9, v14, v8);
          v12 = v20;
          if ( v20 < 0 )
          {
            WdLogSingleEntry3(2LL, v8, v11, v20);
            WdLogGlobalForLineNumber = 14713;
            goto LABEL_34;
          }
        }
        v7 = v30;
        ++v13;
      }
      v12 = 0;
    }
    else
    {
      v12 = -1073741811;
      WdLogSingleEntry2(2LL, a4, -1073741811LL);
      WdLogGlobalForLineNumber = 14638;
    }
  }
  else
  {
    v12 = -1073741811;
    WdLogSingleEntry2(2LL, a4, -1073741811LL);
    WdLogGlobalForLineNumber = 14630;
  }
LABEL_34:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
  return v12;
}
