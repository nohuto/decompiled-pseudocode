/*
 * XREFs of ExpHeapDumpEnumLargeAllocs @ 0x1406D6EA0
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 *     IopRemoveLargeAllocsFromPartialDump @ 0x1405D8780 (IopRemoveLargeAllocsFromPartialDump.c)
 */

__int64 __fastcall ExpHeapDumpEnumLargeAllocs(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // r8d
  unsigned __int64 v5; // rsi
  __int64 *v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx

  v2 = 0;
  if ( !MmIsAddressValidEx(a1) || *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)-1073740940;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(_DWORD *)(a1 + 528);
    v5 = 0LL;
    v6 = *(__int64 **)(a1 + 72);
    v7 = (v3 << 12) / (unsigned __int64)(unsigned int)(v4 + 1);
    while ( v5 <= v7 )
    {
      if ( !v6 )
        return v2;
      if ( !MmIsAddressValidEx((__int64)v6)
        || *v6 && (!MmIsAddressValidEx(*v6) || (__int64 *)(*(_QWORD *)(*v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6) )
      {
        break;
      }
      v8 = v6[1];
      if ( v8 )
      {
        if ( !MmIsAddressValidEx(v8) || (__int64 *)(*(_QWORD *)(v6[1] + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
          break;
      }
      IopRemoveLargeAllocsFromPartialDump(
        v6[3] - (unsigned __int16)v6[3],
        (v6[4] & 0xFFFFFFFFFFFFF000uLL) - (unsigned __int16)v6[3]);
      v9 = *v6;
      if ( *v6 || (v9 = v6[1]) != 0 )
      {
        v6 = (__int64 *)v9;
      }
      else
      {
        while ( 1 )
        {
          v10 = v6[2] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v10 )
            break;
          v11 = *(__int64 **)(v10 + 8);
          if ( v11 && v6 != v11 )
          {
            v6 = *(__int64 **)(v10 + 8);
            goto LABEL_23;
          }
          v6 = (__int64 *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        }
        v6 = 0LL;
      }
LABEL_23:
      ++v5;
    }
    return (unsigned int)-1073740940;
  }
  return v2;
}
