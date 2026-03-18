/*
 * XREFs of ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180053D20
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x180053C30 (-IsEmpty@CPathSegmentsShape@@UEBA_NXZ.c)
 * Callees:
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x180053E1C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Path::ControlPointCollection::const_iterator::operator++(__int64 a1)
{
  int v2; // ecx
  _BYTE *v3; // r8
  int v4; // eax
  _BYTE *v6; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)(a1 + 16) + 1;
  v3 = *(_BYTE **)a1;
  *(_DWORD *)(a1 + 16) = v2;
  switch ( *v3 )
  {
    case 0:
      goto LABEL_9;
    case 1:
      v4 = 0;
      break;
    case 2:
    case 3:
LABEL_9:
      if ( v3 == (_BYTE *)-8LL )
        goto LABEL_8;
      v4 = 1;
      break;
    case 4:
      if ( v3 == (_BYTE *)-8LL )
        goto LABEL_8;
      v4 = 2;
      break;
    case 5:
      if ( v3 == (_BYTE *)-8LL )
        goto LABEL_8;
      v4 = 3;
      break;
    default:
      ModuleFailFastForHRESULT(-2147024809, retaddr);
  }
  if ( v2 == v4 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    do
    {
      Path::SegmentCollection::const_iterator::operator++(a1);
      v6 = *(_BYTE **)a1;
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
        return a1;
      if ( !*v6 )
        goto LABEL_21;
    }
    while ( *v6 == 1 );
    if ( *v6 != 2 && *v6 != 3 && (unsigned int)(unsigned __int8)*v6 - 4 > 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
LABEL_21:
    if ( v6 == (_BYTE *)-8LL )
    {
LABEL_8:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  return a1;
}
