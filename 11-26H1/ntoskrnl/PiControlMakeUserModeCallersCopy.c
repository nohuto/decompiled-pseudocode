/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1409A6A70
 * Callers:
 *     NtReplacePartitionUnit @ 0x14071EC70 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14098C8E8 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140997AF8 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140999760 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1409DAB30 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140AA05E0 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140AB1EA4 (PiCMCaptureInterfaceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140AC9CB0 (PiControlQueryDeviceRelations.c)
 *     PiControlGetDeviceDepth @ 0x140AD6EF0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5AE0C (PiCMCaptureCreateDeviceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1409A6B58 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, int a3, __int64 a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v9; // r15d

  if ( a5 )
  {
    if ( a3 )
    {
      if ( a6 && (Pool2 = ExAllocatePool2(0x101uLL), (*a1 = (void *)Pool2) == 0LL) )
      {
        return 3221225626LL;
      }
      else
      {
        v9 = 0;
        if ( *a1 )
        {
          v9 = PiControlCopyUserModeCallersBuffer(*a1, a5, a6);
          if ( v9 < 0 )
          {
            if ( a6 )
            {
              ExFreePoolWithTag(*a1, 0);
              *a1 = 0LL;
            }
          }
        }
        return (unsigned int)v9;
      }
    }
    else
    {
      *a1 = 0LL;
      return 0LL;
    }
  }
  else
  {
    *a1 = a2;
    return 0LL;
  }
}
