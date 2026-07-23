/*
 * XREFs of LdrpHandleUnprotectedDelayLoad @ 0x18015C3A0
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180105660 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrpGetDelayloadExportDll @ 0x1800C2F70 (LdrpGetDelayloadExportDll.c)
 *     LdrpResolveDelayloadAddress @ 0x1800C30F0 (LdrpResolveDelayloadAddress.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800C3F70 (LdrpRedirectDelayloadFailure.c)
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
  NTSTATUS Status; // ebx
  void (__fastcall *v12)(__int64 *, __int64, __int64, __int64, _QWORD); // rdx
  NTSTATUS DelayloadExportDll; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  BaseAddress = 0LL;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64 *)&BaseAddress, (char *)a6, (__int64)a5);
  Status = DelayloadExportDll;
  if ( DelayloadExportDll >= 0 )
  {
    if ( g_ShimsEnabled )
      v12 = (void (__fastcall *)(__int64 *, __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  g_pfnSE_GetProcAddressForCaller,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v12 = 0LL;
    v10 = LdrpResolveDelayloadAddress(a1, (__int64)BaseAddress, a2, (__int64)a5, v12, &DelayloadExportDll);
    LdrpDereferenceModule((char *)BaseAddress);
    Status = DelayloadExportDll;
  }
  if ( Status >= 0
    || (v10 = LdrpRedirectDelayloadFailure(a1, (__int64)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
