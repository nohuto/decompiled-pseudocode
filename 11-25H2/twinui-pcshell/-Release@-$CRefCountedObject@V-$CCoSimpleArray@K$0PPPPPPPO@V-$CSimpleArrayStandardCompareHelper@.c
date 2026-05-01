/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@UEAAKXZ @ 0x1801FB600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  void *v4; // rcx

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    v4 = (void *)*((_QWORD *)a1 + 1);
    if ( v4 )
    {
      CoTaskMemFree(v4);
      *((_QWORD *)a1 + 1) = 0LL;
    }
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
