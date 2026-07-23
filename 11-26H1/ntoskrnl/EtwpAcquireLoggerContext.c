/*
 * XREFs of EtwpAcquireLoggerContext @ 0x140979888
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405311FC (EtwpTransitionToRealtime.c)
 *     EtwpIncrementTraceFile @ 0x14077E0A0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryTrace @ 0x140979CA0 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x140AB081C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140AB2D10 (EtwpStopTrace.c)
 *     EtwpFlushTrace @ 0x140AB2FD0 (EtwpFlushTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140258A10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     EtwpCaptureString @ 0x14097A9F8 (EtwpCaptureString.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall EtwpAcquireLoggerContext(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v11; // rax
  unsigned int *v12; // rbx
  __int64 v13; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0xFFFFFFFFLL;
  v7 = 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a2 + 24) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  *a3 = 0LL;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v8 )
    v7 = *(unsigned __int8 *)(a1 + 4504);
  if ( (_DWORD)v7 == *(unsigned __int8 *)(a1 + 4504) || !*(_WORD *)(a2 + 144) )
  {
    if ( (_DWORD)v7 == -1 )
    {
      v7 = *(unsigned __int16 *)(a2 + 8);
      if ( (_DWORD)v7 == 0xFFFF )
        v7 = *(unsigned __int8 *)(a1 + 4504);
      if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 16) )
        return 3221225480LL;
    }
    LOBYTE(v5) = 1;
    v13 = EtwpAcquireLoggerContextByLoggerId(a1, v7, v5);
    *a3 = v13;
  }
  else
  {
    String2 = 0LL;
    result = EtwpCaptureString(a2 + 144, &String2);
    if ( (int)result < 0 )
      return result;
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v11 = EtwpAcquireLoggerContextByLoggerId(a1, i, 0LL);
      v12 = (unsigned int *)v11;
      if ( v11 )
      {
        if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v11 + 136), &String2, 1u) )
        {
          KeWaitForSingleObject(v12 + 158, Executive, 0, 0, 0LL);
          if ( v12[80] )
            goto LABEL_22;
          KeReleaseMutex((PRKMUTEX)(v12 + 158), 0);
        }
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v12 + 170) + 704LL) + 8LL * *v12),
          1u);
      }
    }
    v12 = 0LL;
LABEL_22:
    Buffer = String2.Buffer;
    *a3 = (__int64)v12;
    if ( Buffer )
      ExFreePool(Buffer);
    v13 = *a3;
  }
  return v13 == 0 ? 0xC0000296 : 0;
}
