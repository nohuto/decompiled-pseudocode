/*
 * XREFs of TtmiInitQueues @ 0x1407F29C8
 * Callers:
 *     TtmInit @ 0x1407EBF08 (TtmInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 TtmiInitQueues()
{
  __int64 result; // rax
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  __int16 v3; // cx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  __int16 Src; // [rsp+40h] [rbp-29h] BYREF
  char v6; // [rsp+42h] [rbp-27h]
  int v7; // [rsp+48h] [rbp-21h]
  __int128 v8; // [rsp+4Ch] [rbp-1Dh]
  int v9; // [rsp+5Ch] [rbp-Dh]
  int v10; // [rsp+64h] [rbp-5h]
  int v11; // [rsp+6Ch] [rbp+3h]
  __int64 (__fastcall *v12)(); // [rsp+78h] [rbp+Fh]
  __int64 (__fastcall *v13)(); // [rsp+80h] [rbp+17h]
  __int64 (__fastcall *v14)(); // [rsp+88h] [rbp+1Fh]

  result = TtmIsEnabled();
  if ( (_BYTE)result )
  {
    memset_0(&Src, 0, 0x78uLL);
    Src = 120;
    v7 = 400;
    v9 = 2031619;
    v6 = v6 & 0xF1 | 2;
    v1 = 0x7FFFLL;
    v10 = 512;
    v12 = TtmpOpenQueueHandle;
    v13 = TtmpCloseQueueHandle;
    v8 = TtmpQueueMapping;
    v14 = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    v11 = 176;
    SourceString = 0LL;
    while ( *v2 )
    {
      ++v2;
      if ( !--v1 )
        goto LABEL_9;
    }
    v3 = 2 * v1;
    SourceString.Buffer = L"TerminalEventQueue";
    SourceString.Length = -2 - v3;
    SourceString.MaximumLength = -v3;
LABEL_9:
    result = ObCreateObjectTypeEx(&SourceString, &Src, (__int64)&PspSiloMonitorLock.PriorityFloorCounts[8]);
    if ( (int)result < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, (int)result, 0LL, 0LL);
  }
  else
  {
    *(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[8] = 0LL;
  }
  return result;
}
