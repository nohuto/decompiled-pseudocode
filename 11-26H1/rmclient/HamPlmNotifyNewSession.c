/*
 * XREFs of HamPlmNotifyNewSession @ 0x180001210
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180002250 (MIDL_user_allocate.c)
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 *     HamFreeBuffer @ 0x180004D70 (HamFreeBuffer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HamPlmNotifyNewSession(LPUNKNOWN pUnk)
{
  void *v2; // r15
  void *v3; // r14
  int v4; // r12d
  HRESULT v5; // eax
  CLIENT_CALL_RETURN v6; // rbx
  unsigned int v7; // eax
  HGLOBAL v8; // rax
  __int64 mshlflags; // [rsp+28h] [rbp-70h]
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-60h]
  size_t size; // [rsp+40h] [rbp-58h] BYREF
  CLIENT_CALL_RETURN v13; // [rsp+48h] [rbp-50h]
  HGLOBAL v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  void *v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+A8h] [rbp+10h] BYREF
  int v18; // [rsp+B0h] [rbp+18h]
  LPSTREAM ppstm; // [rsp+B8h] [rbp+20h] BYREF

  size = 0LL;
  v17 = 0;
  v2 = 0LL;
  ppstm = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  Binding = 0LL;
  v4 = 0;
  v5 = CoInitializeEx(0LL, 0);
  if ( v5 < 0 )
  {
LABEL_2:
    LODWORD(v6.Pointer) = (unsigned __int16)v5;
    v7 = (unsigned __int16)v5 | 0xC0070000;
    if ( LODWORD(v6.Pointer) )
      LODWORD(v6.Pointer) = v7;
    goto LABEL_15;
  }
  v4 = 1;
  v18 = 1;
  v8 = GlobalAlloc(2u, 0LL);
  v2 = v8;
  v14 = v8;
  if ( !v8 )
    goto LABEL_6;
  v5 = CreateStreamOnHGlobal(v8, 1, &ppstm);
  if ( v5 < 0 )
    goto LABEL_2;
  v5 = CoMarshalInterface(ppstm, &GUID_cf354276_51cb_46d8_9470_b192975390a1, pUnk, 0, 0LL, 1u);
  if ( v5 < 0 )
    goto LABEL_2;
  v5 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, __int64, size_t *))(*(_QWORD *)ppstm + 40LL))(
         ppstm,
         0LL,
         2LL,
         &size);
  if ( v5 < 0 )
    goto LABEL_2;
  v3 = MIDL_user_allocate((unsigned int)size);
  v16 = v3;
  if ( !v3 )
  {
LABEL_6:
    LODWORD(v6.Pointer) = -1073741801;
    goto LABEL_15;
  }
  v5 = (*(__int64 (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
  if ( v5 < 0 )
    goto LABEL_2;
  v5 = (*(__int64 (__fastcall **)(LPSTREAM, void *, _QWORD, int *))(*(_QWORD *)ppstm + 24LL))(
         ppstm,
         v3,
         (unsigned int)size,
         &v17);
  if ( v5 < 0 )
    goto LABEL_2;
  LODWORD(v6.Pointer) = CempRpcBindToServer(&unk_18001DC80);
  if ( SLODWORD(v6.Simple) >= 0 )
  {
    v13.Simple = 0LL;
    LODWORD(mshlflags) = v17;
    v6.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0x17u, 0LL, Binding, v3, mshlflags).Pointer;
    v13.Pointer = v6.Pointer;
  }
LABEL_15:
  if ( v2 )
    GlobalFree(v2);
  if ( ppstm )
  {
    (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
    CoReleaseMarshalData(ppstm);
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)ppstm + 16LL))(ppstm);
  }
  if ( v3 )
    HamFreeBuffer(v3);
  if ( v4 )
    CoUninitialize();
  return LODWORD(v6.Pointer);
}
