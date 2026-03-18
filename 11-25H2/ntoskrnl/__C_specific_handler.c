/*
 * XREFs of __C_specific_handler @ 0x1404F9030
 * Callers:
 *     __GSHandlerCheck_SEH @ 0x14069A654 (__GSHandlerCheck_SEH.c)
 * Callees:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     KeCheckStackAndTargetAddress @ 0x140439680 (KeCheckStackAndTargetAddress.c)
 *     _NLG_Notify @ 0x1404FB4C0 (_NLG_Notify.c)
 *     __NLG_Return2 @ 0x1404FB4F0 (__NLG_Return2.c)
 */

EXCEPTION_DISPOSITION __cdecl _C_specific_handler(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v15; // rsi
  unsigned int i; // ecx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF

  KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
  v8 = *((_QWORD *)DispatcherContext + 1);
  v9 = *(_QWORD *)DispatcherContext - v8;
  v10 = (unsigned int *)*((_QWORD *)DispatcherContext + 7);
  v11 = *((_DWORD *)DispatcherContext + 18);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    v15 = *((_QWORD *)DispatcherContext + 4) - v8;
    while ( 1 )
    {
      v18 = *v10;
      if ( v11 >= *v10 )
        break;
      if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] )
      {
        if ( (ExceptionRecord->ExceptionFlags & 0x20) != 0 )
        {
          for ( i = 0; i < v18; ++i )
          {
            if ( v15 >= v10[4 * i + 1]
              && v15 < v10[4 * i + 2]
              && v10[4 * i + 4] == v10[4 * v11 + 4]
              && v10[4 * i + 3] == v10[4 * v11 + 3] )
            {
              break;
            }
          }
          if ( i != *v10 )
            return 1;
        }
        v17 = v10[4 * v11 + 4];
        if ( (_DWORD)v17 )
        {
          if ( v15 == v17 )
            return 1;
        }
        else
        {
          *((_DWORD *)DispatcherContext + 18) = v11 + 1;
          LODWORD(v17) = 1;
          ((void (__fastcall *)(__int64, void *))(v8 + v10[4 * v11 + 3]))(v17, EstablisherFrame);
        }
      }
      ++v11;
    }
  }
  else
  {
    v19[0] = ExceptionRecord;
    v19[1] = ContextRecord;
    while ( v11 < *v10 )
    {
      if ( v9 >= v10[4 * v11 + 1] && v9 < v10[4 * v11 + 2] && v10[4 * v11 + 4] )
      {
        v12 = v10[4 * v11 + 3];
        if ( (_DWORD)v12 == 1 )
          goto LABEL_9;
        v13 = ((__int64 (__fastcall *)(_QWORD *, void *))(v8 + v12))(v19, EstablisherFrame);
        if ( v13 < 0 )
          return 0;
        if ( v13 > 0 )
        {
LABEL_9:
          NLG_Notify(v8 + v10[4 * v11 + 4], EstablisherFrame, 1LL);
          RtlUnwindEx(
            (ULONG_PTR)EstablisherFrame,
            v8 + v10[4 * v11 + 4],
            &ExceptionRecord->ExceptionCode,
            ExceptionRecord->ExceptionCode,
            *((int **)DispatcherContext + 5),
            *((_QWORD *)DispatcherContext + 8));
          _NLG_Return2();
        }
      }
      ++v11;
    }
  }
  return 1;
}
