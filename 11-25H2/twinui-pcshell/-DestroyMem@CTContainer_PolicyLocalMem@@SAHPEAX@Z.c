/*
 * XREFs of ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802F0984
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1801BF620 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x180225C44 (--1-$CLocalSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppVie.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x1802F05B4 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CAppViewManager@@UEAA@XZ @ 0x1802F4F80 (--1CAppViewManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTContainer_PolicyLocalMem::DestroyMem(void *a1)
{
  return LocalFree(a1) == 0LL;
}
