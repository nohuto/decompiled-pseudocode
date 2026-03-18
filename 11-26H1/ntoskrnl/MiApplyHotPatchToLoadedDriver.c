/*
 * XREFs of MiApplyHotPatchToLoadedDriver @ 0x14086E384
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x14086E13C (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeZeroedPageTables @ 0x1402A50D4 (MiMakeZeroedPageTables.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404F5130 (MiGetBaseLoaderPortion.c)
 *     VslPrepareDriverForPatch @ 0x1405C3728 (VslPrepareDriverForPatch.c)
 *     KeIsImageIATProtected @ 0x1405E4A84 (KeIsImageIATProtected.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140A78E84 (MiDriverLoadSucceeded.c)
 *     MmUnloadSystemImage @ 0x140AC7670 (MmUnloadSystemImage.c)
 *     MiHandleDriverNonPagedSections @ 0x140AC8ED0 (MiHandleDriverNonPagedSections.c)
 *     MiGenerateSystemImageNames @ 0x140B25868 (MiGenerateSystemImageNames.c)
 *     MiEnumerateBasePatches @ 0x140C016F8 (MiEnumerateBasePatches.c)
 */

__int64 __fastcall MiApplyHotPatchToLoadedDriver(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rcx
  int v7; // r14d
  int PteAddress; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v12; // ebx
  __int64 v13; // rcx
  int IsImageIATProtected; // r13d
  int v15; // edi
  int v16; // eax
  int SystemImage; // eax
  __int64 BaseLoaderPortion; // rax
  ULONG_PTR v19; // r9
  ULONG_PTR v20; // rcx
  unsigned __int64 v21; // rax
  __int64 i; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  int v25; // ecx
  __int128 v26; // [rsp+40h] [rbp-29h] BYREF
  __int128 v27; // [rsp+50h] [rbp-19h] BYREF
  __int128 v28; // [rsp+60h] [rbp-9h] BYREF
  __int128 v29; // [rsp+70h] [rbp+7h] BYREF
  __int64 v30; // [rsp+80h] [rbp+17h]
  ULONG_PTR v31; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+7Fh] BYREF

  v32 = 0LL;
  v30 = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v31 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v7 = 0;
  v27 = 0LL;
  v29 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
  {
    PteAddress = MiGetPteAddress(*(_QWORD *)(a1 + 48));
    v10 = PteAddress + 8 * (((v9 >> 12) + ((v9 & 0xFFF) != 0) + 511) & 0xFFFFFE00);
    if ( !(unsigned int)MiMakeZeroedPageTables(
                          v10,
                          v10
                        + 8
                        * ((HIDWORD(stru_140E36558.SListFaultAddress) >> 12)
                         + ((WORD2(stru_140E36558.SListFaultAddress) & 0xFFF) != 0)
                         - 1),
                          0,
                          11) )
      return 3221225626LL;
  }
  v12 = (*(_DWORD *)(MiGetBaseLoaderPortion(a1) + 184) >> 2) & 2 | 0x40000000;
  IsImageIATProtected = KeIsImageIATProtected(v13);
  v15 = MiGenerateSystemImageNames(a2, 0LL, 0LL, &v26, &v28, &v27);
  if ( v15 >= 0 )
  {
    v16 = v12 | 0x20000000;
    if ( !IsImageIATProtected )
      v16 = v12;
    SystemImage = MmLoadSystemImageEx(a2, 0, 0, a3, v16, (__int64)&v31, (__int64)&v32);
    v15 = SystemImage;
    if ( SystemImage != -1073741411 )
    {
      if ( SystemImage != -1073741554 )
      {
        if ( SystemImage < 0 )
          return (unsigned int)v15;
        v20 = v31;
        v7 = 1;
        v21 = *(_QWORD *)(v31 + 136);
        if ( v21 != -2LL )
        {
          if ( (v21 & 1) != 0 )
          {
            if ( (v21 & 0xFFFFFFFFFFFFFFFEuLL) == a1 )
            {
LABEL_18:
              v15 = -1073740945;
LABEL_33:
              MiDriverLoadSucceeded(v20, a2, &v27, &v26);
LABEL_34:
              if ( v7 )
                MmUnloadSystemImage(v31);
              return (unsigned int)v15;
            }
          }
          else
          {
            for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)v21; i = (unsigned int)(i + 1) )
            {
              if ( *(_QWORD *)(v21 + 8 * i + 8) == a1 )
                goto LABEL_18;
            }
          }
        }
        *(_QWORD *)&v29 = v31;
        MiEnumerateBasePatches(a1, MiFindMatchingPatch, &v29);
        if ( *((_QWORD *)&v29 + 1) )
        {
          v15 = -1073740758;
        }
        else
        {
          v15 = VslPrepareDriverForPatch(*(_QWORD *)(a1 + 48));
          if ( v15 >= 0 )
          {
            MiHandleDriverNonPagedSections(v31, 2LL);
            v19 = v31;
            goto LABEL_27;
          }
        }
LABEL_32:
        v20 = v31;
        goto LABEL_33;
      }
      BaseLoaderPortion = MiGetBaseLoaderPortion(v31);
      if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) != 0 )
      {
        if ( *(_QWORD *)(BaseLoaderPortion + 248) != a1 )
          return (unsigned int)-1073741791;
        v19 = v31;
        if ( !*(_QWORD *)(v31 + 112) )
          return (unsigned int)-1073740758;
LABEL_27:
        v23 = MiSectionControlArea(*(_QWORD *)(v19 + 112));
        v15 = MiApplyDriverHotPatch(v24, a1, v23);
        v25 = v7;
        if ( v15 >= 0 )
        {
          if ( (MiFlags & 0x100000) != 0 )
            *(_DWORD *)(v31 + 104) |= 0x2100u;
          v7 = 0;
        }
        if ( !v25 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
  }
  return (unsigned int)v15;
}
