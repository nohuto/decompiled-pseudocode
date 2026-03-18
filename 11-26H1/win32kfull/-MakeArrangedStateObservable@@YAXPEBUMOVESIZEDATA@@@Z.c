/*
 * XREFs of ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14019EC58 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1402C41AC (-HandleNoTargetToDockTargetSizing@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@1W4THRESHOLD_MARGIN_DIRE.c)
 *     ?HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z @ 0x1402C43E4 (-HandleSizingAwayFromDockTarget@@YAXPEAUMOVESIZEDATA@@PEBUCHECKPOINT@@PEAK@Z.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400326CC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 */

void __fastcall MakeArrangedStateObservable(const struct MOVESIZEDATA *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  struct tagWND *v4; // rdx

  v2 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 384) & 0x10) == 0 )
  {
    v3 = *(_DWORD *)(v2 + 380) | 0x4000000;
    if ( (*((_DWORD *)a1 + 50) & 0x10000000) == 0 )
      v3 = *(_DWORD *)(v2 + 380) & 0xFBFFFFFF;
    *(_DWORD *)(v2 + 380) = v3;
    if ( !IsArranged(*((const struct tagWND **)a1 + 2)) )
    {
      v4 = (struct tagWND *)*((_QWORD *)a1 + 2);
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 233LL) & 0x10) != 0 )
        SetOrClrWF(0, v4, 0xD910u, 1);
    }
  }
}
