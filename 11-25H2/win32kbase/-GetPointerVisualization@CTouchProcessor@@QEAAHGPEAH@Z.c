/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x140120560
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BB1E0 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

_BOOL8 __fastcall CTouchProcessor::GetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  _DWORD *v7; // rcx
  BOOL v8; // ebx
  tagDomLock *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (CTouchProcessor *)((char *)this + 32));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v7 = (_DWORD *)((char *)NodeById + 300);
    if ( a3 )
      *a3 = (*v7 & 0x400u) >> 10;
    v8 = (*v7 & 0x100) != 0 || (*v7 & 0x200) != 0;
    if ( !v11 )
      tagDomLock::UnLockExclusive((PERESOURCE *)v10);
    return v8;
  }
  else
  {
    if ( !v11 )
      tagDomLock::UnLockExclusive((PERESOURCE *)v10);
    return 1LL;
  }
}
