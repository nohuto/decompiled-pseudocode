/*
 * XREFs of ?MPCManager_SetConvertGraspToSystemGesture_@ISMTracing@@QEAAX_NI@Z @ 0x1800B70B4
 * Callers:
 *     ?SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z @ 0x1800B8D70 (-SetConvertGraspToSystemGesture@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@_NI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x18000EA4C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180047A20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCManager_SetConvertGraspToSystemGesture_(ISMTracing *this, char a2, int a3)
{
  const struct _tlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-58h] BYREF
  char *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  int *v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v5 = ISMTracing::Provider();
  if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 1LL) )
  {
    v15 = v8;
    v14 = &v10;
    v13 = v6;
    v12 = &v9;
    v10 = a3;
    v9 = a2;
    tlgWriteTransfer_EventWriteTransfer(v7, byte_180212F2A, 0LL, 0LL, v8, &v11);
  }
}
