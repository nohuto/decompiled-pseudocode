/*
 * XREFs of PipPendingServicesFilter @ 0x140CCD2C0
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 */

__int64 __fastcall PipPendingServicesFilter(const wchar_t *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  *a4 = 0;
  if ( !wcsicmp(a1, L"EventLog") )
    *a4 = 1;
  return 0LL;
}
