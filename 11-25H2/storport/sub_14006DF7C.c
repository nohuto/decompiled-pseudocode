/*
 * XREFs of sub_14006DF7C @ 0x14006DF7C
 * Callers:
 *     sub_14017A21C @ 0x14017A21C (sub_14017A21C.c)
 *     sub_1401801F4 @ 0x1401801F4 (sub_1401801F4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14006DF7C(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !byte_1401687EA && byte_140168830 )
  {
    _InterlockedIncrement(&dword_1401687EC);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))qword_140168850)(a1, a2, &dword_1401681B0);
    _InterlockedDecrement(&dword_1401687EC);
  }
  return v2;
}
