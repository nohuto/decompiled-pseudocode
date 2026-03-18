/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x1800733C8
 * Callers:
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rbp
  int v4; // edi
  void *v5; // rsi
  int v6; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 != 10 )
  {
    v4 = v1 + 1;
    goto LABEL_7;
  }
  v3 = 64LL;
  if ( *(_DWORD *)(a1 + 20) > 0x40u )
    v3 = *(unsigned int *)(a1 + 20);
  v4 = 0;
  if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 12) )
    {
      if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 0x10 )
      {
        v5 = MIDL_user_allocate(16LL * (unsigned int)v3);
        if ( v5 )
        {
          operator delete(*(void **)a1);
          *(_QWORD *)a1 = v5;
          *(_DWORD *)(a1 + 12) = v3;
          goto LABEL_6;
        }
        v6 = -2147024882;
      }
      else
      {
        v6 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_6:
  *(_DWORD *)(a1 + 20) = 0;
LABEL_7:
  *(_DWORD *)(a1 + 16) = v4;
}
