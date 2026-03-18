/*
 * XREFs of ACPIPccInterruptBuildDeviceExtension @ 0x1400651B0
 * Callers:
 *     ACPIPccInterruptSubspaceInitialize @ 0x1400B2C6C (ACPIPccInterruptSubspaceInitialize.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall ACPIPccInterruptBuildDeviceExtension(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  int v6; // edi
  __int64 v7; // rbx
  _BYTE *Pool2; // rax
  unsigned int v10; // r8d
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v11 = 0LL;
  v5 = v4;
  v6 = ACPIBuildDeviceExtension(0LL, a1, &v11);
  if ( v6 >= 0 )
  {
    v7 = v11;
    if ( v11 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x18000000320000uLL);
      *(_QWORD *)(v7 + 184) = a2;
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, 14LL, 1399874369LL);
      *(_QWORD *)(v7 + 608) = Pool2;
      if ( Pool2 )
      {
        v10 = AcpiPccPlatformInterruptCount;
        qmemcpy(Pool2, "ACPI\\PccInt", 11);
        Pool2[13] = 0;
        Pool2[11] = v10 / 0x1A + 65;
        Pool2[12] = v10 % 0x1A + 65;
        _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0xA00000000000uLL);
        ACPIInitReferenceDeviceExtension(v7);
        goto LABEL_6;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      v6 = -1073741670;
    }
  }
  v7 = 0LL;
LABEL_6:
  *(_QWORD *)(a2 + 32) = v7;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  return (unsigned int)v6;
}
