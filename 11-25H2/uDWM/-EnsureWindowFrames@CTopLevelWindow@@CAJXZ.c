/*
 * XREFs of ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800314A0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800310F4 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ @ 0x180031420 (-ReadSystemMetrics@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CTopLevelWindow@@I@Z @ 0x18003152C (-AddMultipleAndSet@-$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CT.c)
 *     ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x1800315C8 (--0WindowFrame@CTopLevelWindow@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 CTopLevelWindow::EnsureWindowFrames(void)
{
  unsigned int v0; // edi
  unsigned int i; // ebx
  CTopLevelWindow::WindowFrame *v3; // rax
  __int64 v4; // rcx
  CTopLevelWindow::WindowFrame *v5; // [rsp+40h] [rbp+8h] BYREF
  CTopLevelWindow::WindowFrame *v6; // [rsp+48h] [rbp+10h]

  v0 = 0;
  if ( !dword_180119960 )
  {
    for ( i = 0; i < 6; ++i )
    {
      v3 = (CTopLevelWindow::WindowFrame *)DefaultHeap::AllocClear(0x748uLL);
      v6 = v3;
      if ( v3 )
        v3 = (CTopLevelWindow::WindowFrame *)CTopLevelWindow::WindowFrame::WindowFrame(v3);
      v5 = v3;
      if ( !v3 )
      {
        v0 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2EEu, 0LL);
        return v0;
      }
      DynArray<CTopLevelWindow::WindowFrame *,0>::AddMultipleAndSet(v4, &v5);
    }
  }
  return v0;
}
