/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x140B5A0B4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiLoadHotPatch @ 0x1408770BC (MiLoadHotPatch.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140AC2084 (MiFindHotPatchRecord.c)
 */

__int64 __fastcall MiApplyRequiredDriverHotPatches(__int64 a1)
{
  int v2; // r8d
  struct _KLOCK_ENTRIES *v3; // r9
  unsigned int v4; // ebx
  int HotPatchRecord; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF

  DestinationString = 0LL;
  if ( (stru_140E366D8.QuantumTarget & 0x100000000LL) == 0
    || (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) & 0x1000) != 0 )
  {
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = *(_DWORD *)(a1 + 120);
  v3 = (struct _KLOCK_ENTRIES *)*(unsigned int *)(a1 + 156);
  v4 = 0;
  v9 = v2;
  v8 = (int)v3;
  HotPatchRecord = MiFindHotPatchRecord((__int64 *)&xmmword_140E366C0, 0, v2, v3, 0x8664u, 0LL, &DestinationString);
  if ( HotPatchRecord >= 0 )
  {
    v4 = MiLoadHotPatch(&DestinationString, 0, &v9, &v8);
    RtlFreeAnsiString(&DestinationString);
  }
  else if ( HotPatchRecord != -1073741275 )
  {
    return (unsigned int)HotPatchRecord;
  }
  return v4;
}
