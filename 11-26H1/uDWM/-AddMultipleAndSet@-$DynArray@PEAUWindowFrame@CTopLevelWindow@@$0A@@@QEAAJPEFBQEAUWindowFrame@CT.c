/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CTopLevelWindow@@I@Z @ 0x18006571C
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800655C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001BDA0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTopLevelWindow::WindowFrame *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  int v5; // eax

  v2 = dword_1801159F0 + 1;
  if ( dword_1801159F0 + 1 < (unsigned int)dword_1801159F0 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v3 = 0;
    if ( v2 > dword_1801159EC )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CTopLevelWindow::s_rgpwfWindowFrames, 8, 1, a2);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC2u, 0LL);
    }
    else
    {
      *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 8LL * (unsigned int)dword_1801159F0) = *a2;
      dword_1801159F0 = v2;
    }
  }
  return v3;
}
