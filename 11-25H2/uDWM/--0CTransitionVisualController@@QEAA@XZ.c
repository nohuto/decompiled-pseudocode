/*
 * XREFs of ??0CTransitionVisualController@@QEAA@XZ @ 0x180096CD0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x180081384 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CTransitionVisualController *__fastcall CTransitionVisualController::CTransitionVisualController(
        CTransitionVisualController *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r9
  __int64 v6; // r10
  CTransitionVisualController *v7; // r9
  CTransitionVisualController *result; // rax
  __int64 v9; // r10

  *(_QWORD *)this = &CTransitionVisualController::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 24, 0LL, 0);
  DynArrayImpl<0>::DynArrayImpl<0>(v1 + 56, v2, v3);
  *(_DWORD *)(v4 + 88) = -1;
  *(_QWORD *)(v4 + 96) = -1LL;
  *(_DWORD *)(v4 + 104) = -1;
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v4 + 112));
  *(_QWORD *)(v5 + 144) = v6;
  DynArrayImpl<0>::DynArrayImpl<0>(v5 + 152, 0LL, 0);
  result = v7;
  *((_QWORD *)v7 + 23) = v9;
  return result;
}
