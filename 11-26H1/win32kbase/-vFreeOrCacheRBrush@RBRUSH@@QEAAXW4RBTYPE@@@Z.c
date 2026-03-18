/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140033590
 * Callers:
 *     GreSetSolidBrushLight @ 0x1400325A0 (GreSetSolidBrushLight.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140033520 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140033AE4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 * Callees:
 *     ?GrepIsEngineVa@@YA_NPEAX@Z @ 0x140034420 (-GrepIsEngineVa@@YA_NPEAX@Z.c)
 *     ?EngTryFreeUserMem@@YA_NPEAX@Z @ 0x140034444 (-EngTryFreeUserMem@@YA_NPEAX@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall RBRUSH::vFreeOrCacheRBrush(_DWORD *a1, int a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rsi
  int (*v9)(void); // rax
  __int64 v10; // rcx
  void (__fastcall *v11)(_DWORD *); // rax

  v3 = a1;
  LOBYTE(v4) = EngTryFreeUserMem(a1);
  if ( !(_BYTE)v4 )
  {
    LOBYTE(v4) = GrepIsEngineVa(v3);
    if ( (_BYTE)v4 )
    {
      v6 = 0;
      v8 = *(_QWORD *)(W32GetSessionState(v5) + 88);
      if ( a2 )
      {
        v4 = 120LL;
      }
      else
      {
        v6 = v3[2];
        if ( v6 )
        {
          v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7) + 24) + 1632LL);
          if ( v9 )
          {
            if ( v9() >= 0 )
            {
              v11 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10) + 24) + 1640LL);
              if ( v11 )
                v11(v3 + 4);
            }
          }
        }
        v4 = 112LL;
      }
      if ( v6 == 1
        || *(_QWORD *)(v4 + v8)
        || (v3 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(v4 + v8), (__int64)v3)) != 0LL )
      {
        LOBYTE(v4) = GreDeleteFastMutex(v3);
      }
    }
  }
  return v4;
}
