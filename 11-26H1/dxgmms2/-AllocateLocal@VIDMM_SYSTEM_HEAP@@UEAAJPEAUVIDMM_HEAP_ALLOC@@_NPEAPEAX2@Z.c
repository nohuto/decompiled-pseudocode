/*
 * XREFs of ?AllocateLocal@VIDMM_SYSTEM_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@_NPEAPEAX2@Z @ 0x140117FF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_SYSTEM_HEAP::AllocateLocal(
        VIDMM_SYSTEM_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        char a3,
        void **a4,
        void **a5)
{
  void **v5; // rbx
  __int64 v6; // rbp
  int v10; // eax
  struct _OBJECT_TYPE *v12; // rax
  NTSTATUS v13; // eax
  unsigned int v14; // esi
  __int64 v16; // rcx
  int ObjectType; // [rsp+20h] [rbp-58h]
  int AccessMode; // [rsp+28h] [rbp-50h]
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v6 = 0LL;
  *a4 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  v10 = *((_DWORD *)a2 + 12);
  if ( (v10 & 8) != 0 )
  {
    v6 = **((_QWORD **)a2 + 3);
    goto LABEL_5;
  }
  if ( (v10 & 4) != 0 )
  {
    v12 = (struct _OBJECT_TYPE *)ObGetObjectType(*(_QWORD *)a2);
    v13 = ObOpenObjectByPointer(*(PVOID *)a2, 0, 0LL, 0, v12, 1, &Handle);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry2(1LL, *(_QWORD *)a2, v13);
      WdLogGlobalForLineNumber = 1045;
      goto LABEL_10;
    }
  }
  if ( !v5
    || (LOBYTE(AccessMode) = a3,
        LOBYTE(ObjectType) = 1,
        (v6 = (*(__int64 (__fastcall **)(VIDMM_SYSTEM_HEAP *, struct VIDMM_HEAP_ALLOC *, _QWORD, _QWORD, int, int, __int64 *))(*(_QWORD *)this + 56LL))(
                this,
                a2,
                0LL,
                0LL,
                ObjectType,
                AccessMode,
                &v20)) != 0) )
  {
LABEL_5:
    *a4 = Handle;
    if ( v5 )
      *v5 = (void *)v6;
    return 0LL;
  }
  v14 = -1073741801;
  WdLogSingleEntry2(1LL, *(_QWORD *)a2, -1073741801LL);
  WdLogGlobalForLineNumber = 1066;
LABEL_10:
  DxgkLogInternalTriageEvent(v16, 0x40000LL);
  if ( v20 )
    (*(void (__fastcall **)(VIDMM_SYSTEM_HEAP *, struct VIDMM_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(this, a2);
  if ( Handle )
    ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
  return v14;
}
