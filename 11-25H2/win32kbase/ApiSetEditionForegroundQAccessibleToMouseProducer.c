/*
 * XREFs of ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14019526C
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14018F280 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     EditionForegroundQAccessibleToMouseProducer @ 0x14010ADE0 (EditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionForegroundQAccessibleToMouseProducer(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int (*v6)(void); // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v3 = 0;
  if ( *(_DWORD *)(a1 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1258LL);
  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4960LL);
  if ( v6 && v6() >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v10 = *(_QWORD *)a1;
    v11 = v8;
    return (unsigned int)EditionForegroundQAccessibleToMouseProducer(&v10, v7, a3);
  }
  return v3;
}
