/*
 * XREFs of sub_14001D1F4 @ 0x14001D1F4
 * Callers:
 *     sub_140019E50 @ 0x140019E50 (sub_140019E50.c)
 *     sub_1400566C0 @ 0x1400566C0 (sub_1400566C0.c)
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 *     sub_14005C89C @ 0x14005C89C (sub_14005C89C.c)
 * Callees:
 *     sub_14001CDE4 @ 0x14001CDE4 (sub_14001CDE4.c)
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 */

__int64 __fastcall sub_14001D1F4(__int64 a1, char a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  HANDLE Event; // rdi
  __int64 v7; // r8
  int v8; // r9d

  v3 = 0;
  Event = CreateEventExW(0LL, 0LL, a2 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    sub_14001D640(a1, Event);
  }
  else
  {
    return (unsigned int)sub_14001CDE4(v5, v4, v7, v8);
  }
  return v3;
}
