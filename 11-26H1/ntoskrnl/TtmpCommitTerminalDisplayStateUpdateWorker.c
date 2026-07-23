/*
 * XREFs of TtmpCommitTerminalDisplayStateUpdateWorker @ 0x1407EB504
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x1407EAE10 (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmpFindDeviceByDeviceId @ 0x1407EB6AC (TtmpFindDeviceByDeviceId.c)
 *     TtmpPushTerminalDisplayStateOntoDevice @ 0x1407EB9B0 (TtmpPushTerminalDisplayStateOntoDevice.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpCommitTerminalDisplayStateUpdateWorker(__int64 a1, int a2)
{
  __int64 v2; // r15
  char v4; // r14
  void **v5; // r12
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  void **v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+78h] [rbp-88h]

  v2 = a2;
  memset_0(v13, 0, 0x268uLL);
  v12 = 0LL;
  v16 = -1;
  v4 = 0;
  v5 = (void **)(a1 + 16 * (v2 + 8));
  v15 = 0xFFFFFFFFLL;
  v6 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)TtmpFindDeviceByDeviceId(a1, *((unsigned int *)v6 + 8), &v12) )
      {
        TtmiLogError("TtmpCommitTerminalDisplayStateUpdateWorker", 2944LL, 3221226021LL, 0xFFFFFFFFLL);
        goto LABEL_12;
      }
      v7 = v17;
      v8 = v12;
      if ( !v17 )
      {
        if ( *(_QWORD *)(v12 + 56) )
          break;
      }
      if ( v4 )
        goto LABEL_8;
LABEL_11:
      TtmpPushTerminalDisplayStateOntoDevice(a1, v8, (unsigned int)v2);
LABEL_12:
      v10 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v11 = (void **)v6[1], *v11 != v6) )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      ExFreePoolWithTag(v6, 0x446D7454u);
      v6 = *v11;
      if ( *v11 == v5 )
      {
        if ( v4 )
          TtmpPushTerminalDisplayStateOntoDevice(a1, v13, (unsigned int)v2);
        return;
      }
    }
    v4 = 1;
    v14 = *(_DWORD *)(v12 + 16);
    v18 = *(_DWORD *)(v12 + 72);
    v7 = *(_QWORD *)(v12 + 56);
    v17 = v7;
LABEL_8:
    v9 = *(_QWORD *)(v12 + 56);
    if ( v9 && v9 != v7 )
    {
      TtmpPushTerminalDisplayStateOntoDevice(a1, v13, (unsigned int)v2);
      v14 = *(_DWORD *)(v8 + 16);
      v18 = *(_DWORD *)(v8 + 72);
      v17 = *(_QWORD *)(v8 + 56);
    }
    goto LABEL_11;
  }
}
