/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1400E61E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x14001E6E4 (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 *     ?GetCallbackCount@@YACXZ @ 0x1400E62F0 (-GetCallbackCount@@YACXZ.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, __int64 *a2, int a3)
{
  int v5; // ebx
  __int64 v6; // rdi
  char CallbackCount; // al
  __int64 v8; // r8

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    v5 = *((_DWORD *)a2 + 8);
    v6 = *a2;
    CallbackCount = GetCallbackCount();
    McTemplateK0cppppqqq_EtwWriteTransfer(0LL, &RetrievePseudoMessage, v8, CallbackCount, a1, v6, 0, 0, 0, v5, a3 != 0);
  }
}
