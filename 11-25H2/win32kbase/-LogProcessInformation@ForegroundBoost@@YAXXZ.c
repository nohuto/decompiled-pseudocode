/*
 * XREFs of ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AF208
 * Callers:
 *     _lambda_96b8056d46963c03c201fa3bdebf14cf_::operator() @ 0x1401B75B0 (_lambda_96b8056d46963c03c201fa3bdebf14cf_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140099140 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall ForegroundBoost::LogProcessInformation(ForegroundBoost *this, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 i; // rdi
  int v6; // edx
  __int64 v7; // rax
  bool v8; // zf
  char v9; // [rsp+30h] [rbp-19h] BYREF
  int v10; // [rsp+34h] [rbp-15h] BYREF
  int v11; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-9h] BYREF
  int *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  int *v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]
  char *v19; // [rsp+80h] [rbp+37h]
  int v20; // [rsp+88h] [rbp+3Fh]
  int v21; // [rsp+8Ch] [rbp+43h]

  UserSessionState = W32GetUserSessionState(this, a2);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(UserSessionState + 18856), 0);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 36368); i; i = *(_QWORD *)(i + 360) )
  {
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 4LL) )
    {
      v7 = *(int *)(i + 1140);
      v17 = v6;
      v14 = v6;
      v20 = 1;
      v8 = (*(_QWORD *)(i + 808) & 0x3FC0000000LL) == 0;
      v9 = dword_14026E178[v7];
      LODWORD(v7) = v6 - 4;
      LOBYTE(v7) = !v8;
      v21 = 0;
      v18 = 0;
      v15 = 0;
      v10 = v7;
      v11 = *(_DWORD *)(i + 56);
      v19 = &v9;
      v16 = &v10;
      v13 = &v11;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029EF38, byte_140278393, 0LL, 0LL, 5u, &v12);
    }
  }
  ExReleasePushLockSharedEx(UserSessionState + 18856, 0LL);
  KeLeaveCriticalRegion();
}
