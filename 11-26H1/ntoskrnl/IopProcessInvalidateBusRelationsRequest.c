/*
 * XREFs of IopProcessInvalidateBusRelationsRequest @ 0x140B3BC20
 * Callers:
 *     IoInvalidateBusRelationsWorker @ 0x1404E84A0 (IoInvalidateBusRelationsWorker.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PiPdcActivate @ 0x140A1987C (PiPdcActivate.c)
 */

__int64 __fastcall IopProcessInvalidateBusRelationsRequest(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    result = *(_QWORD *)(result + 312);
    v3 = *(_QWORD *)(result + 40);
    if ( v3 )
    {
      v4 = *(_DWORD *)(a1 + 24);
      v5 = *(_QWORD *)(v3 + 48);
      v6 = L"BusScan";
      v9[1] = 0LL;
      if ( v4 )
        v6 = L"SingleBusScan";
      v7 = PiPdcActivate((__int64)v6, v5);
      v8 = *(void **)(a1 + 16);
      v9[0] = v7;
      return PnpRequestDeviceAction(v8, 9 - (unsigned int)(v4 != 0), 0, v9, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
