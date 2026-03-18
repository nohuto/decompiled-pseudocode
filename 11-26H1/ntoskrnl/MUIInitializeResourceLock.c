/*
 * XREFs of MUIInitializeResourceLock @ 0x140AE5278
 * Callers:
 *     NtFlushInstallUILanguage @ 0x140844590 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x1408446A0 (NtMapCMFModule.c)
 *     NtGetMUIRegistryInfo @ 0x140AE5010 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  unsigned int v2; // edi
  struct _ERESOURCE *Pool2; // rax
  struct _ERESOURCE *v4; // rbx

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      Pool2 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        v2 = ExInitializeResourceLite(Pool2);
        if ( (v2 & 0xC0000000) == 0xC0000000 )
          goto LABEL_12;
        if ( _InterlockedCompareExchange64(a1, (signed __int64)v4, 0LL) )
          ExDeleteResourceLite(v4);
        else
          v4 = 0LL;
        v2 = 0;
        if ( v4 )
LABEL_12:
          ExFreePoolWithTag(v4, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
