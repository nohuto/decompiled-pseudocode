/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1800AA808
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1800AA808 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1800AC458 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1800AA808 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     RemoveCountFromEndOfArray_AxisWithType_ @ 0x1800AAF40 (RemoveCountFromEndOfArray_AxisWithType_.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x1800AAFA0 (RemoveCountFromEndOfArrayAndFree.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801D0454 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64 *); // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64 *); // rbx
  int v19; // r14d
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 (__fastcall *v24)(__int64 *, __int64, _QWORD); // rdi
  unsigned int v25; // ebx
  int v26; // ebx
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64, __int64, _DWORD *, __int128 *); // rax
  float v28; // xmm1_4
  _QWORD *v29; // r15
  __int64 v31; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-55h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-51h] BYREF
  __int128 v35; // [rsp+78h] [rbp-49h]
  __int64 v36; // [rsp+88h] [rbp-39h]
  _QWORD *v37; // [rsp+90h] [rbp-31h]
  _QWORD *v38; // [rsp+98h] [rbp-29h]
  __int128 v39; // [rsp+A0h] [rbp-21h] BYREF

  v36 = a6;
  *a8 = 3;
  *a9 = 0LL;
  v38 = a10;
  *a10 = 0LL;
  v13 = *a1;
  v37 = a9;
  *(_QWORD *)&v39 = a4;
  v14 = (*(__int64 (__fastcall **)(__int64 *))(v13 + 32))(a1);
  v15 = *a1;
  *(_QWORD *)&v35 = v14;
  v31 = 0LL;
  v33 = 0;
  v16 = *(__int64 (__fastcall **)(__int64 *))(v15 + 112);
  v34 = 0;
  v32 = 0;
  v17 = v16(a1);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 128LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v31);
  v19 = v18(v17, a3, &v31);
  if ( v19 >= 0 )
  {
    v20 = v39;
    v21 = a5;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *, __int64, unsigned int *, __int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(
            a2,
            v31,
            v39,
            &v33,
            a5,
            &v34,
            v36,
            &v32);
    if ( v19 >= 0 )
    {
      if ( (_QWORD)v35 )
      {
        v24 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 56);
        v25 = v24(a1, v35, a3);
        if ( (unsigned int)v24(a1, a2, a3) > v25
          || (v26 = v35, (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 40))(a1, v35)) )
        {
          v21 = a5;
        }
        else
        {
          v21 = a5;
          if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 152LL))(a2) )
          {
            v19 = CGestureTargetingManager::ProcessInteractionTree(
                    (_DWORD)a1,
                    v26,
                    a3,
                    v39,
                    a5,
                    v36,
                    a7,
                    (__int64)a8,
                    (__int64)v37,
                    (__int64)v38);
            if ( v19 < 0 )
              goto LABEL_3;
          }
        }
        v20 = v39;
      }
      RemoveCountFromEndOfArrayAndFree(v32, v36);
      if ( *a8 == 3 )
      {
        v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _DWORD *, __int128 *))(*(_QWORD *)a2 + 32LL);
        v39 = 0LL;
        v19 = v27(a2, a7, v20, v21, v36, v31, a8, &v39);
        WORD1(v35) = 0;
        if ( *(_BYTE *)a7 || (LOBYTE(v35) = 0, (_BYTE)v39) )
          LOBYTE(v35) = 1;
        if ( *(_BYTE *)(a7 + 1) || (BYTE1(v35) = 0, BYTE1(v39)) )
          BYTE1(v35) = 1;
        v28 = *((float *)&v39 + 2) + *(float *)(a7 + 8);
        *((float *)&v35 + 1) = *((float *)&v39 + 1) + *(float *)(a7 + 4);
        *((float *)&v35 + 2) = v28;
        *((float *)&v35 + 3) = *((float *)&v39 + 3) + *(float *)(a7 + 12);
        *(_OWORD *)a7 = v35;
        if ( v19 >= 0 && *a8 == 2
          || *a8 == 1 && (unsigned __int8)anonymous_namespace_::DisableBufferingForInteraction(a1, a2, a3) )
        {
          *a8 = 2;
          (**(void (__fastcall ***)(__int64))a2)(a2);
          (**(void (__fastcall ***)(__int64))a2)(a2);
          *v37 = a2;
          v19 = 0;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        }
        else if ( v19 < 0 )
        {
          goto LABEL_3;
        }
        if ( *a8 == 4 )
        {
          *a8 = 3;
          v29 = v38;
          if ( !*v38 )
          {
            (**(void (__fastcall ***)(__int64))a2)(a2);
            (**(void (__fastcall ***)(__int64))a2)(a2);
            *v29 = a2;
            v19 = 0;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
          }
        }
      }
      RemoveCountFromEndOfArray_AxisWithType_(v33, v20 + 8);
      RemoveCountFromEndOfArray_AxisWithType_(v34, v21 + 8);
    }
  }
LABEL_3:
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
  }
  return (unsigned int)v19;
}
