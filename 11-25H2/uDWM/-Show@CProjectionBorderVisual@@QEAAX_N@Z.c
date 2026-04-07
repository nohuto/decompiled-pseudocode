/*
 * XREFs of ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800C52AC
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180005BA4 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A6E8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180054E78 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CProjectionBorderVisual::Show(CProjectionBorderVisual *this, char a2)
{
  __int64 v2; // rax

  if ( *((_BYTE *)this + 256) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_BYTE *)this + 256) = a2;
    (*(void (__fastcall **)(CProjectionBorderVisual *, __int64))(v2 + 24))(this, 0x4000LL);
  }
}
