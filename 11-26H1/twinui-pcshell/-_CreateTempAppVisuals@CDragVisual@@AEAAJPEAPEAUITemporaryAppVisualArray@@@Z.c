/*
 * XREFs of ?_CreateTempAppVisuals@CDragVisual@@AEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180542DB8
 * Callers:
 *     ?GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180541000 (-GetSimpleTempAppVisualArray@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 *     ?PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x180541A10 (-PrepareForExitAnimation@CDragVisual@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180073778 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180541160 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180541664 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180545A14 (-CreateInstance@CTempAppVisualArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualArray@@@Z @ 0x1805487A8 (-CSimpleTempAppVisual_CreateAndAddToArray@@YAJPEAUITemporaryAppVisual@@PEAUITemporaryAppVisualAr.c)
 *     ?CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHWND__@@2PEAUIApplicationView@@PEAPEAUITemporaryAppVisual@@@Z @ 0x180548854 (-CSimpleTempAppVisual_CreateInstance@@YAJAEBUtagRECT@@0AEBW4TEMPORARY_APP_VISUAL_TYPE@@AEBQEAUHW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisual::_CreateTempAppVisuals(CDragVisual *this, struct ITemporaryAppVisualArray **a2)
{
  const struct _GUID *v4; // rcx
  int Instance; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // eax
  HWND v13; // rcx
  struct ITemporaryAppVisualArray *v14; // rbx
  struct IApplicationView **v15; // r8
  int SingleViewFromLayout; // eax
  struct IApplicationView *v17; // rdi
  const struct tagRECT *v18; // rax
  int v20; // [rsp+40h] [rbp-19h] BYREF
  struct ITemporaryAppVisualArray *v21; // [rsp+48h] [rbp-11h] BYREF
  struct ITemporaryAppVisual *v22; // [rsp+50h] [rbp-9h] BYREF
  struct IApplicationView *v23; // [rsp+58h] [rbp-1h] BYREF
  __int64 v24; // [rsp+60h] [rbp+7h] BYREF
  struct tagPOINT Points[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v26[4]; // [rsp+78h] [rbp+1Fh] BYREF

  *a2 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  Instance = CTempAppVisualArray::CreateInstance(v4, (void **)&v21);
  if ( Instance < 0 )
    goto LABEL_23;
  v6 = *((_DWORD *)this + 37);
  if ( !v6 )
  {
LABEL_10:
    v20 = 2;
    goto LABEL_11;
  }
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 2 )
        {
LABEL_12:
          Instance = -2147467259;
          goto LABEL_23;
        }
        v20 = 8;
      }
      else
      {
        v20 = 6;
      }
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v20 = 4;
LABEL_11:
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
  if ( !v10 )
    goto LABEL_12;
  v24 = 0LL;
  v11 = **v10;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
  v12 = v11(v10, &GUID_158961e1_3ff3_405f_a4f9_b7777b784533, &v24);
  v13 = (HWND)*((_QWORD *)this + 19);
  LODWORD(v11) = v12;
  *(_OWORD *)&Points[0].x = *((_OWORD *)this + 15);
  MapWindowPoints(v13, 0LL, Points, 2u);
  if ( (int)v11 < 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                             *((AppLayoutHelpers **)this + 11),
                             (struct IAppLayout *)&v23,
                             v15);
    v14 = v21;
    Instance = SingleViewFromLayout;
    if ( SingleViewFromLayout >= 0 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
      v17 = v23;
      v18 = (const struct tagRECT *)MapRelativeRect(v26, (int *)this + 56, (_OWORD *)this + 14, (int *)Points);
      Instance = CSimpleTempAppVisual_CreateInstance(
                   v18,
                   (const struct tagRECT *)Points,
                   (const enum TEMPORARY_APP_VISUAL_TYPE *)&v20,
                   (HWND *)this + 20,
                   (HWND *)this + 19,
                   v17,
                   &v22);
      if ( Instance >= 0 )
        Instance = (*(__int64 (__fastcall **)(struct ITemporaryAppVisualArray *, struct ITemporaryAppVisual *))(*(_QWORD *)v14 + 40LL))(
                     v14,
                     v22);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
  }
  else
  {
    v14 = v21;
    Instance = (*(__int64 (__fastcall **)(__int64, int *, char *, struct tagPOINT *, struct ITemporaryAppVisualArray *))(*(_QWORD *)v24 + 24LL))(
                 v24,
                 &v20,
                 (char *)this + 152,
                 Points,
                 v21);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v24);
  if ( Instance >= 0 )
  {
    Instance = CSimpleTempAppVisual_CreateAndAddToArray((CDragVisual *)((char *)this + 32), v14);
    if ( Instance >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v21);
      Instance = 0;
      *a2 = v14;
    }
  }
LABEL_23:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v21);
  return (unsigned int)Instance;
}
