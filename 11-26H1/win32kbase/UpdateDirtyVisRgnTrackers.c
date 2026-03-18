/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x1400E6E80
 * Callers:
 *     ??1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ @ 0x1400FB674 (--1MaybeEnterLeaveCritSharedOnly@@QEAA@XZ.c)
 *     NtUserGetKeyState @ 0x140117EE0 (NtUserGetKeyState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall UpdateDirtyVisRgnTrackers(__int64 a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3520LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
