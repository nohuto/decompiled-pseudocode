/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CBFC
 * Callers:
 *     ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1802973E0 (-SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180086F00 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800AF0F4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z @ 0x1801F75C4 (-_AdjustOpTypeBasedOnCurrentThread@CDelayIAMOperations@@AEAAXPEAW4DELAY_OPERATION_TYPE@@@Z.c)
 *     CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___ @ 0x18028CD64 (CDelayIAMOperations--CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___--CDelayedOper.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(
        int *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v5; // ebp
  LPARAM v6; // r15
  int v7; // edi
  bool v8; // r12
  HWND v9; // rdx
  void *v10; // rax
  void *v11; // r8
  void (__fastcall ***v12)(_QWORD, __int64); // r14
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  CDelayIAMOperations::_AdjustOpTypeBasedOnCurrentThread((CDelayIAMOperations *)a1, (enum DELAY_OPERATION_TYPE *)&v16);
  v5 = v16;
  LODWORD(v6) = 0;
  v7 = 1;
  v8 = v16 - 2 <= 1;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), v9)
    || v8 && *((_QWORD *)a1 + 1) )
  {
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      v12 = (void (__fastcall ***)(_QWORD, __int64))CDelayIAMOperations::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___::CDelayedOperation__lambda_b35b57b2dc0f3b0a2942726bab1c64fe___(
                                                      v10,
                                                      a2,
                                                      (unsigned int)*a1,
                                                      v5);
      if ( v12 )
      {
        v13 = *((_QWORD *)a1 + 4);
        if ( v13 == *((_QWORD *)a1 + 6)
          && (int)CTSimpleArray<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskbarLayoutItem>>>::_EnsureCapacity(
                    (__int64)(a1 + 6),
                    v13 + 1,
                    v11) < 0 )
        {
          (**v12)(v12, 1LL);
        }
        else
        {
          v14 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
          if ( v14 )
            *v14 = v12;
          v6 = (unsigned int)*a1;
          if ( v5 != 5 )
          {
            ++a1[14];
            if ( v8 )
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)a1 + 1) + 56LL))(
                *((_QWORD *)a1 + 1),
                0xFFFFLL - (v5 != 2),
                (unsigned int)v6);
            else
              PostMessageW(*((HWND *)a1 + 2), (v5 != 0) + 1025, 0LL, v6);
          }
          if ( *a1 != -1 )
            v7 = *a1 + 1;
          *a1 = v7;
        }
      }
    }
  }
  return (unsigned int)v6;
}
