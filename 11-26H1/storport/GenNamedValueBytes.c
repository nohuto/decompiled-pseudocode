/*
 * XREFs of GenNamedValueBytes @ 0x140138084
 * Callers:
 *     GenSetBandMetadataParams @ 0x140132370 (GenSetBandMetadataParams.c)
 *     GenActivateParams @ 0x140134410 (GenActivateParams.c)
 *     GenAuthenticateParams @ 0x1401358A0 (GenAuthenticateParams.c)
 * Callees:
 *     GenDataBytes @ 0x140137DC0 (GenDataBytes.c)
 *     GenNamedValueBegin @ 0x140138048 (GenNamedValueBegin.c)
 */

__int64 __fastcall GenNamedValueBytes(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rcx

  result = GenNamedValueBegin(a1, a2);
  if ( (int)result >= 0 )
  {
    result = GenDataBytes(a1, a3, a4, v8);
    if ( (int)result >= 0 )
    {
      v9 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)(v9 + 1) <= *(_DWORD *)(a1 + 8) )
      {
        *(_BYTE *)(v9 + *(_QWORD *)a1) = -13;
        ++*(_DWORD *)(a1 + 12);
        return 0LL;
      }
      else
      {
        return 3221225507LL;
      }
    }
  }
  return result;
}
