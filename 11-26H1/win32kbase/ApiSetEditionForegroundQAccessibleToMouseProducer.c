/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14018741C
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1400884A0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x1401494AC (EditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionForegroundQAccessibleToMouseProducer(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int (*v6)(void); // rax
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1259LL);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4512LL);
  if ( v6 && v6() >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(_QWORD *)a1;
    v11 = v9;
    return (unsigned int)EditionForegroundQAccessibleToMouseProducer(&v10, v7, a3);
  }
  return v3;
}
