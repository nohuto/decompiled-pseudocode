/*
 * XREFs of NtGdiFlushUserBatch @ 0x140083570
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 */

void NtGdiFlushUserBatch()
{
  __int64 v0; // r9

  if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
  {
    LOBYTE(v0) = 1;
    GrepExpandKernelStackAndCalloutEx(NtGdiFlushUserBatchInternal, 0LL, 0x2000LL, v0, 0LL);
  }
  else
  {
    NtGdiFlushUserBatchInternal(0LL);
  }
}
