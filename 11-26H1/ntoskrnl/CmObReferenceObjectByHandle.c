/*
 * XREFs of CmObReferenceObjectByHandle @ 0x140C58340
 * Callers:
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14084E670 (CmOpenKeyForBugCheckRecovery.c)
 *     NtCompactKeys @ 0x14084E8F0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14084EBA0 (NtCompressKey.c)
 *     NtLockRegistryKey @ 0x14084F100 (NtLockRegistryKey.c)
 *     NtRenameKey @ 0x14084F890 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14084FD20 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x140850190 (NtSaveMergedKeys.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmLoadDifferencingKey @ 0x14097B3F0 (CmLoadDifferencingKey.c)
 *     NtDeleteValueKey @ 0x14097CD00 (NtDeleteValueKey.c)
 *     NtQueryMultipleValueKey @ 0x14097D340 (NtQueryMultipleValueKey.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14097F290 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtSaveKeyEx @ 0x140A754D0 (NtSaveKeyEx.c)
 *     NtRestoreKey @ 0x140A76FC0 (NtRestoreKey.c)
 *     NtDeleteKey @ 0x140AB2390 (NtDeleteKey.c)
 *     NtFlushKey @ 0x140AFFC30 (NtFlushKey.c)
 *     CmSaveKeyToBuffer @ 0x140C58010 (CmSaveKeyToBuffer.c)
 *     CmpOpenSystemDriverHiveContext @ 0x140D04CDC (CmpOpenSystemDriverHiveContext.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
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
