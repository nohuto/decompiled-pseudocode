/*
 * XREFs of ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x140175948
 * Callers:
 *     UnlockPopupMenu @ 0x1401758E0 (UnlockPopupMenu.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

char __fastcall UnlockPopupMenuWindow(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r9
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  LOBYTE(v1) = SmartObjStackRef<tagMENU>::operator==(a1);
  if ( !(_BYTE)v1 )
  {
    v1 = *(_QWORD **)v3;
    if ( *(_QWORD *)(**(_QWORD **)v3 + 80LL) )
    {
      v5 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)v3 + 80LL) + 168LL);
      v1 = (_QWORD *)v4[2];
      if ( v1 )
      {
        if ( v1 == v5 )
          return (char)v1;
      }
      else
      {
        v1 = (_QWORD *)*v4;
        if ( *(_QWORD **)*v4 == v5 )
          return (char)v1;
      }
      v6 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)*v4 + 80LL) + 160LL);
      v1 = (_QWORD *)v4[2];
      if ( v1 )
      {
        if ( v1 == v6 )
          return (char)v1;
      }
      else
      {
        v1 = (_QWORD *)*v4;
        if ( *(_QWORD **)*v4 == v6 )
          return (char)v1;
      }
      if ( v2 == *(_QWORD *)(*(_QWORD *)*v4 + 80LL)
        || (v1 = *(_QWORD **)(*(_QWORD *)*v4 + 80LL), *(char *)(v1[5] + 19LL) < 0) )
      {
        LOBYTE(v1) = HMAssignmentUnlock(*(_QWORD *)*v4 + 80LL);
      }
    }
  }
  return (char)v1;
}
