/*
 * XREFs of sub_1400F24C8 @ 0x1400F24C8
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 *     sub_1400D7690 @ 0x1400D7690 (sub_1400D7690.c)
 *     sub_1400D7730 @ 0x1400D7730 (sub_1400D7730.c)
 *     sub_1400E941C @ 0x1400E941C (sub_1400E941C.c)
 *     sub_1400EA44C @ 0x1400EA44C (sub_1400EA44C.c)
 *     sub_1400EE400 @ 0x1400EE400 (sub_1400EE400.c)
 *     sub_1400EEF60 @ 0x1400EEF60 (sub_1400EEF60.c)
 *     sub_1400EF52C @ 0x1400EF52C (sub_1400EF52C.c)
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_1400F0A34 @ 0x1400F0A34 (sub_1400F0A34.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 *     sub_1400F26B4 @ 0x1400F26B4 (sub_1400F26B4.c)
 *     sub_14012AFF8 @ 0x14012AFF8 (sub_14012AFF8.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400F24C8(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  unsigned int v6; // r8d
  unsigned int v8; // eax
  __int64 v9; // rcx

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 528LL))(*(_QWORD *)(a1 + 1648) + 64LL, a2);
    v6 = v8;
    if ( (a4 & 1) != 0 )
    {
      switch ( (unsigned int)v5 )
      {
        case 0x80000000:
        case 0x80000001:
        case 0x80000003:
        case 0x80000006:
        case 0x80000007:
        case 0x80000008:
        case 0x80000009:
          if ( !v8 || v8 == -1056964606 )
            return v6;
          goto LABEL_13;
        case 0x80000002:
        case 0x80000004:
        case 0x80000005:
          return (unsigned int)-1073741811;
        default:
          return v6;
      }
    }
    if ( (unsigned int)v5 <= 0x30 )
    {
      v9 = 0x1011000100000LL;
      if ( _bittest64(&v9, v5) )
      {
        if ( v8 )
LABEL_13:
          KeBugCheckEx(0xF0u, 6uLL, v5, v8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v6;
}
