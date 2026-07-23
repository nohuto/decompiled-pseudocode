/*
 * XREFs of DifRegisterObjectTracking @ 0x14064ED80
 * Callers:
 *     <none>
 * Callees:
 *     DifGetAvailableSystemPages @ 0x14065030C (DifGetAvailableSystemPages.c)
 *     DifInitSegContext @ 0x140650B6C (DifInitSegContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifRegisterObjectTracking(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // r13d
  __int64 Pool2; // rdi
  char v8; // r12
  __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rbx
  int inited; // ebx
  _QWORD *v13; // rsi
  unsigned __int64 *p_KcsanThread; // r14
  unsigned __int64 *Spare35; // r15
  __int64 v16; // r13
  unsigned __int64 AvailableSystemPages; // [rsp+20h] [rbp-48h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  Pool2 = 0LL;
  v8 = 0;
  if ( a1 >= 0x40
    || (v9 = a1, v10 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5)), !_bittest(&v10, a1 & 0x1F)) )
  {
    inited = -1073741790;
    goto LABEL_28;
  }
  AvailableSystemPages = DifGetAvailableSystemPages();
  v11 = AvailableSystemPages;
  if ( AvailableSystemPages < 0x64 )
  {
    inited = -1073741670;
LABEL_28:
    _InterlockedAnd64(&ExpPoolFlags, 0xFFFFFFFFFFFFFFEFuLL);
    _InterlockedCompareExchange(&DifObjTrkInitialized, 0, 1);
    return (unsigned int)inited;
  }
  if ( !DifPluginSettings[v9] )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      inited = -1073741801;
      goto LABEL_28;
    }
    v8 = 1;
  }
  v13 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !v13 )
  {
    inited = -1073741801;
LABEL_24:
    if ( Pool2 && v8 )
      ExFreePoolWithTag((PVOID)Pool2, 0x4E666944u);
    goto LABEL_28;
  }
  if ( !_InterlockedCompareExchange(&DifObjTrkInitialized, 1, 0) )
  {
    memset_0(&stru_140E27C48.InGlobalUpdateVpThreadPriorityList, 0, 0x380uLL);
    p_KcsanThread = &stru_140E27C48.KcsanThread;
    Spare35 = stru_140E27C48.Spare35;
    v16 = 5LL;
    do
    {
      memset_0(Spare35, 0, 0x68uLL);
      *(p_KcsanThread - 9) = (unsigned __int64)Spare35;
      *p_KcsanThread = (unsigned __int64)DifObjTrkCompareNode;
      Spare35 += 15;
      p_KcsanThread[3] = 0LL;
      p_KcsanThread[1] = (unsigned __int64)DifObjTrkAllocNode;
      p_KcsanThread[2] = (unsigned __int64)DifObjTrkFreeNode;
      p_KcsanThread += 15;
      --v16;
    }
    while ( v16 );
    v11 = AvailableSystemPages;
    v4 = a4;
    v5 = a3;
    v6 = a2;
  }
  if ( Pool2 )
    DifPluginSettings[v9] = Pool2;
  else
    Pool2 = DifPluginSettings[v9];
  *(_DWORD *)v13 = v6;
  v13[1] = v5;
  v13[2] = v4;
  *(_QWORD *)(Pool2 + 24) = v13;
  qword_140E28380 = (32 * v11) & 0x1FFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)qword_140E28380 > 0x3D09000 )
    qword_140E28380 = 64000000LL;
  inited = DifInitSegContext(&DifObjTrkSegContext, 16LL, 64LL);
  if ( inited < 0 )
  {
    ExFreePoolWithTag(v13, 0x4E666944u);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(Pool2 + 32) & 1) == 0 )
    _InterlockedOr64(&ExpPoolFlags, 0x10uLL);
  return (unsigned int)inited;
}
