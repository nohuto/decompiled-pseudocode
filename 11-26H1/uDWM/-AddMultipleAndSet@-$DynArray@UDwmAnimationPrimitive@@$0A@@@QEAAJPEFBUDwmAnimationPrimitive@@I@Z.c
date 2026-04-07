/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmAnimationPrimitive@@$0A@@@QEAAJPEFBUDwmAnimationPrimitive@@I@Z @ 0x180050C0C
 * Callers:
 *     ?_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180050940 (-_AddPrimitive@CAnimationResource@@IEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<DwmAnimationPrimitive,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(_DWORD *)(a1 + 24);
  v4 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 32, 1, a2);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC2u, 0LL);
    }
    else
    {
      v6 = v2;
      v7 = *(_QWORD *)a1;
      v6 *= 32LL;
      *(_OWORD *)(v6 + v7) = *a2;
      *(_OWORD *)(v6 + v7 + 16) = a2[1];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
