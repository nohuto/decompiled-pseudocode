/*
 * XREFs of ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x18011A360
 * Callers:
 *     ?SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z @ 0x18021BDDC (-SetRoot@CDesktopTree@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  __int64 v2; // rbx
  char *v3; // rdi
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 10);
  v3 = (char *)this + 80;
  v4 = a2;
  v5 = v2 & 3;
  v6 = 0LL;
  v7 = *((_DWORD *)this + 20) & 3;
  if ( (v2 & 3) != 0 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v10 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_13;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = 0LL;
      goto LABEL_5;
    }
    if ( v9 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v10 = (unsigned __int64)v3;
  if ( (v2 & 3) != 0 )
  {
    if ( v5 != 1 )
    {
      if ( (unsigned __int64)(v5 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_5:
      v11 = 0LL;
      if ( v5 != 1 )
      {
        if ( v5 == 2 )
        {
          v12 = 0LL;
          goto LABEL_15;
        }
        goto LABEL_22;
      }
LABEL_14:
      v12 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_15;
    }
LABEL_13:
    v11 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    goto LABEL_14;
  }
  v11 = 1LL;
LABEL_22:
  v12 = (unsigned __int64)v3;
LABEL_15:
  if ( (__int64)(v10 + 8 * v11 - v12) >> 3 > v4 )
  {
    if ( (v2 & 3) != 0 )
    {
      v13 = v5 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
            ModuleFailFastForHRESULT(-2147418113, retaddr);
          goto LABEL_28;
        }
      }
      else
      {
        v6 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      return *(struct CVisual **)(v6 + 8 * v4);
    }
LABEL_28:
    v6 = (unsigned __int64)v3;
    return *(struct CVisual **)(v6 + 8 * v4);
  }
  return 0LL;
}
