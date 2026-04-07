/*
 * XREFs of ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ @ 0x180057A54
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18005795C (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIAdapter::GetKMTDriverVersion(CDWMDXGIAdapter *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 v11; // [rsp+78h] [rbp+28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v8 = 0LL;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 236;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v7, 0LL);
    goto LABEL_4;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 238;
    goto LABEL_3;
  }
  *(_QWORD *)&v8 = (unsigned int)v12 | 0xD00000000LL;
  *((_QWORD *)&v8 + 1) = &v10;
  LODWORD(v9) = 4;
  v6 = D3DKMTQueryAdapterInfo(&v8);
  if ( v6 < 0 )
  {
    v4 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6 | 0x10000000, 0xF5u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 86) = v10;
  }
LABEL_4:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v4 == -805305674 )
    return (unsigned int)-2003304291;
  return v4;
}
