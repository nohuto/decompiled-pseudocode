/*
 * XREFs of NVMeGetRichDeviceDescription @ 0x14001E830
 * Callers:
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCopyFirmwareRevision @ 0x140001EC0 (NVMeCopyFirmwareRevision.c)
 *     NVMeGetNamespaceMetadata @ 0x140026EFC (NVMeGetNamespaceMetadata.c)
 *     memcmp @ 0x140032620 (memcmp.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetRichDeviceDescription(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  _BYTE Buf2[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 1560);
  v3 = 0;
  if ( !a2 )
    return (unsigned int)-1056964602;
  if ( (*(_DWORD *)(a1 + 24) & 1) == 0 )
    return (unsigned int)-1056964599;
  v6 = a2[1];
  if ( *a2 == 2 )
  {
    if ( v6 >= 0x78 )
    {
      v7 = *(unsigned __int8 *)(*((_QWORD *)a2 + 14) + 10LL);
      v8 = *(_QWORD *)(a1 + 8 * v7 + 1672);
      if ( !v8 )
        return (unsigned int)-1056964599;
      NVMeGetNamespaceMetadata(a1, *(unsigned int *)(v8 + 16), *(_QWORD *)(a1 + 8 * v7 + 1672));
      memset(a2, 0, 0x78uLL);
      *a2 = 2;
      a2[1] = 120;
      memset(Buf2, 0, sizeof(Buf2));
      if ( memcmp((const void *)(v8 + 168), Buf2, 0x40uLL) )
      {
        *(_OWORD *)((char *)a2 + 25) = *(_OWORD *)(v8 + 168);
        *(_OWORD *)((char *)a2 + 41) = *(_OWORD *)(v8 + 184);
        *(_OWORD *)((char *)a2 + 57) = *(_OWORD *)(v8 + 200);
        *(_OWORD *)((char *)a2 + 73) = *(_OWORD *)(v8 + 216);
LABEL_13:
        NVMeCopyFirmwareRevision(v2, (__int64)a2 + 90, 0x10u);
        return v3;
      }
LABEL_12:
      *(_OWORD *)((char *)a2 + 25) = *(_OWORD *)(v2 + 24);
      *(_OWORD *)((char *)a2 + 41) = *(_OWORD *)(v2 + 40);
      *(_QWORD *)((char *)a2 + 57) = *(_QWORD *)(v2 + 56);
      goto LABEL_13;
    }
  }
  else if ( v6 >= 0x6C )
  {
    memset(a2, 0, 0x6CuLL);
    *a2 = 1;
    a2[1] = 108;
    goto LABEL_12;
  }
  return (unsigned int)-1056964602;
}
