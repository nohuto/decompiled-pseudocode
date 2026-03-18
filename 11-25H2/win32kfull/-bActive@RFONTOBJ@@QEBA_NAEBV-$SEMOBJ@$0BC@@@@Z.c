/*
 * XREFs of ?bActive@RFONTOBJ@@QEBA_NAEBV?$SEMOBJ@$0BC@@@@Z @ 0x14030D8F4
 * Callers:
 *     prfntKillList @ 0x1400D7300 (prfntKillList.c)
 * Callees:
 *     <none>
 */

bool __fastcall RFONTOBJ::bActive(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)a1 + 668LL) > 0;
}
