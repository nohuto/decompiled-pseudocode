/*
 * XREFs of ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ @ 0x18006CDB4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateGDISurface(CTopLevelWindow *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *((_QWORD *)this + 89);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 673) & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 60) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 24) + 360LL))(*(_QWORD *)(v1 + 24));
      v2 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x150Eu, 0LL);
    }
  }
  return v2;
}
