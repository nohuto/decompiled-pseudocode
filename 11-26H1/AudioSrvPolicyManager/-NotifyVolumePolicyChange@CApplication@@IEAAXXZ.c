/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180010FC0
 * Callers:
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000FC20 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180012380 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@AEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800373D4 (--$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@-$vector@PEAUIMixedR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  _QWORD *v3; // r14
  char *v4; // rsi
  _BYTE *v5; // rcx
  char *i; // rbx
  const struct std::nothrow_t *v7; // rdx
  _QWORD *v8; // r8
  _QWORD *v9; // r8
  void *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  char *v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  void *v13; // [rsp+68h] [rbp+10h] BYREF

  *(_OWORD *)v10 = 0LL;
  v11 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v12 = (unsigned __int64)v2;
  v3 = (_QWORD *)*((_QWORD *)this + 15);
LABEL_2:
  v4 = (char *)v10[1];
  while ( v3 )
  {
    v8 = v3;
    v3 = (_QWORD *)*v3;
    v9 = v8 + 2;
    if ( v4 == v11 )
    {
      std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        v10,
        v4);
      goto LABEL_2;
    }
    *(_QWORD *)v4 = *v9;
    v4 = (char *)v10[1] + 8;
    v10[1] = (char *)v10[1] + 8;
  }
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    v4 = (char *)v10[1];
  }
  v5 = v10[0];
  for ( i = (char *)v10[0]; i != v4; i += 8 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)i + 24LL))(
      *(_QWORD *)i,
      *((unsigned int *)this + 4),
      *((_QWORD *)this + 3));
    v5 = v10[0];
  }
  if ( v5 )
  {
    v7 = (const struct std::nothrow_t *)((v11 - v5) & 0xFFFFFFFFFFFFFFF8uLL);
    v12 = (unsigned __int64)v7;
    v13 = v5;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v12);
      v7 = (const struct std::nothrow_t *)v12;
      v5 = v13;
    }
    operator delete(v5, v7);
  }
}
