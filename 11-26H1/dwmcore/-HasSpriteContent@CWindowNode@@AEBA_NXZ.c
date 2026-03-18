/*
 * XREFs of ?HasSpriteContent@CWindowNode@@AEBA_NXZ @ 0x180122960
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ @ 0x180122900 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CWindowNode@@MEBA_NXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

bool __fastcall CWindowNode::HasSpriteContent(CWindowNode *this)
{
  char *v1; // r10
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 745) )
    return 0;
  v1 = (char *)this + 824;
  v2 = 0LL;
  v3 = *((_QWORD *)this + 103);
  v4 = v3 & 3;
  v5 = *((_DWORD *)this + 206) & 3;
  if ( (v3 & 3) != 0 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v8 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_11:
      v2 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_12;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v8 = 0LL;
      goto LABEL_6;
    }
    if ( v7 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v8 = (unsigned __int64)v1;
  if ( (v3 & 3) == 0 )
  {
    v2 = 1LL;
LABEL_20:
    v11 = (unsigned __int64)v1;
    return v8 + 8 * v2 - v11 != 0;
  }
  if ( v4 == 1 )
    goto LABEL_11;
  if ( (unsigned __int64)(v4 - 2) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_6:
  v9 = v4 - 1;
  if ( !v9 )
  {
LABEL_12:
    v11 = v3 & 0xFFFFFFFFFFFFFFFCuLL;
    return v8 + 8 * v2 - v11 != 0;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    goto LABEL_20;
  }
  v11 = 0LL;
  return v8 + 8 * v2 - v11 != 0;
}
