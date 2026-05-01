/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x180179738
 * Callers:
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x180178E78 (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x18017932C (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x18017935C (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D48A4 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     sprintf_s @ 0x1802D3404 (sprintf_s.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

char __fastcall TraceLoggingCorrelationVector::ToStringImpl(
        TraceLoggingCorrelationVector *this,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // rbp
  int v5; // esi
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  size_t v13; // rdx
  char *v14; // rcx

  v4 = a2 >> 63;
  v5 = a2;
  if ( !a3 )
    return 0;
  *a3 = 0;
  v7 = *((unsigned __int8 *)this + 130);
  if ( WORD2(a2) )
  {
    if ( v7 < WORD2(a2) )
    {
      memset_0(a3, 0, v7);
      *(_DWORD *)_o__errno(v9, v8, v10) = 34;
      invalid_parameter_noinfo();
      return 0;
    }
    memcpy_0(a3, this, WORD2(a2));
  }
  if ( (_BYTE)v4 && !v5 )
  {
    a3[*((unsigned __int8 *)this + 129)] = 33;
    a3[*((unsigned __int8 *)this + 129) + 1] = 0;
    return 1;
  }
  v12 = *((unsigned __int8 *)this + 129);
  v13 = *((unsigned __int8 *)this + 130) - v12;
  v14 = &a3[v12];
  if ( (_BYTE)v4 )
    return sprintf_s(v14, v13, "%u!", v5) != -1;
  return sprintf_s(v14, v13, "%u", v5) != -1;
}
