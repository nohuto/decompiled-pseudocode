/*
 * XREFs of ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180266700
 * Callers:
 *     ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z @ 0x1802668B0 (-SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x1801D0098 (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        unsigned int a2)
{
  int v2; // edi
  __int64 v3; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  _BOOL8 v9; // r9
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-50h]
  void *v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 0;
  if ( a2 != *((_DWORD *)this + 54) )
  {
    v6 = *((_QWORD *)this + 24);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
           v6,
           &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
           &v18);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x56Au, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)this;
      v9 = *((_BYTE *)this + 181) != 0;
      v13 = 1 << *((_DWORD *)this + 52);
      v19 = 0;
      v10 = NtSetCompositionSurfaceIndependentFlipInfo(
              *(_QWORD *)(v8 + 32),
              (char *)this + 24,
              1LL,
              v9,
              v3,
              v13,
              (char *)this + 212,
              &v19);
      if ( v10 >= 0 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          LOBYTE(v2) = *((_BYTE *)this + 181) != 0;
          v17 = *((unsigned __int8 *)this + 182);
          LODWORD(v16) = v3;
          LODWORD(v15) = v2;
          LODWORD(v14) = 1;
          LODWORD(v12) = *((_DWORD *)this + 53);
          McTemplateU0xxqqqqq_EventWriteTransfer(
            *(unsigned int *)(*(_QWORD *)this + 40LL),
            *((unsigned __int8 *)this + 182),
            *(unsigned int *)(*(_QWORD *)this + 40LL) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(*(_QWORD *)this + 40LL)) << 32),
            *((_QWORD *)this + 3),
            v12,
            v14,
            v15,
            v16,
            v17);
        }
        *((_DWORD *)this + 54) = v3;
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 320LL))(
          v18,
          g_qpcFrequency.QuadPart * v3 / 0x989680uLL);
      }
      else
      {
        v5 = v10 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10 | 0x10000000, 0x574u, 0LL);
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  }
  return v5;
}
