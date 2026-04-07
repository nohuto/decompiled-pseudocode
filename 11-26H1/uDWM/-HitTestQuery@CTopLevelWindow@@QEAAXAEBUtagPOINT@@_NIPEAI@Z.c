/*
 * XREFs of ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z @ 0x180014F5C
 * Callers:
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x1800236A8 (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 * Callees:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x180014AE0 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z @ 0x180014B90 (-ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180016880 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016940 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?IsWCOSContainer@@YA_NXZ @ 0x1800E58A8 (-IsWCOSContainer@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTopLevelWindow::HitTestQuery(
        struct CVisual **this,
        const struct tagPOINT *a2,
        char a3,
        int a4,
        unsigned int *a5)
{
  CTopLevelWindow *v8; // rdi
  bool v9; // al
  unsigned int *v10; // rsi
  struct CVisual *v11; // rdx
  __int64 v12; // rdx
  struct CVisual *v13; // rcx
  struct tagPOINT v14; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v15; // [rsp+60h] [rbp+8h] BYREF
  struct CVisual *v16; // [rsp+68h] [rbp+10h] BYREF

  v14 = *a2;
  v16 = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) == 7 )
    IsWCOSContainer();
  v9 = CVisual::TransformFromParent((CVisual *)this, &v14, &v15);
  v10 = a5;
  if ( v9 )
  {
    CTopLevelWindow::DoHitTest((CTopLevelWindow *)this, &v15, &v16, a5);
    v8 = v16;
  }
  else
  {
    *a5 = 0;
  }
  CTopLevelWindow::UpdateCapturedButton((CTopLevelWindow *)this, a4);
  if ( this[90] )
  {
    v11 = 0LL;
    if ( a4 == *v10 )
      v11 = this[90];
  }
  else
  {
    if ( v8 == (CTopLevelWindow *)this )
      v8 = 0LL;
    v11 = v8;
  }
  CTopLevelWindow::ChangeMouseOver((CTopLevelWindow *)this, v11);
  v13 = this[89];
  if ( v13 )
  {
    LOBYTE(v12) = a3;
    (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v13 + 96LL))(v13, v12);
  }
}
