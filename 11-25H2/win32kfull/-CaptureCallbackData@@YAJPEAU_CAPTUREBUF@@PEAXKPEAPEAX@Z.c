/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1402583B0
 * Callers:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     ClientLoadLibrary @ 0x1400C82EC (ClientLoadLibrary.c)
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1401247A8 (xxxClientExpandStringW.c)
 *     xxxClientAddFontResourceW @ 0x140128360 (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x1401306F0 (SfnCOPYDATA.c)
 *     SfnINSTRINGNULL @ 0x140170AC0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140176990 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1401A10A0 (SfnPOWERBROADCAST.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     SfnCOPYGLOBALDATA @ 0x140209C80 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x14020AC30 (SfnTOUCHHITTESTING.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140210940 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     ClientEventCallback @ 0x1402BA094 (ClientEventCallback.c)
 *     SfnINLPHLPSTRUCT @ 0x1402BA9C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402BAD10 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BBDF0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402BC660 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BCA00 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402BDAEC (xxxClientFindMnemChar.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x14018C810 (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *Src, size_t Size, void **a4)
{
  char *v8; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !Src )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( (unsigned int)Size > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_13;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( Src > v8 )
    v9 = Src;
  v10 = &v8[(unsigned int)Size];
  if ( &Src[(unsigned int)Size] < v10 )
    v10 = &Src[(unsigned int)Size];
  if ( v9 >= v10 )
  {
LABEL_13:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)Size + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    RtlCopyVolatileMemory(v8, Src, (unsigned int)Size);
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v8);
    return 0LL;
  }
  return 3221225496LL;
}
