/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x1800595D0
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180017A70 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CWindowData *,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1C9u, 0LL);
  }
  else
  {
    v14 = (_QWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, a4, (unsigned __int64 *)&v14);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1D3u, 0LL);
    }
    else
    {
      v8 = *(unsigned int *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v8 + 1;
      if ( (unsigned int)v8 > (unsigned int)v5 )
      {
        v10 = (_QWORD *)(v9 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v10-- = *(_QWORD *)(v9 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v5 );
      }
      v11 = v14;
      v12 = (_QWORD *)(v9 + 8 * v5);
      if ( v14 >= v12 && (unsigned __int64)v14 < v9 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
        v11 = v14 + 1;
      *v12 = *v11;
    }
  }
  return v7;
}
