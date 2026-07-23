/*
 * XREFs of ExpStringCapture @ 0x14077CBC4
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140B2E22C (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, unsigned __int16 *a2)
{
  size_t v4; // rdi
  void *Pool2; // rax
  void *v6; // rbx
  void *v8; // rdx

  v4 = *a2;
  if ( (v4 & 1) != 0 || !*a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(0x101uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v8 = (void *)*((_QWORD *)a2 + 1);
      if ( ((unsigned __int8)v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyFromUser(Pool2, v8, v4);
      *a1 = v6;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
