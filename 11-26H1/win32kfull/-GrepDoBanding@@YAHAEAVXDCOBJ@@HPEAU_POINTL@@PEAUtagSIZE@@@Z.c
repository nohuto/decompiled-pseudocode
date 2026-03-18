/*
 * XREFs of ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x14028FC9C
 * Callers:
 *     NtGdiDoBanding @ 0x140241610 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x14016BC60 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepDoBanding(struct XDCOBJ *a1, __int64 a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  int v7; // r8d
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, struct _POINTL *); // rax
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rax
  struct EWNDOBJ *v13; // rcx

  if ( !(unsigned int)XDCOBJ::bValidSurf(a1) )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !*(_QWORD *)(v9 + 2552) || (*(_DWORD *)(v8 + 112) & 0x2000000) == 0 )
    return 0LL;
  if ( v7 )
  {
    v10 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3136);
    if ( v10 )
      v11 = v10(v8 + 24, a3);
    else
      v11 = 0;
    a4->cx = *(_DWORD *)(v8 + 56);
    a4->cy = *(_DWORD *)(v8 + 60);
    *(struct _POINTL *)(*(_QWORD *)a1 + 2128LL) = *a3;
  }
  else
  {
    v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v9 + 3144);
    if ( v12 )
    {
      v11 = v12(v8 + 24, a3);
      if ( v11 )
      {
        if ( a3->x == -1 )
        {
          v11 &= -((*(_DWORD *)(v9 + 40) & 0x8000) != 0);
          if ( v11 )
          {
            *(_DWORD *)(*(_QWORD *)a1 + 36LL) &= ~0x100u;
            v13 = *(struct EWNDOBJ **)(v8 + 136);
            if ( v13 )
            {
              GreDeleteWnd(v13);
              *(_QWORD *)(v8 + 136) = 0LL;
            }
            *(_WORD *)(*(_QWORD *)a1 + 2088LL) = 0;
          }
        }
        else
        {
          *(struct _POINTL *)(*(_QWORD *)a1 + 2128LL) = *a3;
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v11;
}
