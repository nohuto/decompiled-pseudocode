/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x1801CD7F4
 * Callers:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1801CD768 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AF0F4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rbx
  void *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // ebp
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *((_DWORD *)v5 + 3) = 3;
      *v5 = (void (__fastcall **)(_QWORD, __int64))&off_18071ED08;
      v5[2] = *(void (__fastcall ***)(_QWORD, __int64))a2;
      Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(
        v5 + 3,
        (_QWORD *)a2 + 1);
      v8 = *((_QWORD *)a1 + 4);
      if ( v8 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v8 + 1,
                  v7) < 0 )
      {
        (**v6)(v6, 1LL);
      }
      else
      {
        v9 = *((_QWORD *)a1 + 3);
        v10 = 1;
        v11 = (_QWORD *)(v9 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v11 )
          *v11 = v6;
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
