/*
 * XREFs of _PnpCtxCreateNode @ 0x140AE59C4
 * Callers:
 *     _PnpCtxRegisterMachineNode @ 0x14089C3F8 (_PnpCtxRegisterMachineNode.c)
 *     _PnpCtxOpenMachine @ 0x140AE5860 (_PnpCtxOpenMachine.c)
 * Callees:
 *     _PnpCtxDestroyNode @ 0x14089C0B4 (_PnpCtxDestroyNode.c)
 *     _SysCtxCloseMachine @ 0x1408A2DA0 (_SysCtxCloseMachine.c)
 *     _SysCtxOpenMachine @ 0x1408A3070 (_SysCtxOpenMachine.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCtxCreateNode(
        int *a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        HANDLE SourceHandle,
        UNICODE_STRING **a9)
{
  UNICODE_STRING **v9; // r14
  wchar_t *v13; // rsi
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // ebp
  int v23; // ebp

  v9 = a9;
  v13 = 0LL;
  a6 = 0LL;
  *a9 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  v15 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( !RtlCreateUnicodeString(Pool2 + 2, a2) )
  {
    v16 = -1073741801;
LABEL_5:
    PnpCtxDestroyNode(v15);
    goto LABEL_6;
  }
  v20 = a7;
  *(_DWORD *)&v15[3].Length = a3;
  v21 = SysCtxOpenMachine(v17, a5, v18, v20, SourceHandle, *a1, &a6);
  v13 = (wchar_t *)a6;
  v16 = v21;
  if ( v21 < 0 )
    goto LABEL_5;
  if ( *(_DWORD *)a6 < 0xA000000u )
  {
    v16 = -1073741637;
    goto LABEL_5;
  }
  *(_QWORD *)&v15[4].Length = 0LL;
  v15[4].Buffer = 0LL;
  *(_QWORD *)&v15[5].Length = 0LL;
  v15[5].Buffer = 0LL;
  *(_QWORD *)&v15[6].Length = 0LL;
  v15[6].Buffer = 0LL;
  *(_QWORD *)&v15[7].Length = 0LL;
  *(_QWORD *)&v15[8].Length = 0LL;
  v15[8].Buffer = 0LL;
  *(_QWORD *)&v15[9].Length = 0LL;
  v22 = a3 - 1;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 != 1 )
      {
        v16 = -1073741811;
        goto LABEL_5;
      }
      *(_QWORD *)&v15[4].Length = -1LL;
      *(_QWORD *)&v15[6].Length = -1LL;
      v15[6].Buffer = (wchar_t *)-1LL;
      *(_QWORD *)&v15[7].Length = -1LL;
      *(_QWORD *)&v15[8].Length = -1LL;
      v15[8].Buffer = (wchar_t *)-1LL;
      *(_QWORD *)&v15[9].Length = -1LL;
    }
  }
  v15[3].Buffer = v13;
  v13 = 0LL;
  *v9 = v15;
LABEL_6:
  if ( v13 )
    SysCtxCloseMachine(v13);
  return v16;
}
