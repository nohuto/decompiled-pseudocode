/*
 * XREFs of NtGdiConfigureOPMProtectedOutput @ 0x14019BD20
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x140008410 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14000A430 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_ @ 0x1401F4108 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall NtGdiConfigureOPMProtectedOutput(void *a1, void *a2, unsigned int a3, volatile void *a4)
{
  SIZE_T v5; // r15
  unsigned int v7; // edi
  void *v8; // rsi
  void *v9; // rdx
  struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *Pool2; // r14
  int v11; // ebx
  void *v12; // rdx
  __int64 v14; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v14 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = 0;
  v8 = 0LL;
  Pool2 = (struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *)ExAllocatePool2(258LL, 4096LL, 1297108807LL);
  if ( Pool2 && (!(_DWORD)v5 || (v8 = (void *)ExAllocatePool2(258LL, v5, 1297108807LL)) != 0LL) )
  {
    v11 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS_(Pool2, a2);
    if ( v11 >= 0 )
    {
      if ( (_DWORD)v5 )
      {
        ProbeForRead(a4, v5, 1u);
        memmove(v8, (const void *)a4, v5);
      }
      v11 = COPM::ConfigureProtectedOutput(*(COPM **)(v14 + 3728), a1, Pool2, v5, (unsigned __int8 *)v8);
    }
  }
  else
  {
    v11 = -1073741801;
  }
  OPM::OPMFreeMemory((OPM *)v8, v9);
  OPM::OPMFreeMemory((OPM *)Pool2, v12);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return v7;
}
