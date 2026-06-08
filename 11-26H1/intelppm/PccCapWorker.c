/*
 * XREFs of PccCapWorker @ 0x14000FA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ProcLibCapChange @ 0x1400436DC (ProcLibCapChange.c)
 *     RegisterKernelCap @ 0x140044C90 (RegisterKernelCap.c)
 */

void __fastcall PccCapWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  char v5; // bl

  do
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_140019820);
    v2 = qword_140019228;
    LOBYTE(word_140019834) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_140019820);
    do
    {
      v3 = *(unsigned int **)(v2 - 40);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1400191A8,
        0LL);
      if ( v4 != v3[185] )
      {
        ProcLibCapChange(v3, v3[116], v3[128], v4);
        RegisterKernelCap(v3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1400191A8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        qword_140019820);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        qword_140019820);
    }
    while ( (__int64 *)v2 != &qword_140019228 );
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_140019820);
    if ( !(_BYTE)word_140019834 )
    {
      word_140019834 = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_140019820);
  }
  while ( v5 );
}
