/*
 * XREFs of DpiSharedPowerRegister @ 0x140249A00
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x140240590 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x14007BF70 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // ebx
  void *v10; // r12
  void (*v11)(void *, void *); // r13
  void (*v12)(void *, unsigned int, unsigned int, unsigned __int8, void *); // r15
  void (*v13)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int); // rbp
  void (*v14)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *); // rdi
  struct DXGADAPTER *v15; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v19; // [rsp+88h] [rbp+10h]

  v7 = *(_QWORD *)(a1 + 64);
  v19 = v7;
  if ( a4 < 0x20 || !a3 )
  {
    v9 = -1073741789;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3673;
    return v9;
  }
  v8 = *(_DWORD *)a3;
  if ( (unsigned int)(*(_DWORD *)a3 - 4096) > 2 )
  {
    v9 = -1073741127;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3794;
    return v9;
  }
  if ( v8 == 4096 )
  {
    if ( a4 != 32 )
    {
      v9 = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3693;
      return v9;
    }
  }
  else if ( v8 == 4097 )
  {
    if ( a4 != 40 )
    {
      v9 = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3706;
      return v9;
    }
  }
  else if ( v8 == 4098 && a4 != 48 )
  {
    v9 = -1073741789;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3719;
    return v9;
  }
  v10 = *(void **)(a3 + 8);
  if ( v10 && (v11 = *(void (**)(void *, void *))(a3 + 24)) != 0LL )
  {
    if ( a6 == 32 && a5 )
    {
      v12 = 0LL;
      if ( v8 >= 0x1001 )
        v12 = *(void (**)(void *, unsigned int, unsigned int, unsigned __int8, void *))(a3 + 32);
      v13 = 0LL;
      if ( v8 >= 0x1002 )
        v13 = *(void (**)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))(a3 + 40);
      v14 = *(void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))(a3 + 16);
      v15 = *(struct DXGADAPTER **)(v7 + 4032);
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v9 = DXGGLOBAL::RegisterSharedPowerComponent(Global, v15, v10, v14, v11, v12, v13);
      if ( (v9 & 0x80000000) == 0 )
      {
        *(_QWORD *)a5 = *(_QWORD *)(v19 + 4032);
        *(_DWORD *)(a5 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4292LL) != 0 ? 4 : 1;
        *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
        *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
        *a7 = 32LL;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3769;
      }
    }
    else
    {
      v9 = -1073741789;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3746;
    }
  }
  else
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3736;
  }
  return v9;
}
