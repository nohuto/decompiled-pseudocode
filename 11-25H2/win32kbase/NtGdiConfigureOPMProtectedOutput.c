/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x140147610
 * Callers:
 *     <none>
 * Callees:
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x140083440 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x14014776C (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_ @ 0x1401477F4 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(void *a1, __int64 a2, unsigned int a3, char *a4)
{
  size_t v5; // r15
  unsigned int v7; // edi
  void *v8; // r14
  void *v9; // rdx
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *Pool2; // r12
  int v11; // ebx
  size_t v12; // rsi
  void *v13; // rdx
  __int64 v15; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v15 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = 0;
  v8 = 0LL;
  Pool2 = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePool2(258LL, 4096LL, 1297108807LL);
  if ( Pool2 && ((v12 = v5, !(_DWORD)v5) || (v8 = (void *)ExAllocatePool2(258LL, v5, 1297108807LL)) != 0LL) )
  {
    v11 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_CONFIGURE_PARAMETERS_(Pool2, a2);
    if ( v11 >= 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( (unsigned __int64)&a4[v5] <= MmUserProbeAddress && &a4[v5] < a4 )
          v12 = v5;
        memmove(v8, a4, v12);
      }
      v11 = COPM::ConfigureProtectedOutput(*(COPM **)(v15 + 3648), a1, Pool2, v5, (const unsigned __int8 *)v8);
    }
  }
  else
  {
    v11 = -1073741801;
  }
  OPM::OPMFreeMemory((OPM *)v8, v9);
  OPM::OPMFreeMemory((OPM *)Pool2, v13);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v7;
}
