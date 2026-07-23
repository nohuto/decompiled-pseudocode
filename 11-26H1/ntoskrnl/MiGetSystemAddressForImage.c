/*
 * XREFs of MiGetSystemAddressForImage @ 0x140AC89E4
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1406EB858 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiCaptureImageOptionalHeader @ 0x140A64C08 (MiCaptureImageOptionalHeader.c)
 *     MiReturnSystemImageAddress @ 0x140A85E84 (MiReturnSystemImageAddress.c)
 *     MiBytesToMapSystemImage @ 0x140AC99D8 (MiBytesToMapSystemImage.c)
 *     MiSelectSystemImageAddress @ 0x140B0C034 (MiSelectSystemImageAddress.c)
 *     MiReservePrivilegedPtes @ 0x140B2A940 (MiReservePrivilegedPtes.c)
 *     MiImageSuitableForSystem @ 0x140B510D0 (MiImageSuitableForSystem.c)
 *     MiReleasePrivilegedPtes @ 0x140B62200 (MiReleasePrivilegedPtes.c)
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
  _DWORD *v14; // rdi
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // r13d
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  ULONG_PTR PteAddress; // r14
  int v20; // [rsp+30h] [rbp-138h] BYREF
  int v21; // [rsp+34h] [rbp-134h]
  int v22; // [rsp+38h] [rbp-130h]
  int v23; // [rsp+40h] [rbp-128h]
  _DWORD *v24; // [rsp+48h] [rbp-120h]
  PVOID BaseOfImage[2]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v26[208]; // [rsp+60h] [rbp-108h] BYREF

  v2 = a2;
  v23 = a2;
  v20 = 0;
  memset_0(v26, 0, 0xC8uLL);
  *(_OWORD *)BaseOfImage = 0LL;
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
      if ( (int)MiMapImageInSystemSpace((__int64)v4, v11, (__int64)BaseOfImage) < 0 )
        return 0LL;
      v21 = 0;
      v14 = BaseOfImage[0];
      v15 = RtlImageNtHeader(BaseOfImage[0]);
      v21 = v14[15];
      v16 = v21;
      MiCaptureImageOptionalHeader((__int64)v26, (__int64)v15);
      MiRemoveFromSystemSpace((ULONG_PTR)v14);
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
