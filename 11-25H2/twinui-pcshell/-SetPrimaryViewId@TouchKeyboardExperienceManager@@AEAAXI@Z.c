/*
 * XREFs of ?SetPrimaryViewId@TouchKeyboardExperienceManager@@AEAAXI@Z @ 0x1801B3830
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180198A5C (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 * Callees:
 *     ??$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z @ 0x1801B3894 (--$SetPrimaryViewId@AEAI@TouchKeyboardExperienceTelemetryLogger@@SAXAEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 128) + 312LL))(*(_QWORD *)(v4 + 128), a2);
  }
}
