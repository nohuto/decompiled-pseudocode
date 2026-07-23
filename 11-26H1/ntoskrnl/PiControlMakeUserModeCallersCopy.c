/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1409674D0
 * Callers:
 *     NtReplacePartitionUnit @ 0x140723890 (NtReplacePartitionUnit.c)
 *     PiControlGetDeviceDepth @ 0x14094CEB0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14094D350 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140958558 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x14095A1C0 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x140A17D80 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140AA1F70 (PiCMCaptureDeviceListInputData.c)
 *     PiControlQueryDeviceRelations @ 0x140ACBDC0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140B5E128 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140B73060 (PiCMCaptureInterfaceListInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
