/*
 * XREFs of LogSetTimingSourceMask @ 0x1403F6D9C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x140067AEC (McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

NTSTATUS __fastcall LogSetTimingSourceMask(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int CurrentProcessSessionId; // eax
  NTSTATUS result; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD v13[5]; // [rsp+B0h] [rbp-80h] BYREF

  memset(v13, 0, 0x48uLL);
  v13[0] = 0x480000002DuLL;
  LOBYTE(v13[3]) = *a2;
  BYTE1(v13[3]) = a2[4];
  BYTE2(v13[3]) = a2[8];
  BYTE3(v13[3]) = a2[12];
  BYTE4(v13[3]) = a2[20];
  BYTE5(v13[3]) = a2[24];
  BYTE6(v13[3]) = a2[28];
  BYTE7(v13[3]) = a2[32];
  BYTE8(v13[3]) = a2[40];
  BYTE9(v13[3]) = a2[48];
  BYTE10(v13[3]) = a2[56];
  BYTE11(v13[3]) = a2[60];
  BYTE12(v13[3]) = a2[68];
  BYTE13(v13[3]) = a2[72];
  BYTE14(v13[3]) = a2[152];
  HIBYTE(v13[3]) = a2[156];
  LOBYTE(v13[4]) = a2[52];
  memset(&v13[1], 0, 28);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4, v6, v7);
  result = DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13, CurrentProcessSessionId);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    return McTemplateK0pqqqqqqqqqqqqqqqqq_EtwWriteTransfer(
             v11,
             v10,
             v12,
             a1,
             *(_DWORD *)a2,
             *((_DWORD *)a2 + 1),
             *((_DWORD *)a2 + 2),
             *((_DWORD *)a2 + 3),
             *((_DWORD *)a2 + 5),
             *((_DWORD *)a2 + 6),
             *((_DWORD *)a2 + 7),
             *((_DWORD *)a2 + 8),
             *((_DWORD *)a2 + 10),
             *((_DWORD *)a2 + 12),
             *((_DWORD *)a2 + 14),
             *((_DWORD *)a2 + 15),
             *((_DWORD *)a2 + 17),
             *((_DWORD *)a2 + 18),
             *((_DWORD *)a2 + 38),
             *((_DWORD *)a2 + 39),
             *((_DWORD *)a2 + 13));
  return result;
}
