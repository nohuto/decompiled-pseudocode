/*
 * XREFs of ?GenerateSectionHandle@VIDMM_SYSTEM_HEAP@@UEAAJPEBUVIDMM_HEAP_ALLOC@@PEAPEAX@Z @ 0x1400AE140
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_SYSTEM_HEAP::GenerateSectionHandle(VIDMM_SYSTEM_HEAP *this, PVOID *a2, void **a3)
{
  PVOID v3; // rcx
  struct _OBJECT_TYPE *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // esi
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v3 = *a2;
  Handle = 0LL;
  v6 = (struct _OBJECT_TYPE *)ObGetObjectType(v3);
  v7 = ObOpenObjectByPointer(*a2, 0, 0LL, 0xC0000000, v6, 1, &Handle);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *a3 = Handle;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(1LL, *a2, v7);
    ObjectType = (POBJECT_TYPE)*a2;
    WdLogGlobalForLineNumber = 1211;
    DxgkLogInternalTriageEvent((__int64)ObjectType, 0x40000LL);
    if ( Handle )
      ObCloseHandle(Handle, ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) == 0);
    *a3 = 0LL;
    return v8;
  }
}
