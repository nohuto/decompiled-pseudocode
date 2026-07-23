/*
 * XREFs of MiApplyImageHotPatch @ 0x140874A08
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     KeGenericCallDpc @ 0x1404CAE90 (KeGenericCallDpc.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     RtlApplyHotPatch @ 0x140C0827C (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v6; // r10
  PMDL v7; // rbx
  PVOID MappedSystemVa; // rsi
  int v9; // eax
  int v10; // edi
  int v11; // r14d
  _DWORD *v12; // rax
  PMDL Mdl; // rax
  char Priority; // [rsp+30h] [rbp-148h]
  int v16; // [rsp+50h] [rbp-128h]
  int v17; // [rsp+80h] [rbp-F8h]
  int v18; // [rsp+D0h] [rbp-A8h]
  __int64 v19; // [rsp+D8h] [rbp-A0h]
  __int64 v20; // [rsp+E0h] [rbp-98h]
  int v21; // [rsp+E8h] [rbp-90h]
  _QWORD v22[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v23[4]; // [rsp+108h] [rbp-70h] BYREF
  PVOID v24; // [rsp+128h] [rbp-50h]
  __int64 v25; // [rsp+130h] [rbp-48h] BYREF

  v6 = *(void **)(a3 + 24);
  v7 = 0LL;
  v25 = *(unsigned int *)(a3 + 16);
  MappedSystemVa = 0LL;
  v9 = *(_DWORD *)(a1 + 156);
  v10 = 0;
  v23[0] = a1;
  v11 = 0;
  v23[1] = a2;
  v23[2] = a4;
  v23[3] = a5;
  v24 = v6;
  if ( (v9 & 1) != 0 )
  {
    if ( v6 )
    {
      v12 = *(_DWORD **)(a1 + 40);
      v22[1] = 0LL;
      Mdl = IoAllocateMdl(v6, 8 * *v12, 0, 0, 0LL);
      v7 = Mdl;
      if ( !Mdl )
      {
        HIDWORD(v25) = -1073741670;
        return HIDWORD(v25);
      }
      v22[0] = 2LL;
      HIDWORD(v25) = MiProbeAndLockPages((__int64)Mdl, v22);
      if ( v25 < 0 )
        goto LABEL_21;
      v11 = 1;
      if ( (v7->MdlFlags & 5) != 0 )
        MappedSystemVa = v7->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
      {
        HIDWORD(v25) = -1073741670;
LABEL_20:
        MmUnlockPages(v7);
        goto LABEL_21;
      }
      v24 = MappedSystemVa;
    }
    v10 = 1;
    if ( (MiFlags & 4) == 0 )
      MmLockPagableSectionByHandle(ExPageLockHandle);
    KeGenericCallDpc((__int64)MiApplyImageHotPatchDpc, (__int64)v23);
  }
  else
  {
    HIDWORD(v25) = RtlApplyHotPatch(
                     *(_QWORD *)(a1 + 72),
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(a1 + 80),
                     *(_DWORD *)(a1 + 36),
                     (__int64)&v25,
                     Priority,
                     *(_QWORD *)(a1 + 144),
                     *(_DWORD *)(a1 + 152),
                     0LL,
                     v16,
                     *(_QWORD *)(a2 + 72),
                     *(_QWORD *)(a2 + 8),
                     0LL,
                     0,
                     0LL,
                     v17,
                     0LL,
                     0,
                     a4,
                     a5,
                     1,
                     *(_WORD *)(a1 + 136),
                     *(PRTL_BITMAP *)(a1 + 40),
                     (__int64)v6,
                     0LL,
                     v18,
                     v19,
                     v20,
                     v21);
  }
  *(_DWORD *)(a3 + 16) = v25;
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v7);
  if ( !v7 )
    goto LABEL_22;
  if ( v11 )
    goto LABEL_20;
LABEL_21:
  IoFreeMdl(v7);
LABEL_22:
  if ( v10 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v25);
}
