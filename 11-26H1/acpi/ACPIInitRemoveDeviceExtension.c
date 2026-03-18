/*
 * XREFs of ACPIInitRemoveDeviceExtension @ 0x14001C148
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 * Callees:
 *     ACPIInternalMoveList @ 0x140039EE8 (ACPIInternalMoveList.c)
 *     ACPICleanDeviceDependenciesWithTreeLock @ 0x140048088 (ACPICleanDeviceDependenciesWithTreeLock.c)
 *     ACPIInitDeleteDeviceExtension @ 0x140061CBC (ACPIInitDeleteDeviceExtension.c)
 */

__int64 __fastcall ACPIInitRemoveDeviceExtension(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  char v10; // al
  __int64 result; // rax
  char v12; // al
  void *v13; // rcx

  v1 = a1 + 102;
  v3 = a1[102];
  if ( *(_QWORD **)(v3 + 8) != a1 + 102 )
    goto LABEL_12;
  v4 = (_QWORD *)a1[103];
  if ( (_QWORD *)*v4 != v1 )
    goto LABEL_12;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  v1[1] = v1;
  *v1 = v1;
  ACPICleanDeviceDependenciesWithTreeLock(a1);
  v5 = a1 + 106;
  v6 = a1[106];
  if ( *(_QWORD **)(v6 + 8) != a1 + 106 || (v7 = (_QWORD *)a1[107], (_QWORD *)*v7 != v5) )
LABEL_12:
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v8 = a1 + 104;
  a1[107] = a1 + 106;
  *v5 = v5;
  if ( (_QWORD *)*v8 != v8 )
    ACPIInternalMoveList(v8, &AcpiUnresolvedEjectList);
  v9 = a1[99];
  a1[99] = 0LL;
  v10 = AcpiSurpriseRemovedIndex + 1;
  AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = a1;
  result = v10 & 0x1F;
  AcpiSurpriseRemovedIndex = result;
  while ( 1 )
  {
    v13 = (void *)v9;
    if ( !v9 )
      break;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 732), 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      break;
    v9 = *(_QWORD *)(v9 + 792);
    v12 = AcpiSurpriseRemovedIndex + 1;
    AcpiSurpriseRemovedDeviceExtensions[AcpiSurpriseRemovedIndex] = v13;
    AcpiSurpriseRemovedIndex = v12 & 0x1F;
    result = ACPIInitDeleteDeviceExtension(v13);
  }
  return result;
}
