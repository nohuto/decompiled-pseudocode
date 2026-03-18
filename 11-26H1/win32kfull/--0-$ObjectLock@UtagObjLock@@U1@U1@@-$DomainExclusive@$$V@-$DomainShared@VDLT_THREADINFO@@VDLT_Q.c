/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@U1@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@VDLT_POST@@@@QEAA@AEAUtagObjLock@@00@Z @ 0x140056074
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     vDLOrderDispositionCompare @ 0x1400562B0 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x1400562E0 (vOLOrderCompare.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x14029A868 (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 */

char *__fastcall DomainShared<DLT_THREADINFO,DLT_QUEUE,DLT_POST>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock,tagObjLock>(
        char *Base,
        __int64 a2,
        __int64 a3,
        tagObjLock *a4)
{
  unsigned int DLT; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  tagObjLock **v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  tagObjLock *v24; // rcx
  unsigned int i; // ebx
  unsigned int j; // ebx
  unsigned int v27; // edi
  char *v28; // rbx
  tagDomLock *v29; // rcx
  unsigned int k; // ebx

  DLT = DLT_THREADINFO::getDLT();
  *(_QWORD *)Base = GetDomainLockRef(DLT);
  Base[8] = 0;
  v9 = DLT_QUEUE::getDLT();
  *((_QWORD *)Base + 2) = GetDomainLockRef(v9);
  Base[24] = 0;
  v10 = DLT_POST::getDLT();
  *((_QWORD *)Base + 4) = GetDomainLockRef(v10);
  Base[40] = 0;
  UserSessionState = W32GetUserSessionState(v12, v11);
  Base[56] = 0;
  v14 = (tagObjLock **)(Base + 64);
  *((_QWORD *)Base + 6) = UserSessionState + 42384;
  *((_OWORD *)Base + 4) = 0LL;
  *((_OWORD *)Base + 5) = 0LL;
  Base[96] = 0;
  v17 = W32GetUserSessionState(v16, v15);
  v19 = 0LL;
  if ( a2 != v17 + 42480 )
    v19 = a2;
  *((_QWORD *)Base + 10) = v19;
  v20 = W32GetUserSessionState(v19, v18);
  v22 = 0LL;
  if ( a3 != v20 + 42480 )
    v22 = a3;
  *((_QWORD *)Base + 9) = v22;
  v23 = W32GetUserSessionState(v22, v21);
  v24 = 0LL;
  if ( a4 != (tagObjLock *)(v23 + 42480) )
    v24 = a4;
  *v14 = v24;
  qsort(Base + 64, 3uLL, 8uLL, vOLOrderCompare);
  for ( i = 1; i < 3; ++i )
  {
    if ( !vOLOrderCompare(&v14[i], &v14[i - 1]) )
      ClearCObjLock<tagObjLock *>(&v14[i - 1]);
  }
  qsort(Base, 3uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( j = 1; j < 3; ++j )
  {
    if ( !vDLOrderDispositionCompare(&Base[16 * j], &Base[16 * (j - 1)]) )
      ClearCObjLock<tagObjLock *>(&Base[16 * (j - 1)]);
  }
  if ( !Base[96] )
  {
    v27 = 0;
    v28 = Base;
    do
    {
      v29 = *(tagDomLock **)v28;
      if ( *(_QWORD *)v28 )
      {
        if ( v28[8] )
          tagDomLock::LockExclusive(v29);
        else
          tagDomLock::LockShared(v29);
      }
      ++v27;
      v28 += 16;
    }
    while ( v27 < 3 );
    for ( k = 0; k < 3; ++k )
    {
      if ( *v14 )
        tagObjLock::LockExclusive(*v14);
      ++v14;
    }
    Base[96] = 1;
  }
  return Base;
}
