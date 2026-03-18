/*
 * XREFs of ?Optimize@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAXXZ @ 0x18016F860
 * Callers:
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18016F230 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rsi
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rbp
  int v6; // r9d
  void *v7; // rdi
  HANDLE v8; // rax

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 10 )
  {
    v3 = 64LL;
    if ( *(_DWORD *)(a1 + 20) > 0x40u )
      v3 = *(unsigned int *)(a1 + 20);
    if ( (unsigned __int64)(3 * v3) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 12) )
      {
        if ( (_DWORD)v3 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v3 > 4 )
        {
          ProcessHeap = GetProcessHeap();
          v5 = HeapAlloc(ProcessHeap, 0, 4 * v3);
          if ( v5 )
          {
            v7 = *(void **)a1;
            if ( *(_QWORD *)a1 )
            {
              v8 = GetProcessHeap();
              HeapFree(v8, 0, v7);
            }
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
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x11Eu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
LABEL_6:
    *(_QWORD *)(a1 + 16) = 0LL;
    return;
  }
  *(_DWORD *)(a1 + 16) = v1 + 1;
}
