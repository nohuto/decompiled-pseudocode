/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18004C290
 * Callers:
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ?IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ @ 0x18004CD80 (-IsLockedByCurrentThread@CTreeLock@@QEBA_NXZ.c)
 *     ?RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@@Z @ 0x18004D0C4 (-RemoveAnimationFromList@CAnimationDependencies@@CAXPEAVCBaseExpression@@PEAV-$vector_facade@PEA.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edx
  struct CBaseExpression **v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rcx
  struct CBaseExpression **v12; // rax
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int v19; // r9d
  struct CBaseExpression **v20; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)a2 + 23);
  if ( v2 )
  {
    if ( !g_pComposition
      || GetCurrentThreadId() != CComposition::s_compositionThreadId
      && !CTreeLock::IsLockedByCurrentThread((CComposition *)((char *)g_pComposition + 5696)) )
    {
      ModuleFailFastForHRESULT(-2003304313, retaddr);
    }
    v5 = *(_QWORD *)(v2 + 64);
    if ( v5 )
    {
      v13 = *(_QWORD *)(v5 + 48);
      v14 = *((_DWORD *)a2 + 45) & 0x7FFFFFFF;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 8);
        v16 = *(_QWORD *)(v13 + 16);
        if ( *(_DWORD *)v13 )
        {
          while ( v15 != v16 )
          {
            if ( *(_DWORD *)(v15 + 16) == v14 )
              goto LABEL_28;
            v15 += 24LL;
          }
        }
        else if ( v14 < (unsigned __int64)((v16 - v15) >> 4) )
        {
          v15 += 16LL * v14;
          goto LABEL_28;
        }
        v15 = 0LL;
LABEL_28:
        if ( v15 )
          CAnimationDependencies::RemoveAnimationFromList(a2, v15 + 8);
      }
    }
  }
  v6 = 0LL;
  v7 = 32LL * *((int *)this + 51);
  v8 = *(_DWORD *)((char *)this + v7 + 232);
  if ( v8 )
  {
    v9 = *(struct CBaseExpression ***)((char *)this + v7 + 208);
    do
    {
      if ( a2 == *v9 )
        break;
      v6 = (unsigned int)(v6 + 1);
      ++v9;
    }
    while ( (unsigned int)v6 < v8 );
  }
  if ( (unsigned int)v6 >= v8 )
  {
    v10 = *((_DWORD *)this + 90);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = (struct CBaseExpression **)*((_QWORD *)this + 42);
      do
      {
        if ( a2 == *v12 )
          break;
        v11 = (unsigned int)(v11 + 1);
        ++v12;
      }
      while ( (unsigned int)v11 < v10 );
    }
    if ( (unsigned int)v11 < v10 )
      *(_QWORD *)(*((_QWORD *)this + 42) + 8 * v11) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)((char *)this + v7 + 208) + 8 * v6) = 0LL;
  }
  if ( *((_BYTE *)this + 416) == 3 )
  {
    v17 = 0LL;
    v18 = 32LL * (1 - *((_DWORD *)this + 51));
    v19 = *(_DWORD *)((char *)this + v18 + 232);
    if ( v19 )
    {
      v20 = *(struct CBaseExpression ***)((char *)this + v18 + 208);
      do
      {
        if ( a2 == *v20 )
          break;
        v17 = (unsigned int)(v17 + 1);
        ++v20;
      }
      while ( (unsigned int)v17 < v19 );
    }
    if ( (unsigned int)v17 < v19 )
      *(_QWORD *)(*(_QWORD *)((char *)this + v18 + 208) + 8 * v17) = 0LL;
  }
}
