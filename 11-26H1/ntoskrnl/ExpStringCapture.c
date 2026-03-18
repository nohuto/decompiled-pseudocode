/*
 * XREFs of ExpStringCapture @ 0x140779C94
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140B2C1AC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
