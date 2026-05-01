/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x18000C440
 * Callers:
 *     DllMain @ 0x18000C2A0 (DllMain.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void FreeResourceManagerProxy(void)
{
  if ( qword_18002DCC8 )
    (**(void (__fastcall ***)(__int64, __int64))qword_18002DCC8)(qword_18002DCC8, 1LL);
  qword_18002DCC8 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
