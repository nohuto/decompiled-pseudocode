/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x18006E82C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v5; // eax

  v2 = 0;
  v3 = *((_QWORD *)this + 66);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(
           v3,
           *(_QWORD *)(*((_QWORD *)this + 89) + 16LL));
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1435u, 0LL);
  }
  return v2;
}
