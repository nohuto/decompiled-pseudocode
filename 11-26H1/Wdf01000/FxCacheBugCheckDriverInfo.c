/*
 * XREFs of FxCacheBugCheckDriverInfo @ 0x140083A5C
 * Callers:
 *     FxInitialize @ 0x14006C484 (FxInitialize.c)
 * Callees:
 *     memmove @ 0x1400AD500 (memmove.c)
 */

void __fastcall FxCacheBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // si
  int v3; // ebp
  void *Pool2; // rax
  void *v5; // rdi
  PVOID v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // r8
  _WDF_BIND_INFO *WdfBindInfo; // rax

  FxDriverGlobals->BugCheckDriverInfoIndex = 0;
  if ( qword_1400C9030 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1400C9010);
    if ( dword_1400C9028 >= dword_1400C902C )
    {
      if ( dword_1400C902C > 0x23F )
        goto $Done_44;
      v3 = dword_1400C902C + 10;
      Pool2 = (void *)ExAllocatePool2(64LL, 56LL * (dword_1400C902C + 10), 1917089862LL);
      v5 = Pool2;
      if ( !Pool2 )
        goto $Done_44;
      memmove(Pool2, qword_1400C9030, 56LL * dword_1400C902C);
      v6 = qword_1400C9030;
      qword_1400C9030 = v5;
      dword_1400C902C = v3;
      ExFreePoolWithTag(v6, 0);
    }
    v7 = qword_1400C9030;
    v8 = 56LL * dword_1400C9028;
    *(_QWORD *)((char *)qword_1400C9030 + v8) = FxDriverGlobals;
    WdfBindInfo = FxDriverGlobals->WdfBindInfo;
    *(_QWORD *)&v7[v8 + 8] = *(_QWORD *)&WdfBindInfo->Version.Major;
    *(_DWORD *)&v7[v8 + 16] = WdfBindInfo->Version.Build;
    *(_OWORD *)&v7[v8 + 20] = *(_OWORD *)FxDriverGlobals->Public.DriverName;
    *(_OWORD *)&v7[v8 + 36] = *(_OWORD *)&FxDriverGlobals->Public.DriverName[16];
    v7[v8 + 51] = 0;
    FxDriverGlobals->BugCheckDriverInfoIndex = dword_1400C9028++;
$Done_44:
    KeReleaseSpinLock(&qword_1400C9010, v2);
  }
}
