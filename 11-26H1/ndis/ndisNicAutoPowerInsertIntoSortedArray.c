/*
 * XREFs of ndisNicAutoPowerInsertIntoSortedArray @ 0x1400C627C
 * Callers:
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140074C00 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisNicAutoPowerInsertIntoSortedArray(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // r9d
  unsigned int i; // edx
  unsigned __int16 *v8; // rbx
  unsigned int v9; // r8d

  result = a1[1];
  v6 = result + (*a1 << 16);
  for ( i = 0; i < 8; ++i )
  {
    v8 = (unsigned __int16 *)(a3 + 16LL * i);
    result = v8[1];
    v9 = result + (*v8 << 16);
    if ( v6 > v9 )
    {
      result = 7LL;
      if ( v9 || i < 7 )
        result = (__int64)memmove((void *)(a3 + 16LL * (i + 1)), (const void *)(a3 + 16LL * i), 7 - i);
      *(_OWORD *)v8 = *(_OWORD *)a1;
      return result;
    }
  }
  return result;
}
