/*
 * XREFs of PipEnumeratePersistedMemoryCallback @ 0x1405DB300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PipMatchPersistentMemory @ 0x1407A07C4 (PipMatchPersistentMemory.c)
 *     PipMatchPersistentMemoryV1 @ 0x1407A08A4 (PipMatchPersistentMemoryV1.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumeratePersistedMemoryCallback(__int64 a1, __int64 a2, __int64 *a3)
{
  int matched; // ebx
  __int64 v6; // r12
  __int64 v7; // r13
  _DWORD *Pool2; // rax
  _WORD *v9; // rdi
  __int64 v10; // r8
  __int16 v11; // ax
  char v12; // cl
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  int v15; // [rsp+44h] [rbp-1Ch]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+B0h] [rbp+50h] BYREF
  __int16 v19; // [rsp+B8h] [rbp+58h]

  v19 = 0;
  v15 = 0;
  v14 = 0;
  if ( a3[3] )
  {
    v6 = a3[1];
    v7 = a3[2];
    v17 = *a3;
    v16 = a3[4];
    KsrQueryMetadata(a1, a2, 0LL, 0LL, &v14);
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v9 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = 0;
    matched = KsrQueryMetadata(a1, a2, Pool2, v14, &v14);
    if ( matched < 0 )
      goto LABEL_17;
    if ( v14 >= 2 )
    {
      v11 = *v9;
      v18 = 0;
      if ( v11 == 2 )
      {
        matched = PipMatchPersistentMemory(v6, v7, 0, (_DWORD)v9, 1, (__int64)&v18);
        if ( matched >= 0 )
        {
          v12 = v18;
          if ( v18 )
          {
            v19 = v9[8];
            v15 = *((_DWORD *)v9 + 5);
            goto LABEL_14;
          }
        }
        goto LABEL_17;
      }
      if ( v11 == 1 )
      {
        LOBYTE(v10) = 1;
        matched = PipMatchPersistentMemoryV1(v6, v9, v10, &v18);
        if ( matched >= 0 )
        {
          v12 = v18;
LABEL_14:
          if ( v12 )
            matched = guard_dispatch_icall_no_overrides(v17, v6);
        }
LABEL_17:
        ExFreePoolWithTag(v9, 0x61706E50u);
        return (unsigned int)matched;
      }
    }
    matched = -1073741637;
    goto LABEL_17;
  }
  return (unsigned int)-1073741811;
}
