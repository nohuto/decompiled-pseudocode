/*
 * XREFs of sub_1409072F0 @ 0x1409072F0
 * Callers:
 *     sub_140907180 @ 0x140907180 (sub_140907180.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BCryptFinishHash @ 0x140907094 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x140907108 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x140907208 (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x14090725C (BCryptCreateHash.c)
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409072F0(PUCHAR pbInput, ULONG cbInput, _QWORD *a3, _DWORD *a4)
{
  int v8; // ebx
  __int64 v9; // r15
  ULONG v10; // r9d
  ULONG v11; // r9d
  UCHAR *v13; // [rsp+20h] [rbp-30h]
  ULONG v14; // [rsp+28h] [rbp-28h]
  ULONG v15; // [rsp+30h] [rbp-20h]
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-8h] BYREF

  phHash = 0LL;
  if ( *(__int64 *)((char *)&qword_140E3E734 + 4) )
  {
    v8 = BCryptCreateHash(*(BCRYPT_ALG_HANDLE *)((char *)&qword_140E3E734 + 4), &phHash, 0LL, 0, v13, v14, v15);
    if ( v8 >= 0 )
    {
      v8 = -1073741822;
      v9 = *(__int64 *)((char *)&qword_140E3E734 + 4);
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
      {
        v8 = guard_dispatch_icall_no_overrides(v9);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
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
