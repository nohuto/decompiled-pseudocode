/*
 * XREFs of sub_140089EE8 @ 0x140089EE8
 * Callers:
 *     sub_1401B0790 @ 0x1401B0790 (sub_1401B0790.c)
 * Callees:
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int16 __fastcall sub_140089EE8(__int64 a1)
{
  signed __int32 v1; // eax
  char v2; // di
  __int128 v3; // xmm1
  const wchar_t *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  const wchar_t *v9; // rcx
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+60h] [rbp-28h] BYREF

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 6016), 0, 0);
  v2 = v1;
  if ( v1 )
  {
    if ( byte_140168DAA )
    {
      v3 = *(_OWORD *)(a1 + 5064);
      v4 = *(const wchar_t **)(a1 + 5080);
      v5 = *(_QWORD *)(a1 + 16);
      v12 = v3;
      v11 = 0LL;
      LOWORD(v1) = sub_1400403EC(v5, (__int64)&v11);
      if ( byte_1401694F6 < 0 )
      {
        v9 = (const wchar_t *)&unk_140149394;
        if ( v4 )
          v9 = v4;
        LOWORD(v1) = sub_140086EA4(
                       (__int64)v9,
                       v6,
                       v7,
                       *(_DWORD *)(v8 + 56),
                       (__int64)&v12,
                       *((const wchar_t **)&v11 + 1),
                       v9,
                       *(_DWORD *)(v8 + 6012),
                       v2);
      }
    }
  }
  return v1;
}
