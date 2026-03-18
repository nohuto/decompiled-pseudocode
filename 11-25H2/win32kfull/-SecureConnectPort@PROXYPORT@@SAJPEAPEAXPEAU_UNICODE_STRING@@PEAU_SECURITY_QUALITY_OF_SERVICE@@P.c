/*
 * XREFs of ?SecureConnectPort@PROXYPORT@@SAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@0PEAXPEAK@Z @ 0x1403380D4
 * Callers:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1401F02D0 (--0PROXYPORT@@QEAA@_K@Z.c)
 * Callees:
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x14010EA74 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x14010EB48 (-Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  NTSTATUS v12; // ebx
  HANDLE SectionHandle; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // rdi
  void **v16; // rax
  void *PortHandle; // [rsp+50h] [rbp-61h] BYREF
  PVOID Object; // [rsp+58h] [rbp-59h] BYREF
  PVOID Section; // [rsp+60h] [rbp-51h] BYREF
  void **v21; // [rsp+68h] [rbp-49h]
  _OWORD v22[3]; // [rsp+70h] [rbp-41h] BYREF
  char v23; // [rsp+A0h] [rbp-11h]

  v7 = 0LL;
  PortHandle = 0LL;
  v21 = a5;
  v23 = 0;
  memset(v22, 0, sizeof(v22));
  Gre::AttachProcessObj::Attach((__int64)v22, 1);
  v12 = ZwSecureConnectPort(&PortHandle, a2, a3, a4, Sid, 0LL, MaxMessageLength, 0LL, 0LL);
  if ( v12 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(PortHandle, 0x1F0001u, LpcPortObjectType, 1, &Object, 0LL);
    v7 = Object;
    ZwClose(PortHandle);
    a4->ViewBase = 0LL;
  }
  Gre::AttachProcessObj::~AttachProcessObj((Gre::AttachProcessObj *)v22);
  if ( v12 >= 0 )
  {
    SectionHandle = a4->SectionHandle;
    Section = 0LL;
    v14 = ObReferenceObjectByHandle(SectionHandle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    v15 = Section;
    v12 = v14;
    if ( v14 >= 0 )
    {
      v12 = MmMapViewInSessionSpace(Section, &a4->ViewBase, &a4->ViewSize);
      if ( v12 >= 0 )
      {
        v16 = v21;
        *a1 = v7;
        *v16 = v15;
        return (unsigned int)v12;
      }
      ObfDereferenceObject(v15);
    }
    ObfDereferenceObject(v7);
  }
  return (unsigned int)v12;
}
