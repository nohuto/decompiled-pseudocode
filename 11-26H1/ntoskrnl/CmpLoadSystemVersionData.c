/*
 * XREFs of CmpLoadSystemVersionData @ 0x140855F4C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B4D840 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenKey @ 0x140723630 (ZwOpenKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpLoadLayerVersions @ 0x140855D54 (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x1408561BC (CmpMergeVersionDescriptors.c)
 *     RtlCompareUnicodeStrings @ 0x140981100 (RtlCompareUnicodeStrings.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  _KDPC **p_Dpc; // rbx
  int v1; // edi
  NTSTATUS result; // eax
  __int64 v3; // r8
  NTSTATUS LayerVersions; // esi
  __int64 v5; // r8
  int i; // r14d
  int v7; // r15d
  __int64 v8; // rsi
  int v9; // ebx
  PVOID *v10; // rsi
  __int64 v11; // rdx
  __int64 j; // rbx
  int v13; // [rsp+38h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  KeyHandle = 0LL;
  p_Dpc = &CmpFreezeListLock.Timer.Dpc;
  *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112] = 0LL;
  memset_0(&CmpFreezeListLock.Timer.Dpc, 0, 0x80uLL);
  *(_DWORD *)&CmpFreezeListLock.WaitBlockFill11[120] = 0;
  memset_0(P, 0, sizeof(P));
  v1 = 0;
  v13 = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_14000EAC8);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(
                      &CmpFreezeListLock.Timer.Dpc,
                      &CmpFreezeListLock.WaitBlockFill11[120],
                      v3,
                      KeyHandle,
                      (UNICODE_STRING *)&CmpBuildLayersString,
                      4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, &v13, v5, KeyHandle, (UNICODE_STRING *)&CmpServicingLayersString, 64);
      if ( CmpFreezeListLock.Timer.Dpc && ((__int64)CmpFreezeListLock.Timer.Dpc[20].DeferredContext & 1) != 0 )
        *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112] = CmpFreezeListLock.Timer.Dpc;
      v1 = v13;
      for ( i = 0; i < *(int *)&CmpFreezeListLock.WaitBlockFill11[120]; ++p_Dpc )
      {
        v7 = 0;
        v8 = 0LL;
        while ( v7 < v1 )
        {
          if ( !RtlCompareUnicodeStrings(
                  (PCWCH)(*p_Dpc)->DeferredRoutine,
                  (unsigned __int64)LOWORD((*p_Dpc)->ProcessorHistory) >> 1,
                  *((PCWCH *)P[v8] + 3),
                  (unsigned __int64)*((unsigned __int16 *)P[v8] + 8) >> 1,
                  1u) )
          {
            CmpMergeVersionDescriptors(*p_Dpc, P[v8]);
            break;
          }
          ++v7;
          ++v8;
        }
        ++i;
      }
      if ( *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112] )
      {
        v9 = 0;
        v10 = P;
        while ( v9 < v1 )
        {
          if ( !RtlCompareUnicodeStrings(
                  *((PCWCH *)*v10 + 3),
                  (unsigned __int64)*((unsigned __int16 *)*v10 + 8) >> 1,
                  L"_EDITION_",
                  9uLL,
                  1u) )
          {
            CmpMergeVersionDescriptors(*(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112], P[v9]);
            break;
          }
          ++v9;
          ++v10;
        }
        v11 = *(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112];
        NtBuildNumber = *(_DWORD *)(*(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112] + 8LL) | 0xF0000000;
        *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(*(_QWORD *)&CmpFreezeListLock.WaitBlockFill11[112]
                                                                 + 8LL);
        dword_140FC8E78 = (unsigned __int16)NtBuildNumber;
        NtBuildQfe = *(_DWORD *)(v11 + 12);
      }
      LayerVersions = 0;
    }
    for ( j = v1 - 1; j >= 0; P[j--] = 0LL )
      ExFreePoolWithTag(P[j], 0x64764D43u);
    ZwClose(KeyHandle);
    return LayerVersions;
  }
  return result;
}
