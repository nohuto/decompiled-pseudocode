/*
 * XREFs of CmpLoadSystemVersionData @ 0x14085C2E4
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140B500D0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpLoadLayerVersions @ 0x14085C0EC (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x14085C554 (CmpMergeVersionDescriptors.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  struct _LIST_ENTRY **p_Blink; // rbx
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
  p_Blink = &CmpFreezeListLock.ApcState.ApcListHead[0].Blink;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&CmpFreezeListLock.116 + 4) = 0LL;
  memset_0(&CmpFreezeListLock.ApcStateFill[8], 0, 0x80uLL);
  CmpFreezeListLock.SystemCallNumber = 0;
  memset_0(P, 0, sizeof(P));
  v1 = 0;
  v13 = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_14000EDA8);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(
                      &CmpFreezeListLock.ApcState.ApcListHead[0].Blink,
                      &CmpFreezeListLock.SystemCallNumber,
                      v3,
                      KeyHandle,
                      (UNICODE_STRING *)&CmpBuildLayersString,
                      4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, &v13, v5, KeyHandle, (UNICODE_STRING *)&CmpServicingLayersString, 64);
      if ( CmpFreezeListLock.ApcState.ApcListHead[0].Blink
        && ((__int64)CmpFreezeListLock.ApcState.ApcListHead[0].Blink[82].Flink & 1) != 0 )
      {
        *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&CmpFreezeListLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)CmpFreezeListLock.ApcState.ApcListHead[0].Blink;
      }
      v1 = v13;
      for ( i = 0; i < (int)CmpFreezeListLock.SystemCallNumber; ++p_Blink )
      {
        v7 = 0;
        v8 = 0LL;
        while ( v7 < v1 )
        {
          if ( !RtlCompareUnicodeStrings(
                  (PCWCH)(*p_Blink)[1].Blink,
                  (unsigned __int64)LOWORD((*p_Blink)[1].Flink) >> 1,
                  *((PCWCH *)P[v8] + 3),
                  (unsigned __int64)*((unsigned __int16 *)P[v8] + 8) >> 1,
                  1u) )
          {
            CmpMergeVersionDescriptors(*p_Blink, P[v8]);
            break;
          }
          ++v7;
          ++v8;
        }
        ++i;
      }
      if ( *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&CmpFreezeListLock.116 + 4) )
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
            CmpMergeVersionDescriptors(*(_QWORD *)((char *)&CmpFreezeListLock.116 + 4), P[v9]);
            break;
          }
          ++v9;
          ++v10;
        }
        v11 = *(__int64 *)((char *)&CmpFreezeListLock.116 + 4);
        NtBuildNumber = *(_DWORD *)(*(_QWORD *)((char *)&CmpFreezeListLock.116 + 4) + 8LL) | 0xF0000000;
        *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(*(_QWORD *)((char *)&CmpFreezeListLock.116 + 4) + 8LL);
        dword_140FC9E78 = (unsigned __int16)NtBuildNumber;
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
