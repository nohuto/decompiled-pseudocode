/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x140005B30 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     SfnINSTRING @ 0x140006900 (SfnINSTRING.c)
 *     xxxClientAddFontResourceW @ 0x14000714C (xxxClientAddFontResourceW.c)
 *     SfnINSTRINGNULL @ 0x140007400 (SfnINSTRINGNULL.c)
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x140008DFC (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x140009398 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x14000A328 (xxxClientLoadMenu.c)
 *     xxxClientLoadStringW @ 0x1400CCAE8 (xxxClientLoadStringW.c)
 *     xxxClientLpkDrawTextEx @ 0x140121E74 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     xxxClientExtTextOutW @ 0x1401FAFD0 (xxxClientExtTextOutW.c)
 *     xxxClientPSMTextOut @ 0x1401FBB08 (xxxClientPSMTextOut.c)
 *     SfnINCNTOUTSTRING @ 0x14020E220 (SfnINCNTOUTSTRING.c)
 *     SfnIMECONTROL @ 0x140214380 (SfnIMECONTROL.c)
 *     SfnTOUCHHITTESTING @ 0x140228D10 (SfnTOUCHHITTESTING.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x14024CF30 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x14027BFE0 (SfnINLPCREATESTRUCT.c)
 *     ClientEventCallback @ 0x1402D4E5C (ClientEventCallback.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402D52D0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402D5740 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402D5A80 (SfnINLPMDICREATESTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402D7010 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402D73B0 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402D7F58 (xxxClientFindMnemChar.c)
 * Callees:
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebp
  ULONG_PTR v9; // rdx
  bool v10; // zf
  unsigned __int8 *result; // rax
  __int64 v12; // rax
  _QWORD *v13; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = ((a1 + 7) & 0xFFFFFFF8) + 8 * a2;
    v8 = (a1 + 7) & 0xFFFFFFF8;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v12 = Win32AllocPoolWithQuotaZInit((unsigned int)v7, 1667461973LL);
      v6 = (unsigned __int8 *)v12;
      if ( v12 )
      {
        v13 = (_QWORD *)(v12 + 32);
        *(_QWORD *)(v12 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v12 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v13;
          goto LABEL_13;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v7 + v9 <= Size )
      {
        memset_0(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v7), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v7];
        *((_QWORD *)v6 + 4) = 0LL;
        if ( !v10 )
        {
          *(_DWORD *)v6 = v7 + RegionSize;
LABEL_7:
          *((_DWORD *)v6 + 1) = RegionSize;
          result = v6;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 6) = v8;
          return result;
        }
LABEL_13:
        *(_DWORD *)v6 = v7;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
