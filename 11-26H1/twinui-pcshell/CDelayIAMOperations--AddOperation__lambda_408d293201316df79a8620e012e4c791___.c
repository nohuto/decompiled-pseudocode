/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___ @ 0x1800B02CC
 * Callers:
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x1800B0490 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AF0F4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_408d293201316df79a8620e012e4c791___(
        int *a1,
        HWND a2,
        int a3)
{
  int v3; // ebx
  int v6; // esi
  LPARAM v7; // rbp
  char v8; // r12
  void (__fastcall ***v9)(_QWORD, __int64); // rax
  void (__fastcall ***v10)(_QWORD, __int64); // r14
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  void *v14; // r8

  v3 = a3;
  v6 = 1;
  if ( a3 != 4 )
  {
    LODWORD(v7) = 0;
    if ( a3 != 2 && a3 != 3 )
      goto LABEL_9;
LABEL_3:
    v8 = 1;
    goto LABEL_4;
  }
  LODWORD(v7) = 0;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1)) )
  {
    v3 = 3;
    goto LABEL_3;
  }
  v3 = 1;
LABEL_9:
  v8 = 0;
LABEL_4:
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2)
    || v8 && *((_QWORD *)a1 + 1) )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 2) = *a1;
      *((_DWORD *)v9 + 3) = v3;
      *v9 = (void (__fastcall **)(_QWORD, __int64))&off_1807119C8;
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(v9 + 2, a2);
      v12 = *((_QWORD *)a1 + 4);
      if ( v12 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v12 + 1,
                  v14) < 0 )
      {
        (**v10)(v10, 1LL);
      }
      else
      {
        v13 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v13 )
          *v13 = v10;
        v7 = (unsigned int)*a1;
        if ( v3 != 5 )
        {
          ++a1[14];
          if ( v8 )
            (*(void (__fastcall **)(_QWORD, __int64, LPARAM, LPARAM))(**((_QWORD **)a1 + 1) + 56LL))(
              *((_QWORD *)a1 + 1),
              0xFFFFLL - (v3 != 2),
              v7,
              v7);
          else
            PostMessageW(*((HWND *)a1 + 2), (v3 != 0) + 1025, 0LL, v7);
        }
        if ( *a1 != -1 )
          v6 = *a1 + 1;
        *a1 = v6;
      }
    }
  }
  return (unsigned int)v7;
}
