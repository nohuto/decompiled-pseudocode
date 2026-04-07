/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800ADA4C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800912D0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180009130 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x180011E44 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18007A244 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 i; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  void *v13[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-20h]

  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v13);
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)v13);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x416u, 0LL);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
    {
      v8 = (unsigned int)i;
      if ( *(HMONITOR *)(*((_QWORD *)v13[0] + i) + 16LL) == a2 )
      {
        _mm_lfence();
        if ( *(_BYTE *)(*((_QWORD *)v13[0] + i) + 292LL) )
        {
          _mm_lfence();
          v9 = *(_QWORD *)(*((_QWORD *)v13[0] + (unsigned int)i) + 8LL);
          if ( v9 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v9 + 40LL))(v9, v8, v13[0]);
            v6 = v10;
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x421u, 0LL);
            }
            else
            {
              v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
              v6 = v11;
              if ( v11 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x42Bu, 0LL);
            }
          }
        }
        break;
      }
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v13);
  return v6;
}
