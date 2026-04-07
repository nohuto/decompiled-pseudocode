/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCKeystateTextFeedback@@$0A@@@QEAAJPEFBUCKeystateTextFeedback@@I@Z @ 0x180064758
 * Callers:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x1800131E8 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CKeystateTextFeedback,0>::AddMultipleAndSet(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  _OWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v6 = v4 + 1;
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v7 = 0;
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      v15 = (_OWORD *)a2;
      v11 = DynArrayImpl<0>::Grow(a1, 0x28u, 1, a4, (unsigned __int64 *)&v15);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC2u, 0LL);
      }
      else
      {
        v12 = *(_QWORD *)a1;
        v13 = v15;
        v14 = (unsigned int)(40 * *(_DWORD *)(a1 + 24));
        *(_OWORD *)(v14 + v12) = *v15;
        *(_OWORD *)(v14 + v12 + 16) = v13[1];
        *(_QWORD *)(v14 + v12 + 32) = *((_QWORD *)v13 + 4);
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v8 = 5 * v4;
      v9 = *(_QWORD *)a1;
      *(_OWORD *)(v9 + 8 * v8) = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 8 * v8 + 16) = *(_OWORD *)(a2 + 16);
      *(_QWORD *)(v9 + 8 * v8 + 32) = *(_QWORD *)(a2 + 32);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  return v7;
}
