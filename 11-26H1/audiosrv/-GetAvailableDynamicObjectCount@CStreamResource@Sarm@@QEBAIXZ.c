/*
 * XREFs of ?GetAvailableDynamicObjectCount@CStreamResource@Sarm@@QEBAIXZ @ 0x180127CDC
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180127A6C (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180061260 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z @ 0x1800ACD58 (-GetAvailableDynamicObjectCount@CEndpointResourcePool@Sarm@@QEBAJAEAI@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall Sarm::CStreamResource::GetAvailableDynamicObjectCount(Sarm::CEndpointResourcePool **this)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp-19h] BYREF
  Sarm::CEndpointResourcePool *v5; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  Sarm::CEndpointResourcePool **v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  char *v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  unsigned int *v11; // [rsp+80h] [rbp+37h]
  __int64 v12; // [rsp+88h] [rbp+3Fh]

  v4 = 0;
  Sarm::CEndpointResourcePool::GetAvailableDynamicObjectCount(this[1], &v4);
  v2 = v4;
  if ( (unsigned int)dword_1801D32B0 > 5 )
  {
    v5 = this[5];
    v9 = (char *)(this + 2);
    v11 = &v4;
    v7 = &v5;
    v12 = 4LL;
    v10 = 16LL;
    v8 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1801D32B0, byte_1801A8105, 0LL, 0LL, 5u, &v6);
  }
  return v2;
}
