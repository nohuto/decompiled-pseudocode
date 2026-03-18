/*
 * XREFs of ?SetWindow@tagHOTKEY@@QEAAXPEAUtagWND@@@Z @ 0x14018D708
 * Callers:
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall tagHOTKEY::SetWindow(tagHOTKEY *this, struct tagWND *a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( a2 )
    v2 = *(_QWORD *)a2;
  *((_QWORD *)this + 2) = v2;
}
