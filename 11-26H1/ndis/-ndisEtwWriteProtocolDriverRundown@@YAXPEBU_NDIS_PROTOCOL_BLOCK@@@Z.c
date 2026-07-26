/*
 * XREFs of ?ndisEtwWriteProtocolDriverRundown@@YAXPEBU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140099748
 * Callers:
 *     ndisEtwRundownProtocolDrivers @ 0x140098FCC (ndisEtwRundownProtocolDrivers.c)
 * Callees:
 *     McTemplateK0wwuuuuqj_EtwWriteTransfer @ 0x140099878 (McTemplateK0wwuuuuqj_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall ndisEtwWriteProtocolDriverRundown(const struct _NDIS_PROTOCOL_BLOCK *a1)
{
  const wchar_t *v2; // r10
  unsigned int ProtocolBindFlags; // r8d
  unsigned __int16 v4; // r9
  wchar_t *v5; // r11
  unsigned __int16 v6; // cx
  wchar_t *Buffer; // rax
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rax
  __int128 v9; // [rsp+70h] [rbp-28h] BYREF

  v2 = L"NULL";
  ProtocolBindFlags = 0;
  v4 = 4;
  v5 = L"NULL";
  v6 = 4;
  Buffer = a1->Name.Buffer;
  v9 = 0LL;
  if ( Buffer )
  {
    v2 = Buffer;
    v4 = a1->Name.Length >> 1;
  }
  if ( a1->ImageName.Buffer )
  {
    v5 = a1->ImageName.Buffer;
    v6 = a1->ImageName.Length >> 1;
  }
  p = a1->Bind._p;
  if ( p )
    ProtocolBindFlags = p->_t.ProtocolBindFlags;
  if ( (byte_14011D046 & 8) != 0 )
    McTemplateK0wwuuuuqj_EtwWriteTransfer(
      v6,
      (_DWORD)a1,
      ProtocolBindFlags,
      v4,
      (__int64)v2,
      v6,
      (__int64)v5,
      a1->MajorNdisVersion,
      a1->MinorNdisVersion,
      a1->MajorDriverVersion,
      a1->MinorDriverVersion,
      ProtocolBindFlags,
      (__int64)&v9);
}
