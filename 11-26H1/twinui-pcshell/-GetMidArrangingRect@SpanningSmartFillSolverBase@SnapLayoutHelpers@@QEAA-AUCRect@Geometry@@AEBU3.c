/*
 * XREFs of ?GetMidArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805ABDB0
 * Callers:
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805AC95C (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805ACA7C (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMidArrangingRect(
        void (__fastcall ***a1)(_QWORD, int *, __int64),
        _DWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  _DWORD *v8; // r12
  unsigned int v10; // esi
  _QWORD *v11; // r13
  char v12; // r15
  char v13; // r14
  int v14; // edi
  int v15; // ebx
  void (__fastcall ***v16)(_QWORD, int *, _BYTE *); // r12
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  bool v20; // zf
  int v21; // edx
  int v22; // edx
  _DWORD *v23; // rax
  int v24; // ecx
  _DWORD *result; // rax
  int v26; // [rsp+40h] [rbp-51h] BYREF
  int v27; // [rsp+44h] [rbp-4Dh]
  int v28; // [rsp+48h] [rbp-49h] BYREF
  int v29; // [rsp+4Ch] [rbp-45h]
  void (__fastcall ***v30)(_QWORD, int *, _BYTE *); // [rsp+50h] [rbp-41h]
  _DWORD v31[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v32; // [rsp+60h] [rbp-31h]
  _DWORD *v33; // [rsp+68h] [rbp-29h]
  _BYTE v34[16]; // [rsp+70h] [rbp-21h] BYREF

  v8 = a2;
  v33 = a2;
  v30 = (void (__fastcall ***)(_QWORD, int *, _BYTE *))a1;
  v10 = MulDiv(616, a4, 96);
  (**a1)(a1, &v26, a3);
  (*a1)[1](a1, v31, a3);
  v11 = *(_QWORD **)a7;
  v12 = 0;
  v13 = 0;
  v32 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  if ( v11 == (_QWORD *)v32 )
  {
    v17 = v26;
    v18 = v27;
    goto LABEL_32;
  }
  v14 = v26;
  v15 = v26;
  v16 = v30;
  do
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 48LL))(*v11, v34);
    (**v16)(v16, &v28, v34);
    v17 = v26;
    v18 = v27;
    v19 = v26 - v28;
    if ( v26 - v28 < 0 )
      v19 = v28 - v26;
    if ( v19 <= a5 && v27 - v29 >= v10 )
    {
      v20 = v12 == 0;
      v12 = 1;
      if ( v20 )
      {
        v15 = v29;
      }
      else if ( v15 < v29 )
      {
        v15 = v29;
      }
    }
    v21 = v27 - v29;
    if ( v29 - v27 > 0 )
      v21 = v29 - v27;
    if ( v21 <= a5 && v28 - v26 >= v10 )
    {
      v20 = v13 == 0;
      v13 = 1;
      if ( v20 )
      {
        v14 = v28;
      }
      else if ( v28 < v14 )
      {
        v14 = v28;
      }
    }
    ++v11;
  }
  while ( v11 != (_QWORD *)v32 );
  v8 = v33;
  if ( !v12 )
  {
    if ( !v13 || v14 - v26 < 2 * v10 )
      goto LABEL_32;
    v15 = v26 + (v14 - v26) / 2;
    goto LABEL_33;
  }
  if ( !v13 )
  {
    if ( v27 - v15 >= 2 * v10 )
    {
      v14 = v15 + (v27 - v15) / 2;
      goto LABEL_33;
    }
LABEL_32:
    v22 = (v18 - v17) / 3;
    v15 = v22 + v17;
    v14 = v22 + v17 + v22;
    goto LABEL_33;
  }
  if ( v14 - v15 < v10 )
    goto LABEL_32;
LABEL_33:
  v23 = (_DWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, int *, _BYTE *), _BYTE *, _QWORD, _QWORD, _DWORD, _DWORD))(*v30)[2])(
                    v30,
                    v34,
                    (unsigned int)v15,
                    (unsigned int)v14,
                    v31[0],
                    v31[1]);
  *v8 = *v23;
  v8[1] = v23[1];
  v8[2] = v23[2];
  v24 = v23[3];
  result = v8;
  v8[3] = v24;
  return result;
}
