/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800ACF6C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800E23B0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  int AllDisplaysNoRef; // eax
  unsigned int v6; // ebx
  __int64 i; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  unsigned int v14; // [rsp+48h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v12);
  v6 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x3EFu, 0LL);
  }
  else
  {
    for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
    {
      if ( *(HMONITOR *)(*(_QWORD *)(v12 + 8 * i) + 16LL) == a2 )
      {
        _mm_lfence();
        if ( *(_BYTE *)(*(_QWORD *)(v12 + 8 * i) + 292LL) )
        {
          _mm_lfence();
          v8 = *(_QWORD *)(*(_QWORD *)(v12 + 8 * i) + 8LL);
          if ( v8 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, v12);
            v6 = v9;
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3FAu, 0LL);
            }
            else
            {
              v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
              v6 = v10;
              if ( v10 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x404u, 0LL);
            }
          }
        }
        break;
      }
    }
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v12);
  return v6;
}
