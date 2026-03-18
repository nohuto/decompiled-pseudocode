/*
 * XREFs of ?OpenEndpoint@CFlipManager@@QEAAJHPEAPEAX@Z @ 0x14001A1B8
 * Callers:
 *     NtFlipObjectOpen @ 0x14001A2F0 (NtFlipObjectOpen.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001F42C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::OpenEndpoint(CFlipManager *this, int a2, void **a3)
{
  unsigned __int64 v6; // rbx
  __int64 CurrentProcess; // rbp
  __int64 Win32kImportTable; // rax
  __int64 v9; // rax
  NTSTATUS v10; // edi
  bool v12; // zf
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v6 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  CurrentProcess = PsGetCurrentProcess();
  if ( *(_QWORD *)((char *)this + v6 + 48) )
  {
    if ( a2
      || (Win32kImportTable = DxgkGetWin32kImportTable(), !(*(unsigned int (**)(void))(Win32kImportTable + 608))()) )
    {
      v12 = *(_QWORD *)((char *)this + v6 + 48) == CurrentProcess;
    }
    else
    {
      v9 = *(_QWORD *)((char *)this + v6 + 48);
      if ( v9 == 1 )
        goto LABEL_5;
      v12 = v9 == CurrentProcess;
    }
    if ( !v12 )
    {
      v10 = -1073741790;
      goto LABEL_9;
    }
  }
LABEL_5:
  v10 = ObOpenObjectByPointer(
          *(PVOID *)((char *)this + (a2 != 0 ? 8 : 0) + 288),
          0,
          0LL,
          0x100000u,
          (POBJECT_TYPE)ExEventObjectType,
          1,
          &Handle);
  if ( v10 >= 0 )
  {
    if ( !*(_QWORD *)((char *)this + v6 + 48) )
      *(_QWORD *)((char *)this + v6 + 48) = CurrentProcess;
    *a3 = Handle;
    Handle = 0LL;
  }
LABEL_9:
  if ( Handle )
    ObCloseHandle(Handle, 1);
  return (unsigned int)v10;
}
