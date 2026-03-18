/*
 * XREFs of FreeOwnedObjects @ 0x14000DABC
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x14006D43C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006D664 (AMLIAddNamespaceOverride.c)
 *     ParseUnload @ 0x1400708B0 (ParseUnload.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x14000DBBC (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdi

  byte_14008EB40 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_14008EB40);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 56);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx(v5 + 120);
      else
        FreeNameSpaceObjects(v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
