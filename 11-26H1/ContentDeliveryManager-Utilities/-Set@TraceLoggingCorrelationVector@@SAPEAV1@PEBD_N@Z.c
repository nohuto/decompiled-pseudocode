/*
 * XREFs of ?Set@TraceLoggingCorrelationVector@@SAPEAV1@PEBD_N@Z @ 0x18007F418
 * Callers:
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18007B7B4 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z @ 0x18007C22C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV1_t@@@Z.c)
 *     ??0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z @ 0x18007C29C (--0TraceLoggingCorrelationVector@@QEAA@UTraceLoggingCorrelationVectorV2_t@@@Z.c)
 *     ?ValidateImpl@TraceLoggingCorrelationVector@@CA?AW4CvVersion@1@PEBD_N@Z @ 0x180080F30 (-ValidateImpl@TraceLoggingCorrelationVector@@CA-AW4CvVersion@1@PEBD_N@Z.c)
 */

struct TraceLoggingCorrelationVector *__fastcall TraceLoggingCorrelationVector::Set(const char *Source, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  void *v7; // rax
  __int64 v8; // rax
  void *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  struct TraceLoggingCorrelationVector *result; // rax
  unsigned __int64 v13; // rax
  char *v14; // rax
  char *v15; // rsi
  unsigned int v16; // eax
  __int64 v17; // r14
  void *v18; // rax
  __int64 v19; // rax
  void *v20; // rax
  rsize_t v21; // rsi

  LOBYTE(a2) = 1;
  v3 = TraceLoggingCorrelationVector::ValidateImpl(Source, a2);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( Source[v5] );
  if ( v5 )
  {
    v6 = 64LL;
    if ( (_BYTE)v4 != 1 )
      v6 = 128LL;
    if ( v5 <= v6 && Source[v5 - 1] == 33 )
    {
      if ( v4 == 1 )
      {
        v9 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v9 )
        {
          v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v9);
          goto LABEL_15;
        }
      }
      else
      {
        if ( v4 != 2 )
          return 0LL;
        v7 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v7 )
        {
          v8 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v7);
LABEL_15:
          v10 = v8;
          goto LABEL_17;
        }
      }
      v10 = 0LL;
LABEL_17:
      if ( v10 )
      {
        strncpy_s((char *)v10, 0x81uLL, Source, v5 - 1);
        *(_BYTE *)(v10 + 129) = v5 - 1;
        *(_QWORD *)(v10 + 136) = (v5 + 1) << 32;
        v11 = *(_QWORD *)(v10 + 136) | 0x8000000000000000uLL;
LABEL_19:
        *(_QWORD *)(v10 + 136) = v11;
        result = (struct TraceLoggingCorrelationVector *)v10;
        *(_BYTE *)(*(unsigned __int8 *)(v10 + 129) + v10) = 0;
        return result;
      }
      return 0LL;
    }
  }
  v13 = 63LL;
  if ( (_BYTE)v4 != 1 )
    v13 = 127LL;
  if ( v5 > v13 )
    return 0LL;
  v14 = strrchr(Source, 46);
  if ( !v14 )
    return 0LL;
  v15 = v14 + 1;
  _set_errno(0);
  v16 = strtol(v15, 0LL, 10);
  v17 = v16;
  if ( !v16 && *v15 != 48 && v15[1] )
    return 0LL;
  if ( *_errno() == 34 )
    return 0LL;
  if ( v4 == 1 )
  {
    v20 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v20 )
    {
      v19 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v20);
      goto LABEL_34;
    }
  }
  else
  {
    if ( v4 != 2 )
      return 0LL;
    v18 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v18 )
    {
      v19 = TraceLoggingCorrelationVector::TraceLoggingCorrelationVector((__int64)v18);
LABEL_34:
      v10 = v19;
      goto LABEL_36;
    }
  }
  v10 = 0LL;
LABEL_36:
  if ( v10 )
  {
    v21 = v15 - Source;
    strncpy_s((char *)v10, 0x81uLL, Source, v21);
    *(_BYTE *)(v10 + 129) = v21;
    *(_QWORD *)(v10 + 136) = v17 | ((v5 + 1) << 32);
    v11 = *(_QWORD *)(v10 + 136) & 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_19;
  }
  return 0LL;
}
