/*
 * XREFs of RtlApplyIndirectRelocationToPage @ 0x14046C5EC
 * Callers:
 *     MiApplyDynamicRelocationFixups @ 0x14047A8A8 (MiApplyDynamicRelocationFixups.c)
 * Callees:
 *     RtlpConstructIndirectRelocationFixup @ 0x14046C6C0 (RtlpConstructIndirectRelocationFixup.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall RtlApplyIndirectRelocationToPage(
        unsigned __int64 a1,
        int a2,
        int a3,
        int a4,
        _WORD *a5,
        int a6,
        int a7)
{
  unsigned int v9; // esi
  int v10; // ebx
  int v11; // eax
  _BYTE *v12; // rdx
  _BYTE *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  __int16 v17; // [rsp+3Ch] [rbp-3Ch]

  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v9 = 0;
  v10 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v10 = a2 + (*a5 & 0xFFF);
  LOBYTE(v11) = RtlpConstructIndirectRelocationFixup(v10, a3, a4, (_DWORD)a5, a6, (__int64)&v15);
  v12 = (char *)&v15 + 2;
  v13 = (_BYTE *)(a1 + v10 - a2);
  do
  {
    if ( (unsigned __int64)v13 >= a1 )
    {
      if ( (unsigned __int64)v13 >= a1 + 4096 )
        return v11;
      v11 = (unsigned __int16)v15;
      if ( _bittest(&v11, v9) )
      {
        LOBYTE(v11) = *v12;
        *v13 = *v12;
      }
    }
    ++v9;
    ++v13;
    ++v12;
  }
  while ( v9 < 0xC );
  return v11;
}
