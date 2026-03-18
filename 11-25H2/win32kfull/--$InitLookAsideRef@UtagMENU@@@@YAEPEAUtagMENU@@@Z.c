/*
 * XREFs of ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x14017691C
 * Callers:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x140176804 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagMENU>(__int64 a1)
{
  void *CurrentWin32kStackRefLookAside; // rax
  _QWORD *v3; // rax

  CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
  if ( !CurrentWin32kStackRefLookAside )
    KeBugCheck(4u);
  v3 = (_QWORD *)Win32AllocateFromPagedLookasideList(CurrentWin32kStackRefLookAside);
  *(_QWORD *)(a1 + 152) = v3;
  if ( v3 )
  {
    *v3 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 152) + 12LL) = 0;
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
