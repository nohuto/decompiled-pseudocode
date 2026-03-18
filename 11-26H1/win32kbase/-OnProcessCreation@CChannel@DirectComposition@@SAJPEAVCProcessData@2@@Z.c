/*
 * XREFs of ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x14010F1DC
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x14010F0C0 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v1; // rsi
  struct _RTL_GENERIC_TABLE *v3; // rax
  char *v4; // rdi
  struct _ERESOURCE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // ebx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v1 = 0LL;
  v3 = (struct _RTL_GENERIC_TABLE *)Win32AllocPoolWithQuotaZInitImpl((int)a1, 0x48uLL, 0x74634344u);
  v4 = (char *)v3;
  if ( !v3 )
  {
    v4 = 0LL;
    v9 = -1073741801;
    goto LABEL_4;
  }
  RtlInitializeGenericTable(
    v3,
    (PRTL_GENERIC_COMPARE_ROUTINE)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::CompareTableEntries,
    DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  v5 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v1 = v5;
  if ( v5 )
  {
    memset(v5, 0, sizeof(struct _ERESOURCE));
    v9 = ExInitializeResourceLite(v1);
    if ( v9 >= 0 )
      goto LABEL_4;
  }
  else
  {
    v1 = 0LL;
    v9 = -1073741801;
  }
  GreDeleteFastMutex(v4, v6, v7, v8);
  v4 = 0LL;
  if ( v1 )
  {
    GreDeleteFastMutex((char *)v1, v11, v12, v13);
    v1 = 0LL;
  }
LABEL_4:
  *(_QWORD *)a1 = v4;
  result = (unsigned int)v9;
  *((_QWORD *)a1 + 1) = v1;
  return result;
}
