/*
 * XREFs of ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1400FC964
 * Callers:
 *     CoreMsgCreatePort @ 0x1400FC7E4 (CoreMsgCreatePort.c)
 * Callees:
 *     ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1400FC680 (-InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?InitializePortAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_PORT_ATTRIBUTES@@@Z @ 0x1400FCB64 (-InitializePortAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_PORT_ATTRIBUTES@@@Z.c)
 *     ?Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z @ 0x1400FCBC8 (-Free@Runtime@CoreMessagingK@@SAXPEAXW4PoolTag@2@@Z.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x14019EB88 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z @ 0x1401A1F10 (-TraceRegistrarConnect@Log@CoreMessagingK@@SAXJ@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdi
  NTSTATUS v4; // ebx
  unsigned __int64 v6; // rdx
  __int128 v7; // [rsp+60h] [rbp-A8h] BYREF
  const wchar_t *v8; // [rsp+70h] [rbp-98h]
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v10; // [rsp+A0h] [rbp-68h]
  _DWORD v11[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-58h]
  __int64 v13; // [rsp+B8h] [rbp-50h]
  int v14; // [rsp+C0h] [rbp-48h]
  int v15; // [rsp+C4h] [rbp-44h]
  __int128 v16; // [rsp+C8h] [rbp-40h]
  _DWORD v17[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v18; // [rsp+E0h] [rbp-28h]
  char *v19; // [rsp+E8h] [rbp-20h]
  int v20; // [rsp+F0h] [rbp-18h]
  int v21; // [rsp+F4h] [rbp-14h]
  __int128 v22; // [rsp+F8h] [rbp-10h]
  _QWORD v23[8]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v24[80]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v25[32]; // [rsp+198h] [rbp+90h] BYREF

  v17[1] = 0;
  v21 = 0;
  v11[1] = 0;
  v15 = 0;
  memset(v24, 0, 0x48uLL);
  memset(v23, 0, sizeof(v23));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0LL;
  v18 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v3 = W32GetUserCoreMessagingSessionState(v1, v0, v2) + 24;
  *((_QWORD *)&v7 + 1) = 5374032LL;
  v8 = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v20 = 512;
  v14 = 512;
  v22 = 0LL;
  v17[0] = 48;
  v16 = 0LL;
  v19 = (char *)&v7 + 8;
  v11[0] = 48;
  CoreMessagingK::RegistrarClient::InitializePortAttributes((struct _ALPC_PORT_ATTRIBUTES *)v24);
  v4 = RtlCreateSecurityDescriptor(&SecurityDescriptor[8], 1u);
  if ( v4 >= 0 )
  {
    v4 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(&SecurityDescriptor[8]);
    if ( v4 >= 0 )
    {
      LODWORD(v23[0]) = 4194328;
      WORD2(v23[0]) = 0x8000;
      *(_OWORD *)&v23[5] = xmmword_140262018;
      LODWORD(v23[7]) = 1;
      *(_QWORD *)SecurityDescriptor = 64LL;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v25, v6);
      v4 = ZwAlpcConnectPortEx(
             v3,
             v17,
             v11,
             v24,
             0x20000,
             &SecurityDescriptor[8],
             v23,
             SecurityDescriptor,
             v25,
             0LL,
             0LL);
    }
  }
  CoreMessagingK::Runtime::Free(v10, 1146309955LL);
  v10 = 0LL;
  CoreMessagingK::Log::TraceRegistrarConnect(v4);
  return (unsigned int)v4;
}
