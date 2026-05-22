/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KII@Z @ 0x1800B6F98
 * Callers:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KII@Z @ 0x1800B8618 (-SendHomeGesture@MPCManager@@QEAAXKK_KII@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGesture_(
        ISMTracing *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-65h] BYREF
  int v14; // [rsp+40h] [rbp-61h] BYREF
  int v15; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  __int64 v17; // [rsp+50h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-49h] BYREF
  __int64 *v19; // [rsp+78h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-21h]
  int *v21; // [rsp+88h] [rbp-19h]
  __int64 v22; // [rsp+90h] [rbp-11h]
  int *v23; // [rsp+98h] [rbp-9h]
  __int64 v24; // [rsp+A0h] [rbp-1h]
  __int64 *v25; // [rsp+A8h] [rbp+7h]
  __int64 v26; // [rsp+B0h] [rbp+Fh]
  unsigned int *v27; // [rsp+B8h] [rbp+17h]
  __int64 v28; // [rsp+C0h] [rbp+1Fh]
  unsigned int *v29; // [rsp+C8h] [rbp+27h]
  __int64 v30; // [rsp+D0h] [rbp+2Fh]

  v9 = ISMTracing::Provider();
  if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 0x400000000001LL) )
  {
    v13 = a5;
    v29 = &v12;
    v27 = &v13;
    v25 = &v16;
    v23 = &v14;
    v21 = &v15;
    v12 = a6;
    v19 = &v17;
    v30 = v10;
    v28 = v10;
    v26 = (unsigned int)(v10 + 4);
    v24 = v10;
    v22 = v10;
    v20 = v26;
    v16 = a4;
    v14 = a3;
    v15 = a2;
    v17 = 50331648LL;
    tlgWriteTransfer_EventWriteTransfer(v11, byte_180212FBE, 0LL, 0LL, v10 + 4, &v18);
  }
}
