/*
 * XREFs of ?GetPresentStatisticsDWM@CDDisplaySwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180177720
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentStatisticsDWM(
        CDDisplaySwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // esi
  __int64 v8; // r9
  _DWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  float v13; // xmm1_4
  float v14; // xmm0_4
  CComposition *v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF
  _DWORD *v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 50);
  if ( v3 )
  {
    v17 = 0LL;
    v19 = 0LL;
    v5 = *v3;
    v18 = 0LL;
    v16 = DisplaySource_FrameStatistics2;
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v5 + 64))(v3, &v16, &v18);
    v7 = v6;
    if ( v6 >= 0 )
    {
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v18)(
             v18,
             &GUID_905a0fef_bc53_11df_8c49_001e4fc686da,
             &v17);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xBFu, 0LL);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _DWORD **))(*(_QWORD *)v17 + 24LL))(v17, &v19);
        if ( v7 >= 0 )
        {
          v9 = v19;
          *(_DWORD *)a2 = *v19;
          *((_DWORD *)a2 + 1) = v9[1];
          *((_QWORD *)a2 + 1) = *((_QWORD *)v9 + 1);
          *((_DWORD *)a2 + 4) = v9[4];
          *((_QWORD *)a2 + 3) = *((_QWORD *)v9 + 3);
          *((_DWORD *)a2 + 8) = v9[8];
          *((_DWORD *)a2 + 9) = v9[9];
          *((_QWORD *)a2 + 5) = *((_QWORD *)v9 + 5);
          *((_DWORD *)a2 + 12) = v9[12];
          *((_QWORD *)a2 + 7) = *((_QWORD *)v9 + 7);
          v10 = *((_QWORD *)v9 + 8);
          *((_QWORD *)a2 + 8) = v10;
          *((_DWORD *)a2 + 18) = v9[18];
          v11 = *((_QWORD *)this + 18);
          LOBYTE(v8) = v11 == 0xFFFFFFFFLL;
          if ( v11 != v10 )
          {
            v13 = v10 < 0
                ? (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                : (float)(int)v10;
            *((_QWORD *)this + 18) = v10;
            v14 = v11 < 0
                ? (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
                + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
                : (float)(int)v11;
            if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v13) & _xmm) / v13) >= 0.050000001 )
            {
              v15 = g_pComposition;
              *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 748LL) = 1;
              if ( (*((_QWORD *)this + 18) == 0xFFFFFFFFLL) != (_BYTE)v8 )
              {
                *(_BYTE *)(*((_QWORD *)v15 + 77) + 747LL) = 1;
                if ( v11 == 0xFFFFFFFFLL )
                  *(_BYTE *)(*((_QWORD *)v15 + 77) + 749LL) = 1;
              }
            }
          }
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xC0u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
      return (unsigned int)v7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xBEu, 0LL);
LABEL_8:
    if ( v17 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v11, v10, v8);
    if ( v18 )
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v11, v10, v8);
    return (unsigned int)v7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0xE8u, 0LL);
  return 2291662854LL;
}
