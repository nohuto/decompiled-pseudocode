/*
 * XREFs of ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x18016F380
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18016F230 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CMILMatrix,8,2,8>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  void *v4; // rsi
  int v5; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 != 8 )
  {
    *(_DWORD *)(a1 + 16) = v1 + 1;
    return;
  }
  v3 = 8LL;
  if ( *(_DWORD *)(a1 + 20) > 8u )
    v3 = *(unsigned int *)(a1 + 20);
  if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    goto LABEL_9;
  }
  if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 12) )
  {
    if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 0x44 )
    {
      v4 = MIDL_user_allocate(68LL * (unsigned int)v3);
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
