/*
 * XREFs of ?SHTraceSQMCount@@YAXPEBU_EVENT_DESCRIPTOR@@K@Z @ 0x180689A28
 * Callers:
 *     ?v_SendPinRearrangeSQM@CTaskbandPin@@MEAAXXZ @ 0x18068B050 (-v_SendPinRearrangeSQM@CTaskbandPin@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

void __fastcall SHTraceSQMCount(const struct _EVENT_DESCRIPTOR *a1)
{
  int v1; // [rsp+20h] [rbp-60h] BYREF
  int v2; // [rsp+28h] [rbp-58h] BYREF
  int v3; // [rsp+2Ch] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  int *v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  int *v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  int *v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]

  v1 = 3150;
  if ( EventEnabled(Microsoft_Windows_Shell_Core_Provider_Context, &New_Taskbar_Pinned_Items_Rearranged) )
  {
    UserData.Ptr = (ULONGLONG)&g_SHSqmGlobalSession;
    v2 = 6;
    v3 = 1;
    *(_QWORD *)&UserData.Size = 16LL;
    v5 = &v1;
    v6 = 4LL;
    v7 = &v2;
    v9 = &v3;
    v8 = 4LL;
    v10 = 4LL;
    EventWrite(Microsoft_Windows_Shell_Core_Provider_Context, &New_Taskbar_Pinned_Items_Rearranged, 4u, &UserData);
  }
}
