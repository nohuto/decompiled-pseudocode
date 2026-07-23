/*
 * XREFs of PiDcInit @ 0x140CCB840
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDcInitUpdateProperties @ 0x1407AA6AC (PiDcInitUpdateProperties.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B054E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 */

__int64 __fastcall PiDcInit(int a1)
{
  int inited; // ebx

  inited = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      inited = PiDcInitUpdateProperties();
      if ( inited >= 0 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration((__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
    }
  }
  else
  {
    memset_0(&PiDcUpdateProperties, 0, sizeof(PiDcUpdateProperties));
    PiDcUpdateProperties.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PiDcUpdateProperties;
    PiDcUpdateProperties.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PiDcCompareUpdateProperties;
    PiDcUpdateProperties.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PiDcAllocateGenericTableEntry;
    PiDcUpdateProperties.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PiDcFreeGenericTableEntry;
    PiDcUpdateProperties.TableContext = 0LL;
  }
  return (unsigned int)inited;
}
