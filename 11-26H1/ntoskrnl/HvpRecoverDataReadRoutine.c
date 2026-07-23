/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x140AECCB0
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  struct _PRIVILEGE_SET *Pool; // rdi
  __int64 v8; // r13
  unsigned int v9; // ebp
  struct _PRIVILEGE_SET *v10; // rcx
  unsigned int *v11; // rsi
  unsigned int v12; // r15d
  int v13; // ebp

  v4 = 0;
  Pool = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a1;
  v9 = (~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1) & (a3 + a2 + (*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1))
     - (a2 & ~((*(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9) - 1));
  if ( v9 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = *(struct _PRIVILEGE_SET **)(a1 + 8);
    v11 = (unsigned int *)(a1 + 16);
    v12 = v9;
    if ( v9 < 0x10000 )
      v12 = 0x10000;
    if ( !v10 )
      goto LABEL_6;
    if ( *v11 >= v12 )
    {
      Pool = *(struct _PRIVILEGE_SET **)(a1 + 8);
      v12 = *v11;
    }
    else
    {
      CmSiFreeMemory(v10);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *v11 = 0;
    if ( !Pool )
    {
LABEL_6:
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
      if ( !Pool )
        return (unsigned int)-1073741801;
      v12 = v9;
    }
    v13 = guard_dispatch_icall_no_overrides(v8, *(unsigned int *)(a1 + 20));
    if ( v13 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = Pool;
      *v11 = v12;
      *a4 = (char *)Pool + a2 % (*(_DWORD *)(v8 + 136) << 9);
    }
    else
    {
      CmSiFreeMemory(Pool);
      return (unsigned int)v13;
    }
  }
  return v4;
}
