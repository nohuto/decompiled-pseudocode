/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAUWindowFrame@CTopLevelWindow@@$0A@@@QEAAJPEFBQEAUWindowFrame@CTopLevelWindow@@I@Z @ 0x18003152C
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800314A0 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CTopLevelWindow::WindowFrame *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  int v5; // eax

  v2 = dword_180119960 + 1;
  if ( dword_180119960 + 1 < (unsigned int)dword_180119960 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    v3 = 0;
    if ( v2 > dword_18011995C )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8, 1, a2);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xBEu, 0LL);
    }
    else
    {
      *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (unsigned int)dword_180119960) = *a2;
      dword_180119960 = v2;
    }
  }
  return v3;
}
