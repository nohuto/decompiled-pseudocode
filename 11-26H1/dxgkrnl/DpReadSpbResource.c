/*
 * XREFs of DpReadSpbResource @ 0x140254290
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x140254670 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpReadSpbResource(
        int a1,
        int a2,
        ULONG a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        HANDLE Event,
        PIO_STATUS_BLOCK a7)
{
  HANDLE Ptr; // rbx
  HANDLE v10; // r15
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  struct _EX_RUNDOWN_REF *v13; // rdi
  NTSTATUS File; // ebx
  struct _EX_RUNDOWN_REF *v15; // [rsp+88h] [rbp+20h] BYREF

  Ptr = Event;
  v10 = Event;
  v15 = 0LL;
  if ( !a4 && a3 )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 874;
    return result;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225716LL;
    WdLogGlobalForLineNumber = 887;
    return result;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpReadSpbResource, 0, (__int64)&v15);
  if ( (int)result >= 0 )
  {
    v13 = v15;
    if ( !Ptr )
      Ptr = v15[7].Ptr;
    File = ZwReadFile(v15[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, a3, ByteOffset, 0LL);
    if ( File == 259 )
    {
      if ( v10 )
      {
LABEL_16:
        ExReleaseRundownProtection(v13 + 3);
        return (unsigned int)File;
      }
      File = KeWaitForSingleObject(v13[8].Ptr, Executive, 0, 0, 0LL);
      if ( File )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 956;
        goto LABEL_16;
      }
      File = IoStatusBlock->Status;
    }
    if ( File < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 973;
    }
    goto LABEL_16;
  }
  return result;
}
