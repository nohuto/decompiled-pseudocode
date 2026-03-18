/*
 * XREFs of IsComplexLockRequired @ 0x140123188
 * Callers:
 *     ?IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x140123170 (-IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsComplexLockRequired(__int64 a1, __int64 **a2)
{
  __int64 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  bool result; // al

  v2 = *a2;
  v3 = **a2;
  result = 0;
  if ( *((int *)a2 + 17) <= 0 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 6984LL) & 0x20) != 0
      || (*((_DWORD *)v2 + 7) & 0x80u) != 0
      || (*(_DWORD *)v2[46] & 4) != 0 && !*(_BYTE *)(v4 + 482) )
    {
      return 1;
    }
    if ( (*(_DWORD *)(v4 + 64) & 4) == 0 || (*((_BYTE *)v2 + 36) & 1) == 0 && *(_QWORD *)(v3 + 216) )
      return 1;
  }
  return result;
}
