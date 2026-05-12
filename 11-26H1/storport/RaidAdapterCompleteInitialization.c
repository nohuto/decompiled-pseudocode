/*
 * XREFs of RaidAdapterCompleteInitialization @ 0x140060120
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     IsDmarEnabled @ 0x14001CD00 (IsDmarEnabled.c)
 *     RaFreeRaidResources @ 0x14001CE40 (RaFreeRaidResources.c)
 *     RaInitializeRaidResources @ 0x1400251C0 (RaInitializeRaidResources.c)
 *     StorGetActiveGatewayCountRequired @ 0x140025764 (StorGetActiveGatewayCountRequired.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 *     RaInitializePower @ 0x14005872C (RaInitializePower.c)
 *     McTemplateK0qqqqzjzquqxxqd_EtwWriteTransfer @ 0x14005EFB4 (McTemplateK0qqqqzjzquqxxqd_EtwWriteTransfer.c)
 *     McTemplateK0qzzuqqqqqqd_EtwWriteTransfer @ 0x14005F374 (McTemplateK0qzzuqqqqqqd_EtwWriteTransfer.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x140061070 (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     StorUpdateIoGatewayWaterMarks @ 0x14006F2F0 (StorUpdateIoGatewayWaterMarks.c)
 *     RaidQueryPciDeviceType @ 0x140095A54 (RaidQueryPciDeviceType.c)
 *     StorCreateSymbolicLink @ 0x140096CB4 (StorCreateSymbolicLink.c)
 *     StorCreateIoGateways @ 0x1400AEDA8 (StorCreateIoGateways.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall RaidAdapterCompleteInitialization(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // r14d
  int v4; // r15d
  __int64 v5; // rax
  _DWORD *v6; // rsi
  bool v7; // zf
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int IoGateways; // edi
  __int64 v12; // r8
  unsigned int ActiveGatewayCountRequired; // eax
  __int64 v14; // r8
  ULONG v15; // r13d
  unsigned int v16; // r12d
  unsigned int v17; // eax
  __int64 v18; // r9
  unsigned int v19; // edx
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // esi
  const wchar_t *v27; // rdx
  const wchar_t *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v33; // [rsp+38h] [rbp-D8h]
  int v34; // [rsp+48h] [rbp-C8h]
  char v35; // [rsp+90h] [rbp-80h] BYREF
  ULONG v36; // [rsp+94h] [rbp-7Ch] BYREF
  __int64 v37; // [rsp+98h] [rbp-78h] BYREF
  int v38; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-68h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-30h]
  __int64 v43; // [rsp+E8h] [rbp-28h]
  ULONG *v44; // [rsp+F0h] [rbp-20h]
  __int64 v45; // [rsp+F8h] [rbp-18h]
  char v46[16]; // [rsp+100h] [rbp-10h] BYREF
  char *v47; // [rsp+110h] [rbp+0h]
  __int64 v48; // [rsp+118h] [rbp+8h]
  char v49[16]; // [rsp+120h] [rbp+10h] BYREF
  int *v50; // [rsp+130h] [rbp+20h]
  __int64 v51; // [rsp+138h] [rbp+28h]
  __int64 *v52; // [rsp+140h] [rbp+30h]
  __int64 v53; // [rsp+148h] [rbp+38h]
  __int64 *v54; // [rsp+150h] [rbp+40h]
  __int64 v55; // [rsp+158h] [rbp+48h]
  __int64 *v56; // [rsp+160h] [rbp+50h]
  __int64 v57; // [rsp+168h] [rbp+58h]

  v1 = *(_DWORD *)a1;
  v2 = 0;
  v36 = 0;
  v4 = 0;
  if ( v1 == 1314275652 )
  {
    v5 = a1 + 274;
    v6 = (_DWORD *)(a1 + 316);
  }
  else
  {
    v7 = v1 == 1094997074;
    v5 = a1 + 482;
    if ( !v7 )
      v5 = 98LL;
    v6 = (_DWORD *)(a1 + 524);
  }
  v8 = ((*v6 + 7) & 0xFFFFFFF8) + 1200;
  if ( *(_BYTE *)v5 == 1 )
  {
    v4 = (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x80u) != 0 ? 224 : 184;
    v8 += v4;
  }
  IoGateways = StorCreateIoGateways(a1);
  if ( IoGateways < 0 )
  {
    *(_DWORD *)(a1 + 6252) = 13;
    goto LABEL_43;
  }
  ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(a1, &v36);
  v15 = v36;
  v16 = ActiveGatewayCountRequired;
  v17 = *(_DWORD *)(a1 + 1036);
  if ( v16 > v17 )
  {
    if ( (byte_140173446 & 0x20) != 0 )
      McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
        v10,
        &EventTooManyActiveGatewayRequired,
        v14,
        *(_DWORD *)(a1 + 56),
        *(const wchar_t **)(a1 + 4792),
        *(const wchar_t **)(a1 + 4784),
        *(_BYTE *)(a1 + 4435),
        v33,
        v36,
        v34,
        v17,
        v16,
        0,
        0);
    v16 = *(_DWORD *)(a1 + 1036);
  }
  v12 = 0LL;
  v36 = 0;
  if ( !v16 )
    goto LABEL_42;
  do
  {
    v18 = *(_QWORD *)(a1 + 8);
    v19 = *(_DWORD *)(a1 + 588);
    v20 = *(_BYTE *)(a1 + 4434);
    v37 = 320LL * v2;
    IoGateways = RaInitializeRaidResources(*(_QWORD *)(a1 + 1024) + v37, v19, v8, v18, v20, v4);
    if ( IoGateways < 0 )
      break;
    StorUpdateIoGatewayWaterMarks(*(_QWORD *)(a1 + 1024) + v37);
    v36 = ++v2;
  }
  while ( v2 < v16 );
  if ( !v2 )
  {
LABEL_42:
    *(_DWORD *)(a1 + 6252) = 14;
    if ( IoGateways >= 0 )
      goto LABEL_47;
    goto LABEL_43;
  }
  if ( v2 != v16 && (byte_140173446 & 0x20) != 0 )
    McTemplateK0qzzuqqqqqqd_EtwWriteTransfer(
      v10,
      &EventInsufficientGatewayInitialized,
      v12,
      *(_DWORD *)(a1 + 56),
      *(const wchar_t **)(a1 + 4792),
      *(const wchar_t **)(a1 + 4784),
      *(_BYTE *)(a1 + 4435),
      v33,
      v15,
      v34,
      *(_DWORD *)(a1 + 1036),
      v16,
      v2,
      IoGateways);
  *(_DWORD *)(a1 + 1032) = v2;
  *(_DWORD *)(a1 + 1040) = (v2 + v15 - 1 - (v2 + v15 - 1) % v36) / v2;
  if ( v2 > 1 )
  {
    RaidAdapterEnableIoResourceAutoReclaim(a1, 0LL);
    if ( *(_QWORD *)(a1 + 5024) )
    {
      v21 = *(unsigned int *)(a1 + 1032);
      *(_QWORD *)(a1 + 6136) = 0LL;
      if ( (unsigned int)v21 > 1 )
        *(_QWORD *)(a1 + 6136) = RaidAllocatePool(64LL, 24 * v21, 1095197010LL, *(_QWORD *)(a1 + 8));
    }
  }
  if ( *(_BYTE *)(a1 + 4434) )
  {
    if ( !(unsigned __int8)RaidIsDmaInitialized(a1 + 896) )
    {
      IoGateways = RaidInitializeDma(v22, *(_QWORD *)(a1 + 32), a1 + 384);
      if ( IoGateways < 0 )
      {
        *(_DWORD *)(a1 + 6252) = 15;
        goto LABEL_43;
      }
    }
  }
  v23 = *(_QWORD *)(a1 + 8);
  v24 = *(_DWORD *)(a1 + 432);
  if ( v24 > *(_DWORD *)(v23 + 152) )
    *(_DWORD *)(v23 + 152) = v24;
  IoGateways = StorCreateSymbolicLink((PUNICODE_STRING)(a1 + 40));
  if ( IoGateways < 0 )
  {
    *(_DWORD *)(a1 + 6252) = 16;
LABEL_43:
    if ( *(_DWORD *)(a1 + 1032) )
    {
      v26 = 0;
      do
        RaFreeRaidResources(*(_QWORD *)(a1 + 1024) + 320LL * v26++, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4434));
      while ( v26 < *(_DWORD *)(a1 + 1032) );
      *(_DWORD *)(a1 + 1032) = 0;
    }
    goto LABEL_47;
  }
  v25 = *(_QWORD *)(a1 + 608);
  *(_DWORD *)(a1 + 5844) = -1;
  if ( *(_DWORD *)(v25 + 4) == 5 && (int)RaidQueryPciDeviceType(*(_QWORD *)(a1 + 32), a1 + 5844) < 0 )
    *(_DWORD *)(a1 + 5844) = -2;
  RaInitializePower(a1, v9);
  *(_BYTE *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 344) = 1;
  *(_QWORD *)(a1 + 348) = 1LL;
  if ( RaMiniportIsFeatureSupported(a1 + 376, 14)
    && *(int *)(a1 + 604) < 0
    && !IsDmarEnabled(a1)
    && (*(_BYTE *)(a1 + 4435) & 0x20) != 0
    && ForwardedIoEnabled )
  {
    *(_BYTE *)(a1 + 112) |= 2u;
  }
LABEL_47:
  if ( (byte_140173446 & 0x20) != 0 )
    McTemplateK0qqqqzjzquqxxqd_EtwWriteTransfer(
      a1 + 5128,
      v9,
      v12,
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 952),
      *(_DWORD *)(a1 + 960),
      *(_DWORD *)(a1 + 964),
      *(const wchar_t **)(a1 + 4792),
      a1 + 5128,
      *(const wchar_t **)(a1 + 4784),
      *(_DWORD *)(a1 + 4340),
      *(_BYTE *)(a1 + 4435),
      *(_DWORD *)(a1 + 588),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112),
      *(_DWORD *)(a1 + 6252),
      IoGateways);
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v10, 0x400000000000LL) )
  {
    v27 = *(const wchar_t **)(a1 + 4784);
    v42 = a1 + 5128;
    v36 = *(_DWORD *)(a1 + 56);
    v44 = &v36;
    v43 = 16LL;
    v45 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v46, v27);
    v28 = *(const wchar_t **)(a1 + 4792);
    v35 = *(_BYTE *)(a1 + 4340);
    v47 = &v35;
    v48 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v49, v28);
    v29 = *(unsigned int *)(a1 + 588);
    v50 = &v38;
    v38 = v29;
    v52 = &v37;
    v39 = *(_QWORD *)(a1 + 104);
    v54 = &v39;
    v40 = *(_QWORD *)(a1 + 112);
    v56 = &v40;
    v51 = 4LL;
    LODWORD(v37) = IoGateways;
    v53 = 4LL;
    v55 = 8LL;
    v57 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(v29, (unsigned __int8 *)dword_14015FEB1, v30, v31, 0xBu, &v41);
  }
  return (unsigned int)IoGateways;
}
