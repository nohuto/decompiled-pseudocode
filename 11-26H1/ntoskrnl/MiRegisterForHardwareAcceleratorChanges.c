/*
 * XREFs of MiRegisterForHardwareAcceleratorChanges @ 0x140D078C8
 * Callers:
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 *     MiInitializeHardwareAccelerators @ 0x140D0786C (MiInitializeHardwareAccelerators.c)
 * Callees:
 *     <none>
 */

__int64 MiRegisterForHardwareAcceleratorChanges()
{
  __int64 result; // rax
  _QWORD v1[4]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v2[3]; // [rsp+40h] [rbp-9h] BYREF
  int v3; // [rsp+58h] [rbp+Fh]
  int v4; // [rsp+5Ch] [rbp+13h]
  __int64 v5; // [rsp+60h] [rbp+17h]
  void (__fastcall *v6)(__int64); // [rsp+68h] [rbp+1Fh]
  __int64 v7; // [rsp+70h] [rbp+27h]
  __int64 v8; // [rsp+78h] [rbp+2Fh]
  __int64 v9; // [rsp+80h] [rbp+37h]
  __int64 v10; // [rsp+88h] [rbp+3Fh]
  __int64 v11; // [rsp+90h] [rbp+47h]

  v1[0] = 2097153LL;
  v1[1] = MM_ACCELERATOR_DATA_MOVER;
  v1[3] = PnpDriverObject;
  v1[2] = 0LL;
  result = AccelInitializeOffloadWorkspace(v1, &qword_140E366A8);
  if ( (int)result >= 0 )
  {
    v2[0] = 5767169LL;
    v10 = 0LL;
    v2[1] = qword_140E366A8;
    v2[2] = &GUID_ACCELERATOR_TYPE_DATA_MOVER;
    v6 = MmAcceleratorCallbackRoutine;
    v8 = 1114112LL;
    v7 = 0LL;
    v3 = 1;
    v4 = 1;
    v5 = 0LL;
    v9 = 0LL;
    v11 = 0LL;
    result = AccelAcquireResourcesAsync(v2);
    if ( (int)result < 0 )
    {
      result = AccelDestroyOffloadWorkspace(qword_140E366A8);
      qword_140E366A8 = 0LL;
    }
  }
  return result;
}
