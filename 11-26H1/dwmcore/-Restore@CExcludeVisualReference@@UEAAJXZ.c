/*
 * XREFs of ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x180194F10
 * Callers:
 *     ??1CExcludeVisualReference@@QEAA@XZ @ 0x1801A356C (--1CExcludeVisualReference@@QEAA@XZ.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExcludeVisualReference::Restore(CExcludeVisualReference *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 1);
  if ( !v1 )
    return 2291674884LL;
  if ( !g_pComposition
    || GetCurrentThreadId() != CComposition::s_compositionThreadId
    && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
  {
    ModuleFailFastForHRESULT(-2003304313, retaddr);
  }
  v3 = *(_QWORD *)(v1 + 64);
  if ( !v3 )
    return 2291674884LL;
  if ( *((_DWORD *)this + 4) )
  {
    *(_BYTE *)(v3 + 101) = *(_BYTE *)(v3 + 101) & 0x7F | (*((_BYTE *)this + 20) << 7);
    *((_DWORD *)this + 4) = 0;
  }
  return 0LL;
}
