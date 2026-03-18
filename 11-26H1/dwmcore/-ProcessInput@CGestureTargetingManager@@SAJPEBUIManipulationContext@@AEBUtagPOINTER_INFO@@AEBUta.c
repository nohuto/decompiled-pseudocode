/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@@Z @ 0x180227998
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180113D64 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1800AB1EC (_anonymous_namespace_--BypassGestureTargeting.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2,
        const struct tagPOINTER_INFO_UNION *a3)
{
  unsigned int v6; // eax
  char v7; // al
  __int64 v8; // r9
  __int64 v9; // rax
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // eax
  _BYTE v23[120]; // [rsp+40h] [rbp-78h] BYREF
  char v24; // [rsp+C8h] [rbp+10h] BYREF
  __int64 *v25; // [rsp+D8h] [rbp+20h] BYREF

  v6 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
  v7 = anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, v6);
  v8 = *(_QWORD *)a1;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v8 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 160LL))(v9);
    return 0LL;
  }
  else
  {
    v11 = 0;
    v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v8 + 24))(
            a1,
            *((unsigned int *)a2 + 1));
    if ( v12 )
    {
      while ( v11 >= 0 )
      {
        v24 = 0;
        v13 = *(_QWORD *)v12;
        v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 176LL))(v12, v23);
        v15 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
        v16 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
                a1,
                v12,
                v15);
        v11 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, const struct tagPOINTER_INFO_UNION *, _QWORD, __int64, char *))(v13 + 16))(
                v12,
                a2,
                a3,
                v16,
                v14,
                &v24);
        if ( v11 >= 0 )
        {
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 208LL))(v12);
        }
        v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v12);
        if ( !v12 )
        {
          if ( v11 < 0 )
            return (unsigned int)v11;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v17 = *(_QWORD *)a1;
      v24 = 0;
      v25 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *))(v17 + 112))(a1);
      v18 = v25;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v25);
      v19 = *v18;
      v20 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v18 + 176))(v18, v23);
      v21 = ConvertToInputType(*(_DWORD *)a2, *((_DWORD *)a2 + 3));
      v22 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(
              a1,
              v18,
              v21);
      v11 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, const struct tagPOINTER_INFO_UNION *, _QWORD, __int64, char *))(v19 + 16))(
              v18,
              a2,
              a3,
              v22,
              v20,
              &v24);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v25);
    }
    return (unsigned int)v11;
  }
}
