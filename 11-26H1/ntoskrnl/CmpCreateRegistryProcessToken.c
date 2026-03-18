/*
 * XREFs of CmpCreateRegistryProcessToken @ 0x140856E08
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140857024 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SeFilterToken @ 0x1408109E0 (SeFilterToken.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateRegistryProcessToken(PACCESS_TOKEN *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PACCESS_TOKEN v5; // rdi
  struct _TOKEN_GROUPS *v6; // rsi
  void *v7; // r14
  NTSTATUS v8; // ebx
  __int64 Pool; // rax
  PVOID P; // [rsp+68h] [rbp+38h] BYREF
  PACCESS_TOKEN FilteredToken; // [rsp+70h] [rbp+40h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp+48h] BYREF

  TokenInformation = 0LL;
  v5 = 0LL;
  FilteredToken = 0LL;
  P = 0LL;
  v6 = 0LL;
  v7 = (void *)PsReferencePrimaryTokenWithTag((__int64)PsInitialSystemProcess, 0x746C6644u, a3, a4);
  v8 = SeQueryInformationToken(v7, TokenUser, &TokenInformation);
  if ( v8 >= 0 )
  {
    v8 = SeQueryInformationToken(v7, TokenGroups, &P);
    if ( v8 >= 0 )
    {
      Pool = CmpAllocatePool(0x100uLL);
      v6 = (struct _TOKEN_GROUPS *)Pool;
      if ( Pool )
      {
        *(_DWORD *)Pool = *(_DWORD *)P + 1;
        *(_OWORD *)(Pool + 8) = *(_OWORD *)TokenInformation;
        memmove((void *)(Pool + 24), (char *)P + 8, 16LL * *(unsigned int *)P);
        v8 = SeFilterToken(v7, 1u, v6, 0LL, 0LL, &FilteredToken);
        if ( v8 < 0 )
        {
          v5 = FilteredToken;
        }
        else
        {
          v8 = 0;
          *a1 = FilteredToken;
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  return (unsigned int)v8;
}
