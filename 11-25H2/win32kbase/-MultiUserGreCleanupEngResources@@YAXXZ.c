/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14006E15C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngFreeMem @ 0x14001D0A0 (EngFreeMem.c)
 *     GreDeleteSemaphore @ 0x14006D810 (GreDeleteSemaphore.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserGreCleanupEngResources(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 *v6; // rbx
  int (*v7)(void); // rax
  void (__fastcall *v8)(_QWORD *); // rax
  int (*v9)(void); // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h]

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = (_QWORD *)(v1 + 3040);
  while ( 1 )
  {
    v12 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    v5 = *((_DWORD *)v12 + 4);
    if ( v5 )
    {
      v3 = v5 - 1;
      if ( !v3 )
        goto LABEL_8;
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 2 )
LABEL_8:
          GreDeleteSemaphore((PERESOURCE)(v12 + 4));
      }
      else
      {
        v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1200LL);
        if ( v7 && v7() >= 0 )
        {
          v8 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1208LL);
          if ( v8 )
            v8(v12 + 4);
        }
      }
    }
    else
    {
      EngFreeMem(v12 + 4);
    }
  }
  v6 = (__int64 *)(v1 + 3056);
  while ( (__int64 *)*v6 != v6 )
  {
    *(_DWORD *)(*v6 + 16) = 1;
    v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1216LL);
    if ( v9 )
    {
      if ( v9() >= 0 )
      {
        v10 = *v6;
        v11 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1224LL);
        if ( v11 )
          v11(v10 + 24);
      }
    }
  }
}
