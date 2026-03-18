/*
 * XREFs of PopDispatchNotificationsToList @ 0x140A3C908
 * Callers:
 *     PopDispatchNotifications @ 0x140A3C8C0 (PopDispatchNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopFreeRegistration @ 0x1407CF698 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x140A3CAA8 (PopMarshalSettingValues.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(__int64 **a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  int v5; // eax
  __int64 **v6; // rax
  struct _KTHREAD *result; // rax
  int v8; // ebx
  int updated; // ebx
  unsigned int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-68h]
  int v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+30h] [rbp-58h]
  int v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v16[40]; // [rsp+50h] [rbp-38h] BYREF

  v14 = 0;
  v15 = 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  v3 = *a1;
  while ( v3 != (__int64 *)a1 )
  {
    v4 = v3;
    while ( 1 )
    {
      v5 = *((_DWORD *)v3 + 13);
      if ( (v5 & 1) == 0 || (v5 & 2) != 0 )
        break;
      v15 = v3[7];
      *((_DWORD *)v3 + 13) = *((_DWORD *)v3 + 13) & 0xFFFFFFFC | 2;
      v8 = PopMarshalSettingValues(v3, v16, 36LL, &v14, v11, v12, v13);
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
      if ( v8 < 0 )
        v14 = 0;
      v13 = 0;
      v12 = 0;
      v11 = 0LL;
      updated = ZwUpdateWnfStateData((__int64)&v15, (__int64)v16);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_18;
      ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
      v10 = *((_DWORD *)v3 + 13) & 0xFFFFFFFD;
      *((_DWORD *)v3 + 13) = v10;
      if ( updated < 0 )
      {
        v5 = v10 | 1;
        *((_DWORD *)v3 + 13) = v5;
        break;
      }
    }
    v3 = (__int64 *)*v3;
    if ( (v5 & 2) == 0 && (v5 & 4) != 0 )
    {
      if ( (__int64 *)v3[1] != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v3;
      v3[1] = (__int64)v6;
      PopFreeRegistration(v4, v2);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_18:
    __fastfail(0x20u);
  return result;
}
