/*
 * XREFs of PsInitializeScpCfgPages @ 0x140CDFC1C
 * Callers:
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404798A4 (-terminate@details@gsl@@YAXXZ.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140CDF7A8 (-PspFinalizeScpCfgPage@@YAJV-$span@E$0-0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NT.c)
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CDFA00 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 */

__int64 __fastcall PsInitializeScpCfgPages(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 result; // rax
  _DWORD *v11; // rdx
  __int64 v12; // r9
  __int64 i; // rbx
  const void *v14; // rdx
  unsigned __int32 v15; // edi
  __int64 j; // rcx
  __int64 k; // rbx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v20[64]; // [rsp+50h] [rbp-D8h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-98h] BYREF

  Src[0] = 0LL;
  memset_0(&Src[1], 0, 0x60uLL);
  memset_0(v20, 0, sizeof(v20));
  result = PspLocateNtdllAddressesForScpCfg(
             v8,
             a6,
             v9,
             (struct _RTL_SCP_CFG_NTDLL_EXPORTS *)Src,
             (struct _RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC *)v20);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
    {
      v14 = Src[2 * (unsigned int)i];
      v15 = _mm_srli_si128(*(__m128i *)&Src[2 * (unsigned int)i], 8).m128i_u32[0] - (_DWORD)v14;
      memmove(*(void **)(a1 + 8 * i), v14, v15);
      if ( v15 != 4096 )
        memset_0((void *)(v15 + *(_QWORD *)(a1 + 8 * i)), 204, 4096 - v15);
    }
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      v11 = *(_DWORD **)(a1 + 8 * j);
      if ( v11[2] != 320 || v11[3] != 448 || *v11 != 64 || v11[1] != 192 )
        return 3221225485LL;
    }
    for ( k = 0LL; (unsigned int)k < 4; k = (unsigned int)(k + 1) )
    {
      v18 = *(_QWORD *)(a1 + 8 * k);
      if ( !v18 )
      {
        gsl::details::terminate(0LL, (__int64)v11);
        __debugbreak();
      }
      v19[0] = 4096LL;
      v19[1] = v18;
      result = PspFinalizeScpCfgPage((gsl::details *)v19, (unsigned int)k, a4, v12, Src);
      if ( (int)result < 0 )
        return result;
    }
    return 0LL;
  }
  return result;
}
