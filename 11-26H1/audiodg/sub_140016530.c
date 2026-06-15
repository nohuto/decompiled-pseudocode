/*
 * XREFs of sub_140016530 @ 0x140016530
 * Callers:
 *     sub_140016310 @ 0x140016310 (sub_140016310.c)
 *     sub_14006FB30 @ 0x14006FB30 (sub_14006FB30.c)
 *     sub_14006FC60 @ 0x14006FC60 (sub_14006FC60.c)
 *     sub_14006FEC0 @ 0x14006FEC0 (sub_14006FEC0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140016530(struct _RTL_CRITICAL_SECTION **a1, struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  DWORD LastError; // edi

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    LeaveCriticalSection(v2);
    SetLastError(LastError);
    *a1 = a2;
  }
  else
  {
    *a1 = a2;
  }
}
