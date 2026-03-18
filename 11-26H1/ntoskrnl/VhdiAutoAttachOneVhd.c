/*
 * XREFs of VhdiAutoAttachOneVhd @ 0x1408A614C
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14079BB80 (PipOobeCompleteAsyncCallback.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14071EA90 (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0hzr0d_EtwWriteTransfer @ 0x14071EAEC (McTemplateK0hzr0d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     RtlAcquirePrivilege @ 0x1409D2010 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140AEBFD0 (RtlReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall VhdiAutoAttachOneVhd(_WORD *Src, size_t Size, _OWORD *a3, int a4)
{
  __int64 v4; // rsi
  __int64 v8; // rbx
  __int64 v9; // rbx
  size_t v10; // r15
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  size_t v14; // r8
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // r9
  int v23; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+40h] [rbp-59h] BYREF
  PVOID *p_P; // [rsp+60h] [rbp-39h]
  __int64 v27; // [rsp+68h] [rbp-31h]
  _DWORD *v28; // [rsp+70h] [rbp-29h]
  __int64 v29; // [rsp+78h] [rbp-21h]
  _WORD *v30; // [rsp+80h] [rbp-19h]
  _DWORD v31[2]; // [rsp+88h] [rbp-11h] BYREF
  _OWORD *v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  int *v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  if ( Src )
  {
    v4 = (unsigned int)Size;
    P = 0LL;
    if ( PnpSetupOOBEInProgress && PnpSetupUpgradeInProgress )
    {
      if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
      {
        v9 = v4;
      }
      else
      {
        v8 = -1LL;
        do
          ++v8;
        while ( Src[v8] );
        v9 = 2 * v8;
      }
      v10 = v9 + 2;
      Pool2 = ExAllocatePool2(0x100uLL);
      v12 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a4;
        *(_OWORD *)(Pool2 + 20) = *a3;
        IsEnabledDeviceUsageNoInline = Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline();
        v14 = v10;
        if ( IsEnabledDeviceUsageNoInline )
          v14 = (unsigned int)v4;
        memmove((char *)v12 + 36, Src, v14);
        v15 = (_QWORD *)qword_140E65008;
        if ( *(PVOID **)qword_140E65008 != &qword_140E65000 )
          __fastfail(3u);
        *v12 = &qword_140E65000;
        v12[1] = v15;
        *v15 = v12;
        qword_140E65008 = (__int64)v12;
      }
    }
    else
    {
      v23 = 28;
      v16 = RtlAcquirePrivilege(&v23, 1LL, 0LL, &P);
      LOBYTE(v20) = v16;
      if ( v16 < 0 || (v20 = VhdiMountVhdFile(Src, (__int64)a3), RtlReleasePrivilege(P), v20 < 0) )
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
        if ( (unsigned int)dword_140E06D58 > 5 && tlgKeywordOn((__int64)&dword_140E06D58, 0x400000000000LL) )
        {
          P = (PVOID)0x2000000;
          p_P = &P;
          v27 = 8LL;
          v28 = v31;
          v29 = 2LL;
          v34 = &v23;
          v30 = Src;
          v31[0] = v4 & 0xFFFFFFFE;
          v31[1] = 0;
          v32 = a3;
          v33 = 16LL;
          v23 = a4;
          v35 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06D58,
            (unsigned __int8 *)&dword_14005ABD4,
            0LL,
            0LL,
            7u,
            &v25);
        }
      }
    }
  }
}
