/*
 * XREFs of ?Optimize@?$CWatermarkStack@M$01$01$09@@QEAAXXZ @ 0x180190420
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 */

void __fastcall CWatermarkStack<float,2,2,10>::Optimize(__int64 a1)
{
  int v1; // edi
  int v3; // edi
  __int64 v4; // rsi
  int v5; // eax
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 10 )
  {
    v4 = 2LL;
    if ( *(_DWORD *)(a1 + 20) > 2u )
      v4 = *(unsigned int *)(a1 + 20);
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 12) )
      {
        v6 = 0LL;
        v5 = HrMalloc(4uLL, (unsigned int)v4, &v6);
        if ( v5 >= 0 )
        {
          operator delete(*(void **)a1);
          *(_QWORD *)a1 = v6;
          *(_DWORD *)(a1 + 12) = v4;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x11Eu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    *(_DWORD *)(a1 + 20) = 0;
  }
  else
  {
    v3 = v1 + 1;
  }
  *(_DWORD *)(a1 + 16) = v3;
}
