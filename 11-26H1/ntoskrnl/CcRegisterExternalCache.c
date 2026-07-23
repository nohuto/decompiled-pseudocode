/*
 * XREFs of CcRegisterExternalCache @ 0x1405B3870
 * Callers:
 *     <none>
 * Callees:
 *     CcCreatePrivateVolumeCacheMap @ 0x1403E51AC (CcCreatePrivateVolumeCacheMap.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcAddExternalCacheInternal @ 0x1405B3110 (CcAddExternalCacheInternal.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1E7DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40uLL, 0x43456343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *PoolWithTag = a1;
    if ( v7 )
    {
      CcAddExternalCacheInternal((__int64)PoolWithTag, (__int64)&EmpParseLock.1136);
      v6 = 0;
    }
    else
    {
      v10 = 0LL;
      v6 = CcCreatePrivateVolumeCacheMap(*((_QWORD *)PspSystemPartition + 1), 0LL, &v10);
      if ( v6 >= 0 )
      {
        v8 = v10;
        if ( v10 )
        {
          v5[7] = v10;
          CcAddExternalCacheInternal((__int64)v5, v8 + 1248);
        }
      }
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v5, 0x43456343u);
        return (unsigned int)v6;
      }
    }
    *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
