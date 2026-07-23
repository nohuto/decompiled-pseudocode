/*
 * XREFs of __C_specific_handler @ 0x1801275F0
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x18015E930 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     _NLG_Notify @ 0x18012E440 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x18012E470 (__NLG_Return2.c)
 *     __except_validate_context_record @ 0x18012E478 (__except_validate_context_record.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  __int64 v8; // rcx
  DWORD64 ImageBase; // r15
  DWORD *HandlerData; // rbx
  unsigned __int64 v11; // rbp
  DWORD ScopeIndex; // edi
  int v13; // eax
  unsigned __int64 v15; // rsi
  DWORD i; // edx
  DWORD v17; // r8d
  _QWORD v18[2]; // [rsp+30h] [rbp-38h] BYREF

  _except_validate_context_record(ContextRecord);
  ImageBase = DispatcherContext->ImageBase;
  HandlerData = (DWORD *)DispatcherContext->HandlerData;
  v11 = DispatcherContext->ControlPc - ImageBase;
  ScopeIndex = DispatcherContext->ScopeIndex;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = DispatcherContext->TargetIp - ImageBase;
    while ( 1 )
    {
      v17 = *HandlerData;
      if ( ScopeIndex >= *HandlerData )
        break;
      if ( v11 >= HandlerData[4 * ScopeIndex + 1] && v11 < HandlerData[4 * ScopeIndex + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v17; ++i )
          {
            v8 = 2LL * i;
            if ( v15 >= HandlerData[4 * i + 1]
              && v15 < HandlerData[4 * i + 2]
              && HandlerData[4 * i + 4] == HandlerData[4 * ScopeIndex + 4]
              && HandlerData[4 * i + 3] == HandlerData[4 * ScopeIndex + 3] )
            {
              break;
            }
          }
          if ( i != *HandlerData )
            return 1;
        }
        if ( HandlerData[4 * ScopeIndex + 4] )
        {
          if ( v15 == HandlerData[4 * ScopeIndex + 4] )
            return 1;
        }
        else
        {
          DispatcherContext->ScopeIndex = ScopeIndex + 1;
          LOBYTE(v8) = 1;
          ((void (__fastcall *)(__int64, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(v8, EstablisherFrame);
        }
      }
      ++ScopeIndex;
    }
  }
  else
  {
    v18[0] = ExceptionRecord;
    v18[1] = ContextRecord;
    while ( ScopeIndex < *HandlerData )
    {
      if ( v11 >= HandlerData[4 * ScopeIndex + 1]
        && v11 < HandlerData[4 * ScopeIndex + 2]
        && HandlerData[4 * ScopeIndex + 4] )
      {
        if ( HandlerData[4 * ScopeIndex + 3] == 1 )
          goto LABEL_9;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(ImageBase + HandlerData[4 * ScopeIndex + 3]))(
                v18,
                EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_9:
          NLG_Notify(ImageBase + HandlerData[4 * ScopeIndex + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            EstablisherFrame,
            (PVOID)(ImageBase + HandlerData[4 * ScopeIndex + 4]),
            ExceptionRecord,
            (PVOID)ExceptionRecord->ExceptionCode,
            DispatcherContext->ContextRecord,
            DispatcherContext->HistoryTable);
          _NLG_Return2();
        }
      }
      ++ScopeIndex;
    }
  }
  return 1;
}
