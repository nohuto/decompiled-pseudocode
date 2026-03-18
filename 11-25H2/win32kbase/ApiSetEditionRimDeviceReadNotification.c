/*
 * XREFs of ApiSetEditionRimDeviceReadNotification @ 0x1401968F0
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     EditionRimDeviceReadNotification @ 0x14023EAD4 (EditionRimDeviceReadNotification.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionRimDeviceReadNotification(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  unsigned int v6; // esi
  __int64 (*result)(void); // rax

  v6 = a2;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4736LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionRimDeviceReadNotification(a1, v6, a3, a4);
  }
  return result;
}
