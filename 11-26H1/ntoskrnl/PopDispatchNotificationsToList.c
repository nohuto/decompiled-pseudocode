/*
 * XREFs of PopDispatchNotificationsToList @ 0x1409F8328
 * Callers:
 *     PopDispatchNotifications @ 0x1409F82E0 (PopDispatchNotifications.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopFreeRegistration @ 0x1407D2738 (PopFreeRegistration.c)
 *     PopMarshalSettingValues @ 0x1409F84C8 (PopMarshalSettingValues.c)
 */

struct _KTHREAD *__fastcall PopDispatchNotificationsToList(WNF_STATE_NAME **a1)
{
  WNF_STATE_NAME *v2; // rdi
  WNF_STATE_NAME *v3; // rsi
  int v4; // eax
  WNF_STATE_NAME **v5; // rax
  struct _KTHREAD *result; // rax
  int v7; // ebx
  ULONG v8; // r8d
  NTSTATUS updated; // ebx
  unsigned int v10; // eax
  ULONG v11; // [rsp+40h] [rbp-48h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-40h] BYREF
  _BYTE Buffer[40]; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  StateName = 0LL;
  ExAcquireFastMutex(&PopSettingLock);
  v2 = *a1;
  while ( v2 != (WNF_STATE_NAME *)a1 )
  {
    v3 = v2;
    while ( 1 )
    {
      v4 = v2[6].Data[1];
      if ( (v4 & 1) == 0 || (v4 & 2) != 0 )
        break;
      StateName = v2[7];
      v2[6].Data[1] = v2[6].Data[1] & 0xFFFFFFFC | 2;
      v7 = PopMarshalSettingValues(v2, Buffer, 36LL, &v11);
      KeReleaseGuardedMutex(&PopSettingLock);
      if ( v7 >= 0 )
      {
        v8 = v11;
      }
      else
      {
        v8 = 0;
        v11 = 0;
      }
      updated = ZwUpdateWnfStateData(&StateName, Buffer, v8, 0LL, 0LL, 0, 0);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        goto LABEL_18;
      ExAcquireFastMutex(&PopSettingLock);
      v10 = v2[6].Data[1] & 0xFFFFFFFD;
      v2[6].Data[1] = v10;
      if ( updated < 0 )
      {
        v4 = v10 | 1;
        v2[6].Data[1] = v4;
        break;
      }
    }
    v2 = (WNF_STATE_NAME *)*v2;
    if ( (v4 & 2) == 0 && (v4 & 4) != 0 )
    {
      if ( (WNF_STATE_NAME *)v2[1] != v3 || (v5 = (WNF_STATE_NAME **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v2;
      v2[1] = (WNF_STATE_NAME)v5;
      PopFreeRegistration(v3);
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
LABEL_18:
    __fastfail(0x20u);
  return result;
}
