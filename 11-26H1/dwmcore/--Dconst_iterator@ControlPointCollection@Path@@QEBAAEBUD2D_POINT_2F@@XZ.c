/*
 * XREFs of ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18004F690
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BYTE *__fastcall Path::ControlPointCollection::const_iterator::operator*(__int64 a1)
{
  unsigned __int64 v2; // rax
  _BYTE *v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // edx
  _BYTE *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v3 = *(_BYTE **)a1;
  v4 = (unsigned __int8)*v3;
  if ( !*v3 )
    goto LABEL_9;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 0LL;
    goto LABEL_12;
  }
  v4 = (unsigned int)(v5 - 1);
  if ( (_DWORD)v4 && (v4 = (unsigned int)(v4 - 1), (_DWORD)v4) )
  {
    v4 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v6 = v3 + 8;
      if ( !v6 )
      {
LABEL_8:
        ((void (__fastcall *)(_BYTE *, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v6,
          v4,
          a1);
        __debugbreak();
      }
      v2 = 3LL;
    }
    else
    {
      v6 = v3 + 8;
      if ( !v6 )
        goto LABEL_8;
      v2 = 2LL;
    }
  }
  else
  {
LABEL_9:
    v6 = v3 + 8;
    if ( !v6 )
      goto LABEL_8;
    v2 = 1LL;
  }
LABEL_12:
  v4 = *(unsigned int *)(a1 + 16);
  if ( v4 >= v2 )
    goto LABEL_8;
  return &v6[8 * v4];
}
