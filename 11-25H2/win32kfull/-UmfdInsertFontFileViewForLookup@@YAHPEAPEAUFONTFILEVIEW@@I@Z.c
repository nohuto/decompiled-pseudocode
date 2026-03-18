/*
 * XREFs of ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400B58A4
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x14010BDE4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1402289A4 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B1E6C (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z @ 0x1400B4BBC (-Insert@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAUFONTFILEVIEW@@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401717F4 (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 */

__int64 __fastcall UmfdInsertFontFileViewForLookup(struct FONTFILEVIEW **a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 i; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  bool v9; // zf
  struct W32_PUSH_LOCK *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rsi
  int *v13; // rdi
  int v14; // r15d
  int v15; // eax
  struct FONTFILEVIEW **v16; // r15
  struct W32_PUSH_LOCK *v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; (unsigned int)i < (unsigned int)a2; i = (unsigned int)(i + 1) )
  {
    if ( !a1[i] )
      return 0LL;
  }
  v7 = *(_QWORD *)(W32GetSessionState(a1, a2, i) + 96);
  v9 = v7 == -24248;
  v10 = (struct W32_PUSH_LOCK *)(v7 + 24248);
  v18 = v10;
  if ( !v9 )
    GreAcquirePushLockExclusive(v10);
  v11 = *(_QWORD *)(W32GetSessionState(v6, v5, v8) + 96);
  if ( !*(_QWORD *)(v11 + 24168) )
  {
LABEL_20:
    if ( v10 )
      GreReleasePushLockExclusive(v10);
    return 0LL;
  }
  v12 = 0LL;
  while ( (unsigned int)v12 < v2 )
  {
    v13 = (int *)(v11 + 24160);
    v14 = *(_DWORD *)(v11 + 24160);
    do
    {
      v9 = (*v13)++ == -1;
      v15 = *v13;
      if ( v9 )
      {
        *v13 = 1;
        v15 = 1;
      }
      if ( v14 == v15 )
      {
        Gre::PUSHLOCKEX::vUnlock((Gre::PUSHLOCKEX *)&v18, 0);
        return 0LL;
      }
    }
    while ( NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(
              *(_QWORD *)(v11 + 24168),
              (unsigned int *)(v11 + 24160),
              &v19) );
    v16 = &a1[v12];
    if ( !NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Insert(
            *(struct W32_PUSH_LOCK **)(v11 + 24168),
            (_DWORD *)(v11 + 24160),
            v16) )
      goto LABEL_20;
    v12 = (unsigned int)(v12 + 1);
    *((_DWORD *)*v16 + 16) = *v13;
  }
  if ( v10 )
    GreReleasePushLockExclusive(v10);
  return 1LL;
}
