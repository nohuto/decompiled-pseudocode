/*
 * XREFs of ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1800BEFA8
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180191ADC (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 * Callees:
 *     ??$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z @ 0x1800BEC18 (--$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TouchKeyboardExperienceManager::SetPrimaryViewId(TouchKeyboardExperienceManager *this, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  TouchKeyboardExperienceTelemetryLogger::SetPrimaryViewId<unsigned int &>(&v5);
  v4 = *((_QWORD *)this + 73);
  *((_DWORD *)this + 153) = a2;
  if ( *(_DWORD *)(v4 + 496) != a2 )
  {
    *(_DWORD *)(v4 + 496) = a2;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 128) + 320LL))(*(_QWORD *)(v4 + 128), a2);
  }
}
