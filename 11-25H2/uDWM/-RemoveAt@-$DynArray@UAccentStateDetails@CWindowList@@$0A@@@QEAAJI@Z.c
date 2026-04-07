/*
 * XREFs of ?RemoveAt@?$DynArray@UAccentStateDetails@CWindowList@@$0A@@@QEAAJI@Z @ 0x1800840A0
 * Callers:
 *     ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18001A5FC (-UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CWindowList::AccentStateDetails,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x192u, 0LL);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = 2LL * v4;
        v9 = 2LL * ++v4;
        *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 8 * v9);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
