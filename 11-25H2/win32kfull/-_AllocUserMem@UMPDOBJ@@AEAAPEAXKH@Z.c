/*
 * XREFs of ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78
 * Callers:
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1400A9190 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400A9830 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z @ 0x1400CE860 (-UMPDDrvQueryPerBandInfo@@YAKPEAU_SURFOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1400D0D70 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1400D163C (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1400D39B0 (NtGdiPATHOBJ_bEnum.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1400D4644 (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     NtGdiFONTOBJ_pifi @ 0x1400D4710 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngComputeGlyphSet @ 0x14017CE30 (NtGdiEngComputeGlyphSet.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1401BE860 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1401BEB50 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401D0A90 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x14020E780 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1403352A0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1403358D0 (-UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x140336580 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x140336740 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x140337A64 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x14033CB00 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x14033CC60 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D3EDC (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1401EF528 (-GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x14020DEE0 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char *__fastcall UMPDOBJ::_AllocUserMem(UMPDOBJ *this, unsigned int a2, int a3)
{
  size_t v5; // rbx
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  UMPDOBJ *v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // edx
  struct _GRETHREAD *CurrentThread; // rdi
  __int64 v17; // rcx
  char *KernelPtr; // rax
  struct _UMPDHEAP *UMPDHeap; // rax

  if ( a2 + 7 < a2 )
    return 0LL;
  v5 = (a2 + 7) & 0xFFFFFFF8;
  v6 = 0LL;
  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    v13 = *((_QWORD *)this + 53);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 + 72);
      v15 = v14 + v5;
      if ( (int)v14 + (int)v5 >= (unsigned int)v14 && (unsigned __int64)v15 <= *(_QWORD *)(v13 + 48) )
      {
        v6 = (char *)(v14 + *(_QWORD *)(v13 + 40) - *(_QWORD *)(v13 + 64));
        *(_DWORD *)(v13 + 72) = v15;
      }
    }
  }
  else
  {
    if ( *((_BYTE *)this + 456) && !*((_QWORD *)this + 9) )
    {
      CurrentThread = GreGetCurrentThread(v8, v7);
      v17 = *((_QWORD *)CurrentThread + 6);
      if ( v17 )
      {
        *(_DWORD *)(v17 + 24) = 0;
        *((_QWORD *)this + 9) = v17;
      }
      else
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(0LL);
        *((_QWORD *)this + 9) = UMPDHeap;
        *((_QWORD *)CurrentThread + 6) = UMPDHeap;
      }
    }
    v9 = *((_QWORD *)this + 9);
    if ( !v9 )
      return 0LL;
    if ( !*(_QWORD *)v9 )
      return 0LL;
    v10 = (UMPDOBJ *)(*(_QWORD *)(v9 + 16) - *(unsigned int *)(v9 + 24));
    if ( (unsigned int)v5 > (unsigned __int64)v10
      && !(unsigned int)UMPDOBJ::GrowUMPDHeap(v10, (struct _UMPDHEAP *)v9, v5) )
    {
      return 0LL;
    }
    v11 = *((_QWORD *)this + 9);
    v6 = (char *)(*(_QWORD *)v11 + *(unsigned int *)(v11 + 24));
    *(_DWORD *)(v11 + 24) += v5;
  }
  if ( v6 )
  {
    if ( a3 )
    {
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)this, v6);
      memset_0(KernelPtr, 0, v5);
    }
  }
  return v6;
}
