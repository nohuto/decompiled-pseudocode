/*
 * XREFs of NtUserGetProp2 @ 0x14024A310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z @ 0x1402927D8 (-CaptureAtomName@@YAHPEAU_UNICODE_STRING@@PEAG_K@Z.c)
 *     Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline @ 0x140294354 (Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x1402C0BBC (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetProp2(HWND a1, struct _UNICODE_STRING *a2)
{
  __int64 Prop; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 CurrentThreadWin32Thread; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // r8
  struct _RTL_ATOM_TABLE *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  ULONG v18; // ecx
  unsigned __int64 v19; // r8
  struct _RTL_ATOM_TABLE *v20; // rax
  int v21; // eax
  ULONG v22; // ecx
  USHORT Atom; // [rsp+30h] [rbp-248h] BYREF
  _BYTE v25[8]; // [rsp+38h] [rbp-240h] BYREF
  __int64 v26; // [rsp+40h] [rbp-238h]
  WCHAR AtomName[256]; // [rsp+50h] [rbp-228h] BYREF

  EnterSharedCrit(0LL, 1LL);
  Prop = 0LL;
  if ( !(unsigned int)Feature_DeprecateCHMRefHwndByHandle__private_IsEnabledDeviceUsageNoInline() )
  {
    CHMRefHwndByHandle::CHMRefHwndByHandle((CHMRefHwndByHandle *)v25, a1, 1, 0, 0, 0);
    if ( !v26 || !CaptureAtomName(a2, AtomName, v19) )
      goto LABEL_22;
    v20 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
    if ( v20 )
    {
      Atom = 0;
      v21 = RtlLookupAtomInAtomTable(v20, AtomName, &Atom);
      if ( v21 >= 0 )
      {
        Prop = GetProp(v26, Atom, 0);
LABEL_22:
        CHMRefHwndByHandle::~CHMRefHwndByHandle((CHMRefHwndByHandle *)v25);
        goto LABEL_23;
      }
      v22 = RtlNtStatusToDosError(v21);
    }
    else
    {
      v22 = 5;
    }
    UserSetLastError(v22);
    goto LABEL_22;
  }
  if ( !*(_QWORD *)W32GetUserSessionState(v6, v5) || !(unsigned int)GET_USERCRIT_DISPOSITION() )
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v8, v7, v9, v10);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v13 = ValidatePropWindow(a1, 0LL);
  if ( !v13 || !CaptureAtomName(a2, AtomName, v14) )
    goto LABEL_12;
  v15 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
  if ( !v15 )
  {
    v18 = 5;
    goto LABEL_11;
  }
  Atom = 0;
  v16 = RtlLookupAtomInAtomTable(v15, AtomName, &Atom);
  if ( v16 < 0 )
  {
    v18 = RtlNtStatusToDosError(v16);
LABEL_11:
    UserSetLastError(v18);
LABEL_12:
    --*(_DWORD *)(CurrentThreadWin32Thread + 28);
    goto LABEL_23;
  }
  v17 = GetProp(v13, Atom, 0);
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  Prop = v17;
LABEL_23:
  UserSessionSwitchLeaveCrit(v12);
  return Prop;
}
