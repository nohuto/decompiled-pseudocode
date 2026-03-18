/*
 * XREFs of EtwpCaptureString @ 0x140A70314
 * Callers:
 *     EtwpSetSoftRestartInformation @ 0x140777D18 (EtwpSetSoftRestartInformation.c)
 *     EtwpAcquireLoggerContext @ 0x14091EE28 (EtwpAcquireLoggerContext.c)
 *     EtwpUpdateTrace @ 0x140A6C6F0 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 *     EtwpFlushTrace @ 0x140A6F6CC (EtwpFlushTrace.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // edi
  char PreviousMode; // r15
  WCHAR *Pool2; // rax
  WCHAR *v7; // rbx
  size_t v8; // r8
  void *v9; // rdx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode )
    ProbeForRead(*((volatile void **)a1 + 1), *a1, 2u);
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    goto LABEL_8;
  v8 = *a1;
  v9 = (void *)*((_QWORD *)a1 + 1);
  if ( PreviousMode )
    RtlCopyFromUser(Pool2, v9, v8);
  else
    RtlCopyVolatileMemory(Pool2, v9, v8);
  v7[(unsigned __int64)*a1 >> 1] = 0;
  if ( !RtlCreateUnicodeString(a2, v7) )
LABEL_8:
    v4 = -1073741801;
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v4;
}
