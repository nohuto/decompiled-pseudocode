/*
 * XREFs of sub_140038DD8 @ 0x140038DD8
 * Callers:
 *     sub_140038DA4 @ 0x140038DA4 (sub_140038DA4.c)
 *     sub_1400A2F50 @ 0x1400A2F50 (sub_1400A2F50.c)
 * Callees:
 *     sub_14003F5A0 @ 0x14003F5A0 (sub_14003F5A0.c)
 */

__int64 __fastcall sub_140038DD8(__int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = off_1400BA428;
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      sub_14003F5A0(a1, v3);
    }
  }
  return sub_140038E2C(a1);
}
