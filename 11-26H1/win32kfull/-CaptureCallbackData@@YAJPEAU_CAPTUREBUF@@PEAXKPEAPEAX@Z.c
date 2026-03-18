/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC
 * Callers:
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     xxxClientAddFontResourceW @ 0x14000714C (xxxClientAddFontResourceW.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140007A60 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x140007F48 (ClientLoadLibrary.c)
 *     SfnCOPYDATA @ 0x1400082D0 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x140009398 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnTOUCHHITTESTING @ 0x140228D10 (SfnTOUCHHITTESTING.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x14024CF30 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     ClientEventCallback @ 0x1402D4E5C (ClientEventCallback.c)
 *     SfnINLPHLPSTRUCT @ 0x1402D5740 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402D5A80 (SfnINLPMDICREATESTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402D7010 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402D73B0 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402D7F58 (xxxClientFindMnemChar.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x14000588C (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *Src, size_t Size, void **a4)
{
  char *v8; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( Src )
  {
    if ( (unsigned int)Size > *((_DWORD *)a1 + 1) )
      return 2147483653LL;
    v8 = (char *)*((_QWORD *)a1 + 2);
    if ( *((_QWORD *)a1 + 4) )
    {
      v9 = (char *)*((_QWORD *)a1 + 2);
      if ( Src > v8 )
        v9 = Src;
      v10 = &v8[(unsigned int)Size];
      if ( &Src[(unsigned int)Size] < v10 )
        v10 = &Src[(unsigned int)Size];
      if ( v9 < v10 )
        return 3221225496LL;
    }
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)Size + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    RtlCopyVolatileMemory(v8, Src, (unsigned int)Size);
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v8);
  }
  else
  {
    *a4 = 0LL;
  }
  return 0LL;
}
