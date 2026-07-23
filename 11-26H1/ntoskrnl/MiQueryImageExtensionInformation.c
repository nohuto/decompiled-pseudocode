/*
 * XREFs of MiQueryImageExtensionInformation @ 0x1404DF9B0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 *     MiQueryDetach @ 0x140923A4C (MiQueryDetach.c)
 *     MiGetImageExtensionBaseAddress @ 0x140A8F524 (MiGetImageExtensionBaseAddress.c)
 */

__int64 __fastcall MiQueryImageExtensionInformation(__int64 a1)
{
  void *v2; // rdx
  unsigned __int64 v3; // rbx
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // r14
  int v6; // r9d
  __int64 ImageExtensionBaseAddress; // rax
  unsigned int v8; // r9d
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // rbx
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  KIRQL v14; // r13
  __int64 v15; // rdx
  int v16; // ebx
  int v18[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]

  v19 = a1;
  v18[0] = 0;
  v20 = 0LL;
  v21 = 0LL;
  v2 = *(void **)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 32) )
    RtlCopyFromUser(&v20, v2, 0x18uLL);
  else
    RtlCopyVolatileMemory(&v20, v2, 0x18uLL);
  if ( DWORD1(v20) )
    goto LABEL_17;
  v4 = MiObtainReferencedVadEx(v3, 2LL, v18);
  v5 = v4;
  if ( !v4 )
  {
    v16 = v18[0];
    goto LABEL_14;
  }
  *(_QWORD *)(a1 + 136) = v4;
  if ( (*(_DWORD *)(v4 + 48) & 0x1C) != 8 )
  {
    v16 = -1073741503;
    goto LABEL_18;
  }
  v6 = 3;
  if ( (_DWORD)v20 )
  {
    if ( (_DWORD)v20 == 1 )
    {
      v16 = -1073741637;
      goto LABEL_18;
    }
  }
  else
  {
    v6 = 0;
  }
  if ( v6 == 3 )
  {
LABEL_17:
    v16 = -1073741811;
    goto LABEL_18;
  }
  *((_QWORD *)&v20 + 1) = 0LL;
  v21 = 0LL;
  if ( (*(_DWORD *)(v4 + 72) & 0x20) != 0 )
  {
    ImageExtensionBaseAddress = MiGetImageExtensionBaseAddress(v4);
    v9 = *((unsigned int *)&stru_140E2D2D0.LastXStateSaveDebugInfo + v8) + ImageExtensionBaseAddress;
    v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    v14 = MiLockWorkingSetShared((__int64)p_Blink, v12, v13);
    MiMakeSystemAddressValid(v10, (*(_DWORD *)(v5 + 48) >> 10) & 0x7F, v14, 0);
    if ( *(_QWORD *)v10 )
    {
      *((_QWORD *)&v20 + 1) = v9
                            - ((*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12);
      v21 = 4096LL;
    }
    MiUnlockPageTableInternal((__int64)p_Blink, ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    LOBYTE(v15) = v14;
    MiUnlockWorkingSetShared((__int64)p_Blink, v15);
    v16 = 0;
LABEL_14:
    if ( v16 >= 0 )
      goto LABEL_15;
LABEL_18:
    MiQueryDetach(a1);
    return (unsigned int)v16;
  }
LABEL_15:
  *(_QWORD *)(a1 + 64) = &v20;
  *(_QWORD *)(a1 + 56) = 24LL;
  return (unsigned int)MiQueryReturnResults(a1);
}
