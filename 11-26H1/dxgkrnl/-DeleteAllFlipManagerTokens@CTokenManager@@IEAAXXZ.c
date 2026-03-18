/*
 * XREFs of ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1400614C4
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1400A1040 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1400A12E0 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 * Callees:
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14001E0E0 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x14006BD58 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::DeleteAllFlipManagerTokens(CTokenManager *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD **v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax

  v2 = (_QWORD **)((char *)this + 296);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_11:
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    (*(void (__fastcall **)(_QWORD *))(*(v3 - 1) + 56LL))(v3 - 1);
    (*(void (__fastcall **)(_QWORD *, __int64))*(v3 - 1))(v3 - 1, 1LL);
  }
  FlipManagerDwmProcessFlipManagerSignal((struct _LIST_ENTRY *)((char *)this + 312), 0LL);
  v5 = (_QWORD **)((char *)this + 280);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 )
      goto LABEL_11;
    v7 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_11;
    *v5 = v7;
    v7[1] = v5;
    FlipManagerConsumerAdapterCleanupTokenDiscard(v6 - 6);
  }
}
