/*
 * XREFs of ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180030184
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001AABC (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180030210 (-RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z.c)
 */

__int64 __fastcall RmpUtilCreateWnfStateNameForApplicationClient(union _RM_SID *a1, int a2, struct _WNF_STATE_NAME *a3)
{
  int v5; // eax
  void *v6; // rdi
  int WnfStateName; // ebx
  void *v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  v5 = RmpUtilCreateSecurityDescriptorForApplicationWnf(a1, &v9);
  v6 = v9;
  WnfStateName = v5;
  if ( v5 >= 0 )
  {
    WnfStateName = NtCreateWnfStateName(a3, 3LL, 0LL, 0LL, 0LL, a2, v9);
    if ( WnfStateName >= 0 )
      WnfStateName = 0;
  }
  if ( v6 )
    HampFreeHeap(v6);
  return (unsigned int)WnfStateName;
}
