/*
 * XREFs of ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180043A70
 * Callers:
 *     ?Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180043378 (-Initialize@SystemControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180045014 (-Initialize@CallControlDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18007A8F4 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D5FEC (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800D97E8 (-Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAP.c)
 *     ?Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DA9F0 (-Create@ConsumerControlDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXP.c)
 *     ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x1800DBF80 (-DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z.c)
 *     ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DC2CC (-Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DCEFC (-Initialize@DockDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DE0A8 (-Initialize@DockableDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@PenDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DF004 (-Initialize@PenDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Initialize@HapticDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800DF4E0 (-Initialize@HapticDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180044154 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004466C (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18004506C (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ??0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV?$CBaseInputObserverServer@$0L@@@@Z @ 0x18008884C (--0_lambda_329431f877b8a1cf1c33d43387e7f0d1_@@QEAA@PEAV-$CBaseInputObserverServer@$0L@@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HIDDeviceCollection::Initialize(
        HIDDeviceCollection *this,
        __int64 a2,
        struct _RIM_USAGE_ANDPAGE *const a3,
        __int64 a4,
        unsigned int a5,
        void **lpTargetHandle)
{
  RIMDeviceCollection *v8; // rbx
  _DWORD *v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-58h]
  int v16[2]; // [rsp+20h] [rbp-58h]
  _QWORD v17[2]; // [rsp+58h] [rbp-20h] BYREF
  char v18; // [rsp+68h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = *(RIMDeviceCollection **)_lambda_329431f877b8a1cf1c33d43387e7f0d1_::_lambda_329431f877b8a1cf1c33d43387e7f0d1_(
                                  v17,
                                  this);
  v17[1] = v8;
  v18 = 1;
  v9 = operator new[](4uLL);
  *((_QWORD *)this + 343) = v9;
  *v9 = 0;
  *((_DWORD *)this + 688) = 1;
  **((_DWORD **)this + 343) = *(_DWORD *)a3;
  v10 = RIMDeviceCollection::InitializeSyncObjects(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v10,
      v15);
    RIMDeviceCollection::Close(v8);
  }
  else
  {
    *((_DWORD *)this + 8) = 32;
    *(_QWORD *)v16 = *((_QWORD *)this + 6);
    v12 = RIMRegisterForInputEx(32LL, 0LL, *((unsigned int *)this + 688), *((_QWORD *)this + 343));
    if ( v12 < 0 )
    {
      v11 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x6E,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
              (const char *)(unsigned int)v12,
              v16[0]);
      RIMDeviceCollection::Close(v8);
    }
    else
    {
      if ( !*((_QWORD *)this + 10) )
        *((_QWORD *)this + 10) = 0LL;
      v13 = RIMDeviceCollection::InitializeRIM(this, a5, lpTargetHandle);
      v11 = v13;
      if ( v13 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
        (const char *)(unsigned int)v13,
        v16[0]);
      RIMDeviceCollection::Close(v8);
    }
  }
  return v11;
}
