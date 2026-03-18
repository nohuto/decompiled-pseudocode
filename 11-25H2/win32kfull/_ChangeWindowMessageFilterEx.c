/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x140256184
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1401A35A0 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401758DC (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x140185050 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     FreeWindowMessageFilter @ 0x14019F20C (FreeWindowMessageFilter.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x14019F254 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x14019FB2C (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1401BCF90 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1401BE728 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1401D6A40 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  void *const **v11; // rdi
  UIPrivilegeIsolation *v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  void **v17; // r12
  __int64 v18; // r9
  __int64 v19; // rdx
  struct tagVWPL **v20; // rcx
  void **v21[7]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v22 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v11 = (void *const **)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = (void *const **)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  *(_DWORD *)(a4 + 4) = 0;
  if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline(v10)
    && !UIPrivilegeIsolation::Enforced(v12) )
  {
    return 1LL;
  }
  result = ValidateChangeMessageFilter((struct tagPROCESSINFO *)v11, a2);
  if ( (_DWORD)result )
  {
    if ( !a3 )
    {
      FreeWindowMessageFilter(a1, v14, v15, v16);
      return 1LL;
    }
    v21[0] = GetWindowMessageFilter(a1);
    v17 = v21[0];
    if ( a3 == 1 )
    {
      v4 = AddMessageToFilter(v21, a2, &v22);
      if ( v4 && v22 )
        *(_DWORD *)(a4 + 4) = 1;
    }
    else
    {
      if ( a3 != 2 )
        return v4;
      v4 = RemoveMessageFromFilter(v21, a2, &v22);
      if ( v4 )
      {
        if ( (unsigned int)IsMessageAllowedByFilterEx(v11[105], a2, 0LL, 0LL)
          || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2, v19) )
        {
          *(_DWORD *)(a4 + 4) = 3;
        }
        else if ( v22 )
        {
          *(_DWORD *)(a4 + 4) = 2;
        }
      }
    }
    if ( v17 != v21[0] )
    {
      v20 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 848LL);
      if ( v21[0] )
        return (unsigned int)VWPLAddBase(v20, (__int64)v21[0], a1, 5u);
      else
        VWPLRemoveBase(v20, 0LL, a1, v18, 0LL);
    }
    return v4;
  }
  return result;
}
