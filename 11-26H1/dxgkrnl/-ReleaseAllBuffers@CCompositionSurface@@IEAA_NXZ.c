/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x140025E88
 * Callers:
 *     ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x140025E50 (-Delete@CCompositionSurface@@MEAAJPEAX@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140026270 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x140026474 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     NtBindCompositionSurface @ 0x140027340 (NtBindCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // si
  CCompositionSurface **v3; // rbx
  CCompositionSurface **v4; // rax
  CCompositionSurface *v5; // rcx
  CCompositionSurface *v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 30) )
  {
    v3 = (CCompositionSurface **)((char *)this + 104);
    v4 = (CCompositionSurface **)*((_QWORD *)this + 13);
    if ( v4[1] != (CCompositionSurface *)((char *)this + 104) )
      goto LABEL_13;
    v5 = *v4;
    if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
      goto LABEL_13;
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 != v3 )
    {
      v1 = 1;
      while ( 1 )
      {
        if ( v4 != (CCompositionSurface **)24 )
          (*(void (__fastcall **)(CCompositionSurface **, __int64))*(v4 - 3))(v4 - 3, 1LL);
        v4 = (CCompositionSurface **)*v3;
        if ( *((CCompositionSurface ***)*v3 + 1) != v3 )
          break;
        v6 = *v4;
        if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
          break;
        *v3 = v6;
        *((_QWORD *)v6 + 1) = v3;
        if ( v4 == v3 )
          goto LABEL_11;
      }
LABEL_13:
      __fastfail(3u);
    }
LABEL_11:
    *((_DWORD *)this + 30) = 0;
  }
  return v1;
}
