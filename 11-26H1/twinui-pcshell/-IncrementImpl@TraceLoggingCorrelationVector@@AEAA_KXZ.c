/*
 * XREFs of ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ @ 0x180168C00
 * Callers:
 *     ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z @ 0x180168894 (-Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801688F8 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall TraceLoggingCorrelationVector::IncrementImpl(TraceLoggingCorrelationVector *this)
{
  signed __int64 result; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  signed __int64 v4; // r8

  while ( 1 )
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)this + 17, 0LL);
    v2 = HIDWORD(result);
    LODWORD(v2) = HIDWORD(result) & 0x7FFFFFFF;
    if ( (unsigned int)result == 0x7FFFFFFFLL || result < 0 )
      break;
    if ( (unsigned int)result == 9999999LL
      || (unsigned int)result == 9LL
      || (unsigned int)result == 99LL
      || (unsigned int)result == 999LL
      || (unsigned int)result == 9999LL
      || (unsigned int)result == 99999LL
      || (unsigned int)result == 999999LL
      || (unsigned int)result == 99999999LL
      || (unsigned int)result == 999999999LL )
    {
      ++v2;
    }
    v3 = v2 << 32;
    if ( v2 < *((unsigned __int8 *)this + 130) )
      v4 = (((unsigned int)result + 1LL) | v3) & 0x7FFFFFFFFFFFFFFFLL;
    else
      v4 = (unsigned int)result | v3 | 0x8000000000000000uLL;
    if ( result == _InterlockedCompareExchange64((volatile signed __int64 *)this + 17, v4, result) )
      return v4;
  }
  return result;
}
