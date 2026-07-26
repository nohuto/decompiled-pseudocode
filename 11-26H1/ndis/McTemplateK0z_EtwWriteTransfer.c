/*
 * XREFs of McTemplateK0z_EtwWriteTransfer @ 0x140070190
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x140071F80 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140009290 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0z_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4)
{
  __int64 v4; // rax
  int v6; // eax
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    while ( a4[++v4] != 0 )
      ;
    v6 = 2 * v4 + 2;
  }
  else
  {
    v6 = 10;
  }
  v10 = v6;
  v11 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v9 = a4;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, (const GUID *)&NDIS_PROVIDER_ID, 2u, &v8);
}
