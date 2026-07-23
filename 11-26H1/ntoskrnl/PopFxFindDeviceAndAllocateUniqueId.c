/*
 * XREFs of PopFxFindDeviceAndAllocateUniqueId @ 0x140B1E67C
 * Callers:
 *     PoFxPrepareDevice @ 0x14049B394 (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxQueryBiosDeviceName @ 0x1404DC320 (PopFxQueryBiosDeviceName.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8 (PopFxFindAcpiDeviceByUniqueId.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxFindDeviceAndAllocateUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  struct _KLOCK_ENTRIES *v5; // r9
  UNICODE_STRING v6; // xmm0
  unsigned int v7; // ebx
  int AcpiDeviceByUniqueId; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  P = 0LL;
  if ( PopFxQueryBiosDeviceName(a1, (__int64)&P) < 0 )
  {
    v6 = *(UNICODE_STRING *)(a1 + 40);
LABEL_3:
    *(UNICODE_STRING *)(a1 + 128) = v6;
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(&P, &v11, v4, v5);
  v7 = AcpiDeviceByUniqueId;
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    *(UNICODE_STRING *)(a1 + 128) = P;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0x2000u);
    goto LABEL_4;
  }
  if ( AcpiDeviceByUniqueId != -1073741738 )
  {
    v6 = P;
    goto LABEL_3;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x4D584650u);
LABEL_5:
  *a2 = v11;
  return v7;
}
