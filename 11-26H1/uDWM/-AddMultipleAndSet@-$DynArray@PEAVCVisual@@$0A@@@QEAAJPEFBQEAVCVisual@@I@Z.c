/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCVisual@@$0A@@@QEAAJPEFBQEAVCVisual@@I@Z @ 0x18001E210
 * Callers:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180005A2C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001C390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18008EF24 (memcpy_0.c)
 */

__int64 __fastcall DynArray<CVisual *,0>::AddMultipleAndSet(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // eax
  unsigned int v10; // edi
  void *Src; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v7 = v4 + a3;
  if ( (unsigned int)v4 + a3 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return 2147942934LL;
  }
  else if ( v7 > *(_DWORD *)(a1 + 20) )
  {
    Src = a2;
    v9 = DynArrayImpl<0>::Grow(a1, 8u, a3, a4, (unsigned __int64 *)&Src);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC2u, 0LL);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 24))), Src, 8 * a3);
      *(_DWORD *)(a1 + 24) += a3;
    }
    return v10;
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 8 * v4), a2, 8LL * a3);
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v7;
  }
  return result;
}
