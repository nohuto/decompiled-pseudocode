/*
 * XREFs of HsaEnumerateIvmdDevices @ 0x1405ABE90
 * Callers:
 *     <none>
 * Callees:
 *     HalpHsaCreateReservedDevice @ 0x1405AA6D8 (HalpHsaCreateReservedDevice.c)
 */

__int64 __fastcall HsaEnumerateIvmdDevices(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  _QWORD *ReservedDevice; // rax

  v3 = *(_DWORD **)(a1 + 208);
  if ( *a2 >= *v3 )
  {
    v8 = 0LL;
    v9 = (_QWORD **)(v3 + 2);
    v10 = *v9;
    while ( v10 != v9 && (unsigned int)v8 < **(_DWORD **)(a1 + 208) )
    {
      ReservedDevice = HalpHsaCreateReservedDevice(*(unsigned __int16 *)(a1 + 160), (__int64)v10);
      *(_QWORD *)(a3 + 8 * v8) = ReservedDevice;
      if ( !ReservedDevice )
        return 3221225626LL;
      v10 = (_QWORD *)*v10;
      v8 = (unsigned int)(v8 + 1);
    }
    result = 0LL;
    *a2 = **(_DWORD **)(a1 + 208);
  }
  else
  {
    *a2 = *v3;
    return 3221225507LL;
  }
  return result;
}
