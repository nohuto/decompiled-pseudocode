/*
 * XREFs of ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18005795C
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18005780C (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ @ 0x180057A54 (-GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?GetKMTAdapterType@CDWMDXGIAdapter@@AEAAJXZ @ 0x180057BA0 (-GetKMTAdapterType@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180057CE8 (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDWMDXGIAdapter::Initialize(CDWMDXGIAdapter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int KMTDriverVersion; // eax
  int KMTAdapterType; // eax
  int v6; // eax
  int v7; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         (char *)this + 40);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x74u, 0LL);
  }
  else
  {
    KMTDriverVersion = CDWMDXGIAdapter::GetKMTDriverVersion(this);
    v3 = KMTDriverVersion;
    if ( KMTDriverVersion < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, KMTDriverVersion, 0x75u, 0LL);
    }
    else
    {
      KMTAdapterType = CDWMDXGIAdapter::GetKMTAdapterType(this);
      v3 = KMTAdapterType;
      if ( KMTAdapterType < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, KMTAdapterType, 0x76u, 0LL);
      }
      else
      {
        v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
               *((_QWORD *)this + 3),
               &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
               (char *)this + 32);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x78u, 0LL);
        }
        else
        {
          v7 = CDWMDXGIAdapter::EnumerateDWMOutputs(this);
          v3 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7Fu, 0LL);
        }
      }
    }
  }
  return v3;
}
