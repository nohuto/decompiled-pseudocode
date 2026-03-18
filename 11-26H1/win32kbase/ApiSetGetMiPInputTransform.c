/*
 * XREFs of ApiSetGetMiPInputTransform @ 0x140053744
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x140053640 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetGetMiPInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rcx
  unsigned int (__fastcall *v8)(__int64, __int64); // rax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 5808LL);
  if ( v5 )
  {
    if ( v5() >= 0 )
    {
      v8 = *(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 5816LL);
      if ( v8 )
        return v8(a1, a2);
    }
  }
  return v4;
}
