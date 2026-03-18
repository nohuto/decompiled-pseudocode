/*
 * XREFs of ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x140208BE4
 * Callers:
 *     NtGdiDoBanding @ 0x140208AF0 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1400A1DA4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D3200 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     GreDeleteWnd @ 0x140302960 (GreDeleteWnd.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepDoBanding(struct XDCOBJ *a1, __int64 a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rbx
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(__int64, struct _POINTL *); // rdi
  unsigned int v15; // ecx
  struct EWNDOBJ *v16; // rcx

  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) )
    return 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  if ( !v10 )
    return 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !*(_QWORD *)(v11 + 2552) || (*(_DWORD *)(v10 + 112) & 0x2000000) == 0 )
    return 0LL;
  if ( (_DWORD)v9 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3136);
    if ( !UmpdSecurityGateNoUmpdObj(v8, v7, v9) || v12 )
      v13 = v12(v10 + 24, a3);
    else
      v13 = 0;
    a4->cx = *(_DWORD *)(v10 + 56);
    a4->cy = *(_DWORD *)(v10 + 60);
    *(struct _POINTL *)(*(_QWORD *)a1 + 2104LL) = *a3;
  }
  else
  {
    v14 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3144);
    if ( !UmpdSecurityGateNoUmpdObj(v8, v7, v9) || v14 )
    {
      v13 = v14(v10 + 24, a3);
      v15 = v13;
      if ( v13 )
      {
        if ( a3->x == -1 )
        {
          v13 &= -((*(_DWORD *)(v11 + 40) & 0x8000) != 0);
          if ( ((*(_DWORD *)(v11 + 40) & 0x8000) != 0 ? v15 : 0) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)a1 + 36LL) &= ~0x100u;
            v16 = *(struct EWNDOBJ **)(v10 + 136);
            if ( v16 )
            {
              GreDeleteWnd(v16);
              *(_QWORD *)(v10 + 136) = 0LL;
            }
            *(_WORD *)(*(_QWORD *)a1 + 2088LL) = 0;
          }
        }
        else
        {
          *(struct _POINTL *)(*(_QWORD *)a1 + 2104LL) = *a3;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v13;
}
