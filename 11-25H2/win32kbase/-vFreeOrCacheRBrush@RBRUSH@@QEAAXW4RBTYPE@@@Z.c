/*
 * XREFs of ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x140091E00
 * Callers:
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x140070FD4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     GreSetSolidBrushLight @ 0x140071A70 (GreSetSolidBrushLight.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1400912D0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vDelete@EBRUSHOBJ@@QEAAXXZ @ 0x140091DA0 (-vDelete@EBRUSHOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     EngFreeUserMem @ 0x140073720 (EngFreeUserMem.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall RBRUSH::vFreeOrCacheRBrush(PVOID a1, int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  int (*v7)(void); // rax
  void (__fastcall *v8)(__int64); // rax

  v3 = (__int64)a1;
  if ( a1 < MmSystemRangeStart )
  {
    EngFreeUserMem(a1);
  }
  else
  {
    v4 = 0;
    v5 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    if ( a2 )
    {
      v6 = 32LL;
    }
    else
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( v4 )
      {
        v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1656LL);
        if ( v7 )
        {
          if ( v7() >= 0 )
          {
            v8 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1664LL);
            if ( v8 )
              v8(v3 + 16);
          }
        }
      }
      v6 = 24LL;
    }
    if ( *(_QWORD *)(v5 + v6) || v4 == 1 || (v3 = _InterlockedExchange64((volatile __int64 *)(v5 + v6), v3)) != 0 )
      GreDeleteFastMutex((char *)v3);
  }
}
