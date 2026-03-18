/*
 * XREFs of ?ReportMuxGpuChild@DISPLAY_MUX_PAIRING@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x14008F0F0
 * Callers:
 *     ?ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GPU_TYPE@@@Z @ 0x14008EF90 (-ReportMuxGpuChild@DISPLAY_MUX_MGR@@QEAAJPEBU_DISPLAYCONFIG_DISPLAYMUX_ADAPTER_SUPPORT@@W4MUX_GP.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ @ 0x14008AF18 (-CheckForNewMuxPairing@DISPLAY_MUX_PAIRING@@AEAAJXZ.c)
 *     ?DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA?AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z @ 0x14008BCA0 (-DoesGpuChildMatchMuxTargets@DISPLAY_MUX_DEVICE@@QEAA-AW4MUX_GPU_CHILD@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ @ 0x14008CDA8 (-IsOperational@DISPLAY_MUX_PAIRING@@AEBA_NXZ.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x14008F658 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::ReportMuxGpuChild(__int64 a1, _OWORD *a2, int a3)
{
  __int64 v6; // rdx
  __int64 result; // rax
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  int DoesGpuChildMatchMuxTargets; // eax
  void **v11; // rdi
  __int64 v12; // rax
  const wchar_t *v13; // r9
  __int64 v14; // rax
  void *v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  struct _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF

  if ( !DISPLAY_MUX_PAIRING::IsOperational((DISPLAY_MUX_PAIRING *)a1) )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225534LL;
    WdLogGlobalForLineNumber = 1921;
    return result;
  }
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(v6 + 224));
  v8 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  if ( v8 < 0 )
  {
    WdLogSingleEntry0(2LL);
    v9 = 13LL;
    WdLogGlobalForLineNumber = 1933;
LABEL_24:
    DISPLAY_MUX_PAIRING::SetPairingStatus(a1, v9);
    goto LABEL_25;
  }
  DoesGpuChildMatchMuxTargets = DISPLAY_MUX_DEVICE::DoesGpuChildMatchMuxTargets(
                                  *(const UNICODE_STRING **)(a1 + 8),
                                  &UnicodeString);
  if ( DoesGpuChildMatchMuxTargets == 1 )
  {
    v11 = (void **)(a1 + 16);
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_12;
    WdLogSingleEntry0(1LL);
    v12 = 1943LL;
    v13 = L"!m_pGpuChild1";
    goto LABEL_11;
  }
  if ( DoesGpuChildMatchMuxTargets != 2 )
  {
    v8 = -1073741823;
    v9 = 7LL;
    goto LABEL_24;
  }
  v11 = (void **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    WdLogSingleEntry0(1LL);
    v12 = 1951LL;
    v13 = L"!m_pGpuChild2";
LABEL_11:
    WdLogGlobalForLineNumber = v12;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_12:
  v14 = operator new(0x16CuLL, 0x4B677844u, 256LL);
  if ( v14 )
    *(_BYTE *)(v14 + 360) = 0;
  v15 = *v11;
  *v11 = (void *)v14;
  if ( v15 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v15);
  v16 = *v11;
  if ( !*v11 )
  {
    v8 = -1073741801;
    v9 = 10LL;
    goto LABEL_24;
  }
  v17 = 2LL;
  *v16 = a3;
  v18 = v16 + 1;
  do
  {
    *v18 = *a2;
    v18[1] = a2[1];
    v18[2] = a2[2];
    v18[3] = a2[3];
    v18[4] = a2[4];
    v18[5] = a2[5];
    v18[6] = a2[6];
    v18 += 8;
    v19 = a2[7];
    a2 += 8;
    *(v18 - 1) = v19;
    --v17;
  }
  while ( v17 );
  *v18 = *a2;
  v18[1] = a2[1];
  v18[2] = a2[2];
  v18[3] = a2[3];
  v18[4] = a2[4];
  v18[5] = a2[5];
  *((_DWORD *)v18 + 24) = *((_DWORD *)a2 + 24);
  v8 = DISPLAY_MUX_PAIRING::CheckForNewMuxPairing((DISPLAY_MUX_PAIRING *)a1);
  if ( v8 >= 0 )
  {
    RtlFreeUnicodeString(&UnicodeString);
    return 0LL;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 1985;
LABEL_25:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
