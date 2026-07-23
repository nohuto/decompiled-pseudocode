/*
 * XREFs of IommupProcessPhysicalAddress @ 0x1404A8DF0
 * Callers:
 *     IommuMapReservedLogicalRange @ 0x1405A1AA0 (IommuMapReservedLogicalRange.c)
 * Callees:
 *     IommupValidateMdl @ 0x14050B374 (IommupValidateMdl.c)
 */

__int64 __fastcall IommupProcessPhysicalAddress(__int64 a1, _QWORD *a2, _BYTE *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r8
  _QWORD *v11; // r11
  unsigned __int64 v12; // rax

  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      *a3 = 1;
      v6 = *(_QWORD *)(a1 + 16);
      *a2 = v6;
      *a5 = v8;
      if ( !(v8 % 4096) )
        return v6 == 0 ? 0xC000000D : 0;
    }
    else if ( *(_DWORD *)a1 == 2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *a3 = 0;
      v6 = *(_QWORD *)(a1 + 16) << 12;
      *a2 = v6;
LABEL_5:
      *a4 = v5;
      return v6 == 0 ? 0xC000000D : 0;
    }
  }
  else if ( (unsigned __int8)IommupValidateMdl(*(_QWORD *)(a1 + 8)) )
  {
    v12 = (unsigned __int64)*(unsigned int *)(v9 + 44) >> 12;
    *v10 = 0;
    v6 = *(unsigned int *)(v9 + 40);
    *v11 = v6;
    v5 = v9 + 8 * (v12 + 6);
    goto LABEL_5;
  }
  return 3221225485LL;
}
