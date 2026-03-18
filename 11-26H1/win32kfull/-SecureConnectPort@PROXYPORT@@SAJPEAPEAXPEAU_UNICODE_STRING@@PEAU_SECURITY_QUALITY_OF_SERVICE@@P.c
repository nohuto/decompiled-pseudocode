/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x140140020
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x14013FBDC (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x1401405A0 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PROXYPORT::SecureConnectPort(
        void **a1,
        struct _UNICODE_STRING *a2,
        struct _SECURITY_QUALITY_OF_SERVICE *a3,
        struct _PORT_VIEW *a4,
        void **a5,
        PSID Sid,
        unsigned int *MaxMessageLength)
{
  PVOID v7; // r15
  struct _KPROCESS *CSRSSProcess; // rax
  NTSTATUS v13; // ebx
  HANDLE SectionHandle; // rcx
  NTSTATUS v15; // eax
  PVOID v16; // rsi
  void **v17; // rax
  void *PortHandle; // [rsp+50h] [rbp-91h] BYREF
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  PVOID v21; // [rsp+60h] [rbp-81h] BYREF
  __int64 v22; // [rsp+68h] [rbp-79h] BYREF
  __int64 v23; // [rsp+70h] [rbp-71h]
  void *v24; // [rsp+78h] [rbp-69h]
  SIZE_T v25; // [rsp+80h] [rbp-61h]
  int v26; // [rsp+88h] [rbp-59h]
  void **v27; // [rsp+90h] [rbp-51h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-49h] BYREF
  char v29; // [rsp+C8h] [rbp-19h]

  v7 = 0LL;
  v27 = a5;
  memset(&ApcState, 0, sizeof(ApcState));
  v29 = 0;
  PortHandle = 0LL;
  CSRSSProcess = (struct _KPROCESS *)UserGetCSRSSProcess();
  Gre::AttachProcessObj::Attach(&ApcState, CSRSSProcess);
  v13 = ZwSecureConnectPort(&PortHandle, a2, a3, a4, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v13 >= 0 )
  {
    Object = 0LL;
    v13 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v7 = Object;
    ZwClose(PortHandle);
    a4->ViewBase = 0LL;
  }
  if ( v29 )
  {
    KeUnstackDetachProcess(&ApcState);
    v29 = 0;
  }
  if ( v13 >= 0 )
  {
    SectionHandle = a4->SectionHandle;
    v21 = 0LL;
    v15 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &v21, 0LL);
    v16 = v21;
    v13 = v15;
    if ( v15 >= 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 6;
      if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map(&v22, v21, 4LL) )
      {
        a4->ViewSize = v25;
        a4->ViewBase = v24;
        v17 = v27;
        *a1 = v7;
        v24 = 0LL;
        v22 = 0LL;
        *v17 = v16;
        v23 = 0LL;
        v25 = 0LL;
        v26 = 6;
      }
      else
      {
        ObfDereferenceObject(v16);
        ObfDereferenceObject(v7);
      }
      Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v22);
    }
    else
    {
      ObfDereferenceObject(v7);
    }
  }
  return (unsigned int)v13;
}
