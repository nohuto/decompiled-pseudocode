/*
 * XREFs of HsaQueryAcpiDeviceMapping @ 0x1405ACF90
 * Callers:
 *     HsaIommuFindDevice @ 0x1405ACA68 (HsaIommuFindDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaQueryAcpiDeviceMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r11
  __int64 *i; // r9
  unsigned __int8 *v7; // rax
  __int64 v8; // rcx
  int v9; // r10d
  int v10; // edx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 224);
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  for ( i = *(__int64 **)(a1 + 224); i != v3; i = (__int64 *)*i )
  {
    v7 = (unsigned __int8 *)i[2];
    v8 = *(_QWORD *)(a2 + 8) - (_QWORD)v7;
    do
    {
      v9 = v7[v8];
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( !v10 )
    {
      *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 160);
      *(_WORD *)(a3 + 12) = *((_WORD *)i + 12);
      result = 0LL;
      *(_DWORD *)a3 = 1;
      return result;
    }
  }
  return 3221226021LL;
}
