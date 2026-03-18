/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140177338
 * Callers:
 *     xxxClientExtTextOutW @ 0x14002A440 (xxxClientExtTextOutW.c)
 *     ClientGetListboxString @ 0x140061F10 (ClientGetListboxString.c)
 *     SfnINSTRING @ 0x140062E70 (SfnINSTRING.c)
 *     xxxClientLpkDrawTextEx @ 0x1400C1458 (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1400C1B54 (xxxClientGetTextExtentPointW.c)
 *     xxxClientLoadImage @ 0x1401244C4 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1401247A8 (xxxClientExpandStringW.c)
 *     xxxClientAddFontResourceW @ 0x140128360 (xxxClientAddFontResourceW.c)
 *     xxxClientLoadStringW @ 0x140148EF0 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x14018A360 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x1401A10A0 (SfnPOWERBROADCAST.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401AAFFC (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     SfnIMECONTROL @ 0x1401EC740 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1401FA710 (SfnINCNTOUTSTRING.c)
 *     SfnCOPYGLOBALDATA @ 0x140209C80 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x14020AC30 (SfnTOUCHHITTESTING.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140210940 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x140258460 (SfnINLPCREATESTRUCT.c)
 *     ClientEventCallback @ 0x1402BA094 (ClientEventCallback.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402BA540 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402BA9C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402BAD10 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BBDF0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402BC660 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BCA00 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402BDAEC (xxxClientFindMnemChar.c)
 *     xxxClientPSMTextOut @ 0x1402BE1C0 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_13;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset_0(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_13:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
