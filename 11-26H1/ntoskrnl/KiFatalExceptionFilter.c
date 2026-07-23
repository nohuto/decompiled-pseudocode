/*
 * XREFs of KiFatalExceptionFilter @ 0x140D08080
 * Callers:
 *     KiLockServiceTable @ 0x140718194 (KiLockServiceTable.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14042B178 (RtlCaptureImageExceptionValues.c)
 *     RtlLookupExceptionHandler @ 0x1405255F8 (RtlLookupExceptionHandler.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 KiFatalExceptionFilter()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // r9
  unsigned int v2; // r8d
  char *v3; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v4; // rcx
  unsigned __int64 BeginAddress; // rdx
  int v6; // r10d
  int v7; // r8d
  int v8; // eax
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  _mm_lfence();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->HalReserved[6] = (unsigned __int64)KiServiceTablesLocked;
  RtlCaptureImageExceptionValues((void *)0x140000000LL, &v11, (ULONG *)&v10);
  if ( !v11 )
    goto LABEL_16;
  v2 = (unsigned int)v10 / 0xC;
  if ( !((unsigned int)v10 / 0xC) )
    goto LABEL_16;
  v3 = (char *)KiServiceTablesLocked - 0x140000000LL;
  v4 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (v2 - 1));
  BeginAddress = v4->BeginAddress;
  if ( (unsigned __int64)KiServiceTablesLocked - 0x140000000LL < BeginAddress )
  {
    v6 = 0;
    v7 = v2 - 2;
    if ( v7 >= 0 )
    {
      do
      {
        v1 = (unsigned int)((v6 + v7) >> 1);
        v4 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (int)v1);
        if ( (unsigned __int64)v3 >= v4->BeginAddress )
        {
          LODWORD(BeginAddress) = v4->BeginAddress;
          if ( (unsigned __int64)v3 < v4[1].BeginAddress )
            break;
          v6 = v1 + 1;
        }
        else
        {
          v7 = v1 - 1;
        }
        LODWORD(BeginAddress) = v4->BeginAddress;
      }
      while ( v7 >= v6 );
    }
  }
  if ( (unsigned __int64)v3 < (unsigned int)BeginAddress || (unsigned __int64)v3 >= v4->EndAddress || !v4 )
LABEL_16:
    KeBugCheck(0x31u);
  v8 = RtlLookupExceptionHandler(v4, 0x140000000uLL, 1u, v1, &v10, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x31u, v8, 0LL, 0LL, 0LL);
  CurrentPrcb->HalReserved[5] = v10;
  result = 0LL;
  KiHardwareTriggerLock = 0LL;
  return result;
}
