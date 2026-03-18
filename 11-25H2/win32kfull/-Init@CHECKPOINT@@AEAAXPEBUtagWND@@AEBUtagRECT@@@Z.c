/*
 * XREFs of ?Init@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1402DCBAC
 * Callers:
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x140026328 (-SetRestoreToArrangeRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 */

void __fastcall CHECKPOINT::Init(CHECKPOINT *this, const struct tagWND *a2, const struct tagRECT *a3)
{
  *((_DWORD *)this + 4) &= 0xFFFFFFC0;
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = -1;
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 3) = -1;
  *((_WORD *)this + 26) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_DWORD *)this + 14) = 0;
  *(_OWORD *)((char *)this + 20) = 0LL;
  CHECKPOINT::SetNormalRect(this, a2, a3, 0);
  CHECKPOINT::SetRestoreToArrangeRect(this, a2, a3);
}
