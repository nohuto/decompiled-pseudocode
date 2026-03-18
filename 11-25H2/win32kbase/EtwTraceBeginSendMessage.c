/*
 * XREFs of EtwTraceBeginSendMessage @ 0x1400C8010
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqqqq_EtwWriteTransfer @ 0x1400C8130 (McTemplateK0cppppqqqqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceBeginSendMessage(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // r9

  if ( (W32kEtwEnabledKeyword & 0x400000000400000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x400000000400000LL) != 0
    && (qword_14029EDA8 & 0x400000000400000LL) == qword_14029EDA8
    && (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    PsGetThreadId(**(PETHREAD **)(a1 + 40));
    v2 = *(_QWORD **)(a1 + 112);
    if ( v2 )
      v2 = (_QWORD *)*v2;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged && (v7 = *CurrentThreadNonPaged) != 0 )
      LOBYTE(v7) = *(_BYTE *)(v7 + 1456);
    else
      LOBYTE(v7) = -1;
    McTemplateK0cppppqqqqq_EtwWriteTransfer(v5, v4, v6, v7, a1, (char)v2);
  }
}
