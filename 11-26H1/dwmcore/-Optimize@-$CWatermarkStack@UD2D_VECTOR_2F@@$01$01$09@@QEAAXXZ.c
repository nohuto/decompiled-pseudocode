/*
 * XREFs of ?Optimize@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAXXZ @ 0x18018E0A0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  void *v4; // rsi
  int v5; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 != 10 )
  {
    *(_DWORD *)(a1 + 16) = v1 + 1;
    return;
  }
  v3 = 2LL;
  if ( *(_DWORD *)(a1 + 20) > 2u )
    v3 = *(unsigned int *)(a1 + 20);
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_9;
  }
  if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 12) )
  {
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 8 )
    {
      v4 = MIDL_user_allocate(8 * v3);
      if ( v4 )
      {
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = v4;
        *(_DWORD *)(a1 + 12) = v3;
        goto LABEL_9;
      }
      v5 = -2147024882;
    }
    else
    {
      v5 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x11Eu, 0LL);
  }
LABEL_9:
  *(_QWORD *)(a1 + 16) = 0LL;
}
