/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x140170C6C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngFreeMem @ 0x140044080 (EngFreeMem.c)
 *     GreDeleteSemaphore @ 0x1400C6C70 (GreDeleteSemaphore.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserGreCleanupEngResources(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int (*v7)(void); // rax
  void (__fastcall *v8)(_QWORD *); // rax
  _QWORD *v9; // rbx
  int (*v10)(void); // rax
  __int64 v11; // rdi
  void (__fastcall *v12)(__int64); // rax
  _QWORD *v13; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  v3 = v2 + 390;
  while ( 1 )
  {
    v13 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v1 = (_QWORD *)*v3;
    v6 = *((_DWORD *)v13 + 4);
    if ( v6 )
    {
      v4 = v6 - 1;
      if ( !v4 )
        goto LABEL_12;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 2 )
LABEL_12:
          GreDeleteSemaphore((PERESOURCE)(v13 + 4));
      }
      else
      {
        v1 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v13) + 24);
        v7 = (int (*)(void))v1[150];
        if ( v7 && v7() >= 0 )
        {
          v8 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v1) + 24) + 1208LL);
          if ( v8 )
            v8(v13 + 4);
        }
      }
    }
    else
    {
      EngFreeMem(v13 + 4);
    }
  }
  if ( *v2 )
  {
    v9 = v2 + 392;
    while ( (_QWORD *)*v9 != v9 )
    {
      *(_DWORD *)(*v9 + 16LL) = 1;
      v1 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v1) + 24);
      v10 = (int (*)(void))v1[152];
      if ( v10 )
      {
        if ( v10() >= 0 )
        {
          v11 = *v9;
          v12 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v1) + 24) + 1224LL);
          if ( v12 )
            v12(v11 + 24);
        }
      }
    }
  }
}
