/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18010E8D0
 * Callers:
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18010D514 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x180164614 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // r9d
  unsigned int v15; // r14d
  unsigned __int64 v16; // r8
  char *v17; // rbp
  int v18; // eax
  char *v19; // rax
  unsigned __int64 v20; // r8
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v5 = *(_DWORD *)(a1 + 24);
  v8 = v5 + a3;
  if ( v5 + a3 < v5 )
  {
    v21 = 169;
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = 0;
  if ( v8 > v9 )
  {
    if ( a2 * (unsigned __int64)v8 > 0xFFFFFFFF )
    {
      v21 = 178;
LABEL_6:
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, v21, 0LL);
      return v10;
    }
    v12 = 16;
    v13 = v8 - v9;
    if ( v9 <= 0x10 || (v14 = 8092, v12 = *(_DWORD *)(a1 + 20), v9 < 0x1F9C) )
      v14 = v12;
    if ( v13 <= v14 )
      v13 = v14;
    v15 = v13 + v9;
    if ( v13 + v9 < v9 || (v16 = a2 * (unsigned __int64)v15, v16 > 0xFFFFFFFF) )
    {
      v15 = v8;
      LODWORD(v16) = a2 * v8;
    }
    if ( v15 > 0xFFFFFFFF / a2 )
    {
      v21 = 204;
      goto LABEL_6;
    }
    if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
    {
      if ( (_DWORD)v16 )
      {
        v17 = (char *)MIDL_user_allocate((unsigned int)v16);
        if ( v17 )
        {
          v18 = *(_DWORD *)(a1 + 24);
          if ( v18 )
            memcpy_0(v17, *(const void **)a1, a2 * v18);
LABEL_21:
          memset_0(&v17[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v15 - *(_DWORD *)(a1 + 20)));
          *(_DWORD *)(a1 + 20) = v15;
          *(_QWORD *)a1 = v17;
          return v10;
        }
        v10 = -2147024882;
      }
      else
      {
        v10 = -2147024809;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xD3u, 0LL);
      return v10;
    }
    v19 = (char *)DefaultHeap::Realloc(*(void **)a1, (unsigned int)v16);
    v17 = v19;
    if ( !v19 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xE5u, 0LL);
      return v10;
    }
    if ( v19 != *(char **)a1 )
    {
      if ( a5 )
      {
        v20 = *a5;
        if ( *a5 >= *(_QWORD *)a1 && v20 < *(_QWORD *)a1 + (unsigned __int64)(*(_DWORD *)(a1 + 20) * a2) )
          *a5 = (unsigned __int64)&v19[v20 - *(_QWORD *)a1];
      }
    }
    goto LABEL_21;
  }
  return v10;
}
