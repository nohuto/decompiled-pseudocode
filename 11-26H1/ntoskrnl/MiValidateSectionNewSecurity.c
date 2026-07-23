/*
 * XREFs of MiValidateSectionNewSecurity @ 0x140AC9C64
 * Callers:
 *     MiValidateSectionCreate @ 0x14099C8D4 (MiValidateSectionCreate.c)
 * Callees:
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3761C (MiCaptureSecureImageBaseAddress.c)
 */

__int64 __fastcall MiValidateSectionNewSecurity(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  _DWORD *v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  signed __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 (__fastcall *v12)(); // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD **)(a1 + 8);
  if ( (MiFlags & 0x8000) != 0
    && (v4[23] & 0xC0000) != 0
    && *(_QWORD *)(v3 + 32)
    && (result = MiCaptureSecureImageBaseAddress(*(_QWORD *)(a1 + 8)), (int)result < 0) )
  {
    *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 118;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 24);
    v12 = MiValidateImagePage;
    v11 = 42LL;
    v8[1] = 0LL;
    v8[0] = v4;
    v9 = 1;
    result = MiWalkEntireImage(v8);
    if ( (int)result < 0 )
    {
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 119;
    }
    else
    {
      v6 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
      v7 = v6 | 4;
      if ( *(char *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 46LL) >= 0 )
        v7 = v6;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 40), v7, *(_QWORD *)(a1 + 88));
      *(_QWORD *)(a1 + 80) = v7;
      return (unsigned int)result;
    }
  }
  return result;
}
