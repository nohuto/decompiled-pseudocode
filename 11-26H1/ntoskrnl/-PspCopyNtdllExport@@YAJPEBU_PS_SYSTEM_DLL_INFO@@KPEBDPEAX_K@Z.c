/*
 * XREFs of ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEBDPEAX_K@Z @ 0x140CDF70C
 * Callers:
 *     ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140CDFA00 (-PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PspLookupEntryPoint @ 0x140CDEFCC (PspLookupEntryPoint.c)
 */

__int64 __fastcall PspCopyNtdllExport(
        const struct _PS_SYSTEM_DLL_INFO *a1,
        unsigned int a2,
        const char *a3,
        void *a4,
        size_t Size)
{
  __int64 v6; // r14
  unsigned __int64 v8; // rbx
  __int64 result; // rax
  char *v10; // rdx
  char *v11; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  v12 = 0LL;
  v8 = *((_QWORD *)a1 + 4);
  result = PspLookupEntryPoint((__int64)a1, a3, &v12);
  if ( (int)result >= 0 )
  {
    v10 = (char *)(v12 + *((_QWORD *)a1 + 4) - *((_QWORD *)a1 + 3));
    v11 = &v10[Size];
    if ( v8 + v6 <= v8 || v11 <= v10 || (unsigned __int64)v10 < v8 || (unsigned __int64)v11 > v8 + v6 )
    {
      return 3221225485LL;
    }
    else
    {
      memmove(a4, v10, Size);
      return 0LL;
    }
  }
  return result;
}
