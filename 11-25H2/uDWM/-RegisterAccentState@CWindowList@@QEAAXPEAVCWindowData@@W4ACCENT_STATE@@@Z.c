/*
 * XREFs of ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z @ 0x180078DA4
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18000FB1C (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWindowList::RegisterAccentState(_DWORD *a1, struct CWindowData *a2, unsigned int a3)
{
  _QWORD *v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    v3 = a1 + 142;
    v4 = 0;
    v5 = (unsigned int)a1[148];
    while ( v4 < (unsigned int)v5 )
    {
      if ( *(struct CWindowData **)(*v3 + 16LL * v4) == a2 )
      {
        *(_DWORD *)(*v3 + 16LL * v4 + 8) = a3;
        return;
      }
      ++v4;
    }
    *(_QWORD *)&v8 = a2;
    v6 = v5 + 1;
    *((_QWORD *)&v8 + 1) = a3;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
    }
    else if ( v6 > a1[147] )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(a1 + 142), 16, 1, &v8);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xBEu, 0LL);
    }
    else
    {
      *(_OWORD *)(*v3 + 16 * v5) = v8;
      a1[148] = v6;
    }
  }
  else
  {
    CWindowList::UnregisterAccentState((CWindowList *)a1, a2);
  }
}
