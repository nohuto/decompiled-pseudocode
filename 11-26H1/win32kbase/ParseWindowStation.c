/*
 * XREFs of ParseWindowStation @ 0x1401435D0
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     wcschr @ 0x1401C73A4 (wcschr.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ParseWindowStation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  _WORD *v5; // rax
  __int64 v6; // rcx
  POBJECT_TYPE *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, POBJECT_TYPE *, __int64, __int64, int, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v17; // r9
  char v18; // [rsp+A0h] [rbp+8h]
  __int64 v19; // [rsp+A8h] [rbp+10h]

  v1 = *(void **)(a1 + 16);
  **(_QWORD **)(a1 + 80) = 0LL;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !*(_WORD *)v3 )
  {
    if ( *(_QWORD *)(a1 + 24) == ExWindowStationObjectType )
    {
      ObfReferenceObject(v1);
      **(_QWORD **)(a1 + 80) = v1;
      return 0LL;
    }
    return 3221225508LL;
  }
  v5 = *(_WORD **)(v3 + 8);
  if ( *v5 == 92 )
  {
    *(_QWORD *)(v3 + 8) = v5 + 1;
    **(_WORD **)(a1 + 56) -= 2;
    *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL) -= 2;
  }
  if ( wcschr(*(const wchar_t **)(*(_QWORD *)(a1 + 56) + 8LL), 0x5Cu) )
    return 3221225529LL;
  v7 = *(POBJECT_TYPE **)(a1 + 24);
  if ( v7 != ExDesktopObjectType )
    return 3221225508LL;
  v8 = *(_QWORD *)(a1 + 80);
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_DWORD *)(a1 + 44);
  v18 = *(_BYTE *)(a1 + 40);
  v14 = *(_QWORD *)(a1 + 32);
  v15 = *(_QWORD *)(a1 + 16);
  v19 = v14;
  v16 = *(__int64 (__fastcall **)(__int64, POBJECT_TYPE *, __int64, __int64, int, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 1888LL);
  if ( !v16 )
    return 3221225659LL;
  LOBYTE(v17) = v18;
  return v16(v15, v7, v19, v17, v13, v12, v11, v10, v9, v8);
}
