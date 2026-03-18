/*
 * XREFs of ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x140287108
 * Callers:
 *     ?CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285650 (-CreateUsermodeParameters@DestroyFontRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285720 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140285F40 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286150 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286890 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140286B40 (-CreateUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x14034EA00 (-CreateUsermodeParameters@QueryGlyphAttrsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FontDriverDdiRequest::PrepareUsermodeFontObj(
        struct UmfdTls *a1,
        struct _FONTOBJ *a2,
        struct _FONTOBJ *a3)
{
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  GreProbeAndWriteToUntrustedVa(a3, 4uLL, a2, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->iFace, 4uLL, &a2->iFace, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->cxMax, 4uLL, &a2->cxMax, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->flFontType, 4uLL, &a2->flFontType, 4uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->iTTUniq, 8uLL, &a2->iTTUniq, 8uLL, 1uLL);
  v6 = *(_QWORD *)a2->iFile;
  GreProbeAndWriteToUntrustedVa(&a3->iFile, 8uLL, &v6, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->sizLogResPpi, 8uLL, &a2->sizLogResPpi, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->ulStyleSize, 4uLL, &a2->ulStyleSize, 4uLL, 1uLL);
  v6 = 0LL;
  GreProbeAndWriteToUntrustedVa(&a3->pvConsumer, 8uLL, &v6, 8uLL, 1uLL);
  GreProbeAndWriteToUntrustedVa(&a3->pvProducer, 8uLL, &a2->pvProducer, 8uLL, 1uLL);
  *((_QWORD *)a1 + 5) = a2;
}
