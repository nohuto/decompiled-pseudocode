/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1400E8A78
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1400E8938 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v1; // rsi
  struct _RTL_GENERIC_TABLE *v3; // rax
  char *v4; // rdi
  struct _ERESOURCE *v5; // rax
  NTSTATUS v6; // ebx
  __int64 result; // rax

  v1 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInitImpl((__int64)a1, 0x48uLL, 0x74634344u);
  v4 = (char *)v3;
  if ( !v3 )
  {
    v4 = 0LL;
    v6 = -1073741801;
    goto LABEL_4;
  }
  RtlInitializeGenericTable(
    v3,
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
    rimUserMemAllocNodeFree,
    0LL);
  v5 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v1 = v5;
  if ( v5 )
  {
    memset(v5, 0, sizeof(struct _ERESOURCE));
    v6 = ExInitializeResourceLite(v1);
    if ( v6 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v1 = 0LL;
    v6 = -1073741801;
  }
  GreDeleteFastMutex(v4);
  v4 = 0LL;
  if ( v1 )
  {
    GreDeleteFastMutex((char *)v1);
    v1 = 0LL;
  }
LABEL_4:
  *(_QWORD *)a1 = v4;
  result = (unsigned int)v6;
  *((_QWORD *)a1 + 1) = v1;
  return result;
}
