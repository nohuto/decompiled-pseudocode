/*
 * XREFs of _lambda_828de6d9baa511e7d1fe4862c107884c_::operator() @ 0x180136500
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800906DC (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     _lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_::operator() @ 0x180136F24 (_lambda_c30c4322ad4fbb47bc43bb3cdcd427e3_--operator().c)
 * Callees:
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18000AC90 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18005EAB4 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180081298 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18013763C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall lambda_828de6d9baa511e7d1fe4862c107884c_::operator()(int *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rax
  int v5; // r14d
  void **v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1616LL), *a1) )
  {
    if ( *a1
      && (v13 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                  (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
                  *a1),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v13,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 != 3 )
      {
        v11 = -2147418113;
        v10 = 3201LL;
        goto LABEL_7;
      }
      v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
              3uLL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v14, a1 + 1) )
      {
        v11 = -2147418113;
        v10 = 3194LL;
        goto LABEL_7;
      }
      v16 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
              *a1,
              v15);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(v16, v17, a1 + 1) )
      {
        v10 = 3196LL;
        goto LABEL_6;
      }
    }
    else
    {
      v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
              *a1);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v18,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v11 = -2147418113;
        v10 = 3186LL;
        goto LABEL_7;
      }
      v20 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
              (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
              *a1,
              v19);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v20,
                            v21,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v10 = 3188LL;
        goto LABEL_6;
      }
    }
  }
  else
  {
    v2 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
           *a1);
    v3 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v2,
           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
    v4 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
           (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
           *a1);
    v5 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v4,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1616LL), *a1) = 1;
    v6 = (void **)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                    (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
                    *a1);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v6);
    if ( v3 == -1 )
    {
      v9 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
             (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1888LL),
             *a1,
             v7);
      if ( v5 == -1 )
      {
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              v9,
                              v8,
                              &GUID_00000000_0000_0000_0000_000000000000) )
        {
          v10 = 3178LL;
          goto LABEL_6;
        }
      }
      else if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                 v9,
                                 v8,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v10 = 3174LL;
LABEL_6:
        v11 = -2147024882;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v11);
        return v11;
      }
    }
  }
  v22 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
          (unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1712LL),
          *a1);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v22,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v10 = 3205LL;
    goto LABEL_6;
  }
  *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)(*((_QWORD *)a1 + 3) + 1752LL), *a1) = 1;
  return 0LL;
}
