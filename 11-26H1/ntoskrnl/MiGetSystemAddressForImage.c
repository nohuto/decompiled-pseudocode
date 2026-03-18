/*
 * XREFs of MiGetSystemAddressForImage @ 0x140AC6DF4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1406E6BA8 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiRelocateImage @ 0x1409CA7A4 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x1409CC82C (MiMapImageInSystemSpace.c)
 *     MiCaptureImageOptionalHeader @ 0x140A57688 (MiCaptureImageOptionalHeader.c)
 *     MiReturnSystemImageAddress @ 0x140A80014 (MiReturnSystemImageAddress.c)
 *     MiBytesToMapSystemImage @ 0x140AC7DE8 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140B0A274 (MiSelectSystemImageAddress.c)
 *     MiReservePrivilegedPtes @ 0x140B2846C (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x140B4E840 (MiImageSuitableForSystem.c)
 *     MiReleasePrivilegedPtes @ 0x140B5F080 (MiReleasePrivilegedPtes.c)
 */

struct _LIST_ENTRY *__fastcall MiGetSystemAddressForImage(__int64 a1, int a2)
{
  char v2; // r15
  _DWORD *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  struct _LIST_ENTRY *v8; // rdi
  __int64 v9; // r8
  __int64 BaseLoaderPortion; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  ULONG_PTR v14; // rdi
  _DWORD *v15; // rax
  int v16; // r13d
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  ULONG_PTR PteAddress; // r14
  int v20; // [rsp+30h] [rbp-138h] BYREF
  int v21; // [rsp+34h] [rbp-134h]
  int v22; // [rsp+38h] [rbp-130h]
  int v23; // [rsp+40h] [rbp-128h]
  _DWORD *v24; // [rsp+48h] [rbp-120h]
  ULONG_PTR BugCheckParameter1[2]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v26[208]; // [rsp+60h] [rbp-108h] BYREF

  v2 = a2;
  v23 = a2;
  v20 = 0;
  memset_0(v26, 0, 0xC8uLL);
  *(_OWORD *)BugCheckParameter1 = 0LL;
  v4 = (_DWORD *)MiSectionControlArea(*(_QWORD *)(a1 + 112));
  v24 = v4;
  v5 = MiBytesToMapSystemImage((unsigned int)(*(_DWORD *)(*(_QWORD *)v4 + 8LL) << 12));
  if ( !v5 )
    return 0LL;
  v6 = v5 >> 12;
  v22 = v5 >> 12;
  v8 = (struct _LIST_ENTRY *)MiImageSuitableForSystem(v4, &v20, 0LL);
  if ( v8 )
  {
    BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
    v11 = v9 + 1;
    if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 4) != 0 )
      v9 = v11;
  }
  else
  {
    v11 = 1;
  }
  if ( !v8 || (_DWORD)v9 == v11 || (v2 & 2) != 0 )
  {
    if ( !v20 )
    {
      if ( (int)MiMapImageInSystemSpace((__int64)v4, v11, (__int64)BugCheckParameter1) < 0 )
        return 0LL;
      v21 = 0;
      v14 = BugCheckParameter1[0];
      v15 = RtlImageNtHeader(BugCheckParameter1[0]);
      v21 = *(_DWORD *)(v14 + 60);
      v16 = v21;
      MiCaptureImageOptionalHeader((__int64)v26, (__int64)v15);
      MiRemoveFromSystemSpace(v14);
      if ( (int)MiRelocateImage(*(_QWORD **)v4, (__int64)v26, v16, v11, -1LL, v11) < 0 )
        return 0LL;
      MiImageSuitableForSystem(v4, &v20, v17);
      if ( !v20 && (v4[14] & 0x30000000) == 0 )
        return 0LL;
    }
    v18 = MiSelectSystemImageAddress((unsigned int)v6, v7, v9);
    v8 = (struct _LIST_ENTRY *)v18;
    if ( !v18 )
      return 0LL;
    PteAddress = MiGetPteAddress(v18);
    if ( (int)MiReservePrivilegedPtes(v4, PteAddress, (unsigned int)v6, v2 & 0x20) >= 0 )
    {
      if ( (unsigned int)MiAddPrivateFixupEntryForSystemImage((unsigned __int64)v4, v8) )
        return v8;
      MiReleasePrivilegedPtes(PteAddress, (unsigned int)v6);
    }
    MiReturnSystemImageAddress((unsigned __int64)v8);
    return 0LL;
  }
  v12 = MiGetPteAddress((unsigned __int64)v8);
  if ( (int)MiReservePrivilegedPtes(v4, v12, (unsigned int)v6, v2 & 0x20) < 0 )
    return 0LL;
  return v8;
}
