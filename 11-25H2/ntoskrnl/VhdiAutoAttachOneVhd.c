/*
 * XREFs of VhdiAutoAttachOneVhd @ 0x14081A06C
 * Callers:
 *     VhdDeferredAutoAttachVirtualDisks @ 0x140696550 (VhdDeferredAutoAttachVirtualDisks.c)
 *     VhdAutoAttachVirtualDisks @ 0x140C4BCCC (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14069646C (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0hzr0d_EtwWriteTransfer @ 0x1406964C0 (McTemplateK0hzr0d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     VhdiMountVhdFile @ 0x14081A2D0 (VhdiMountVhdFile.c)
 *     RtlReleasePrivilege @ 0x1409BE610 (RtlReleasePrivilege.c)
 *     RtlAcquirePrivilege @ 0x140A280B4 (RtlAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void __fastcall VhdiAutoAttachOneVhd(_WORD *Src, size_t Size, _OWORD *a3, ULONG a4)
{
  size_t v4; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  size_t v10; // r15
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  size_t v14; // r8
  _QWORD *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // r9
  ULONG Privilege; // [rsp+30h] [rbp-69h] BYREF
  PVOID ReturnedState; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-59h] BYREF
  PVOID *p_ReturnedState; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+68h] [rbp-31h]
  _DWORD *v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  _WORD *v30; // [rsp+80h] [rbp-19h]
  _DWORD v31[2]; // [rsp+88h] [rbp-11h] BYREF
  _OWORD *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  ULONG *p_Privilege; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  if ( Src )
  {
    v4 = (unsigned int)Size;
    ReturnedState = 0LL;
    if ( PnpSetupOOBEInProgress && PnpSetupUpgradeInProgress )
    {
      if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
      {
        v8 = (unsigned int)v4;
      }
      else
      {
        v9 = -1LL;
        do
          ++v9;
        while ( Src[v9] );
        v8 = 2 * v9;
      }
      v10 = v8 + 2;
      Pool2 = ExAllocatePool2(0x100uLL);
      v12 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a4;
        *(_OWORD *)(Pool2 + 20) = *a3;
        IsEnabledDeviceUsageNoInline = Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline();
        v14 = v10;
        if ( IsEnabledDeviceUsageNoInline )
          v14 = v4;
        memmove((char *)v12 + 36, Src, v14);
        v15 = (_QWORD *)qword_140E64E10;
        if ( *(PVOID **)qword_140E64E10 != &qword_140E64E08 )
          __fastfail(3u);
        *v12 = &qword_140E64E08;
        v12[1] = v15;
        *v15 = v12;
        qword_140E64E10 = (__int64)v12;
      }
    }
    else
    {
      Privilege = 28;
      v16 = RtlAcquirePrivilege(&Privilege, 1u, 0, &ReturnedState);
      LOBYTE(v20) = v16;
      if ( v16 < 0 || (v20 = VhdiMountVhdFile(Src, (__int64)a3), RtlReleasePrivilege(ReturnedState), v20 < 0) )
      {
        v21 = -1LL;
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( Src[v22] );
          McTemplateK0hzr0d_EtwWriteTransfer(v18, v17, v19, v22, (__int64)Src, v20);
        }
        if ( !(unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
        {
          do
            ++v21;
          while ( Src[v21] );
          LODWORD(v4) = 2 * v21;
        }
        if ( (unsigned int)dword_140E06E48 > 5 && tlgKeywordOn((__int64)&dword_140E06E48, 0x400000000000LL) )
        {
          ReturnedState = (PVOID)0x2000000;
          p_ReturnedState = &ReturnedState;
          v27 = 8LL;
          v28 = v31;
          v29 = 2LL;
          p_Privilege = &Privilege;
          v30 = Src;
          v31[0] = v4 & 0xFFFFFFFE;
          v31[1] = 0;
          v32 = a3;
          v33 = 16LL;
          Privilege = a4;
          v35 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06E48,
            (unsigned __int8 *)&dword_140057BBC,
            0LL,
            0LL,
            7u,
            &v25);
        }
      }
    }
  }
}
