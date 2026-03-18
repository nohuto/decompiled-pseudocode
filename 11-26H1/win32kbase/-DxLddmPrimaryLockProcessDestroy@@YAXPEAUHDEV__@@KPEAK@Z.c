/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x140157FD0
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DxLddmFindProcessEntry @ 0x1401580B0 (DxLddmFindProcessEntry.c)
 *     vSpUnTearDownSprites @ 0x140248D5C (vSpUnTearDownSprites.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  _QWORD *ProcessEntry; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  int v11; // eax
  void (__fastcall *v12)(_QWORD, char *); // rax
  int (*v13)(void); // rax
  __int64 v14; // rdx

  ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(a1 + 654);
  v8 = ProcessEntry;
  if ( ProcessEntry )
  {
    v9 = *ProcessEntry;
    if ( *(_QWORD **)(*ProcessEntry + 8LL) != ProcessEntry || (v10 = (_QWORD *)ProcessEntry[1], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *((_DWORD *)v8 + 5);
    if ( v11 )
    {
      a1[658] -= v11;
      v12 = (void (__fastcall *)(_QWORD, char *))*((_QWORD *)a1 + 330);
      if ( v12 )
        v12(*((_QWORD *)a1 + 223), (char *)v8 + 28);
      v13 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9) + 24) + 48LL);
      if ( v13 && v13() >= 0 )
        vSpUnTearDownSprites(a1, (char *)v8 + 28);
    }
    v14 = *a3 + *((_DWORD *)v8 + 6);
    if ( (unsigned int)v14 < *a3 )
      v14 = 0xFFFFFFFFLL;
    *a3 = v14;
    GreDeleteFastMutex((char *)v8, v14, v6, v7);
  }
}
