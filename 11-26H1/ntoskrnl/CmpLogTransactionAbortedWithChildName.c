/*
 * XREFs of CmpLogTransactionAbortedWithChildName @ 0x1408AF680
 * Callers:
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1407714F8 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E4700 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCatString @ 0x140438C68 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x14043D5D0 (RtlUnicodeStringCopy.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpLogTransactionAbortedByName @ 0x1407766C4 (CmpLogTransactionAbortedByName.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C182C (CmpConstructNameFromKcbNameBlocks.c)
 */

void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        unsigned int a5)
{
  int v8; // eax
  __int64 v9; // r8
  UNICODE_STRING *v10; // rbx
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp+28h] BYREF

  SourceString = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5
    || (unsigned int)dword_140E09EE8 <= 4
    || (qword_140E09EF8 & 1) == 0
    || (qword_140E09F00 & 1) != qword_140E09F00 )
  {
    goto LABEL_2;
  }
  v8 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v10 = (UNICODE_STRING *)SourceString;
  if ( v8 >= 0 )
  {
    if ( !a2 )
    {
      p_DestinationString = (UNICODE_STRING *)SourceString;
LABEL_9:
      CmpLogTransactionAbortedByName(&p_DestinationString->Length, a3, v9, a5);
      goto LABEL_10;
    }
    if ( SourceString->Length + 2LL + (unsigned __int64)a2->Length <= 0xFFFF )
    {
      DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
      DestinationString.Buffer = (wchar_t *)CmpAllocatePool(0x100uLL);
      if ( DestinationString.Buffer )
      {
        RtlUnicodeStringCopy(&DestinationString, v10);
        RtlUnicodeStringCatString(&DestinationString, L"\\");
        RtlUnicodeStringCat(&DestinationString, a2);
        p_DestinationString = &DestinationString;
        goto LABEL_9;
      }
    }
  }
LABEL_10:
  if ( v10 )
    CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
LABEL_2:
  if ( DestinationString.Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
}
