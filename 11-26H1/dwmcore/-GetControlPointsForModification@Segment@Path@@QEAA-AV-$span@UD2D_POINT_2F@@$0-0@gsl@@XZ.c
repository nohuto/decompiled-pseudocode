/*
 * XREFs of ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18004FA0C
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Path::Segment::GetControlPointsForModification(_BYTE *a1, __int64 *a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a1 )
  {
    switch ( *a1 )
    {
      case 1:
        v2 = 0LL;
        v3 = 0LL;
        break;
      case 2:
      case 3:
        v2 = a1 + 8;
        if ( a1 == (_BYTE *)-8LL )
          goto LABEL_8;
        v3 = 1LL;
        break;
      case 4:
        v2 = a1 + 8;
        if ( a1 == (_BYTE *)-8LL )
          goto LABEL_8;
        v3 = 2LL;
        break;
      case 5:
        v2 = a1 + 8;
        if ( a1 == (_BYTE *)-8LL )
        {
LABEL_8:
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v3 = 3LL;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  else
  {
    v2 = a1 + 8;
    v3 = 1LL;
    if ( !v2 )
      goto LABEL_8;
  }
  *a2 = v3;
  a2[1] = (__int64)v2;
  if ( !v2 && v3 )
    goto LABEL_8;
  return a2;
}
