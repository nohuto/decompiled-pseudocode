/*
 * XREFs of ?Extend@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x1805D4918
 * Callers:
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D48A4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 * Callees:
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x180179834 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x1802BF1E4 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x1805CF004 (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Extend(const char *a1)
{
  char v2; // al
  __int64 v3; // rbp
  unsigned __int64 v4; // rdi
  void *v5; // rax
  __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  _BYTE *v9; // rsi
  struct TraceLoggingCorrelationVector *result; // rax

  v2 = TraceLoggingCorrelationVector::ValidateImpl(a1, 1);
  if ( !v2 )
    return 0LL;
  v3 = 65LL;
  if ( v2 != 1 )
    v3 = 129LL;
  v4 = -1LL;
  do
    ++v4;
  while ( a1[v4] );
  if ( v4 >= v3 - 1 && (v4 != v3 - 1 || a1[v4 - 1] != 33) )
    return 0LL;
  if ( v2 == 1 )
  {
    v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v6 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v7);
      goto LABEL_15;
    }
  }
  else
  {
    if ( v2 != 2 )
      return 0LL;
    v5 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      v6 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v5);
LABEL_15:
      v8 = v6;
      goto LABEL_17;
    }
  }
  v8 = 0LL;
LABEL_17:
  if ( v8 )
  {
    if ( v4 && a1[v4 - 1] == 33 )
    {
      _o_strncpy_s(v8, 129LL, a1, v4 - 1);
      v9 = (_BYTE *)(v8 + 129);
      *(_BYTE *)(v8 + 129) = v4 - 1;
      *(_QWORD *)(v8 + 136) = (v4 + 1) << 32;
    }
    else
    {
      v9 = (_BYTE *)(v8 + 129);
      if ( v4 == v3 - 2 )
      {
        _o_strncpy_s(v8, 129LL, a1, v4);
      }
      else
      {
        if ( v4 != v3 - 3 )
        {
          _o_strncpy_s(v8, 129LL, a1, v4);
          *(_BYTE *)(v8 + v4) = 46;
          *v9 = v4 + 1;
          *(_QWORD *)(v8 + 136) = (v4 + 3) << 32;
          *(_QWORD *)(v8 + 136) &= ~0x8000000000000000uLL;
          goto LABEL_28;
        }
        _o_strncpy_s(v8, 129LL, a1, v4);
        *(_BYTE *)(v8 + v4) = 46;
        LOBYTE(v4) = v4 + 1;
      }
      *v9 = v4;
      *(_QWORD *)(v8 + 136) = v3 << 32;
    }
    *(_QWORD *)(v8 + 136) |= 0x8000000000000000uLL;
LABEL_28:
    result = (struct TraceLoggingCorrelationVector *)v8;
    *(_BYTE *)((unsigned __int8)*v9 + v8) = 0;
    return result;
  }
  return 0LL;
}
