/*
 * XREFs of ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x180081708
 * Callers:
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180118290 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180050728 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180050778 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18008406C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800CFD64 (WPP_SF_qS.c)
 *     WPP_SF_qg @ 0x18011A20C (WPP_SF_qg.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVolumeSoftware::LoadDefaultVolumeForEndpoint(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 v4; // r8
  float v5; // xmm6_4
  unsigned int v6; // esi
  float v7; // xmm7_4
  __int64 v8; // xmm9_8
  int v9; // xmm10_4
  float v10; // xmm11_4
  __int64 v11; // rdx
  float v12; // xmm3_4
  ATL::CAtlException *v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-128h] BYREF
  __int64 v16; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-F0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-D8h]
  ATL::CAtlException *v20; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v21[4]; // [rsp+60h] [rbp-C8h] BYREF
  float v22; // [rsp+64h] [rbp-C4h]
  float v23; // [rsp+68h] [rbp-C0h]
  float v24; // [rsp+74h] [rbp-B4h]
  int v26; // [rsp+140h] [rbp+18h]
  float v27; // [rsp+148h] [rbp+20h]

  v1 = this;
  v17 = 0LL;
  v16 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      46,
      (unsigned int)&WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
      (_DWORD)this,
      *((_QWORD *)this + 7));
  }
  *(_OWORD *)pvar = 0LL;
  v19 = 0LL;
  v2 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 *))g_DeviceEnumerator->lpVtbl->GetDevice)(
         g_DeviceEnumerator,
         *((_QWORD *)v1 + 7),
         &v17);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, 0LL, &v16);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
             v16,
             &PKEY_AudioEndpoint_Default_VolumeInDb,
             pvar);
      if ( v2 >= 0 )
      {
        if ( LOWORD(pvar[0]) == 19 )
        {
          v5 = (float)SLODWORD(pvar[1]) * 0.000015258789;
          v27 = v5;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qg(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v1, v5);
          }
          v6 = 0;
          v7 = FLOAT_30_0;
          v8 = *(_QWORD *)&DOUBLE_1_75;
          v9 = LODWORD(FLOAT_1_5);
          v10 = FLOAT_N96_0;
          while ( v6 < *((_DWORD *)v1 + 29) )
          {
            CVolumeUnit::CVolumeUnit((CVolumeUnit *)v21, (__int64)v3);
            if ( *((_DWORD *)v1 + 74) == 4 )
              v12 = v7;
            else
              v12 = 0.0;
            CVolumeUnit::SetDBRange((__int64)v21, v11, v10, v12, v9, v8);
            v22 = fmaxf(fminf(v5, v24), v23);
            v2 = 0;
            try
            {
              ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 80, v6, v21);
            }
            catch ( ATL::CAtlException *v20 )
            {
              v3 = &v15;
              v14 = v20;
              if ( *(_DWORD *)v20 == -1073741571 )
                _o__resetstkoflw();
              v26 = *(_DWORD *)v14;
              v2 = *(_DWORD *)v14;
              if ( v26 < 0 )
                break;
              v1 = this;
              v5 = v27;
              v7 = FLOAT_30_0;
              v8 = *(_QWORD *)&DOUBLE_1_75;
              v9 = LODWORD(FLOAT_1_5);
              v10 = FLOAT_N96_0;
            }
            ++v6;
          }
        }
        else
        {
          v2 = -2147023728;
        }
      }
    }
  }
  PropVariantClear(pvar);
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1921, v2);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v2;
}
