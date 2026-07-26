/*
 * XREFs of ndisSriovInterfaceWriteVFConfig @ 0x140149C50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceWriteVFConfig(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void *Src,
        __int16 a3,
        int a4,
        size_t Size)
{
  const void *v6; // r13
  __int64 Pool2; // rax
  void *v10; // rdi
  unsigned int v11; // ebx
  struct _NDIS_OID_REQUEST v13; // [rsp+40h] [rbp-C0h] BYREF

  memset(&v13, 0, 248);
  v6 = Src;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Src) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Src,
      26,
      100,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(Size + 20), 1869169742LL);
  v10 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_BYTE *)(Pool2 + 1) = 1;
    *(_BYTE *)Pool2 = 0x80;
    *(_WORD *)(Pool2 + 2) = 20;
    *(_DWORD *)(Pool2 + 16) = 20;
    *(_WORD *)(Pool2 + 4) = a3;
    *(_DWORD *)(Pool2 + 8) = a4;
    *(_DWORD *)(Pool2 + 12) = Size;
    memmove((void *)(Pool2 + 20), v6, (unsigned int)Size);
    memset(&v13, 0, 0xF8uLL);
    *(_DWORD *)&v13.NdisReserved[16] |= 8u;
    *(_QWORD *)&v13.NdisReserved[32] = &ndisIntReqGeneric;
    EtwActivityIdControl(3u, (LPGUID)&v13.NdisReserved[96]);
    v13.Header = (NDIS_OBJECT_HEADER)15466902;
    v13.DATA.QUERY_INFORMATION.Oid = 66130;
    *(_QWORD *)&v13.RequestType = 1LL;
    v13.DATA.QUERY_INFORMATION.InformationBuffer = v10;
    v13.DATA.QUERY_INFORMATION.InformationBufferLength = Size + 20;
    v11 = ndisQuerySetMiniport(a1, 0LL, &v13, 0, 0LL);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x65u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v11);
  return v11;
}
