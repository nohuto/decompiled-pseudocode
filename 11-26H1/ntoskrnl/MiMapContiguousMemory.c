/*
 * XREFs of MiMapContiguousMemory @ 0x140365BB0
 * Callers:
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 * Callees:
 *     MiMappingHasIoReferences @ 0x14024F7D4 (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiSanitizePage @ 0x14049A4BC (MiSanitizePage.c)
 *     MiInsertPteTracker @ 0x1404FCC9C (MiInsertPteTracker.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     KasanMarkAddressInvalidNoInline @ 0x1405E00B0 (KasanMarkAddressInvalidNoInline.c)
 *     KasanMarkAddressRedZoneNoInline @ 0x1405E0190 (KasanMarkAddressRedZoneNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemory(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r14d
  ULONG_PTR v8; // r13
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  ULONG_PTR v18; // rax
  _KWAIT_BLOCK **p_WaitBlockList; // r15
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rsi
  unsigned int v23; // r15d
  unsigned int v24; // eax
  unsigned __int64 v25; // rdi
  int v26; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-7Dh]
  unsigned int v28; // [rsp+38h] [rbp-79h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-71h]
  ULONG_PTR v30; // [rsp+48h] [rbp-69h]
  ULONG_PTR v31; // [rsp+50h] [rbp-61h]
  ULONG_PTR v32; // [rsp+58h] [rbp-59h]
  ULONG_PTR v33; // [rsp+60h] [rbp-51h]
  ULONG_PTR v34; // [rsp+68h] [rbp-49h]
  __int64 v35; // [rsp+70h] [rbp-41h]
  _QWORD v36[5]; // [rsp+78h] [rbp-39h] BYREF
  int v37; // [rsp+A0h] [rbp-11h]
  unsigned int v38; // [rsp+A4h] [rbp-Dh]
  ULONG_PTR v39; // [rsp+A8h] [rbp-9h]

  v35 = a3;
  v5 = a4;
  v33 = a2;
  v27 = a5;
  v28 = a1 & 0xFFF;
  if ( a4 == -1 )
    return 0LL;
  if ( a4 == 24 )
    return 0LL;
  if ( (a4 & 5) == 5 )
    return 0LL;
  if ( (a4 & 0xFFFFFFF8) == 0x10 )
    return 0LL;
  v8 = 0LL;
  if ( !a2 || a2 + a1 <= a1 && a2 + a1 )
    return 0LL;
  v32 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  v9 = ((a1 & 0xFFF) + a3 + 4095) >> 12;
  v34 = a1 >> 12;
  v10 = MiSanitizePage(a1 >> 12);
  v31 = v10;
  if ( (v5 & 2) != 0 && (MiFlags & 0x20000) != 0 )
    v5 &= ~2u;
  v26 = 0;
  v30 = 0LL;
  BugCheckParameter4 = 0LL;
  if ( (a1 & 0x1FFFFF) == 0 && a2 >= 0x200000 && (v11 & 1) == 0 && v9 == v13 )
  {
    v15 = MiMapContiguousMemoryLarge(v10, v13, v5, v11, &v26);
    v16 = v15;
    if ( v15 )
    {
      v17 = v15;
      v30 = a2;
      v18 = v9 << 12;
      goto LABEL_28;
    }
    v11 = v27;
    v14 = 0xFFFFFFFFLL;
  }
  if ( (v11 & 1) != 0 )
    ++v9;
  if ( v9 > v14 )
    return 0LL;
  p_WaitBlockList = (_KWAIT_BLOCK **)&unk_140E34BC0;
  if ( (v5 & 0x18) == 0 )
    p_WaitBlockList = &stru_140E366D8.WaitBlockList;
  v20 = (unsigned __int64 *)MiReservePtes((__int64)p_WaitBlockList, v9, v11, v12);
  v21 = v20;
  if ( !v20 )
    return 0LL;
  if ( (int)MiFillSystemPtes(v20, v32, v31, v5, (v27 >> 1) & 1, &v26) < 0 )
  {
    MiReleasePtes((__int64)p_WaitBlockList, v21, v9);
    return 0LL;
  }
  v8 = v28 & 0xFFFFFFF8;
  v17 = (__int64)((_QWORD)v21 << 25) >> 16;
  v16 = v17 + v28;
  v30 = v33 + (v28 & 7);
  v18 = (v9 << 12) - v8;
LABEL_28:
  BugCheckParameter4 = v18;
  v23 = v26 & 1;
  if ( (v26 & 1) != 0 )
    MiMappingHasIoReferences(v16);
  if ( (dword_140FBF20C & 1) != 0 )
  {
    v36[3] = v16;
    v36[0] = 0LL;
    v36[1] = 0LL;
    v37 = 0;
    v39 = v34;
    v38 = v28;
    v36[4] = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v27 & 1) != 0 )
      v23 |= 2u;
    v36[2] = v35;
    v24 = MiProtectionToCacheAttribute(v5);
    MiInsertPteTracker(v36, 1LL, v23, v24);
  }
  if ( byte_140FC8BD8 )
  {
    v25 = v9 << 12;
    if ( (int)KasanTrackAddressNoInline(v17, v25, 0LL) < 0 )
    {
      MiUnmapContiguousMemory(v17, v25, 0);
      return 0LL;
    }
    if ( byte_140FC8BD8 )
    {
      KasanMarkAddressInvalidNoInline(v17, v8);
      if ( byte_140FC8BD8 )
        KasanMarkAddressRedZoneNoInline(v17 + v8, v30, BugCheckParameter4);
    }
  }
  return v16;
}
