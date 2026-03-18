/*
 * XREFs of ?AdvanceFrame@CDeviceManager@@IEAA_NXZ @ 0x1800695A0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x18006A220 (-ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x18006A290 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x18006A464 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18006A600 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1801357B0 (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ @ 0x1801816E4 (-CheckForDeviceLost@CD3DDevice@@AEAAXXZ.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801C6C94 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceManager::AdvanceFrame(CDeviceManager *this)
{
  unsigned __int8 v1; // bp
  __int64 *v2; // r12
  __int64 *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // r15
  __int64 v7; // rdx
  int v8; // eax
  int v9; // esi
  int v10; // r11d
  int v11; // r11d
  char v13; // r12
  int v14; // eax
  int v15; // ecx
  int v16; // r9d
  CDeviceManager *v17; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v18; // [rsp+78h] [rbp+10h]

  v17 = this;
  v1 = 0;
  EnterCriticalSection(&CriticalSection);
  v2 = (__int64 *)xmmword_1803DE690;
  v3 = (__int64 *)qword_1803DE688;
  v18 = (__int64 *)xmmword_1803DE690;
  if ( qword_1803DE688 != (_QWORD)xmmword_1803DE690 )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *v3;
      if ( g_pComposition )
        v4 = *((_QWORD *)g_pComposition + 110);
      v6 = *(_BYTE *)(v5 + 1491);
      if ( v4 != *(_QWORD *)(v5 + 1464) )
        break;
LABEL_14:
      if ( *(_QWORD *)(v5 + 1456) != v4 )
      {
        *(_QWORD *)(v5 + 1456) = v4;
        CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CRenderTargetBitmapCache *)(v5 + 456));
        CAtlasManager::ReclaimAtlasEntries((CAtlasManager *)(v5 + 504));
        CD3DDevice::RemoveStaleCheckMPOCaches((CD3DDevice *)v5);
        CD3DResourceManager::DestroyReleasedResources((CD3DResourceManager *)(v5 + 1136));
        if ( *(_QWORD *)(v5 + 1472) != v4 )
        {
          CAtlasManager::CompactAtlases((CAtlasManager *)(v5 + 504));
          v6 = 1;
        }
      }
      if ( *(_BYTE *)(v5 + 1491) )
      {
        CD3DDevice::Flush((CD3DDevice *)v5);
      }
      else if ( !v6 )
      {
        goto LABEL_19;
      }
      CD3DDevice::CheckForDeviceLost((CD3DDevice *)v5);
LABEL_19:
      if ( !*(_DWORD *)(v5 + 1124) && *(_BYTE *)(v5 + 1492) )
        CD3DDevice::Trim((CD3DDevice *)v5);
      if ( *(_DWORD *)(v5 + 1124) )
        v1 = 1;
      v3 += 2;
      if ( v3 == v2 )
        goto LABEL_23;
    }
    v7 = *(_QWORD *)(v5 + 600);
    *(_BYTE *)(v5 + 1491) = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v5 + 224) + 152LL))(
           *(_QWORD *)(v5 + 224),
           v7,
           v4);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x135u, 0LL);
    v10 = *(_DWORD *)(v5 + 1124);
    if ( !v10 && (v9 == -2005532292 || v9 == -2147024882 || v9 == -2005270523) )
    {
      if ( *(_DWORD *)(v5 + 440) )
      {
        v13 = 0;
        if ( v9 == -2005270523 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 544) + 312LL))(*(_QWORD *)(v5 + 544));
          v15 = *(_DWORD *)(v5 + 1124);
          v10 = v15;
          if ( v14 == -2005270480 )
          {
            v13 = 1;
            if ( !v15 )
            {
              *(_DWORD *)(v5 + 1124) = -2005270480;
              v10 = -2005270480;
            }
          }
          else if ( !v15 )
          {
            *(_DWORD *)(v5 + 1124) = -2005270523;
            v10 = -2005270523;
          }
          if ( !v13 )
          {
LABEL_32:
            if ( v10 )
            {
LABEL_13:
              v2 = v18;
              *(_QWORD *)(v5 + 1464) = v4;
              *(_BYTE *)(v5 + 1491) = 0;
              goto LABEL_14;
            }
LABEL_12:
            LODWORD(v17) = 0;
            if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v9, 15, &v17) )
            {
              v16 = (int)v17;
              if ( (_DWORD)v17 == -2003304307 )
              {
                if ( v9 >= 0 )
                  v9 = -2003304307;
                if ( !v11 )
                  *(_DWORD *)(v5 + 1124) = v9;
              }
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xB71u, 0LL);
            }
            goto LABEL_13;
          }
        }
        CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v5 + 16));
        v10 = *(_DWORD *)(v5 + 1124);
      }
      else
      {
        v10 = 0;
      }
    }
    if ( v9 >= 0 )
      goto LABEL_12;
    goto LABEL_32;
  }
LABEL_23:
  LeaveCriticalSection(&CriticalSection);
  return v1;
}
