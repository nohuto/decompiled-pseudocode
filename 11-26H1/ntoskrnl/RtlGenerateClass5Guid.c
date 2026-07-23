/*
 * XREFs of RtlGenerateClass5Guid @ 0x140B2CBE0
 * Callers:
 *     PipCreateComputerId @ 0x140CC7574 (PipCreateComputerId.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1404896C4 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     BCryptCloseAlgorithmProvider @ 0x14063DE48 (BCryptCloseAlgorithmProvider.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BCryptFinishHash @ 0x1409E72E4 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x1409E787C (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x1409E78F4 (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x1409E7948 (BCryptCreateHash.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlGenerateClass5Guid(__int64 a1, UCHAR *a2, ULONG a3, __int64 a4)
{
  UCHAR *v4; // rsi
  int v9; // ebx
  ULONG v10; // edx
  BCRYPT_ALG_HANDLE v11; // r13
  UCHAR *Pool2; // rax
  ULONG v14; // r9d
  unsigned __int32 v15; // eax
  ULONG v16; // r9d
  ULONG v17; // r9d
  PUCHAR pbSecret; // [rsp+20h] [rbp-59h]
  ULONG cbSecret; // [rsp+28h] [rbp-51h]
  ULONG v20; // [rsp+30h] [rbp-49h]
  BCRYPT_HASH_HANDLE hHash; // [rsp+48h] [rbp-31h] BYREF
  BCRYPT_ALG_HANDLE hAlgorithm; // [rsp+50h] [rbp-29h] BYREF
  UCHAR v23[4]; // [rsp+58h] [rbp-21h] BYREF
  UCHAR pbInput[16]; // [rsp+60h] [rbp-19h] BYREF
  UCHAR pbOutput[24]; // [rsp+70h] [rbp-9h] BYREF

  v4 = 0LL;
  *(_DWORD *)v23 = 0;
  hAlgorithm = 0LL;
  hHash = 0LL;
  *(_OWORD *)pbInput = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a2 && a3 )
    return 3221225713LL;
  v9 = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    v9 = guard_dispatch_icall_no_overrides((__int64)&hAlgorithm, (__int64)L"SHA1");
    ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
  }
  if ( v9 >= 0 )
  {
    v9 = -1073741822;
    v11 = hAlgorithm;
    if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
    {
      cbSecret = 0;
      pbSecret = v23;
      v9 = guard_dispatch_icall_no_overrides((__int64)v11, (__int64)L"ObjectLength");
      ExReleaseExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime);
    }
    if ( v9 >= 0 )
    {
      Pool2 = (UCHAR *)ExAllocatePool2(0x100uLL);
      v4 = Pool2;
      if ( Pool2 )
      {
        v9 = BCryptCreateHash(hAlgorithm, &hHash, Pool2, 0, pbSecret, cbSecret, v20);
        if ( v9 >= 0 )
        {
          v15 = _byteswap_ulong(*(_DWORD *)a1);
          *(_OWORD *)pbInput = *(_OWORD *)a1;
          *(_DWORD *)pbInput = v15;
          *(_WORD *)&pbInput[4] = __ROR2__(*(_WORD *)(a1 + 4), 8);
          *(_WORD *)&pbInput[6] = __ROR2__(*(_WORD *)(a1 + 6), 8);
          v9 = BCryptHashData(hHash, pbInput, 0x10u, v14);
          if ( v9 >= 0 )
          {
            v9 = BCryptHashData(hHash, a2, a3, v16);
            if ( v9 >= 0 )
            {
              v9 = BCryptFinishHash(hHash, pbOutput, 0x14u, v17);
              if ( v9 >= 0 )
              {
                *(_OWORD *)a4 = *(_OWORD *)pbOutput;
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)a4);
                *(_WORD *)(a4 + 4) = __ROR2__(*(_WORD *)(a4 + 4), 8);
                *(_WORD *)(a4 + 6) = __ROR2__(*(_WORD *)(a4 + 6), 8) & 0xFFF | 0x5000;
                *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0x3F | 0x80;
              }
            }
          }
        }
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( hHash )
    BCryptDestroyHash(hHash);
  if ( hAlgorithm )
    BCryptCloseAlgorithmProvider(hAlgorithm, v10);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v9;
}
