/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___ @ 0x1800D901C
 * Callers:
 *     ?_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800D8E98 (-_HandleWindowCreation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C594 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_27d5c6bd3555df46180c2775e5ad1d68___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *((_DWORD *)v5 + 3) = 3;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_1806EC120;
      *((_OWORD *)v5 + 1) = *(_OWORD *)a2;
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v8 + 1,
                  v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v9 = *((_QWORD *)a1 + 3);
        v10 = 1;
        v11 = (_QWORD *)(v9 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v11 )
          *v11 = v7;
        v12 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, 65534LL);
        if ( *a1 != -1 )
          v10 = *a1 + 1;
        *a1 = v10;
      }
    }
  }
  return v4;
}
