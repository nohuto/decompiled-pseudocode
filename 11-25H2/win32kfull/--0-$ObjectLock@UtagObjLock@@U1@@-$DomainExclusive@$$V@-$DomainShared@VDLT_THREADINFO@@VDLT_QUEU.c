/*
 * XREFs of ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x1401101D8
 * Callers:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 * Callees:
 *     vDLOrderDispositionCompare @ 0x140110630 (vDLOrderDispositionCompare.c)
 *     vOLOrderCompare @ 0x140110660 (vOLOrderCompare.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1402743B8 (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 */

char *__fastcall DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(
        char *Base,
        __int64 a2,
        tagObjLock *a3)
{
  unsigned int DLT; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  tagObjLock **v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  tagObjLock *v18; // rcx
  unsigned int i; // ebx
  unsigned int j; // ebx
  unsigned int v21; // edi
  char *v22; // rbx
  tagDomLock *v23; // rcx
  unsigned int k; // ebx

  DLT = DLT_THREADINFO::getDLT();
  *(_QWORD *)Base = GetDomainLockRef(DLT);
  Base[8] = 0;
  v7 = DLT_QUEUE::getDLT();
  *((_QWORD *)Base + 2) = GetDomainLockRef(v7);
  Base[24] = 0;
  UserSessionState = W32GetUserSessionState(v9, v8);
  Base[40] = 0;
  v11 = (tagObjLock **)(Base + 48);
  *((_QWORD *)Base + 4) = UserSessionState + 42360;
  *((_OWORD *)Base + 3) = 0LL;
  *((_QWORD *)Base + 8) = 0LL;
  Base[72] = 0;
  v14 = W32GetUserSessionState(v13, v12);
  v16 = 0LL;
  if ( a2 != v14 + 42456 )
    v16 = a2;
  *((_QWORD *)Base + 7) = v16;
  v17 = W32GetUserSessionState(v16, v15);
  v18 = 0LL;
  if ( a3 != (tagObjLock *)(v17 + 42456) )
    v18 = a3;
  *v11 = v18;
  qsort(Base + 48, 2uLL, 8uLL, vOLOrderCompare);
  for ( i = 1; i < 2; ++i )
  {
    if ( !vOLOrderCompare(&v11[i], &v11[i - 1]) )
      ClearCObjLock<tagObjLock *>(&v11[i - 1]);
  }
  qsort(Base, 2uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( j = 1; j < 2; ++j )
  {
    if ( !vDLOrderDispositionCompare(&Base[16 * j], &Base[16 * (j - 1)]) )
      ClearCObjLock<tagObjLock *>(&Base[16 * (j - 1)]);
  }
  if ( !Base[72] )
  {
    v21 = 0;
    v22 = Base;
    do
    {
      v23 = *(tagDomLock **)v22;
      if ( *(_QWORD *)v22 )
      {
        if ( v22[8] )
          tagDomLock::LockExclusive(v23);
        else
          tagDomLock::LockShared(v23);
      }
      ++v21;
      v22 += 16;
    }
    while ( v21 < 2 );
    for ( k = 0; k < 2; ++k )
    {
      if ( *v11 )
        tagObjLock::LockExclusive(*v11);
      ++v11;
    }
    Base[72] = 1;
  }
  return Base;
}
