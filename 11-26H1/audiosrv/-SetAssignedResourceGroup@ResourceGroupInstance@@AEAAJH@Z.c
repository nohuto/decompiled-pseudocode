/*
 * XREFs of ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800F52CC
 * Callers:
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800F0700 (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800F0BE0 (--1ResourceGroupInstance@@UEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800F2FB4 (-EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV-$function@$$A6A_NV-$basic_string@GU-$char_traits@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ResourceGroupInstance::SetAssignedResourceGroup(ResourceGroupInstance *this, int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v7; // rdx
  GUID v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+30h] [rbp-D0h]
  int v10; // [rsp+34h] [rbp-CCh]
  _QWORD v11[7]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v12; // [rsp+78h] [rbp-88h]
  int v13; // [rsp+80h] [rbp-80h] BYREF
  char v14[524]; // [rsp+84h] [rbp-7Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  memset_0(v14, 0, 0x200uLL);
  v13 = a2;
  v4 = StringCchCopyW(v14, 256LL, (char *)this + 32);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = GUID_d0b305e1_b2cc_484c_8f23_e5d28ad9cf88;
    v9 = 0;
    v10 = 2;
    v11[0] = off_1801763D0;
    v11[1] = &v8;
    v11[2] = &v13;
    v12 = v11;
    EndpointInfo::EnumerateInterfaces((__int64)this + 544, (__int64)v11);
    if ( v12 )
    {
      v7 = v11;
      LOBYTE(v7) = v12 != v11;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 32LL))(v12, v7);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\constraintmodelresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
