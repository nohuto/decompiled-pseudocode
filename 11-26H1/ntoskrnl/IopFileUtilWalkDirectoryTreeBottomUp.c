/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407B7520
 * Callers:
 *     NtEnableLastKnownGood @ 0x1408AD040 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  int v2; // edi
  UNICODE_STRING *Pool2; // rax
  PVOID *v4; // rbx
  _QWORD *v5; // rax
  PVOID v6; // rbx
  PVOID *v7; // rax
  PVOID v8; // rcx
  __int64 v9; // rax
  __int16 v11; // [rsp+28h] [rbp-D8h]
  PVOID v12; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int64 v14[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+60h] [rbp-A0h] BYREF

  P = &v12;
  v12 = &v12;
  v14[1] = (__int64)v14;
  v2 = 0;
  v14[0] = (__int64)v14;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  v4 = (PVOID *)Pool2;
  if ( !Pool2 )
  {
    v2 = -1073741670;
    goto LABEL_13;
  }
  Pool2[1].Length = 0;
  Pool2[1].MaximumLength = SourceString->Length;
  Pool2[1].Buffer = &Pool2[2].Length;
  RtlCopyUnicodeString(Pool2 + 1, SourceString);
  v5 = v12;
  if ( *((PVOID **)v12 + 1) != &v12 )
LABEL_18:
    __fastfail(3u);
  *v4 = v12;
  v4[1] = &v12;
  v5[1] = v4;
  v12 = v4;
  while ( v4 != &v12 )
  {
    v2 = IopFileUtilWalkDirectoryTreeHelper((int)v4 + 16, 8, 0, 0, FileInformation, v11, (__int64)&v12);
    if ( v2 < 0 )
      goto LABEL_13;
    v4 = (PVOID *)*v4;
  }
  while ( v12 != &v12 )
  {
    v6 = P;
    if ( *(PVOID **)P != &v12 )
      goto LABEL_18;
    v7 = (PVOID *)*((_QWORD *)P + 1);
    if ( *v7 != P )
      goto LABEL_18;
    P = (PVOID)*((_QWORD *)P + 1);
    *v7 = &v12;
    v2 = IopFileUtilWalkDirectoryTreeHelper(
           (int)v6 + 16,
           7,
           (int)PpLastGoodDeleteFilesCallback,
           0,
           FileInformation,
           v11,
           (__int64)v14);
    ExFreePoolWithTag(v6, 0x75466F49u);
  }
  if ( v2 < 0 )
  {
LABEL_13:
    while ( 1 )
    {
      v8 = v12;
      if ( v12 == &v12 )
        break;
      if ( *((PVOID **)v12 + 1) != &v12 )
        goto LABEL_18;
      v9 = *(_QWORD *)v12;
      if ( *(PVOID *)(*(_QWORD *)v12 + 8LL) != v12 )
        goto LABEL_18;
      v12 = *(PVOID *)v12;
      *(_QWORD *)(v9 + 8) = &v12;
      ExFreePoolWithTag(v8, 0x75466F49u);
    }
  }
  return (unsigned int)v2;
}
