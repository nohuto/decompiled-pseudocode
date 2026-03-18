/*
 * XREFs of ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1400D8074
 * Callers:
 *     CoreMsgCreatePort @ 0x1400DA000 (CoreMsgCreatePort.c)
 * Callees:
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1400D94D0 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1400D97F4 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1400D9A70 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1400D9B3C (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1400D9C0C (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1401B52BC (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     wcsncmp @ 0x1401C754C (wcsncmp.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::CreatePort(
        __int64 a1,
        void *const a2,
        const unsigned __int16 *a3,
        void **a4)
{
  __int64 v7; // rdx
  NTSTATUS AlpcPortName; // ebx
  struct _GUID *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 UserCoreMessagingSessionState; // rax
  void *v14; // rcx
  void *v16; // [rsp+20h] [rbp-99h] BYREF
  struct CoreMessagingK::CoreMsgObject *v17; // [rsp+28h] [rbp-91h] BYREF
  struct _UNICODE_STRING v18; // [rsp+30h] [rbp-89h] BYREF
  char v19; // [rsp+40h] [rbp-79h] BYREF

  v17 = 0LL;
  *a4 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( !wcsncmp(a3, L"Kernel\\", 7uLL) )
  {
    AlpcPortName = CoreMessagingK::CoreMsgObject::Create(
                     0,
                     (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ServerPortInfo::s_Vtbl,
                     &v17,
                     &v16);
    if ( AlpcPortName >= 0 )
    {
      v9 = (struct _GUID *)((char *)v17 + 8);
      AlpcPortName = CoreMessagingK::Runtime::CopyString(a3, v7, (char *)v17 + 40);
      if ( AlpcPortName >= 0 )
      {
        v18.MaximumLength = 136;
        v18.Buffer = (PWSTR)&v19;
        AlpcPortName = ExUuidCreate(v9 + 1);
        if ( AlpcPortName >= 0 )
        {
          AlpcPortName = CoreMessagingK::ServerPorts::GetAlpcPortName(v9 + 1, &v18);
          if ( AlpcPortName >= 0 )
          {
            AlpcPortName = CoreMessagingK::ServerPorts::CreateAlpcPort(
                             a2,
                             &v18,
                             (struct CoreMessagingK::ServerPortInfo *)v9);
            if ( AlpcPortName >= 0 )
            {
              AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(v9 + 1, &v18);
              if ( AlpcPortName >= 0 )
              {
                AlpcPortName = CoreMessagingK::RegistrarClient::RegisterPort(a3, v9 + 1);
                if ( AlpcPortName >= 0 )
                {
                  UserCoreMessagingSessionState = W32GetUserCoreMessagingSessionState(v11, v10, v12);
                  *(_QWORD *)&v9[3].Data1 = *(_QWORD *)(UserCoreMessagingSessionState + 56);
                  v14 = 0LL;
                  *(_QWORD *)(UserCoreMessagingSessionState + 56) = v9;
                  AlpcPortName = 0;
                  *a4 = v16;
                  v16 = 0LL;
                  goto LABEL_10;
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    AlpcPortName = -1073741585;
  }
  v14 = v16;
LABEL_10:
  if ( v14 )
    ZwClose(v14);
  return (unsigned int)AlpcPortName;
}
