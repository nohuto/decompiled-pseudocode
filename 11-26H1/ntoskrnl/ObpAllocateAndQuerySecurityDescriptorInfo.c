/*
 * XREFs of ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1408F37EC
 * Callers:
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateAndQuerySecurityDescriptorInfo(__int64 a1, DWORD a2, void *a3, _QWORD *a4)
{
  void *v6; // rbx
  int v7; // esi
  void *Pool2; // rax
  int v10; // eax
  ULONG Length; // [rsp+A0h] [rbp+40h] BYREF
  DWORD SecurityInformation; // [rsp+A8h] [rbp+48h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+B0h] [rbp+50h] BYREF

  ObjectsSecurityDescriptor = a3;
  SecurityInformation = a2;
  Length = 0;
  if ( a3 )
  {
    SeQuerySecurityDescriptorInfo(&SecurityInformation, 0LL, &Length, &ObjectsSecurityDescriptor);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v10 = SeQuerySecurityDescriptorInfo(&SecurityInformation, Pool2, &Length, &ObjectsSecurityDescriptor);
      goto LABEL_10;
    }
    return 3221225626LL;
  }
  Length = ObpDefaultSecurityDescriptorLength;
  v6 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v6 )
    return 3221225626LL;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(a1 - 8);
  v7 = guard_dispatch_icall_no_overrides(a1, 1LL);
  if ( v7 == -1073741789 )
  {
    ExFreePoolWithTag(v6, 0x7153624Fu);
    v6 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v6 )
      return 3221225626LL;
    v10 = guard_dispatch_icall_no_overrides(a1, 1LL);
LABEL_10:
    v7 = v10;
  }
  if ( v7 < 0 )
    ExFreePoolWithTag(v6, 0x7153624Fu);
  else
    *a4 = v6;
  return (unsigned int)v7;
}
