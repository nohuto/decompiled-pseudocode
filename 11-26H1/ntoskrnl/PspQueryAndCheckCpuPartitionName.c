/*
 * XREFs of PspQueryAndCheckCpuPartitionName @ 0x1407F871C
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F7440 (NtCreateCpuPartition.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspQueryAndCheckCpuPartitionName(int a1, char a2)
{
  int NameStringMode; // ebx
  __int64 Pool2; // rax
  UNICODE_STRING *v6; // rdi
  unsigned int i; // edx
  int v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&v9, 0);
  if ( NameStringMode == -1073741820 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v6 = (UNICODE_STRING *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    NameStringMode = ObQueryNameStringMode(a1, Pool2, v9, (unsigned int)&v9, 0);
    if ( NameStringMode >= 0 )
    {
      if ( a2 || v6->Length )
      {
        if ( !RtlPrefixUnicodeString(&PspCpuPartitionDirectoryPathString, v6, 1u) )
        {
LABEL_8:
          NameStringMode = -1073741811;
          goto LABEL_14;
        }
        for ( i = 29; i < v6->Length >> 1; ++i )
        {
          if ( v6->Buffer[i] == 92 )
            goto LABEL_8;
        }
      }
      NameStringMode = 0;
    }
LABEL_14:
    ExFreePoolWithTag(v6, 0);
  }
  return (unsigned int)NameStringMode;
}
