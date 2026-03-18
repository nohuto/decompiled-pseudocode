/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceGetIdleWakeInfo @ 0x1400825B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetIdleWakeInfo(_QWORD *a1, int a2, int *a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax
  int v8; // eax

  v3 = (__int64 (__fastcall *)(_QWORD))a1[44];
  if ( !v3 || (result = v3(a1[40]), (int)result < 0) )
  {
    if ( *(_DWORD *)(a1[2] + 756LL) >= a2 && (*(_DWORD *)(a1[3] + 1640LL) & 0x102) != 0 )
      v8 = 3;
    else
      v8 = 0;
    *a3 = v8;
    return 0LL;
  }
  return result;
}
