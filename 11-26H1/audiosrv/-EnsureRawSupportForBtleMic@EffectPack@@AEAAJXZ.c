/*
 * XREFs of ?EnsureRawSupportForBtleMic@EffectPack@@AEAAJXZ @ 0x180138E1C
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180090378 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x1800089B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x180009940 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18000B940 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F5F0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18005EAB4 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180081298 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18013763C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall EffectPack::EnsureRawSupportForBtleMic(EffectPack *this)
{
  __int64 v1; // rax
  const WCHAR *v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 198);
  if ( *(_DWORD *)(v1 + 236) == 1 )
  {
    v3 = *(const WCHAR **)(v1 + 416);
    if ( v3 )
    {
      if ( CompareStringOrdinal(v3, -1, L"BTHLE", -1, 1) == 2 )
      {
        if ( !*(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 202, 0LL) )
        {
          v4 = 2520LL;
LABEL_6:
          v5 = -2147418113;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v5);
          return v5;
        }
        v7 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             v7,
                             &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
        {
          v8 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                                v8,
                                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
          {
            v4 = 2525LL;
            goto LABEL_6;
          }
          v10 = (__int64 *)gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](
                             (unsigned __int64 *)this + 236,
                             0LL,
                             v9);
          if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                v10,
                                v11,
                                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
          {
            v5 = -2147024882;
            v4 = 2527LL;
            goto LABEL_7;
          }
          v12 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                v12,
                                &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
          {
            v5 = -2147024882;
            v4 = 2529LL;
            goto LABEL_7;
          }
        }
      }
    }
  }
  return 0LL;
}
