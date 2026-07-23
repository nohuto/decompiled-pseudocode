/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x140CE5574
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x140CE5628 (ViThunkFindExportAddress.c)
 */

__int64 *__fastcall ViThunkFindAllExportAddresses(__int64 **a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 *result; // rax
  __int64 **v6; // rbx
  __int64 ExportAddress; // rax
  __int64 *v8; // rcx
  bool v9; // zf
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v11 = HIDWORD(a2);
  v10 = 0;
  v3 = 0;
  result = *a1;
  if ( *a1 )
  {
    v6 = a1 + 5;
    do
    {
      ExportAddress = ViThunkFindExportAddress(result, &v10);
      v8 = *v6;
      if ( *v6 )
      {
        if ( !*v8 )
          *v8 = ExportAddress;
        if ( **v6 == 1 )
          **v6 = 0LL;
      }
      v9 = v10 == 0;
      *(v6 - 2) = (__int64 *)ExportAddress;
      if ( !v9 )
      {
        *(_BYTE *)(((unsigned __int64)v3 >> 3) + *(_QWORD *)(a3 + 8)) &= ~(1 << (v3 & 7));
        *((_DWORD *)v6 - 2) |= 2u;
        ExportAddress = 0LL;
      }
      *(v6 - 3) = (__int64 *)ExportAddress;
      ++v3;
      result = v6[2];
      v6 += 7;
    }
    while ( result );
  }
  return result;
}
