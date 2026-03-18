/*
 * XREFs of ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x1400CC6E8
 * Callers:
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CC7AC (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CC828 (DirectComposition--Memory--AllocateAndClear_1.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CSynchronizationManager::Initialize(
        DirectComposition::CSynchronizationManager *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  struct _RTL_GENERIC_TABLE *v6; // rax
  struct _RTL_GENERIC_TABLE *v7; // rdi

  v2 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    GreDeleteFastMutex((char *)v3);
    return (unsigned int)v4;
  }
  *(_QWORD *)this = v3;
  v6 = (struct _RTL_GENERIC_TABLE *)DirectComposition::Memory::AllocateAndClear_1(0x48uLL);
  v7 = v6;
  if ( v6 )
  {
    RtlInitializeGenericTable(
      v6,
      DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CSyncData,1702052676,0>::CompareTableEntries,
      (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CSyncData,1702052676,0>::AllocateTableEntry,
      rimUserMemAllocNodeFree,
      0LL);
    *((_QWORD *)this + 1) = v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
