/*
 * XREFs of KsepDsEventPoolFree @ 0x1405FF4AC
 * Callers:
 *     KseDsHookExFreePool @ 0x1405FE940 (KseDsHookExFreePool.c)
 *     KseDsHookExFreePoolWithTag @ 0x1405FE980 (KseDsHookExFreePoolWithTag.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall KsepDsEventPoolFree(__int64 a1, __int64 a2, int a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-30h]
  __int64 v5; // [rsp+58h] [rbp-28h]
  int *v6; // [rsp+60h] [rbp-20h]
  __int64 v7; // [rsp+68h] [rbp-18h]
  __int64 v8; // [rsp+90h] [rbp+10h] BYREF
  __int64 v9; // [rsp+98h] [rbp+18h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  v8 = a1;
  if ( stru_140E66B30.StackLimit )
  {
    if ( EtwEventEnabled((REGHANDLE)stru_140E66B30.StackLimit, &KseDsEventPoolFree) )
    {
      UserData.Ptr = (ULONGLONG)&v8;
      *(_QWORD *)&UserData.Size = 8LL;
      v4 = &v9;
      v5 = 8LL;
      v6 = &v10;
      v7 = 4LL;
      EtwWriteEx((REGHANDLE)stru_140E66B30.StackLimit, &KseDsEventPoolFree, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
