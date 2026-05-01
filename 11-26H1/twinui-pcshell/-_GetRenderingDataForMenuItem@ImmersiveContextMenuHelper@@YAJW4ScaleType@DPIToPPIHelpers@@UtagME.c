/*
 * XREFs of ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x180687D6C
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180687288 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005FE30 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x1804D3120 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z @ 0x180687CD8 (-_GetDpiForMonitorFromPoint@ImmersiveContextMenuHelper@@YAIPEAUtagPOINT@@@Z.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(
        int a1,
        __int64 a2,
        __int64 a3,
        POINT *a4,
        _QWORD *a5,
        __int64 a6,
        char a7,
        int **a8)
{
  int *v12; // rax
  int *v13; // rbx
  struct tagPOINT *v14; // rdx
  int v15; // esi
  void *v16; // rcx
  int DpiForMonitorFromPoint; // eax
  int v18; // edx
  int *v19; // rax
  int v20; // ecx

  *a8 = 0LL;
  v12 = (int *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_QWORD *)v12 + 2) = 0LL;
    v12[6] = 0;
    v12[7] = 181;
    *((_QWORD *)v12 + 4) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
    *((_QWORD *)v12 + 6) = 0LL;
    v12[14] = 0;
    *((_QWORD *)v12 + 10) = 0LL;
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)v12,
            a3,
            0xFFFFFFFFFFFFFFFFuLL);
    if ( v15 < 0 )
    {
      ContextMenuRenderingData::`scalar deleting destructor'((ContextMenuRenderingData *)v13);
    }
    else
    {
      if ( a1 == 1 )
      {
        v16 = *(void **)(a2 + 72);
        v13[7] = v16 != 0LL ? 77 : -1;
        DeleteObject(v16);
      }
      else
      {
        *((_QWORD *)v13 + 4) = *(_QWORD *)(a2 + 72);
        v13[7] = -1;
      }
      *((_QWORD *)v13 + 5) = *(_QWORD *)(a2 + 32);
      *((_QWORD *)v13 + 6) = *(_QWORD *)(a2 + 40);
      if ( a6 )
      {
        DpiForMonitorFromPoint = *(_DWORD *)(a6 + 64);
      }
      else if ( a5[1] )
      {
        DpiForMonitorFromPoint = *(_DWORD *)(*(_QWORD *)*a5 + 64LL);
      }
      else
      {
        DpiForMonitorFromPoint = ImmersiveContextMenuHelper::_GetDpiForMonitorFromPoint(a4, v14);
      }
      v13[16] = DpiForMonitorFromPoint;
      v18 = *(_DWORD *)(a2 + 8);
      v19 = v13 + 6;
      if ( (v18 & 0x800) != 0 )
      {
        *v19 = 2048;
        v20 = 2560;
      }
      else if ( *(_QWORD *)(a2 + 24) )
      {
        *v19 = 16;
        v20 = 528;
      }
      else
      {
        *v19 = 0;
        v20 = 512;
      }
      if ( (v18 & 0x200) != 0 )
        *v19 = v20;
      *((_BYTE *)v13 + 68) = byte_1808DDD69;
      v13[14] = 0;
      *((_BYTE *)v13 + 69) = (a7 & 8) != 0;
      v13[15] = a1;
      *a8 = v13;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
