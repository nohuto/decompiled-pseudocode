/*
 * XREFs of ?_InitializeRightHandedDeadzone@RIMDeadzone@@AEAAJXZ @ 0x14017F694
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x14017F58C (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x14020C38C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

__int64 __fastcall RIMDeadzone::_InitializeRightHandedDeadzone(RIMDeadzone *this)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  __int64 result; // rax

  *((_DWORD *)this + 4) = 2;
  *((_DWORD *)this + 8) = 1;
  v2 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x7A645052u);
  *((_QWORD *)this + 3) = v2;
  if ( !v2 )
    return 3221225495LL;
  *v2 = 280;
  *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 30;
  *(_DWORD *)(*((_QWORD *)this + 3) + 16LL) = 1;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL) = Win32AllocPoolZInitImpl(
                                               256LL,
                                               8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 16LL),
                                               0x7A645052u);
  v3 = *(_DWORD **)(*((_QWORD *)this + 3) + 8LL);
  if ( !v3 )
  {
    RIMDeadzone::Release(this);
    return 3221225495LL;
  }
  *v3 = 0;
  result = 0LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 4LL) = 12000;
  *(_DWORD *)this = 1;
  return result;
}
