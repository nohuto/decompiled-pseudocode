/*
 * XREFs of ?GetWallpaperPositionData@VirtualDesktopGestureWindow@@IEAAJHHAEAUWallpaperPositionData@1@@Z @ 0x180560564
 * Callers:
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::operator() @ 0x18055CD74 (_lambda_93656037d821f0cf4f10769c2d148d9f_--operator().c)
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180561308 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     _o_ceilf_0 @ 0x1802C9E24 (_o_ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::GetWallpaperPositionData(
        VirtualDesktopGestureWindow *this,
        int a2,
        int a3,
        struct VirtualDesktopGestureWindow::WallpaperPositionData *a4)
{
  int SystemMetrics; // esi
  int v9; // ebp
  int v10; // ebx
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  int v15; // edi
  int v16; // r15d
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // r8d
  int v22; // ecx
  __int64 v23; // kr00_8
  int v24; // r8d
  int v25; // edx
  __int64 v26; // kr08_8
  int v28; // [rsp+30h] [rbp-58h] BYREF
  LPVOID ppv[3]; // [rsp+38h] [rbp-50h] BYREF

  ppv[0] = 0LL;
  if ( CoCreateInstance(&CLSID_DesktopWallpaper, 0LL, 4u, &GUID_b92b56a9_8b55_4e14_9a89_0199bbb6f93b, ppv) >= 0 )
  {
    v28 = 0;
    if ( (*(int (__fastcall **)(LPVOID, int *))(*(_QWORD *)ppv[0] + 88LL))(ppv[0], &v28) >= 0 )
    {
      SystemMetrics = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      v9 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      v10 = v28;
      if ( v28 == 5 )
      {
        SystemMetrics = GetSystemMetrics(78);
        v9 = GetSystemMetrics(79);
        v10 = v28;
      }
      if ( v10 == 2 )
      {
        v13 = (float)a2;
        v12 = (float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) / (float)a2;
        v14 = (float)a3;
        v11 = (float)(*((_DWORD *)this + 49) - *((_DWORD *)this + 47)) / (float)a3;
      }
      else if ( v10 == 3 || (unsigned int)(v10 - 4) < 2 )
      {
        v13 = (float)a2;
        v14 = (float)a3;
        v11 = fmaxf(
                (float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) / (float)a2,
                (float)(*((_DWORD *)this + 49) - *((_DWORD *)this + 47)) / (float)a3);
        v12 = v11;
      }
      else
      {
        v11 = FLOAT_1_0;
        v12 = FLOAT_1_0;
        v13 = (float)a2;
        v14 = (float)a3;
      }
      v15 = (int)o_ceilf_0(v13 * v12);
      v16 = (int)o_ceilf_0(v14 * v11);
      v17 = v10 - 1;
      if ( !v17 || (v18 = v17 - 1) == 0 )
      {
        v21 = 0;
        v20 = 0;
        goto LABEL_20;
      }
      v19 = v18 - 2;
      if ( v19 )
      {
        if ( v19 != 1 )
        {
          v20 = (SystemMetrics - v15) / 2;
          v21 = (v9 - v16) / 2;
LABEL_20:
          *(float *)a4 = v12;
          *((float *)a4 + 1) = v11;
          *((_DWORD *)a4 + 2) = v20;
          *((_DWORD *)a4 + 3) = v21;
          goto LABEL_21;
        }
        v20 = (SystemMetrics - v15) / 2 + GetSystemMetrics(78);
        v22 = GetSystemMetrics(79);
        v23 = 1431655766LL * (v9 - v16);
        v24 = HIDWORD(v23) >> 31;
        v25 = v22 + HIDWORD(v23);
      }
      else
      {
        v20 = (SystemMetrics - v15) / 2;
        v26 = 1431655766LL * (v9 - v16);
        v25 = HIDWORD(v26);
        v24 = HIDWORD(v26) >> 31;
      }
      v21 = v25 + v24;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( ppv[0] )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)ppv);
  return 0LL;
}
