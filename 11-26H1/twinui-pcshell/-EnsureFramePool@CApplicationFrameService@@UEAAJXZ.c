/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800D5930
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D0E4 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180063EC0 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800A8E78 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x1800D5B50 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x1801CDABC (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     WPP_SF_d @ 0x1802197BC (WPP_SF_d.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1802C3A50 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // rbx
  int v4; // esi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  char *v13; // [rsp+28h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+38h] BYREF
  __int64 v15; // [rsp+78h] [rbp+40h] BYREF
  CApplicationFrameWrapper *v16; // [rsp+80h] [rbp+48h] BYREF
  __int64 v17; // [rsp+88h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *((_DWORD *)this + 14) + 1;
  *((_DWORD *)this + 14) = v2;
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v14);
    if ( v4 >= 0 )
    {
      v15 = 0LL;
      v5 = v14;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      v4 = v6(v5, &v15);
      if ( v4 >= 0 )
      {
        v16 = 0LL;
        v17 = v15;
        v12 = v14;
        v13 = (char *)this - 40;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v16);
        v4 = ((__int64 (__fastcall *)(CApplicationFrameWrapper **, char **, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>)(
               &v16,
               &v13,
               &v12,
               &v17);
        if ( v4 < 0 )
          goto LABEL_12;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( CApplicationFrameWrapper::IsManagedBy(v16, *((struct IApplicationFrameManager **)this + 17)) )
        {
          v4 = 0;
          v7 = *((_QWORD *)this + 9);
          if ( v7 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
                       (__int64)this + 64,
                       v7 + 1),
                v4 >= 0) )
          {
            v8 = (__int64 *)(*((_QWORD *)this + 8) + 8 * (*((_QWORD *)this + 9))++);
            if ( v8 )
            {
              *v8 = (__int64)v16;
              Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v8);
            }
          }
        }
        else
        {
          v4 = -2147024809;
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_12:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 40LL))(v14, v15);
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v16);
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v4 >= 0
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
      {
        WPP_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
          10LL,
          &WPP_7977c949b5833dbdd5ce02d008d0522d_Traceguids,
          *((unsigned int *)this + 14),
          v12,
          v13);
      }
    }
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return (unsigned int)v4;
}
