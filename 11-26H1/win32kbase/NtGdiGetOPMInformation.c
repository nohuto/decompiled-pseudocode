/*
 * XREFs of NtGdiGetOPMInformation @ 0x140009250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1400094F8 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_ @ 0x14000A570 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_ @ 0x14000A5C8 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_.c)
 */

__int64 __fastcall NtGdiGetOPMInformation(void *a1, void *Src, void *a3)
{
  __int64 v6; // rbp
  PLOOKASIDE_LIST_EX *v7; // r14
  struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *v8; // rsi
  PLOOKASIDE_LIST_EX *v9; // r15
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v10; // rax
  struct _DXGKMDT_OPM_REQUESTED_INFORMATION *v11; // rdi
  int Information; // ebx

  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = *(PLOOKASIDE_LIST_EX **)(v6 + 3728);
  v8 = (struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *)ExAllocateFromLookasideListEx(*v7);
  v9 = (PLOOKASIDE_LIST_EX *)(*(_QWORD *)(v6 + 3728) + 8LL);
  v10 = (struct _DXGKMDT_OPM_REQUESTED_INFORMATION *)ExAllocateFromLookasideListEx(*v9);
  v11 = v10;
  if ( v8 && v10 )
  {
    Information = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_GET_INFO_PARAMETERS_(v8, Src);
    if ( Information >= 0 )
    {
      Information = COPM::GetInformation(*(COPM **)(v6 + 3728), a1, v8, v11);
      if ( Information >= 0 )
      {
        Information = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_REQUESTED_INFORMATION_(a3, v11);
        if ( Information >= 0 )
        {
          if ( v9 )
            ExFreeToLookasideListEx(*v9, v11);
          if ( v7 )
            ExFreeToLookasideListEx(*v7, v8);
          return 0LL;
        }
      }
    }
  }
  else
  {
    Information = -1073741670;
  }
  if ( v9 && v11 )
    ExFreeToLookasideListEx(*v9, v11);
  if ( v7 )
  {
    if ( v8 )
      ExFreeToLookasideListEx(*v7, v8);
  }
  return (unsigned int)Information;
}
