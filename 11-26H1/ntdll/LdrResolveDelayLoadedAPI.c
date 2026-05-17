/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180105E10
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x180105D74 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1801150A0 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180081510 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpHandleProtectedDelayload @ 0x1800C5420 (LdrpHandleProtectedDelayload.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x18015C4E0 (LdrpHandleUnprotectedDelayLoad.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(
        const void *ArgList,
        _BYTE *a2,
        __int64 a3,
        unsigned __int64 a4,
        char *a5,
        unsigned int a6)
{
  __int64 v9; // rsi
  int LoadedDllByHandle; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0LL;
  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)ArgList, &v14, 0LL, a4);
    if ( LoadedDllByHandle < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrdload.c",
        1347,
        (__int64)"LdrResolveDelayLoadedAPI",
        0,
        "LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
        ArgList,
        LoadedDllByHandle);
    }
    else
    {
      v9 = *(_QWORD *)a5;
      v11 = v14;
      if ( *(_QWORD *)a5 - *(_QWORD *)(v14 + 48) < (unsigned __int64)*(unsigned int *)(v14 + 64) )
      {
        if ( (*(_DWORD *)(v14 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v14, (__int64)a2, a3, a4, a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v14, (_DWORD)a2, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(
                      (unsigned __int64)ArgList,
                      (int)a5 - (int)ArgList,
                      (int)a5 - (int)ArgList);
              if ( v12 < 0 )
                LdrpLogInternal(
                  (int)"minkernel\\ldr\\ldrdload.c",
                  1325,
                  (__int64)"LdrResolveDelayLoadedAPI",
                  0,
                  "LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are imported in the"
                  " DLL based at 0x%p.Status = 0x%x\n",
                  ArgList,
                  v12);
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return v9;
}
