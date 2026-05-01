/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180080990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180027200 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B04C (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180080BA4 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationFrameWrapper@@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18011775C (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicatio.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     WPP_SF_d @ 0x180228808 (WPP_SF_d.c)
 *     ?IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z @ 0x1802CC474 (-IsManagedBy@CApplicationFrameWrapper@@QEAA_NPEAUIApplicationFrameManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  int v4; // esi
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  CApplicationFrameWrapper **v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  char *v16; // [rsp+28h] [rbp-10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+40h] BYREF
  CApplicationFrameWrapper *v19; // [rsp+80h] [rbp+48h] BYREF
  __int64 v20; // [rsp+88h] [rbp+50h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 14);
  v3 = *((_QWORD *)this + 9);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v17);
    if ( v4 >= 0 )
    {
      v18 = 0LL;
      v5 = v17;
      v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      v4 = v6(v5, &v18);
      if ( v4 >= 0 )
      {
        v19 = 0LL;
        v20 = v18;
        v15 = v17;
        v16 = (char *)this - 40;
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v19);
        v4 = ((__int64 (__fastcall *)(CApplicationFrameWrapper **, char **, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>)(
               &v19,
               &v16,
               &v15,
               &v20);
        if ( v4 < 0 )
          goto LABEL_12;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( CApplicationFrameWrapper::IsManagedBy(v19, *((struct IApplicationFrameManager **)this + 17)) )
        {
          v4 = 0;
          v9 = *((_QWORD *)this + 9);
          if ( v9 != *((_QWORD *)this + 11)
            || (v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::_EnsureCapacity(
                       (__int64)this + 64,
                       v9 + 1),
                v4 >= 0) )
          {
            v10 = *((_QWORD *)this + 9);
            *((_QWORD *)this + 9) = v10 + 1;
            v11 = (CApplicationFrameWrapper **)(*((_QWORD *)this + 8) + 8 * v10);
            if ( v11 )
            {
              *v11 = v19;
              Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v11, v9, v7, v8);
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
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 40LL))(v17, v18);
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease((__int64 *)&v19);
      }
      v12 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
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
          v15,
          v16);
      }
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  return (unsigned int)v4;
}
