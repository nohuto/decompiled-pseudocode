/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___ @ 0x180212EC8
 * Callers:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180212E38 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18008C594 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_e23800a51333d84ae9bc1bc47017f9c2___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  char *v5; // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  _QWORD *v12; // rdx
  __int64 v13; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) || *((_QWORD *)a1 + 1) )
  {
    v5 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v5;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *((_DWORD *)v5 + 3) = 3;
      *(_QWORD *)v5 = &off_1806FACF0;
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      v8 = a2 + 2;
      *((_QWORD *)v5 + 3) = 0LL;
      if ( v5 + 24 != (char *)(a2 + 2) )
      {
        *((_QWORD *)v5 + 3) = *v8;
        *v8 = 0LL;
      }
      v9 = *((_QWORD *)a1 + 4);
      if ( v9 == *((_QWORD *)a1 + 6)
        && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                  (__int64)(a1 + 6),
                  v9 + 1,
                  v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v10 = *((_QWORD *)a1 + 3);
        v11 = 1;
        v12 = (_QWORD *)(v10 + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v12 )
          *v12 = v7;
        v13 = *((_QWORD *)a1 + 1);
        ++a1[14];
        v4 = *a1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 56LL))(v13, 65534LL);
        if ( *a1 != -1 )
          v11 = *a1 + 1;
        *a1 = v11;
      }
    }
  }
  return v4;
}
