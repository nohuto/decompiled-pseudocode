/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180050F80 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180070B68 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rdi
  CVolumeSoftware *v6; // rsi
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // r15
  _QWORD *v11; // r14
  unsigned int v13; // eax
  unsigned int i; // edi
  _OWORD *v15; // rax
  int v16; // eax
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v19; // [rsp+30h] [rbp-98h]
  int v20; // [rsp+34h] [rbp-94h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v22; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v23[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v26; // [rsp+E8h] [rbp+20h]

  v26 = a4;
  v4 = a4;
  v6 = this;
  v25 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, this);
  }
  if ( a3 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
    v21 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
    v10 = 0LL;
    v11 = (_QWORD *)((char *)v6 + 248);
    while ( (unsigned int)v10 < a3 )
    {
      v11 = (_QWORD *)((char *)v6 + 248);
      ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 31);
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[v10]->lpVtbl->QueryInterface)(
             v4[v10],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 248) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v11 + 40LL))(*v11, &v25);
        if ( v7 < 0 )
        {
          if ( v6 != (CVolumeSoftware *)-256LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
LABEL_16:
          AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2372, v7);
          return (unsigned int)v7;
        }
        if ( *v11 )
          goto LABEL_25;
        v4 = v26;
      }
      v10 = (unsigned int)(v10 + 1);
    }
    if ( !*v11 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids);
      }
      v7 = -2147467262;
LABEL_24:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
      goto LABEL_16;
    }
LABEL_25:
    v13 = v25;
    if ( *((_DWORD *)v6 + 29) != v25 && *((_DWORD *)v6 + 29) )
    {
      for ( i = 1; ; ++i )
      {
        v19 = i;
        if ( i >= v13 )
          break;
        v15 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
        try
        {
          v23[0] = *v15;
          v23[1] = v15[1];
          v23[2] = v15[2];
          v23[3] = v15[3];
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v6 + 80, i, v23);
        }
        catch ( ATL::CAtlException *v22 )
        {
          v9 = &v18;
          v17 = v22;
          if ( *(_DWORD *)v22 == -1073741571 )
            _o__resetstkoflw();
          v20 = *(_DWORD *)v17;
          v7 = v20;
          if ( v20 < 0 )
            goto LABEL_24;
          v6 = this;
          v8 = v21;
          i = v19;
        }
        v13 = v25;
      }
      *((_DWORD *)v6 + 29) = v13;
    }
    if ( v8 )
      LeaveCriticalSection(v8);
    LOBYTE(v9) = 1;
    v16 = (*(__int64 (__fastcall **)(CVolumeSoftware *, __int64 *))(*(_QWORD *)v6 + 256LL))(v6, v9);
    v7 = v16;
    if ( v16 < 0 )
      goto LABEL_16;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, v6, v16);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
