/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x18015C4E0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180105E10 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C57B0 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C5930 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C67B0 (LdrpRedirectDelayloadFailure.c)
 */

__int64 __fastcall LdrpHandleUnprotectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _DWORD *),
        __int64 (__fastcall *a4)(__int64, const char *),
        __int64 *a5,
        unsigned int a6)
{
  __int64 v10; // rdi
  signed int v11; // ebx
  void (__fastcall *v12)(__int64 *, __int64, __int64, __int64, _QWORD); // rdx
  int DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF

  v15 = 0LL;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v15, a6, (__int64)a5);
  v11 = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = (void (__fastcall *)(__int64 *, __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  g_pfnSE_GetProcAddressForCaller,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(a1, v15, a2, (__int64)a5, v12, &DelayloadExportDll);
    LdrpDereferenceModule(v15);
    v11 = DelayloadExportDll;
  }
  if ( v11 >= 0
    || (v10 = LdrpRedirectDelayloadFailure(a1, v15, a2, a3, a4, (__int64)a5, v11)) != 0
    && ((unsigned int)(v11 + 1073741512) <= 1 || v11 == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
