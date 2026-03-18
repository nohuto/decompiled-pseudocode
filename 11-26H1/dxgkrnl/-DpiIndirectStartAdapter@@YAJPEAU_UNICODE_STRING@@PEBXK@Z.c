/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x140250254
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140250AE0 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140039FEC (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1400553D4 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3)
{
  size_t v3; // rsi
  char *StartContext; // rbx
  NTSTATUS v7; // ebx
  int v8; // edi
  void *v10; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  char *v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v12 = 0LL;
  StartContext = (char *)ExAllocatePool2(256LL, 1552LL, 1953656900LL);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v12);
  v12 = StartContext;
  v10 = 0LL;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v10);
  if ( StartContext )
  {
    v8 = RtlStringCchCopyW(StartContext + 4, 260LL, (char *)a1->Buffer);
    if ( v8 >= 0 )
    {
      if ( (unsigned int)v3 <= 0x400 )
      {
        memmove(StartContext + 528, a2, v3);
        *((_DWORD *)StartContext + 131) = v3;
        *(_DWORD *)StartContext = 4;
        ThreadHandle = 0LL;
        v7 = PsCreateSystemThread(
               &ThreadHandle,
               0x1FFFFFu,
               0LL,
               0LL,
               0LL,
               (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
               StartContext);
        if ( v7 >= 0 )
        {
          v12 = 0LL;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 307;
        }
      }
      else
      {
        v7 = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 285;
      v7 = v8;
    }
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 274;
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v12);
  return (unsigned int)v7;
}
