/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x140064088
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140051B10 (NtUserUpdateLayeredWindow.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C7B44 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     HMValidateCatHandleNoSecure @ 0x140064B20 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x140064C08 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x140065C00 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, struct tagMONITOR *a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  struct tagWLDBI *v11; // rsi
  _QWORD *i; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = (__int64)BuildHwndList((struct tagWND *)a1, 1LL, 0LL, 1);
  v9 = (_QWORD *)result;
  if ( result )
  {
    v11 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = v9 + 4; *i != 1LL; ++i )
    {
      v13 = HMValidateCatHandleNoSecure(*i);
      UpdateWindowMonitor((struct tagWND *)v13, a2);
      if ( a4 )
      {
        if ( !IsTopLevelWindow(v13)
          || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
        {
          *(_DWORD *)(v13 + 380) |= 0x40000u;
        }
      }
    }
    if ( v11 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v11);
      FreeListFree(v11);
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9, v10);
    return 1LL;
  }
  return result;
}
