/*
 * XREFs of PnprReplaceStart @ 0x1407B3164
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140BF7744 (PnprInitiateReplaceOperation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 PnprReplaceStart()
{
  _DWORD *v0; // rdi
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  v0 = (_DWORD *)(PnprContext + 72);
  v11[1] = *(_QWORD *)(PnprContext + 16);
  v11[2] = *(_QWORD *)(PnprContext + 48);
  v1 = 0;
  if ( (*(_DWORD *)(PnprContext + 33200) & 2) != 0 )
  {
    v1 = 1;
    LODWORD(v11[0]) = 1;
  }
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
    LODWORD(v11[0]) = v1 | 2;
  v2 = guard_dispatch_icall_no_overrides((__int64)v11, PnprContext + 33176);
  if ( v2 >= 0 )
  {
    v6 = (_QWORD *)PnprContext;
    if ( *(_DWORD *)(*(_QWORD *)(PnprContext + 24) + 4LL) )
    {
      memset_0(v0, 0, 0x40uLL);
      *v0 = 64;
      v0[1] = 2;
      *((_QWORD *)v0 + 1) = v6[1];
      *((_QWORD *)v0 + 2) = v6[5];
      *((_QWORD *)v0 + 3) = v6[2];
      *((_QWORD *)v0 + 4) = v6[6];
      *((_QWORD *)v0 + 5) = v6[3];
      *((_QWORD *)v0 + 6) = v6[7];
      *((_QWORD *)v0 + 7) = PnprMapTargetSparePhysicalPages;
      v2 = guard_dispatch_icall_no_overrides((__int64)v0, (__int64)(v6 + 4148));
      if ( v2 < 0 )
      {
        v7 = PnprContext;
        v8 = *(_DWORD *)(PnprContext + 33288);
        if ( !v8 )
          v8 = 2554;
        *(_DWORD *)(PnprContext + 33288) = v8;
        v9 = *(_DWORD *)(v7 + 33292);
        if ( !v9 )
          v9 = 8;
        *(_DWORD *)(v7 + 33292) = v9;
      }
    }
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 33288);
    if ( !v4 )
      v4 = 2528;
    v5 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v4;
    if ( !v5 )
      v5 = 6;
    *(_DWORD *)(v3 + 33292) = v5;
  }
  return (unsigned int)v2;
}
