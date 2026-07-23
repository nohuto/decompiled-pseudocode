/*
 * XREFs of PopFxDestroyDeviceDpm @ 0x1404E8E74
 * Callers:
 *     PoFxUnregisterDevice @ 0x140B083A0 (PoFxUnregisterDevice.c)
 *     PopFxUnregisterDevice @ 0x140B08758 (PopFxUnregisterDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     PopFxDestroyDeviceCommon @ 0x1404E8FC0 (PopFxDestroyDeviceCommon.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxDestroyDeviceDpm(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  __int64 i; // rsi
  __int64 v10; // rbp
  void *v11; // rcx

  v4 = *(void **)(a2 + 104);
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x78466F50u);
  v5 = *(void **)(a2 + 96);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x78466F50u);
  if ( a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x78466F50u);
  v6 = *(IRP **)(a2 + 16);
  if ( v6 )
    IoFreeIrp(v6);
  v7 = *(void **)(a2 + 1240);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4D584650u);
  if ( *(_QWORD *)(a2 + 872) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 868); i = (unsigned int)(i + 1) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 872) + 8 * i);
      v11 = *(void **)(v10 + 424);
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x4D584650u);
        *(_QWORD *)(v10 + 424) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a2 + 872), 0x4D584650u);
    *(_QWORD *)(a2 + 872) = 0LL;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  if ( a1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFBF);
  return PopFxDestroyDeviceCommon((PVOID)a2);
}
