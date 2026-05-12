/*
 * XREFs of sub_1400F0DFC @ 0x1400F0DFC
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA44C @ 0x1400EA44C (sub_1400EA44C.c)
 *     sub_1400EC4CC @ 0x1400EC4CC (sub_1400EC4CC.c)
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400EEF60 @ 0x1400EEF60 (sub_1400EEF60.c)
 *     sub_1400EF9BC @ 0x1400EF9BC (sub_1400EF9BC.c)
 *     sub_1400F0A34 @ 0x1400F0A34 (sub_1400F0A34.c)
 *     sub_1400F1278 @ 0x1400F1278 (sub_1400F1278.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400F0DFC(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  ULONG_PTR v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = a2;
  if ( *(_BYTE *)(a1 + 1728) != 1 )
    return 3238002694LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 128) + 520LL))(
             *(_QWORD *)(a1 + 1648) + 64LL,
             a2);
  if ( (a4 & 1) == 0 )
  {
    if ( (unsigned int)v5 <= 0x24 && (v7 = 0x1010100101LL, _bittest64(&v7, v5)) || (_DWORD)v5 == 104 )
    {
      if ( (_DWORD)result )
        KeBugCheckEx(0xF0u, 6uLL, v5, (unsigned int)result, 0LL);
    }
  }
  return result;
}
