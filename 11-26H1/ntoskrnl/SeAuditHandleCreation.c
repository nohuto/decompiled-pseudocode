/*
 * XREFs of SeAuditHandleCreation @ 0x14091F860
 * Callers:
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcessId @ 0x14044EE20 (PsGetCurrentThreadProcessId.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x140728740 (ZwDuplicateObject.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14090AD10 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091FB0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409202F8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140920410 (SepAdtClassifyObjectIntoSubCategory.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

void __fastcall SeAuditHandleCreation(__int64 a1, void *a2, void *a3)
{
  __int64 v3; // r14
  void *v4; // rdi
  PVOID v6; // rsi
  __int64 v7; // r8
  unsigned __int16 v8; // r12
  unsigned __int64 CurrentThreadProcessId; // rsi
  char v10; // di
  int v11; // edx
  HANDLE TargetHandle; // [rsp+E0h] [rbp+8h] BYREF
  void *v13; // [rsp+E8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+F0h] [rbp+18h] BYREF

  v13 = a2;
  v3 = *(_QWORD *)(a1 + 72);
  TargetHandle = 0LL;
  v4 = a3;
  v6 = 0LL;
  if ( !a3 )
  {
    v4 = *(void **)(v3 + 56);
    if ( !v4 )
      v4 = *(void **)(a1 + 64);
  }
  if ( *(_BYTE *)(a1 + 9) )
  {
    if ( *(_BYTE *)(a1 + 124) )
    {
      SepAdtPrivilegeObjectAuditAlarm(
        &SeSubsystemName,
        (unsigned __int16 *)(a1 + 144),
        (unsigned __int16 *)(a1 + 128),
        (__int64)a2,
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 48),
        *(_QWORD *)(a1 + 56),
        *(_DWORD *)(a1 + 20),
        *(unsigned int **)v3,
        1u);
      *(_BYTE *)(a1 + 10) = 0;
      return;
    }
  }
  else if ( !*(_BYTE *)(v3 + 216) )
  {
    *(_BYTE *)(a1 + 10) = 0;
    return;
  }
  if ( ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0x200u, 2u) >= 0 )
  {
    Object = 0LL;
    ObReferenceObjectByHandle(TargetHandle, 0, 0LL, 0, &Object, 0LL);
    v6 = Object;
  }
  LOBYTE(v7) = 1;
  v8 = SepAdtClassifyObjectIntoSubCategory(v6, a1 + 144, v7, 0LL);
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( TargetHandle )
  {
    ZwClose(TargetHandle);
    TargetHandle = 0LL;
  }
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  v10 = SepAdtOpenObjectAuditAlarm(
          v8,
          (int)&SeSubsystemName,
          (int)&v13,
          (int)a1 + 144,
          a1 + 128,
          v4,
          *(_QWORD *)(a1 + 32),
          *(_QWORD *)(a1 + 48),
          *(_DWORD *)(a1 + 24),
          *(_DWORD *)(a1 + 20),
          *(_QWORD *)v3,
          1,
          CurrentThreadProcessId,
          2,
          0LL,
          0,
          0LL,
          v3 + 32,
          a1);
  SepAdtStagingEvent(
    v8,
    v11,
    (unsigned int)&v13,
    a1 + 144,
    a1 + 128,
    *(_QWORD *)(a1 + 32),
    *(_QWORD *)(a1 + 48),
    *(_DWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 20),
    1,
    CurrentThreadProcessId,
    a1);
  *(_BYTE *)(a1 + 10) = v10;
}
