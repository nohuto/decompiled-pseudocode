/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x140ABFE1C
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x140ABFD7C (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x140726210 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  _DWORD *Pool2; // rdi
  int WnfStateData; // ebx
  __int64 i; // rcx
  _DWORD v7[2]; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = *a2;
  v7[1] = a2[1];
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    do
    {
      WnfStateData = ZwQueryWnfStateData((__int64)v7, 0LL);
      if ( WnfStateData >= 0 )
      {
        for ( i = 0LL;
              (unsigned int)i < 0x200
           && (Pool2[2 * i] != *(_DWORD *)a1 || LOWORD(Pool2[2 * i + 1]) != *(_WORD *)(a1 + 4));
              i = (unsigned int)(i + 1) )
        {
          ;
        }
        WnfStateData = ZwUpdateWnfStateData((__int64)v7, (__int64)Pool2);
      }
    }
    while ( WnfStateData == -1073741823 );
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateData;
}
