/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x140AC1EBC
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x140AC1E1C (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14072ADE0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, WNF_STATE_NAME *a2)
{
  void *Buffer; // rdi
  NTSTATUS updated; // ebx
  ULONG v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG BufferSize; // [rsp+40h] [rbp-28h] BYREF
  ULONG ChangeStamp; // [rsp+44h] [rbp-24h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-20h] BYREF

  StateName = *a2;
  Buffer = (void *)ExAllocatePool2(0x100uLL);
  if ( !Buffer )
    return (unsigned int)-1073741801;
  while ( 1 )
  {
    BufferSize = 4096;
    ChangeStamp = 0;
    updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
    if ( updated >= 0 )
      break;
LABEL_12:
    if ( updated != -1073741823 )
      goto LABEL_13;
  }
  v5 = BufferSize;
  if ( (BufferSize & 7) != 0 )
    v5 = 0;
  v6 = 0LL;
  v7 = v5 >> 3;
  if ( !(_DWORD)v7 )
  {
LABEL_10:
    if ( (unsigned __int64)v5 + 8 > 0x1000 )
      goto LABEL_13;
    *((_DWORD *)Buffer + 2 * v7) = *(_DWORD *)a1;
    *((_WORD *)Buffer + 4 * v7 + 2) = *(_WORD *)(a1 + 4);
    BufferSize = v5 + 8;
    updated = ZwUpdateWnfStateData(&StateName, Buffer, v5 + 8, 0LL, 0LL, ChangeStamp, 1u);
    goto LABEL_12;
  }
  while ( *((_DWORD *)Buffer + 2 * v6) != *(_DWORD *)a1 || *((_WORD *)Buffer + 4 * v6 + 2) != *(_WORD *)(a1 + 4) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_10;
  }
LABEL_13:
  ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)updated;
}
