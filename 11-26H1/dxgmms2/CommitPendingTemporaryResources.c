/*
 * XREFs of CommitPendingTemporaryResources @ 0x14004DA18
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommitPendingTemporaryResources(__int64 a1)
{
  __int64 v1; // r8
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  __int64 result; // rax

  v1 = a1 + 1808;
  v2 = (_QWORD **)(a1 + 1792);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 8LL) != a1 + 1808
    || (v3 = *(_QWORD **)(a1 + 1816), *v3 != v1)
    || (_QWORD **)(*v2)[1] != v2
    || (_QWORD **)*v2[1] != v2
    || (*v3 = v2, *(_QWORD *)(v1 + 8) = v2[1], *v2[1] = v1, v2[1] = v3, result = (__int64)*v2, (_QWORD **)(*v2)[1] != v2)
    || (_QWORD **)*v3 != v2 )
  {
    __fastfail(3u);
  }
  *v3 = result;
  *(_QWORD *)(result + 8) = v3;
  v2[1] = v2;
  *v2 = v2;
  return result;
}
