/*
 * XREFs of sub_1409E801C @ 0x1409E801C
 * Callers:
 *     sub_1409EB1E8 @ 0x1409EB1E8 (sub_1409EB1E8.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BCryptFinishHash @ 0x1409E72E4 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x1409E787C (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x1409E78F4 (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x1409E7948 (BCryptCreateHash.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409E801C(PUCHAR pbInput, ULONG cbInput, _QWORD *a3, _DWORD *a4)
{
  int v8; // ebx
  struct _LIST_ENTRY *Blink; // r15
  ULONG v10; // r9d
  ULONG v11; // r9d
  UCHAR *v13; // [rsp+20h] [rbp-30h]
  ULONG v14; // [rsp+28h] [rbp-28h]
  ULONG v15; // [rsp+30h] [rbp-20h]
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-8h] BYREF

  phHash = 0LL;
  if ( stru_140E3EAA8.Header.WaitListHead.Blink )
  {
    v8 = BCryptCreateHash(stru_140E3EAA8.Header.WaitListHead.Blink, &phHash, 0LL, 0, v13, v14, v15);
    if ( v8 >= 0 )
    {
      v8 = -1073741822;
      Blink = stru_140E3EAA8.Header.WaitListHead.Blink;
      if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
      {
        v8 = guard_dispatch_icall_no_overrides((__int64)Blink, (__int64)L"HashDigestLength");
        ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
      }
      if ( v8 >= 0 )
      {
        SddlpFree(0LL);
        v8 = BCryptHashData(phHash, pbInput, cbInput, v10);
        if ( v8 >= 0 )
        {
          v8 = BCryptFinishHash(phHash, 0LL, 0, v11);
          if ( v8 >= 0 )
          {
            if ( a3 )
              *a3 = 0LL;
            if ( a4 )
              *a4 = 0;
          }
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  SddlpFree(0LL);
  if ( phHash )
    BCryptDestroyHash(phHash);
  return (unsigned int)v8;
}
