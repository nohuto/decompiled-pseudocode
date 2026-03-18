/*
 * XREFs of ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401C7320
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x140075DF0 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__-.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 DxgkRequestDisplayPrivateTest()
{
  struct _PORT_MESSAGE *v1; // rax
  __int64 v2; // rdx
  struct _PORT_MESSAGE *v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  int v6; // [rsp+58h] [rbp-B0h] BYREF
  int v7; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v8; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER v9; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v10; // [rsp+88h] [rbp-80h] BYREF
  struct _PORT_MESSAGE *v11; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v12[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v13[88]; // [rsp+B8h] [rbp-50h] BYREF

  v6 = 1;
  v8 = 0LL;
  v7 = 0;
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  v1 = (struct _PORT_MESSAGE *)operator new[](0x60uLL, 0x4B677844u, 256LL);
  v11 = v1;
  v3 = v1;
  if ( v1 )
  {
    v12[0] = &v6;
    v12[1] = &v7;
    v12[2] = &v8;
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9___DxgkSampleDisplayState_(
      v1,
      v2,
      (__int64)v12,
      8);
    v9.QuadPart = -100000000LL;
    memset(v13, 0, sizeof(v13));
    v10 = 88LL;
    v5 = DxgkSendDisplayBrokerMessage(0x120000u, v3, 0LL, (struct _PORT_MESSAGE *)v13, &v10, 0LL, &v9);
    v4 = v5;
    if ( v5 >= 0 )
    {
      LODWORD(v4) = *(_DWORD *)&v13[80];
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2367;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkSendDisplayBrokerMessage failed to send the display private test request (status = 0x%I64x).",
        v4,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2317;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate buffer to hold the DisplayPrivateTest ALPC message (size = %d",
      96LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v4) = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v11);
  return (unsigned int)v4;
}
