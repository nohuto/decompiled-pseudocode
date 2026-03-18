/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1401871BC
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x14034DAE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1400C2BE0 (EngUnmapFontFileFD.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z @ 0x1400D0168 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAUFONTFILEVIEW@@I@Z.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140186E18 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  _QWORD *v6; // rbx
  char *v7; // r12
  __int64 i; // r14
  __int64 v9; // rcx
  __int64 j; // rbx
  ULONG_PTR v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 k; // rbx
  ULONG_PTR v17; // rcx
  __int64 SessionState; // rax
  _BYTE *v19; // rax
  __int64 v20; // rdi
  ULONG_PTR v21; // rcx
  __int64 m; // rdi
  ULONG_PTR v23; // rcx
  __int64 v24[11]; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v26; // [rsp+B8h] [rbp+20h] BYREF

  v2 = *((unsigned int *)a2 + 9);
  v4 = *((_QWORD *)a2 + 12);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, 12 * v2);
  v6 = v26;
  if ( !v26 )
  {
LABEL_11:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v26);
    return 0;
  }
  v7 = (char *)&v26[v2];
  for ( i = 0LL; (unsigned int)i < (unsigned int)v2; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i);
    if ( !*(_QWORD *)(v9 + 16) )
    {
      v24[0] = 0LL;
      v25 = 0;
      if ( !(unsigned int)EngMapFontFileFDInternal((struct FILEVIEW *)v9, v24, &v25, 0) )
      {
        for ( j = 0LL; (unsigned int)j < (unsigned int)v2; j = (unsigned int)(j + 1) )
        {
          v11 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * j);
          if ( *(_QWORD *)(v11 + 16) )
            EngUnmapFontFileFD(v11);
        }
        goto LABEL_11;
      }
    }
    v6[i] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i) + 16LL);
    *(_DWORD *)&v7[4 * i] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * i) + 24LL);
  }
  if ( !(unsigned int)UmfdInsertFontFileViewForLookup(*((struct FONTFILEVIEW ***)a2 + 26), *((unsigned int *)a2 + 9)) )
  {
    for ( k = 0LL; (unsigned int)k < (unsigned int)v2; k = (unsigned int)(k + 1) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * k);
      if ( *(_QWORD *)(v17 + 16) )
        EngUnmapFontFileFD(v17);
    }
    goto LABEL_11;
  }
  SessionState = W32GetSessionState(v14, v13, v15);
  v19 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD *, _QWORD, _DWORD, _DWORD))(v4 + 3040))(
                   *((unsigned int *)a2 + 9),
                   *((_QWORD *)a2 + 26),
                   v6,
                   &v6[v2],
                   *((_QWORD *)a2 + 5),
                   *(unsigned __int16 *)(*(_QWORD *)(SessionState + 96) + 20336LL),
                   0);
  if ( v19 == (_BYTE *)0xFFFFFFFFLL || !v19 )
  {
    for ( m = 0LL; (unsigned int)m < (unsigned int)v2; m = (unsigned int)(m + 1) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * m);
      if ( *(_QWORD *)(v23 + 16) )
        EngUnmapFontFileFD(v23);
    }
    Win32FreePool(v6);
    return 0;
  }
  v19[24] = 1;
  *(_OWORD *)a1 = *(_OWORD *)v19;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v19 + 1);
  EngFreeMem(v19);
  v20 = 0LL;
  for ( *(_QWORD *)(a1 + 8) = a2; (unsigned int)v20 < (unsigned int)v2; v20 = (unsigned int)(v20 + 1) )
  {
    v21 = *(_QWORD *)(*((_QWORD *)a2 + 26) + 8 * v20);
    if ( *(_QWORD *)(v21 + 16) )
      EngUnmapFontFileFD(v21);
  }
  Win32FreePool(v6);
  return 1;
}
