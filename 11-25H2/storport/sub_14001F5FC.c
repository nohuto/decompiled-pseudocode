/*
 * XREFs of sub_14001F5FC @ 0x14001F5FC
 * Callers:
 *     sub_14000CE18 @ 0x14000CE18 (sub_14000CE18.c)
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14001F5FC(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rdx
  KIRQL v5; // si
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  int v7; // eax

  v1 = a1 + 376;
  v3 = 0;
  if ( (unsigned __int8)sub_140020090(a1 + 376, 4LL) )
    sub_1400296E0(v1, 4LL);
  v5 = sub_14001E1F0(a1);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 608) + 120LL);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)(a1 + 616) + 16LL, 2LL);
    if ( v7 )
    {
      v3 = -1073741823;
      v4 = 2147483665LL;
      if ( v7 == 2 )
        v3 = -2147483631;
    }
    else
    {
      *(_BYTE *)(a1 + 104) |= 1u;
    }
  }
  else
  {
    v3 = -1073741637;
  }
  LOBYTE(v4) = v5;
  sub_140029830(a1, v4);
  return v3;
}
