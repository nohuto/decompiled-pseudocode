/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1802FFBCC
 * Callers:
 *     ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x180303170 (-NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION.c)
 * Callees:
 *     ?NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z @ 0x180236B84 (-NotifyWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@I_K_JW4DELIVERY_METHOD@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // r15
  __int64 result; // rax
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ebp
  HWND v11; // rax

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0LL;
  result = a1;
  v6 = 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( !v6 )
        return result;
      v6 = 1;
      if ( *(_DWORD *)(a2 + 24) == 1 )
        goto LABEL_7;
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 2) < 2 )
        break;
      v6 = 0;
LABEL_8:
      result = a1;
      if ( ++v3 >= v2 )
        return result;
    }
    v6 = 0;
LABEL_7:
    v7 = *(_DWORD *)(a2 + 32);
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(_DWORD *)a2;
    v11 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(result + 160) + 8 * v3) + 32LL))(*(_QWORD *)(*(_QWORD *)(result + 160) + 8 * v3));
    CApplicationManagerUtility::NotifyWindow(v11, v10, v9, v8, v7);
    goto LABEL_8;
  }
  return result;
}
