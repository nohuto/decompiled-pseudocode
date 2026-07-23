/*
 * XREFs of KsepGetLoadedModulesList @ 0x1407C16B4
 * Callers:
 *     KseRegisterShimEx @ 0x1407C0040 (KseRegisterShimEx.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1407C0E34 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall KsepGetLoadedModulesList(int **a1)
{
  ULONG i; // ebx
  int *Paged; // rax
  int *v5; // rdi
  NTSTATUS v6; // eax
  int v7; // ebp
  unsigned int v8; // ebx
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 0;
  if ( !a1 )
    return 3221225485LL;
  for ( i = 304; ; i = 296 * v7 + 8 )
  {
    Paged = (int *)KsepPoolAllocatePaged();
    v5 = Paged;
    if ( !Paged )
      break;
    v6 = ZwQuerySystemInformation(SystemModuleInformation, Paged, i, &ReturnLength);
    v7 = *v5;
    v8 = v6;
    if ( v6 >= 0 )
    {
      *a1 = v5;
      return v8;
    }
    if ( v6 != -1073741820 )
    {
      KsepPoolFreePaged(v5);
      return v8;
    }
    KsepPoolFreePaged(v5);
  }
  return (unsigned int)-1073741670;
}
