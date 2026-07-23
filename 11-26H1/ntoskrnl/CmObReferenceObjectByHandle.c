/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140C5E340
 * Callers:
 *     CmpSaveBootControlSet @ 0x140852EC8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140854980 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x140854C00 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140854EB0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x140855410 (NtLockRegistryKey.c)
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14093D400 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14093ED10 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A7E1F0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A7FCE0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB0060 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140B018C0 (NtFlushKey.c)
 *     CmSaveKeyToBuffer @ 0x140C5E010 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D0AFAC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmObReferenceObjectByHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  struct _OBJECT_HANDLE_INFORMATION *v7; // rax
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v6 = a6;
  v7 = (struct _OBJECT_HANDLE_INFORMATION *)&v10;
  v10 = 0LL;
  Object = 0LL;
  if ( !a6 )
    v7 = 0LL;
  v8 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)CmKeyObjectType, a4, &Object, v7);
  if ( v8 < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    v8 = -1073741816;
LABEL_4:
    if ( Object )
      ObfDereferenceObject(Object);
    return (unsigned int)v8;
  }
  *a5 = Object;
  if ( v6 )
    *v6 = v10;
  return 0LL;
}
