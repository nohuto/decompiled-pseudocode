/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJPEAVCManipulationFrame@@AEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1800AB768
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1800AC724 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800AC368 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x18018EF1C (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801D04CC (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        struct CManipulationFrame *a1,
        const struct tagPOINTER_INFO *a2,
        const struct IManipulationContext *a3,
        struct TargetingInfo *a4)
{
  unsigned int v7; // r13d
  int v8; // eax
  __int64 v9; // rsi
  _DWORD *v10; // rax
  int v11; // ecx
  __int64 *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int i; // ebx
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 (__fastcall *v21)(const struct IManipulationContext *, __int64, _QWORD); // rdi
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdi
  int (__fastcall *v25)(__int64, _QWORD, __int64 *); // rbx
  bool v26; // al
  unsigned int v27; // ebx
  struct TargetingInfo *v28; // rcx
  int v30; // [rsp+20h] [rbp-79h]
  __int64 (__fastcall ***v31)(_QWORD); // [rsp+28h] [rbp-71h] BYREF
  int v32; // [rsp+30h] [rbp-69h]
  int v33; // [rsp+38h] [rbp-61h] BYREF
  __int64 v34; // [rsp+40h] [rbp-59h] BYREF
  __int64 v35; // [rsp+48h] [rbp-51h] BYREF
  __int64 (__fastcall ***v36)(_QWORD); // [rsp+50h] [rbp-49h] BYREF
  __int64 v37; // [rsp+58h] [rbp-41h] BYREF
  struct TargetingInfo *v38; // [rsp+60h] [rbp-39h]
  int v39; // [rsp+68h] [rbp-31h] BYREF
  char v40; // [rsp+6Ch] [rbp-2Dh]
  char v41; // [rsp+A0h] [rbp+7h]

  v38 = a4;
  v33 = 1;
  v31 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v34);
  v7 = ConvertToInputType(*(unsigned int *)a2, *((unsigned int *)a2 + 3));
  v8 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a3 + 64LL))(
         a3,
         *((unsigned int *)a2 + 1),
         &v33);
  v32 = v8;
  if ( v8 < 0 )
  {
    v27 = v8;
    goto LABEL_60;
  }
  if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0
    && v33
    && v34
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 144LL))(v34) )
  {
    v30 = v33;
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v31, &v34);
    v9 = (__int64)v31;
  }
  else
  {
    v10 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 80LL))(
                      a3,
                      &v35);
    v9 = 0LL;
    v11 = *v10;
    v12 = (__int64 *)(v10 + 2);
    v30 = v11;
    if ( &v37 != v12 )
    {
      v9 = *v12;
      *v12 = 0LL;
    }
    v37 = 0LL;
    v31 = (__int64 (__fastcall ***)(_QWORD))v9;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v36);
  }
  if ( v9 )
  {
    v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL))(
            a3,
            v9,
            v7);
    if ( !v13
      || (v14 = *(_QWORD *)a3,
          v15 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3),
          (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v14 + 56))(a3, v15, v7) > v13) )
    {
      v30 = 0;
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
      v9 = (__int64)v31;
    }
  }
  v16 = *((unsigned int *)a2 + 3);
  if ( (v16 & 0x40000) != 0 )
  {
    if ( v33 )
    {
      if ( v34 != v9 )
      {
        v17 = ConvertToInputType(*(unsigned int *)a2, v16);
        if ( !(unsigned __int8)anonymous_namespace_::AllSupportedWithSingleTarget(a3, v17) )
        {
          v30 = 1;
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
          v9 = (__int64)v31;
        }
      }
    }
  }
  if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 && v33 == 2 && v30 == 1 && v9 )
  {
    v30 = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
    v9 = (__int64)v31;
  }
  if ( (*((_DWORD *)a2 + 3) & 0x10000) != 0 && *(_DWORD *)a2 == 5 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 4); ++i )
    {
      v19 = *((unsigned int *)a1 + 62 * i + 93);
      if ( (_DWORD)v19 != *((_DWORD *)a2 + 1)
        && (*(int (__fastcall **)(const struct IManipulationContext *, __int64, int *))(*(_QWORD *)a3 + 64LL))(
             a3,
             v19,
             &v33) >= 0
        && (v33 != 1 || v34) )
      {
        break;
      }
    }
  }
  v20 = v34;
  if ( v34 )
  {
    if ( v34 != v9 )
    {
      v21 = *(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a3 + 56LL);
      v22 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a3 + 16LL))(a3);
      v23 = v21(a3, v22, v7);
      if ( (unsigned int)v21(a3, v20, v7) == v23 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v34 + 80LL))(v34, v7, 1LL) )
        {
          v35 = 0LL;
          v24 = v34;
          v25 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 128LL);
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v35);
          if ( v25(v24, v7, &v35) >= 0 )
          {
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 40LL))(v35, &v39);
            v26 = v39 == 1 && ((v40 & 1) != 0 || (v40 & 2) != 0);
            if ( ((v41 & 1) == 0 || v26) && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 136LL))(v34) )
            {
              Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v31, &v34);
              v9 = (__int64)v31;
              v30 = v33;
            }
          }
          Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v35);
        }
      }
    }
  }
  if ( !v30 )
  {
    if ( !v33 && (*((_DWORD *)a2 + 3) & 0x40000) == 0 )
      goto LABEL_57;
    v30 = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
    v9 = (__int64)v31;
  }
  if ( v30 == 1 && !v9 )
  {
    (*(void (__fastcall **)(const struct IManipulationContext *, __int64 *))(*(_QWORD *)a3 + 96LL))(a3, &v35);
    if ( v36 )
    {
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v36);
      v27 = 0;
      v31 = v36;
    }
    else
    {
      v27 = v32;
    }
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v36);
    goto LABEL_58;
  }
LABEL_57:
  v27 = v32;
LABEL_58:
  v28 = v38;
  *(_DWORD *)v38 = v30;
  Microsoft::WRL::ComPtr<IInteractionResource>::operator=((char *)v28 + 8, &v31);
LABEL_60:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)&v31);
  return v27;
}
