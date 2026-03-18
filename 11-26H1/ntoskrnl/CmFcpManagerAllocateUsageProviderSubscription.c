/*
 * XREFs of CmFcpManagerAllocateUsageProviderSubscription @ 0x14077AE7C
 * Callers:
 *     CmFcManagerRegisterFeatureUsageProvider @ 0x140B52AB0 (CmFcManagerRegisterFeatureUsageProvider.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

char *__fastcall CmFcpManagerAllocateUsageProviderSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int32 v5; // eax
  char *result; // rax

  if ( BYTE2(CmpFreezeListLock.ForegroundLossTime) )
  {
    result = (char *)ExAllocatePool2(0x40uLL);
    if ( !result )
      return result;
  }
  else
  {
    v5 = _InterlockedIncrement(&dword_140EFBAE0);
    if ( v5 > 3 )
      return 0LL;
    result = (char *)&unk_140EFB990 + 112 * v5 - 112;
  }
  *(_OWORD *)result = 0LL;
  *((_QWORD *)result + 12) = 0LL;
  *((_QWORD *)result + 3) = 0LL;
  *((_QWORD *)result + 4) = CmpWorkItemWrapper;
  *((_QWORD *)result + 5) = result + 16;
  *((_QWORD *)result + 2) = 0LL;
  *((_QWORD *)result + 8) = CmFcpFeatureUsageProviderSubscriptionWrapper;
  *((_DWORD *)result + 14) = 0;
  *((_QWORD *)result + 6) = 0LL;
  *((_DWORD *)result + 15) = 4;
  *((_QWORD *)result + 9) = a3;
  *((_QWORD *)result + 11) = &CmpFreezeListLock.WaitBlock[3];
  *((_QWORD *)result + 10) = a2;
  *((_QWORD *)result + 13) = 0LL;
  return result;
}
