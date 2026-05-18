/*
 * XREFs of sub_18000EED0 @ 0x18000EED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000EDB4 @ 0x18000EDB4 (sub_18000EDB4.c)
 *     sub_18000F524 @ 0x18000F524 (sub_18000F524.c)
 *     sub_180010770 @ 0x180010770 (sub_180010770.c)
 */

int __fastcall sub_18000EED0(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v4; // rax

  sub_18000EDB4(a1, a2, a3);
  LODWORD(v4) = GetCurrentThreadId();
  if ( dword_1801C8474 != (_DWORD)v4 )
  {
    if ( _InterlockedIncrement(&dword_1801C8478) < 4 )
    {
      dword_1801C8474 = v4;
      v4 = sub_18000F524();
      if ( v4 )
        LODWORD(v4) = sub_180010770(v4, a1);
      dword_1801C8474 = 0;
    }
    _InterlockedDecrement(&dword_1801C8478);
  }
  return v4;
}
