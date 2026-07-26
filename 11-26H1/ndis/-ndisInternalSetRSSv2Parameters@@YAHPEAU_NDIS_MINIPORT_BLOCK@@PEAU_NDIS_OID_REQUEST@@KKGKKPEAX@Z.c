/*
 * XREFs of ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1400AF6DC
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400B0520 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14013ADB8 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisInternalSetRSSv2Parameters(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        unsigned int a6,
        unsigned int Size,
        void *Src)
{
  _BYTE v13[248]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v14[20]; // [rsp+120h] [rbp+20h] BYREF

  memset((char *)v14 + 1, 0, 0x43uLL);
  v14[6] = a5;
  v14[2] = a6;
  v14[3] = Size;
  v14[0] = 1835464;
  v14[1] = a3;
  v14[5] = a4;
  v14[4] = 28;
  if ( Src )
    memmove(&v14[7], Src, Size);
  memset(v13, 0, sizeof(v13));
  *(_DWORD *)&v13[88] |= 8u;
  *(_QWORD *)&v13[104] = &ndisIntReqGeneric;
  EtwActivityIdControl(3u, (LPGUID)&v13[168]);
  *(_DWORD *)&v13[8] = a2->PortNumber;
  *(_DWORD *)v13 = 16253590;
  *(_QWORD *)&v13[40] = v14;
  *(_DWORD *)&v13[244] = a2[1].RequestType;
  *(_DWORD *)&v13[236] = *(_DWORD *)(&a2->Reserved2 + 1);
  *(NDIS_OBJECT_HEADER *)&v13[240] = a2[1].Header;
  *(_DWORD *)&v13[32] = 66068;
  *(_DWORD *)&v13[4] = 1;
  *(_DWORD *)&v13[48] = 68;
  return ndisMInvokeBlockingOidRequest(a1, (struct _NDIS_OID_REQUEST *)v13);
}
