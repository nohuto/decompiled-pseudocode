/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800599E8
 * Callers:
 *     ??0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18004B998 (--0CorrelationVectorWrapper@Background@ContentDeliveryManager@@QEAA@XZ.c)
 *     ??$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@0@$$QEAPEBD@Z @ 0x18007B7B4 (--$make_shared@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@PEBD@std@@YA-AV-$sha.c)
 * Callees:
 *     <none>
 */

bool __fastcall TraceLoggingCorrelationVector::ToStringImpl(
        TraceLoggingCorrelationVector *this,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // rbp
  int v5; // ebx
  __int64 v7; // rax
  size_t v8; // rdx
  char *v9; // rcx

  v4 = a2 >> 63;
  v5 = a2;
  if ( a3 )
  {
    *a3 = 0;
    if ( !memcpy_s(a3, *((unsigned __int8 *)this + 130), this, WORD2(a2)) )
    {
      if ( (_BYTE)v4 && !v5 )
      {
        a3[*((unsigned __int8 *)this + 129)] = 33;
        a3[*((unsigned __int8 *)this + 129) + 1] = 0;
        return 1;
      }
      v7 = *((unsigned __int8 *)this + 129);
      v8 = *((unsigned __int8 *)this + 130) - v7;
      v9 = &a3[v7];
      if ( !(_BYTE)v4 )
        return sprintf_s(v9, v8, "%u", v5) != -1;
      if ( sprintf_s(v9, v8, "%u!", v5) != -1 )
        return 1;
    }
  }
  return 0;
}
