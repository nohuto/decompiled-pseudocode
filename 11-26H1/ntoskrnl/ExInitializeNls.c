/*
 * XREFs of ExInitializeNls @ 0x140B700B4
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140729540 (ZwCreateDirectoryObject.c)
 *     RtlpInitCodePageTables @ 0x140807B14 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x140807CBC (RtlpInitUppercaseTables.c)
 *     RtlpQueryNlsSystemCodePages @ 0x140807D5C (RtlpQueryNlsSystemCodePages.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS ExInitializeNls()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v4; // rdx
  unsigned __int16 v5; // dx
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  v0 = -535;
  Handle = 0LL;
  Value = 65001;
  v7 = 65001;
  result = ZwCreateDirectoryObject(&Handle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentServerSiloGlobals[64].Flink = v4;
      if ( (int)RtlpQueryNlsSystemCodePages(&Value, &v7) >= 0 )
      {
        v0 = Value;
        v5 = v7;
      }
      else
      {
        v5 = -535;
      }
      RtlpInitCodePageTables(v0, v5);
      RtlpInitUppercaseTables();
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
