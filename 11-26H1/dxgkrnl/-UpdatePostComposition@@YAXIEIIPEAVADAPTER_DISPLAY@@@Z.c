/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1403738A0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x140054458 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v5; // r12
  char v9; // r14
  DXGFASTMUTEX *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // dl
  int *v14; // rbx
  bool v15; // zf
  int *v16; // rbx
  DXGADAPTER_REFERENCE *v17; // rax
  DXGADAPTER_REFERENCE *v18; // rbx
  __int64 v19; // rcx
  struct DXGPROCESS *Current; // rax
  DXGFASTMUTEX *v21; // [rsp+50h] [rbp-10h] BYREF
  char v22; // [rsp+58h] [rbp-8h]

  v5 = a1;
  v22 = 0;
  v9 = 0;
  v10 = (struct ADAPTER_DISPLAY *)((char *)a5 + 480);
  v21 = (struct ADAPTER_DISPLAY *)((char *)a5 + 480);
  if ( a5 == (struct ADAPTER_DISPLAY *)-480LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v21;
  }
  if ( DXGFASTMUTEX::IsOwner(v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21);
  v11 = *((_QWORD *)a5 + 16);
  v12 = 4024 * v5;
  v13 = *(_BYTE *)(4024 * v5 + v11 + 704);
  if ( !a2 )
  {
    if ( !v13 )
      goto LABEL_7;
    *(_DWORD *)(v12 + v11 + 708) = 0;
    *(_DWORD *)(*((_QWORD *)a5 + 16) + v12 + 712) = 0;
    *(_BYTE *)(*((_QWORD *)a5 + 16) + v12 + 704) = 0;
    goto LABEL_26;
  }
  if ( !v13 || *(_DWORD *)(v12 + v11 + 708) != a3 || *(_DWORD *)(v12 + v11 + 712) != a4 )
  {
    *(_DWORD *)(v12 + v11 + 708) = a3;
    *(_DWORD *)(*((_QWORD *)a5 + 16) + v12 + 712) = a4;
    *(_BYTE *)(*((_QWORD *)a5 + 16) + v12 + 704) = a2;
LABEL_26:
    v9 = 1;
  }
LABEL_7:
  if ( !v22 )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v21, 0LL, 0LL);
    WdLogGlobalForLineNumber = 685;
  }
  v14 = (int *)v21;
  v22 = 0;
  if ( *((struct _KTHREAD **)v21 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v21, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( v14[8] <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  v15 = v14[8]-- == 1;
  if ( v15 )
  {
    *((_QWORD *)v14 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v17 = (DXGADAPTER_REFERENCE *)operator new(0x18uLL, 0x4B677844u, 256LL);
    v18 = v17;
    if ( v17 )
    {
      *((_QWORD *)v17 + 1) = 0LL;
      *((_QWORD *)v17 + 2) = 0LL;
      *(_QWORD *)v17 = 0LL;
      DXGADAPTER_REFERENCE::Assign(v17, *((struct DXGADAPTER **)a5 + 2));
      *((_DWORD *)v18 + 4) = v5;
      Current = DXGPROCESS::GetCurrent(v19);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        (struct _LIST_ENTRY *)v18);
    }
  }
  if ( v22 )
  {
    v16 = (int *)v21;
    v22 = 0;
    if ( *((struct _KTHREAD **)v21 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v21, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( v16[8] <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    v15 = v16[8]-- == 1;
    if ( v15 )
    {
      *((_QWORD *)v16 + 3) = 0LL;
      ExReleasePushLockExclusiveEx(v16 + 2, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
