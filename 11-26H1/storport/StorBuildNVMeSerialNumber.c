/*
 * XREFs of StorBuildNVMeSerialNumber @ 0x140047788
 * Callers:
 *     NvmeNamespaceGetInstanceId @ 0x140106D58 (NvmeNamespaceGetInstanceId.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117688 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401BDC3C (NvmeNamespaceGetStorageDeviceProperty.c)
 * Callees:
 *     StorSerialNumberFromNvmeId @ 0x14004B8A0 (StorSerialNumberFromNvmeId.c)
 *     NvmeNamespaceGetIdentifier @ 0x140053660 (NvmeNamespaceGetIdentifier.c)
 */

__int64 __fastcall StorBuildNVMeSerialNumber(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // r8
  char v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rdx
  bool v11; // r14
  bool v12; // bp
  unsigned int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+98h] [rbp+20h] BYREF

  v23 = a2;
  v3 = 0;
  v24 = 0LL;
  v5 = *(_QWORD *)(a1 + 176);
  v22 = 0;
  v7 = 0;
  v8 = v5 + 104;
  v9 = *(_QWORD *)(v5 + 104);
  v10 = (_QWORD *)(v5 + 120);
  v21 = v5 + 120;
  if ( !v9 )
    v9 = *(_QWORD *)(v5 + 112);
  v11 = v9 != 0;
  v12 = *v10 != 0LL;
  if ( !v9 && !*v10 || (*(_BYTE *)(v5 + 24) & 8) == 0 )
  {
    NvmeNamespaceGetIdentifier(a1, v10, &v24, &v22);
    if ( v22 == 16 )
    {
      v7 = 1;
      goto LABEL_18;
    }
  }
  if ( v11 )
  {
LABEL_18:
    v17 = 40;
    v13 = 40;
    goto LABEL_8;
  }
  v13 = 20;
  if ( !v12 )
    v13 = 30;
  v17 = v13;
LABEL_8:
  if ( v17 <= v23 )
  {
    if ( v7 )
    {
      v15 = v24;
      v16 = 16LL;
    }
    else if ( v11 )
    {
      v16 = 16LL;
      v15 = v8;
    }
    else
    {
      if ( !v12 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 592LL);
        *(_OWORD *)a3 = *(_OWORD *)(v18 + 4);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(v18 + 20);
        *(_BYTE *)(a3 + 20) = 95;
        v19 = *(unsigned __int16 *)(a1 + 58);
        *(_BYTE *)(a3 + 24) = `RaidHexFromUshort'::`2'::hexDigits[*(_WORD *)(a1 + 58) & 0xF];
        *(_BYTE *)(a3 + 23) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v19 >> 4];
        *(_BYTE *)(a3 + 22) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v19 >> 8) & 0xF];
        *(_BYTE *)(a3 + 21) = `RaidHexFromUshort'::`2'::hexDigits[v19 >> 12];
        v20 = *(unsigned __int16 *)(a1 + 56);
        *(_BYTE *)(a3 + 28) = `RaidHexFromUshort'::`2'::hexDigits[*(_WORD *)(a1 + 56) & 0xF];
        *(_BYTE *)(a3 + 27) = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v20 >> 4];
        *(_BYTE *)(a3 + 26) = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v20 >> 8) & 0xF];
        *(_BYTE *)(a3 + 25) = `RaidHexFromUshort'::`2'::hexDigits[v20 >> 12];
        *(_BYTE *)(a3 + 29) = 46;
LABEL_11:
        if ( v3 >= 0 )
          return v13;
        return 0;
      }
      v15 = v21;
      v16 = 8LL;
    }
    v3 = StorSerialNumberFromNvmeId(v15, v16, a3, v13);
    goto LABEL_11;
  }
  return 0;
}
