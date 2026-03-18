/*
 * XREFs of ?UpdateCurrentEndPoint@CTrimPathOperation@@AEAAXAEBUSegment@Path@@@Z @ 0x18005399C
 * Callers:
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x1800533A4 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTrimPathOperation::UpdateCurrentEndPoint(CTrimPathOperation *this, const struct Path::Segment *a2)
{
  __int64 v2; // r9
  char *v3; // rax
  int v4; // xmm1_4
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1LL;
  if ( *(_BYTE *)a2 != 1 )
  {
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        goto LABEL_10;
      case 1:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      case 2:
      case 3:
LABEL_10:
        v3 = (char *)a2 + 8;
        if ( a2 == (const struct Path::Segment *)-8LL )
          goto LABEL_9;
        v2 = 0LL;
        break;
      case 4:
        v3 = (char *)a2 + 8;
        if ( a2 == (const struct Path::Segment *)-8LL )
          goto LABEL_9;
        break;
      case 5:
        v3 = (char *)a2 + 8;
        if ( a2 == (const struct Path::Segment *)-8LL )
        {
LABEL_9:
          `gsl::details::get_terminate_handler'::`2'::handler(this);
          __debugbreak();
        }
        v2 = 2LL;
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
    v4 = *(_DWORD *)&v3[8 * v2 + 4];
    *((_DWORD *)this + 9) = *(_DWORD *)&v3[8 * v2];
    *((_DWORD *)this + 10) = v4;
  }
}
