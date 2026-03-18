/*
 * XREFs of MiFreeDriverInitialization @ 0x140AC90AC
 * Callers:
 *     MiFreeBootDriverInitializationCode @ 0x140864340 (MiFreeBootDriverInitializationCode.c)
 *     MmFreeDriverInitialization @ 0x1408646A4 (MmFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140AC95AC (MiSnapDriverRange.c)
 */

__int64 __fastcall MiFreeDriverInitialization(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  result = MI_IS_PHYSICAL_ADDRESS(v1);
  if ( (!(_DWORD)result || v1 == PsNtosImageBase || v1 == PsHalImageBase)
    && (*(_DWORD *)(a1 + 104) & 0x800) == 0
    && (!dword_140FBE268 || v1 != PsNtosImageBase && v1 != PsHalImageBase) )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 2, 0, (__int64)&v5, (__int64)&v6);
      v4 = result;
      if ( v5 )
        result = MiFreeInitializationCode(a1, v5, v6, 0LL);
    }
    while ( v4 );
  }
  return result;
}
