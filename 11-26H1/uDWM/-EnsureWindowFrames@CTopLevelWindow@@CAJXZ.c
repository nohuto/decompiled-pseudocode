/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800655C4
 * Callers:
 *     ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180065540 (-ReadSystemMetrics@CTopLevelWindow@@SAJXZ.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x180065660 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CTopLevelWindow@@I@Z @ 0x18006571C (-AddMultipleAndSet@-$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CT.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180085D88 (ModuleFailFastForHRESULT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // ebx
  unsigned int i; // edi
  CTopLevelWindow::WindowFrame *v3; // rax
  __int64 v4; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  CTopLevelWindow::WindowFrame *v7; // [rsp+48h] [rbp+10h]

  v0 = 0;
  if ( !dword_1801159F0 )
  {
    for ( i = 0; i < 6; ++i )
    {
      v3 = (CTopLevelWindow::WindowFrame *)DefaultHeap::AllocClear(0x740uLL);
      if ( !v3 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v7 = v3;
      v6 = CTopLevelWindow::WindowFrame::WindowFrame(v3);
      if ( !v6 )
      {
        v0 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x28Du, 0LL);
        return v0;
      }
      DynArray<CTopLevelWindow::WindowFrame *,0>::AddMultipleAndSet(v4, &v6);
    }
  }
  return v0;
}
