/*
 * XREFs of ?SetWindowData@CTopLevelWindow3D@@QEAAXPEAVCWindowData@@@Z @ 0x18001760C
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180016FEC (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001B4B0 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18008005C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

void __fastcall CTopLevelWindow3D::SetWindowData(CTopLevelWindow3D *this, struct CWindowData *a2)
{
  if ( !*((_QWORD *)this + 29) || a2 )
  {
    *((_QWORD *)this + 29) = a2;
    if ( a2 )
      *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 3);
  }
  else
  {
    CTopLevelWindow3D::StopAnimation(this);
    *((_QWORD *)this + 29) = 0LL;
  }
}
