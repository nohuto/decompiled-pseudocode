/*
 * XREFs of ValidateIntegrity @ 0x1400B3198
 * Callers:
 *     ?ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAJG@Z @ 0x1400B3250 (-ValidateIntegrity@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBAJG@Z.c)
 * Callees:
 *     ?VerifyIntegrity@VIDMM_LINEAR_POOL@@QEBAJ_N@Z @ 0x1400C00CC (-VerifyIntegrity@VIDMM_LINEAR_POOL@@QEBAJ_N@Z.c)
 */

__int64 __fastcall ValidateIntegrity(__int64 a1, unsigned __int16 a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r8d
  unsigned __int16 i; // bx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 136);
  v4 = 0;
  if ( a2 == 0xFFFF )
  {
    for ( i = 0; i < v2; ++i )
    {
      result = VIDMM_LINEAR_POOL::VerifyIntegrity(
                 *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * i) + 256LL),
                 a2);
      v4 = result;
      if ( (int)result < 0 )
        return result;
    }
    return v4;
  }
  if ( a2 >= v2 )
    return 3221225485LL;
  result = VIDMM_LINEAR_POOL::VerifyIntegrity(
             *(VIDMM_LINEAR_POOL **)(*(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a2) + 256LL),
             a2);
  v4 = result;
  if ( (int)result >= 0 )
    return v4;
  return result;
}
