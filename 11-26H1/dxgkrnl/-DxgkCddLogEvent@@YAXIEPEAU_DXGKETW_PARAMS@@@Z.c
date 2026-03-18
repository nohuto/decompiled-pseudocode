/*
 * XREFs of ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1403AB5A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qqqqqqqttQ3_EtwWriteTransfer @ 0x140050278 (McTemplateK0qqqqqqqttQ3_EtwWriteTransfer.c)
 */

void __fastcall DxgkCddLogEvent(int a1, char a2, struct _DXGKETW_PARAMS *a3)
{
  __int64 v5; // rcx
  void *v6; // rdx

  if ( a1 == 8012 )
  {
    if ( !*(_QWORD *)a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2748;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"params->Adapter != NULL", 2748LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventGdiRenderDuringCS);
  }
  else
  {
    if ( (qword_1401664C0 & 0x20) == 0 )
      return;
    v5 = 1LL;
    if ( a3 )
    {
      if ( a2 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            1LL,
            (const EVENT_DESCRIPTOR *)"k",
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else if ( a2 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            1LL,
            &EventExtendedProfilerExit,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      else
      {
        if ( a2 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3198;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"EventType == EVENT_TRACE_TYPE_INFO",
            3198LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
          McTemplateK0qqqqqqqttQ3_EtwWriteTransfer(
            v5,
            &EventExtendedProfilerInfo,
            (__int64)a3,
            a1,
            *(_DWORD *)a3,
            *((_DWORD *)a3 + 1),
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            *((_DWORD *)a3 + 4),
            *((_DWORD *)a3 + 5),
            *((_DWORD *)a3 + 6),
            *((_DWORD *)a3 + 7),
            (__int64)a3 + 32);
      }
      return;
    }
    if ( a2 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return;
      v6 = &EventProfilerEnter;
      goto LABEL_21;
    }
    if ( a2 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0 )
        return;
      v6 = &EventProfilerExit;
LABEL_21:
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)v6);
      return;
    }
    if ( a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3159;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EventType == EVENT_TRACE_TYPE_INFO",
        3159LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      v6 = &EventProfilerInfo;
      goto LABEL_21;
    }
  }
}
