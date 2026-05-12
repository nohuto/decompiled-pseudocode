/*
 * XREFs of StorBuildNVMeIdentifier @ 0x1400969B4
 * Callers:
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401175B0 (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespaceGetStorageDeviceIdProperty @ 0x1401A650C (NvmeNamespaceGetStorageDeviceIdProperty.c)
 *     NvmeNamespaceQueryDeviceTextIrp @ 0x1401A7B78 (NvmeNamespaceQueryDeviceTextIrp.c)
 * Callees:
 *     NvmeNamespaceGetIdentifier @ 0x140053660 (NvmeNamespaceGetIdentifier.c)
 *     StorGUIDToSCSINameString @ 0x1400972A0 (StorGUIDToSCSINameString.c)
 */

__int64 __fastcall StorBuildNVMeIdentifier(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // r15
  __int64 v8; // rax
  bool v9; // r14
  bool v10; // bl
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  v3 = *(_QWORD *)(a1 + 176);
  v20 = 0LL;
  v21 = 0;
  v5 = v3 + 104;
  v6 = (_QWORD *)(v3 + 120);
  v8 = *(_QWORD *)(v3 + 104);
  if ( !v8 )
    v8 = *(_QWORD *)(v3 + 112);
  v9 = v8 != 0;
  v10 = *v6 != 0LL;
  if ( !v8 && !*v6 || (*(_BYTE *)(v3 + 24) & 8) == 0 )
  {
    NvmeNamespaceGetIdentifier(a1, v3, &v20, &v21);
    if ( v21 == 16 )
    {
      v11 = v20;
LABEL_8:
      v12 = 36;
      v13 = 16LL;
      goto LABEL_13;
    }
  }
  if ( v9 )
  {
    v11 = v5;
    goto LABEL_8;
  }
  if ( !v10 )
  {
    v12 = 68;
    v14 = **(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_BYTE *)(a3 + 3) = `RaidHexFromUshort'::`2'::hexDigits[**(_WORD **)(*(_QWORD *)(a1 + 16) + 592LL) & 0xF];
    *(_BYTE *)(a3 + 2) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v14 >> 4];
    *(_BYTE *)(a3 + 1) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v14 >> 8) & 0xF];
    *(_BYTE *)a3 = `RaidHexFromUshort'::`2'::hexDigits[v14 >> 12];
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_OWORD *)(a3 + 4) = *(_OWORD *)(v15 + 24);
    *(_OWORD *)(a3 + 20) = *(_OWORD *)(v15 + 40);
    *(_QWORD *)(a3 + 36) = *(_QWORD *)(v15 + 56);
    v16 = *(unsigned __int16 *)(a1 + 56);
    *(_BYTE *)(a3 + 47) = `RaidHexFromUshort'::`2'::hexDigits[*(_WORD *)(a1 + 56) & 0xF];
    *(_BYTE *)(a3 + 46) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v16 >> 4];
    v17 = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v16 >> 8) & 0xF];
    *(_BYTE *)(a3 + 44) = `RaidHexFromUshort'::`2'::hexDigits[v16 >> 12];
    *(_BYTE *)(a3 + 45) = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
    *(_OWORD *)(a3 + 48) = *(_OWORD *)(v18 + 4);
    *(_DWORD *)(a3 + 64) = *(_DWORD *)(v18 + 20);
    return v12;
  }
  v12 = 20;
  v11 = (__int64)v6;
  v13 = 8LL;
LABEL_13:
  if ( (int)StorGUIDToSCSINameString(v13, v11, a3, a3, 0LL) < 0 )
    return 0;
  return v12;
}
