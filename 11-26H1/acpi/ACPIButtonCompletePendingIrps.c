/*
 * XREFs of ACPIButtonCompletePendingIrps @ 0x14002F914
 * Callers:
 *     ACPIButtonEvent @ 0x14002F6EC (ACPIButtonEvent.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiDiagTraceButtonIrpCompletion @ 0x14002FA8C (AcpiDiagTraceButtonIrpCompletion.c)
 */

char __fastcall ACPIButtonCompletePendingIrps(ULONG_PTR a1, unsigned int a2)
{
  char v4; // di
  __int64 DeviceExtension; // r14
  KIRQL v6; // al
  __int64 *v7; // r8
  KIRQL v8; // r9
  __int64 v9; // rax
  __int64 **v10; // rcx
  __int64 **v11; // rax
  __int64 *v12; // rdx
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  IRP *v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v19; // [rsp+28h] [rbp-10h]

  v4 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v19 = (__int64 *)&v18;
  v18 = &v18;
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v7 = (__int64 *)AcpiButtonList;
  v8 = v6;
  while ( v7 != &AcpiButtonList )
  {
    v12 = v7;
    v7 = (__int64 *)*v7;
    if ( *(_QWORD *)(v12[2] + 40) == a1 && _InterlockedExchange64(v12 - 8, 0LL) )
    {
      *(_DWORD *)*(v12 - 18) = a2;
      *((_DWORD *)v12 - 30) = 0;
      *(v12 - 14) = 4LL;
      v9 = *v12;
      if ( *(__int64 **)(*v12 + 8) != v12
        || (v10 = (__int64 **)v12[1], *v10 != v12)
        || (*v10 = (__int64 *)v9, *(_QWORD *)(v9 + 8) = v10, v11 = (__int64 **)v19, (_QWORD **)*v19 != &v18) )
      {
LABEL_16:
        __fastfail(3u);
      }
      v12[1] = (__int64)v19;
      *v12 = (__int64)&v18;
      *v11 = v12;
      v19 = v12;
    }
  }
  KeReleaseSpinLock(&AcpiButtonLock, v8);
  v13 = v18;
  while ( v13 != &v18 )
  {
    v14 = v13;
    v15 = (IRP *)(v13 - 21);
    v13 = (_QWORD *)*v13;
    if ( (_QWORD *)v13[1] != v14 )
      goto LABEL_16;
    v16 = (_QWORD *)v14[1];
    if ( (_QWORD *)*v16 != v14 )
      goto LABEL_16;
    *v16 = v13;
    v13[1] = v16;
    IofCompleteRequest(v15, 0);
    v4 = 1;
    AcpiDiagTraceButtonIrpCompletion(DeviceExtension, a2, v15);
  }
  return v4;
}
