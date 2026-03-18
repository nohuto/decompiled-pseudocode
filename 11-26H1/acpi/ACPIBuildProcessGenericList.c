/*
 * XREFs of ACPIBuildProcessGenericList @ 0x1400290E4
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x140028D70 (ACPIBuildDeviceDpc.c)
 * Callees:
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIBuildProcessGenericList(volatile signed __int32 **a1, __int64 a2, unsigned __int16 a3)
{
  volatile signed __int32 *v3; // rbx
  char v4; // di
  unsigned __int32 v5; // r12d
  volatile signed __int32 *v8; // rsi
  unsigned __int32 v9; // eax
  void (__fastcall *v10)(volatile signed __int32 *); // rdx
  signed __int32 v11; // ebp

  v3 = *a1;
  v4 = 1;
  v5 = a3;
  while ( v3 != (volatile signed __int32 *)a1 )
  {
    v8 = *(volatile signed __int32 **)v3;
    v9 = _InterlockedCompareExchange(v3 + 6, 1, 1);
    if ( v9 >= v5 )
      ACPIInternalError(0x10212FuLL);
    v10 = *(void (__fastcall **)(volatile signed __int32 *))(a2 + 8LL * v9);
    if ( !v10 )
    {
      v4 = 0;
      goto LABEL_6;
    }
    if ( v9 != 2 )
      *((_DWORD *)v3 + 7) = v9;
    v11 = _InterlockedCompareExchange(v3 + 6, 1, v9);
    v10(v3);
    if ( !v11 || v11 == 2 )
LABEL_6:
      v3 = v8;
  }
  return v4 == 0 ? 0x103 : 0;
}
