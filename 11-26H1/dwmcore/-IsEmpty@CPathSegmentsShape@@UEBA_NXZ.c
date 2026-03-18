/*
 * XREFs of ?IsEmpty@CPathSegmentsShape@@UEBA_NXZ @ 0x180053C30
 * Callers:
 *     <none>
 * Callees:
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x180053D20 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CPathSegmentsShape::IsEmpty(CPathSegmentsShape *this)
{
  __int64 v1; // rsi
  int v2; // edi
  bool v3; // zf
  _BYTE *v5; // rax
  int v6; // edi
  _BYTE *v7; // rbx
  unsigned int v8; // r8d
  unsigned __int64 v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 52);
  v3 = v2 == 0;
  if ( !v2 )
  {
    v5 = *(_BYTE **)(v1 + 16);
    v6 = 0;
    v7 = *(_BYTE **)(v1 + 24);
    v8 = 0;
    v10[0] = v5;
    v10[1] = v7;
    v11 = 0;
    while ( 1 )
    {
      if ( v5 == v7 && !v8 )
      {
        *(_DWORD *)(v1 + 52) = v6;
        return v6 == 0;
      }
      switch ( *v5 )
      {
        case 0:
          goto LABEL_15;
        case 1:
          v9 = 0LL;
          break;
        case 2:
        case 3:
LABEL_15:
          if ( v5 == (_BYTE *)-8LL )
            goto LABEL_12;
          v9 = 1LL;
          break;
        case 4:
          if ( v5 == (_BYTE *)-8LL )
            goto LABEL_12;
          v9 = 2LL;
          break;
        case 5:
          if ( v5 == (_BYTE *)-8LL )
          {
LABEL_12:
            ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
            __debugbreak();
          }
          v9 = 3LL;
          break;
        default:
          ModuleFailFastForHRESULT(-2147024809, retaddr);
      }
      if ( v8 >= v9 )
        goto LABEL_12;
      ++v6;
      Path::ControlPointCollection::const_iterator::operator++(v10);
      v8 = v11;
      v5 = (_BYTE *)v10[0];
    }
  }
  return v3;
}
