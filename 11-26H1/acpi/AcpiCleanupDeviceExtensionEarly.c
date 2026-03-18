/*
 * XREFs of AcpiCleanupDeviceExtensionEarly @ 0x14005498C
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiCleanupDeviceExtensionEarly(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx

  v1 = *(_QWORD **)(a1 + 448);
  if ( v1 )
  {
    do
    {
      v3 = v1[5];
      if ( *(_QWORD **)(v3 + 8) != v1 + 5 || (v4 = (_QWORD *)v1[6], (_QWORD *)*v4 != v1 + 5) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      v1 = (_QWORD *)*v1;
    }
    while ( v1 );
    ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0x50706341u);
    *(_QWORD *)(a1 + 448) = 0LL;
  }
}
