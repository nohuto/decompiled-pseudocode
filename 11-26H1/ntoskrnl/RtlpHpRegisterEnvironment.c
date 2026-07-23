/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x14063B9E0
 * Callers:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x14063AE6C (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x14063BC40 (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x14063BCCC (RtlpHpVaMgrCtxAllocatorReference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  int v5; // eax
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KLOCK_ENTRIES *v7; // r9
  __int128 v8; // [rsp+20h] [rbp-30h]
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = *(_OWORD *)a1;
  if ( !a2 )
  {
    HIDWORD(v9) = 0;
    if ( BYTE3(v8) )
      LODWORD(v9) = BYTE3(v8) - 1;
    else
      LODWORD(v9) = -1;
    DWORD1(v9) = BYTE1(v8);
    DWORD2(v9) = BYTE2(v8);
    if ( (v8 & 8) != 0 )
      HIDWORD(v9) = 1;
    v10 = *((_QWORD *)&v8 + 1);
    RtlpHpVaMgrCtxAllocatorDereference(&ExpUuidLock.TrapFrame, &v9);
    if ( BYTE1(*(_QWORD *)a1) == 5 )
    {
      v9 = *(_OWORD *)a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister(
        (__int64)&RtlpHpHeapVaCallbacksRegistrar,
        *((__int64 *)&v8 + 1),
        &v9,
        v7);
    }
    return 0LL;
  }
  if ( BYTE1(*(_OWORD *)a1) == 5 )
  {
    v9 = *(_OWORD *)a1;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(
               (__int64)&RtlpHpHeapVaCallbacksRegistrar,
               *((char **)&v8 + 1),
               &v11,
               &v9);
    if ( (int)result < 0 )
      return result;
    v4 = v11;
    *((_QWORD *)&v8 + 1) = v11;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
  }
  HIDWORD(v9) = 0;
  if ( BYTE3(v8) )
    LODWORD(v9) = BYTE3(v8) - 1;
  else
    LODWORD(v9) = -1;
  DWORD1(v9) = BYTE1(v8);
  DWORD2(v9) = BYTE2(v8);
  if ( (v8 & 8) != 0 )
    HIDWORD(v9) = 1;
  v10 = v4;
  v5 = RtlpHpVaMgrCtxAllocatorReference(&ExpUuidLock.TrapFrame, &v9);
  if ( v5 != -1 )
  {
    BYTE3(v8) = v5 + 1;
    *(_OWORD *)a1 = v8;
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v9 = *(_OWORD *)a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister((__int64)&RtlpHpHeapVaCallbacksRegistrar, v4, &v9, v6);
  }
  return 3221225626LL;
}
