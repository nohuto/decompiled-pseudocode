/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180043B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x180043EAC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180050F80 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qg_guid_ @ 0x18011A264 (WPP_SF_qg_guid_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  int v9; // r8d
  unsigned __int64 v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  float v13; // xmm10_4
  float v14; // xmm9_4
  int v15; // xmm11_4
  unsigned __int64 v17; // rcx
  unsigned int v18; // esi
  float i; // xmm9_4
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ebp
  float v23; // xmm8_4
  unsigned __int64 v24; // rcx
  float v25; // xmm6_4
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  float v29; // xmm2_4
  float v30; // xmm1_4
  float *v31; // rax
  float v32; // xmm6_4
  float *v33; // rax
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+C0h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v10 = *((unsigned int *)this + 28);
  v11 = (__int64 *)((char *)this + 80);
  v35 = v4;
  if ( v10 >= *((_QWORD *)this + 11) )
    goto LABEL_34;
  v12 = v10 << 6;
  v13 = *(float *)(v12 + *v11 + 8);
  v14 = *(float *)(v12 + *v11 + 12);
  v15 = *(_DWORD *)(v12 + *v11 + 16);
  if ( v13 > a2 || a2 > v14 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
    return 2147942487LL;
  }
  v22 = 1;
  v23 = fmaxf(fminf(*(float *)(v12 + *v11 + 4), v14), v13);
  if ( v23 == a2 )
    goto LABEL_9;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v9, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v24 = *((unsigned int *)this + 28);
  if ( v24 >= *((_QWORD *)this + 11) )
    goto LABEL_34;
  v25 = fmaxf(
          fminf(*(float *)((v24 << 6) + *v11 + 4), *(float *)((v24 << 6) + *v11 + 12)),
          *(float *)((v24 << 6) + *v11 + 8));
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
  *((float *)this + 52) = v25;
  *((float *)this + 53) = v13;
  *((float *)this + 54) = v14;
  *((_DWORD *)this + 55) = v15;
  v26 = *((unsigned int *)this + 28);
  if ( v26 >= *((_QWORD *)this + 11) )
    goto LABEL_34;
  v27 = *v11;
  v28 = v26 << 6;
  v29 = *(float *)(v28 + *v11 + 8);
  v30 = fmaxf(fminf(*(float *)(v28 + *v11 + 4), *(float *)(v28 + *v11 + 12)), v29);
  if ( v29 > a2 || a2 > *(float *)(v28 + v27 + 12) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    v21 = -2147024809;
LABEL_22:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v35);
    return v21;
  }
  *(float *)(v28 + v27 + 4) = fmaxf(fminf(a2, *(float *)(v28 + v27 + 20)), v29);
  v17 = *((unsigned int *)this + 28);
  if ( v17 >= *((_QWORD *)this + 11) )
LABEL_34:
    ATL::AtlThrowImpl(-2147024809);
  v18 = 0;
  for ( i = fmaxf(
              fminf(*(float *)((v17 << 6) + *v11 + 4), *(float *)((v17 << 6) + *v11 + 12)),
              *(float *)((v17 << 6) + *v11 + 8))
          - v30; v18 < *((_DWORD *)this + 29); ++v18 )
  {
    if ( v18 != *((_DWORD *)this + 28) )
    {
      v31 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, v18);
      v32 = fmaxf(fminf(v31[1], v31[3]), v31[2]);
      v33 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 80, v18);
      v33[1] = fmaxf(fminf(v32 + i, v33[5]), v33[2]);
    }
  }
  v20 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 256LL))(this, 0LL);
  v21 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_22;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    0LL,
    a3);
LABEL_9:
  if ( a4 )
  {
    if ( v23 != a2 )
      v22 = 0;
    *a4 = v22;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
