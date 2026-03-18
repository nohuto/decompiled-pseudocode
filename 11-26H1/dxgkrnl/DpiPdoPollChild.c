/*
 * XREFs of DpiPdoPollChild @ 0x140256998
 * Callers:
 *     DpiPdoGetDeviceDescriptor @ 0x140429A24 (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoPollChild(__int64 a1, int a2, int a3, char a4, char a5)
{
  struct _IO_REMOVE_LOCK *v5; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  _QWORD *v13; // rax

  v5 = *(struct _IO_REMOVE_LOCK **)(a1 + 64);
  v10 = ExAllocateFromNPagedLookasideList(&stru_140168EC0);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 4) = 1953656900;
    *((_DWORD *)v10 + 5) = 10;
    v10[3] = a1;
    *((_DWORD *)v10 + 8) = a2;
    *((_DWORD *)v10 + 9) = a3;
    *((_BYTE *)v10 + 40) = a4;
    *((_BYTE *)v10 + 41) = a5;
    *((_BYTE *)v10 + 42) = 1;
    v12 = IoAcquireRemoveLockEx(v5 + 2, v10, File, 1u, 0x20u);
    KeWaitForSingleObject(qword_140169070, Executive, 0, 0, 0LL);
    v13 = (_QWORD *)qword_140169068;
    if ( *(__int64 **)qword_140169068 != &qword_140169060 )
      __fastfail(3u);
    *v11 = &qword_140169060;
    v11[1] = v13;
    *v13 = v11;
    qword_140169068 = (__int64)v11;
    KeReleaseMutex((PRKMUTEX)qword_140169070, 0);
    KeSetTimer(&stru_140168FD0, (LARGE_INTEGER)-3000000LL, &stru_140169010);
  }
  else
  {
    v12 = -1073741670;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 6320;
  }
  return v12;
}
