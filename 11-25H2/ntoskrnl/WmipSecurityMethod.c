/*
 * XREFs of WmipSecurityMethod @ 0x1409A5180
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140796D88 (WmipSaveGuidSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x14084B510 (ObDeassignSecurity.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140870540 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1409A52A0 (ObAssignObjectSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSecurityMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  int v9; // edx
  int v10; // edx
  ULONG_PTR v12; // rdi
  int v13; // ebx
  void *Pool2; // rax
  void *v15; // r14
  int SecurityDescriptorInfo; // eax
  __int64 v17; // [rsp+20h] [rbp-F8h]
  __int64 v18; // [rsp+28h] [rbp-F0h]
  __int64 v19; // [rsp+70h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(a1, a4, a8, a6);
      }
      else
      {
        return ObDeassignSecurity(a6);
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
    v13 = ObSetSecurityDescriptorInfo(a1, a3, (int)a4, (__int64)a6, a7, a8);
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
        SecurityDescriptorInfo = ObQuerySecurityDescriptorInfo(a1, (DWORD *)&v19 + 1, Pool2, (ULONG *)&v19);
        v13 = SecurityDescriptorInfo;
        if ( SecurityDescriptorInfo != -1073741789 )
          break;
        ExFreePoolWithTag(v15, 0);
      }
      if ( SecurityDescriptorInfo >= 0 )
      {
        LODWORD(v18) = *(unsigned __int16 *)(a1 + 30);
        LODWORD(v17) = *(unsigned __int16 *)(a1 + 28);
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned int *)(a1 + 24),
          v17,
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
