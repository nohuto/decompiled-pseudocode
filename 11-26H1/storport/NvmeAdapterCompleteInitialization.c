/*
 * XREFs of NvmeAdapterCompleteInitialization @ 0x1400D3950
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidDmaGetAdapterInfo @ 0x1400722BC (RaidDmaGetAdapterInfo.c)
 *     RaidGetD3ColdInterface @ 0x14007FA64 (RaidGetD3ColdInterface.c)
 *     RaidQueryPciDeviceType @ 0x140095A54 (RaidQueryPciDeviceType.c)
 *     StorCreateSymbolicLink @ 0x140096CB4 (StorCreateSymbolicLink.c)
 *     McTemplateK0qjzhqzusiddq_EtwWriteTransfer @ 0x1400D1CFC (McTemplateK0qjzhqzusiddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     RaidInitializeDma @ 0x140187C24 (RaidInitializeDma.c)
 *     RaidIsDmaInitialized @ 0x140187DDC (RaidIsDmaInitialized.c)
 */

__int64 __fastcall NvmeAdapterCompleteInitialization(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int SymbolicLink; // edi
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  const char *v8; // r8
  int v9; // r11d
  __int64 v10; // rdx
  __int16 v11; // r9
  __int64 v12; // rax
  int v13; // ecx
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rdx
  bool v16; // cf
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v21; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v23; // [rsp+90h] [rbp-78h] BYREF
  int v24; // [rsp+94h] [rbp-74h] BYREF
  int v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v27[4]; // [rsp+A8h] [rbp-60h] BYREF
  char v28; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+108h] [rbp+0h] BYREF
  __int64 *v30; // [rsp+128h] [rbp+20h]
  __int64 v31; // [rsp+130h] [rbp+28h]
  __int64 v32; // [rsp+138h] [rbp+30h]
  __int64 v33; // [rsp+140h] [rbp+38h]
  int *v34; // [rsp+148h] [rbp+40h]
  __int64 v35; // [rsp+150h] [rbp+48h]
  int *v36; // [rsp+158h] [rbp+50h]
  __int64 v37; // [rsp+160h] [rbp+58h]
  char v38[16]; // [rsp+168h] [rbp+60h] BYREF
  char *v39; // [rsp+178h] [rbp+70h]
  __int64 v40; // [rsp+180h] [rbp+78h]
  char v41[16]; // [rsp+188h] [rbp+80h] BYREF
  int *v42; // [rsp+198h] [rbp+90h]
  __int64 v43; // [rsp+1A0h] [rbp+98h]
  int *v44; // [rsp+1A8h] [rbp+A0h]
  __int64 v45; // [rsp+1B0h] [rbp+A8h]

  memset_0(v27, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 && !(unsigned __int8)RaidIsDmaInitialized(a1 + 1160) )
  {
    SymbolicLink = RaidInitializeDma(v2, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( SymbolicLink < 0 )
      goto LABEL_15;
    v27[0] = 1;
    if ( (int)RaidDmaGetAdapterInfo((int *)(a1 + 1160), (__int64)v27) >= 0 && (v28 & 2) != 0 )
      *(_DWORD *)(a1 + 992) |= 8u;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 224);
  if ( v6 > *(_DWORD *)(v5 + 152) )
    *(_DWORD *)(v5 + 152) = v6;
  SymbolicLink = StorCreateSymbolicLink((PUNICODE_STRING)(a1 + 40), 1, (unsigned int *)(a1 + 56), (int *)a1);
  if ( SymbolicLink >= 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 400) + 4LL) == 5 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL) = -1;
      if ( RaidQueryPciDeviceType(*(struct _DEVICE_OBJECT **)(a1 + 32), (int *)(*(_QWORD *)(a1 + 592) + 4LL)) < 0 )
        *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL) = -2;
      RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL));
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1028) = 14;
  }
LABEL_15:
  if ( (byte_140173447 & 8) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 1152);
    if ( v7 )
    {
      v8 = (const char *)&dword_140154ADC;
      v9 = *(_DWORD *)(v7 + 744);
      if ( *(_QWORD *)(v7 + 752) )
        v8 = *(const char **)(v7 + 752);
    }
    else
    {
      v8 = byte_14015304C;
      LOBYTE(v9) = 0;
    }
    if ( v7 )
      v11 = *(_WORD *)(v7 + 4);
    else
      LOBYTE(v11) = 0;
    v10 = (*(_QWORD *)(a1 + 144) & 1) != 0 ? 20 : 17;
    McTemplateK0qjzhqzusiddq_EtwWriteTransfer(
      a1 + 1048,
      v10,
      (__int64)v8,
      *(_DWORD *)(a1 + 56),
      a1 + 1048,
      *(const wchar_t **)(a1 + 1032),
      v11,
      v10,
      *(const wchar_t **)(a1 + 1040),
      v9,
      v8,
      *(_QWORD *)(a1 + 144),
      *(_DWORD *)(a1 + 992),
      SymbolicLink,
      *(_DWORD *)(a1 + 1028));
  }
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v3, 0x400000000000LL) )
  {
    v26 = 0x1000000LL;
    v30 = &v26;
    v32 = a1 + 1048;
    v22 = *(_DWORD *)(a1 + 56);
    v34 = &v22;
    v12 = *(_QWORD *)(a1 + 1152);
    v31 = 8LL;
    v33 = 16LL;
    v35 = 4LL;
    if ( v12 )
      v13 = *(unsigned __int16 *)(v12 + 4);
    else
      v13 = 0;
    v14 = *(const wchar_t **)(a1 + 1032);
    v23 = v13;
    v36 = &v23;
    v37 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v38, v14);
    v15 = *(const wchar_t **)(a1 + 1040);
    v16 = (*(_BYTE *)(a1 + 144) & 1) != 0;
    v40 = 1LL;
    v21 = v16 ? 20 : 17;
    v39 = &v21;
    tlgCreate1Sz_wchar_t((__int64)v41, v15);
    v17 = *(unsigned int *)(a1 + 380);
    v42 = &v24;
    v24 = v17;
    v44 = &v25;
    v43 = 4LL;
    v25 = SymbolicLink;
    v45 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(v17, (unsigned __int8 *)dword_140164F4F, v18, v19, 0xBu, &v29);
  }
  return (unsigned int)SymbolicLink;
}
