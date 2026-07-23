/*
 * XREFs of IopGetSetSpecificExtension @ 0x14044D490
 * Callers:
 *     IopCheckInitiatorHint @ 0x14044CEE0 (IopCheckInitiatorHint.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14044D19C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopGetSetStreamIdentifier @ 0x14044D388 (IopGetSetStreamIdentifier.c)
 *     IoCopyDeviceObjectHint @ 0x140798C20 (IoCopyDeviceObjectHint.c)
 *     IopAllocRealFileObject @ 0x14090F390 (IopAllocRealFileObject.c)
 *     IopRetrieveTransactionParameters @ 0x14090FE6C (IopRetrieveTransactionParameters.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14091ABD0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(__int64 a1, int a2, __int64 a3, char a4, __int64 *a5, __int64 **a6)
{
  __int64 *v6; // rbx
  __int64 v8; // rsi
  __int64 v10; // r10
  __int64 v11; // rdi
  void *v12; // rax
  __int64 v13; // r10
  __int64 *Pool2; // rax
  unsigned int v16; // r12d
  __int64 *v17; // rdi

  v6 = *(__int64 **)(a1 + 208);
  v8 = a2;
  v10 = 0LL;
  if ( !a4 )
  {
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_4;
  }
  if ( v6 )
  {
    if ( v6 != qword_1400137E0 )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  v16 = -1073741670;
  v17 = Pool2;
  v6 = Pool2;
  if ( Pool2 )
    v16 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
  {
    if ( Pool2 && Pool2 != qword_1400137E0 )
      ExFreePoolWithTag(Pool2, 0);
    v6 = *(__int64 **)(a1 + 208);
  }
  if ( !v17 )
    return v16;
LABEL_4:
  v11 = v8;
  v10 = v6[v8 + 1];
  if ( !v10 && a4 )
  {
    v12 = (void *)ExAllocatePool2(0x40uLL);
    v10 = (__int64)v12;
    if ( !v12 )
      return 3221225626LL;
    if ( (unsigned int)v8 > 9 || _InterlockedCompareExchange64(&v6[v11 + 1], (signed __int64)v12, 0LL) )
    {
      ExFreePoolWithTag(v12, 0);
      v13 = *(_QWORD *)(a1 + 208);
      if ( v13 )
        v10 = *(_QWORD *)(v11 * 8 + v13 + 8);
      else
        v10 = 0LL;
    }
  }
LABEL_11:
  if ( a5 )
    *a5 = v10;
  if ( a6 )
    *a6 = v6;
  return 0LL;
}
