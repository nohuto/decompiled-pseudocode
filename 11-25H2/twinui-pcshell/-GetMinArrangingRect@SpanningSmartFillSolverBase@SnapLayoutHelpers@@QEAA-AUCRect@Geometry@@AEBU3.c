/*
 * XREFs of ?GetMinArrangingRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AUCRect@Geometry@@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180587F80
 * Callers:
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805888DC (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805889FC (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetMinArrangingRect(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // esi
  _QWORD *v11; // r14
  int v12; // edx
  int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // r13
  __int64 v16; // r8
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // rax
  int v23; // ecx
  _DWORD *result; // rax
  __int64 v25; // [rsp+40h] [rbp-41h] BYREF
  int v26; // [rsp+48h] [rbp-39h] BYREF
  int v27; // [rsp+4Ch] [rbp-35h]
  _DWORD v28[2]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+58h] [rbp-29h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-21h] BYREF

  v10 = MulDiv(616, a4, 96);
  (**(void (__fastcall ***)(__int64, __int64 *, __int64))a1)(a1, &v25, a3);
  (*(void (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, v28, a3);
  v11 = *(_QWORD **)a7;
  v12 = HIDWORD(v25);
  v13 = HIDWORD(v25);
  v14 = HIDWORD(v25);
  v15 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  if ( *(_QWORD *)a7 == v15 )
  {
    v16 = v25;
  }
  else
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v11 + 48LL))(*v11, v30);
      (**(void (__fastcall ***)(__int64, int *, _BYTE *))a1)(a1, &v26, v30);
      (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)a1 + 8LL))(a1, v29, v30);
      v12 = HIDWORD(v25);
      v16 = v25;
      v17 = HIDWORD(v25) - v27;
      if ( HIDWORD(v25) - v27 < 0 )
        v17 = v27 - HIDWORD(v25);
      v18 = v26;
      if ( v17 > a5 || v26 - (int)v25 < v10 )
      {
        v19 = v25 - v26;
        if ( (int)v25 - v26 < 0 )
          v19 = v26 - v25;
        if ( v19 > a5 && v26 - (int)v25 >= v10 )
        {
          if ( v13 < v26 )
            v18 = v13;
          v13 = v18;
        }
      }
      else
      {
        if ( (int)v14 < v26 )
          v18 = v14;
        v14 = v18;
      }
      ++v11;
    }
    while ( v11 != (_QWORD *)v15 );
  }
  if ( v13 != v12 )
  {
    v14 = v13;
    goto LABEL_26;
  }
  if ( v14 == v12 )
  {
    v20 = v12 - v16;
    v21 = 3 - (v12 - (int)v16 < 3 * v10);
LABEL_24:
    v14 = v16 + v20 / v21;
    goto LABEL_26;
  }
  if ( v14 - (unsigned int)v16 > 2 * v10 )
  {
    v20 = v14 - v16;
    v21 = 2;
    goto LABEL_24;
  }
LABEL_26:
  v22 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _QWORD, _DWORD, _DWORD))(*(_QWORD *)a1 + 16LL))(
                    a1,
                    v30,
                    v16,
                    v14,
                    v28[0],
                    v28[1]);
  *a2 = *v22;
  a2[1] = v22[1];
  a2[2] = v22[2];
  v23 = v22[3];
  result = a2;
  a2[3] = v23;
  return result;
}
