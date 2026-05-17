/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x180117B7C
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x18001429C (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwQueryWnfStateData @ 0x180161D50 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x180162B70 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  __int64 Heap_0; // rdi
  int updated; // ebx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+44h] [rbp-24h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-20h] BYREF

  v12[0] = *a2;
  v12[1] = a2[1];
  Heap_0 = RtlAllocateHeap_0();
  if ( !Heap_0 )
    return (unsigned int)-1073741801;
  while ( 1 )
  {
    v10 = 4096;
    v11 = 0;
    updated = ZwQueryWnfStateData(v12, 0LL, 0LL, &v11, Heap_0, &v10);
    if ( updated >= 0 )
      break;
LABEL_12:
    if ( updated != -1073741823 )
      goto LABEL_13;
  }
  v5 = v10;
  if ( (v10 & 7) != 0 )
    v5 = 0;
  v6 = 0LL;
  v7 = v5 >> 3;
  if ( !(_DWORD)v7 )
  {
LABEL_10:
    if ( (unsigned __int64)v5 + 8 > 0x1000 )
      goto LABEL_13;
    v8 = v5 + 8;
    *(_DWORD *)(Heap_0 + 8 * v7) = *(_DWORD *)a1;
    *(_WORD *)(Heap_0 + 8 * v7 + 4) = *(_WORD *)(a1 + 4);
    v10 = v8;
    updated = ZwUpdateWnfStateData(v12, Heap_0, v8, 0LL, 0LL, v11, 1);
    goto LABEL_12;
  }
  while ( *(_DWORD *)(Heap_0 + 8 * v6) != *(_DWORD *)a1 || *(_WORD *)(Heap_0 + 8 * v6 + 4) != *(_WORD *)(a1 + 4) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_10;
  }
LABEL_13:
  RtlFreeHeap_0();
  return (unsigned int)updated;
}
