/*
 * XREFs of WmipSecurityMethod @ 0x140A2FD20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1408243F0 (WmipSaveGuidSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1408ECA88 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1409214E0 (ObSetSecurityDescriptorInfo.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140A2FDF0 (ObAssignObjectSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x140A301F0 (ObDeassignSecurity.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSecurityMethod(
        __int64 a1,
        int a2,
        ULONG *a3,
        void *a4,
        ULONG *a5,
        struct _KLOCK_ENTRIES *a6,
        int a7,
        __int64 a8)
{
  int v9; // edx
  __int64 v10; // rdx
  ULONG_PTR v12; // rdi
  int v13; // ebx
  void *Pool2; // rax
  void *v15; // r14
  int SecurityDescriptorInfo; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-F8h]
  __int64 v18; // [rsp+28h] [rbp-F0h]
  __int64 v19; // [rsp+70h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(a1, a4, a8, a6);
      }
      else
      {
        return ObDeassignSecurity(a6, v10, a8);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
    }
  }
  else
  {
    v12 = 64LL;
    if ( a7 != 512 )
      v12 = 256LL;
    DestinationString = 0LL;
    v13 = ObSetSecurityDescriptorInfo(a1, a3, (int)a4, a6, a7, a8);
    if ( v13 >= 0 )
    {
      LODWORD(v19) = 1024;
      while ( 1 )
      {
        Pool2 = (void *)ExAllocatePool2(v12);
        v15 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        HIDWORD(v19) = -1;
        SecurityDescriptorInfo = ObQuerySecurityDescriptorInfo(a1, (ULONG *)&v19 + 1, Pool2, (ULONG *)&v19);
        v13 = SecurityDescriptorInfo;
        if ( SecurityDescriptorInfo != -1073741789 )
          break;
        ExFreePoolWithTag(v15, 0);
      }
      if ( SecurityDescriptorInfo >= 0 )
      {
        LODWORD(v18) = *(unsigned __int16 *)(a1 + 30);
        LODWORD(BugCheckParameter4) = *(unsigned __int16 *)(a1 + 28);
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned int *)(a1 + 24),
          BugCheckParameter4,
          v18,
          *(unsigned __int8 *)(a1 + 32),
          *(unsigned __int8 *)(a1 + 33),
          *(unsigned __int8 *)(a1 + 34),
          *(unsigned __int8 *)(a1 + 35),
          *(unsigned __int8 *)(a1 + 36),
          *(unsigned __int8 *)(a1 + 37),
          *(unsigned __int8 *)(a1 + 38),
          *(unsigned __int8 *)(a1 + 39),
          v19,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v13 = WmipSaveGuidSecurityDescriptor((__int64)&DestinationString, v15);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v13;
  }
}
