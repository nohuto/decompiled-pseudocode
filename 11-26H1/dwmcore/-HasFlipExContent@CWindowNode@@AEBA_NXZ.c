/*
 * XREFs of ?HasFlipExContent@CWindowNode@@AEBA_NXZ @ 0x180122A58
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x180122900 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CWindowNode::HasFlipExContent(CWindowNode *this)
{
  char *v1; // r10
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)this + 832;
  v2 = 0LL;
  v3 = *((_QWORD *)this + 104);
  v4 = v3 & 3;
  if ( (v3 & 3) != 0 )
  {
    if ( (v3 & 3) == 1 )
    {
      v5 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_9:
      v2 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_10;
    }
    if ( (v3 & 3) == 2 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    if ( (v3 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = (unsigned __int64)v1;
  if ( (v3 & 3) == 0 )
  {
    v2 = 1LL;
LABEL_17:
    v8 = (unsigned __int64)v1;
    return v5 + 8 * v2 - v8 != 0;
  }
  if ( v4 == 1 )
    goto LABEL_9;
  if ( (unsigned __int64)(v4 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
  v6 = v4 - 1;
  if ( !v6 )
  {
LABEL_10:
    v8 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
    return v5 + 8 * v2 - v8 != 0;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_17;
  }
  v8 = 0LL;
  return v5 + 8 * v2 - v8 != 0;
}
