/*
 * XREFs of ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z @ 0x18006E940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_N$$TAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@@Z @ 0x18006EBFC (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x18006EC14 (-SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180071818 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowList::CaptureDesktop(
        CWindowList *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        enum DXGI_FORMAT a7,
        void **a8)
{
  __int64 v8; // rbp
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 dwMaximumSizeLow; // rcx
  unsigned int v14; // edi
  char *FileMappingW; // rbx
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // zf
  _QWORD v20[2]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a4;
  v20[1] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *a8 = 0LL;
  if ( a7 > DXGI_FORMAT_R8G8_UNORM )
  {
    if ( a7 == DXGI_FORMAT_R8_UNORM || a7 == DXGI_FORMAT_A8_UNORM )
    {
      v11 = 1;
      goto LABEL_8;
    }
    if ( a7 == DXGI_FORMAT_B8G8R8A8_UNORM )
      goto LABEL_7;
    v19 = a7 == DXGI_FORMAT_B8G8R8X8_UNORM;
    goto LABEL_20;
  }
  if ( a7 == DXGI_FORMAT_R8G8_UNORM )
  {
    v11 = 2;
    goto LABEL_8;
  }
  if ( a7 == DXGI_FORMAT_R32G32B32A32_FLOAT )
  {
    v11 = 32;
    goto LABEL_8;
  }
  v11 = 8;
  if ( a7 != DXGI_FORMAT_R16G16B16A16_FLOAT && a7 != DXGI_FORMAT_R16G16B16A16_UNORM )
  {
    if ( a7 == DXGI_FORMAT_R10G10B10A2_UNORM )
    {
LABEL_7:
      v11 = 4;
      goto LABEL_8;
    }
    v19 = a7 == DXGI_FORMAT_R8G8B8A8_UNORM;
LABEL_20:
    if ( !v19 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
LABEL_8:
  if ( (int)v8 > 0 && (int)a5 > 0 && v11 )
  {
    v12 = v8 * v11;
    if ( v12 > 0xFFFFFFFF )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x1801u, 0LL);
    }
    else
    {
      dwMaximumSizeLow = a5 * ((v12 + 3) & 0xFFFFFFFC);
      if ( dwMaximumSizeLow <= 0xFFFFFFFF )
      {
        FileMappingW = (char *)CreateFileMappingW(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 0LL,
                                 0x8000004u,
                                 0,
                                 dwMaximumSizeLow,
                                 0LL);
        v20[0] = FileMappingW;
        if ( (unsigned __int8)wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
                                v17,
                                v20) )
        {
          v14 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x180Fu, 0LL);
          if ( (unsigned __int64)(FileMappingW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(FileMappingW);
        }
        else
        {
          v18 = CCompositor::SyncDesktopCaptureBits(
                  *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                  (struct _LUID)0xFFFFFFFE00000000uLL,
                  a2,
                  a3,
                  v8,
                  a5,
                  a7,
                  a6,
                  FileMappingW);
          v14 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x181Bu, 0LL);
            wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v20);
          }
          else
          {
            *a8 = FileMappingW;
          }
        }
      }
      else
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0x1805u, 0LL);
      }
    }
  }
  else
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1820u, 0LL);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v14;
}
