/*
 * XREFs of ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x180168894
 * Callers:
 *     ?IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z @ 0x18032C6B4 (-IncrementW@TraceLoggingCorrelationVector@@QEAA_NPEAG@Z.c)
 * Callees:
 *     ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x180168C00 (-IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ.c)
 */

bool __fastcall TraceLoggingCorrelationVector::Increment(TraceLoggingCorrelationVector *this, char *a2)
{
  unsigned __int64 v4; // rax

  v4 = TraceLoggingCorrelationVector::IncrementImpl(this);
  return TraceLoggingCorrelationVector::ToStringImpl(this, v4, a2);
}
