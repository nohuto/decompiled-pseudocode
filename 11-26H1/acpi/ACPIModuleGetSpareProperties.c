/*
 * XREFs of ACPIModuleGetSpareProperties @ 0x1400B20B0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 *     ACPIQuerySpareDsm @ 0x1400AA5C0 (ACPIQuerySpareDsm.c)
 *     ACPIEvaluateSpareDsm @ 0x1400B1EB4 (ACPIEvaluateSpareDsm.c)
 */

__int64 __fastcall ACPIModuleGetSpareProperties(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rsi
  int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0;
  v11 = 0;
  v4 = *(__int64 **)(a1 + 760);
  v8 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v5 = AMLIGetNamedChild(v4, 1297302623);
  if ( v5 )
  {
    if ( (int)ACPIQuerySpareDsm(a1, &v11) >= 0 && (v11 & 4) != 0 )
    {
      v6 = ACPIEvaluateSpareDsm(v5, 2u, 0LL, (__int64)&v8);
      AMLIDereferenceHandleEx((__int64)v5);
      if ( v6 >= 0 )
      {
        if ( WORD1(v8) == 1 )
        {
          if ( (v9 & 1) != 0 )
            *a2 |= 1u;
          if ( (v9 & 2) != 0 )
            *a2 |= 4u;
          v6 = 0;
        }
        else
        {
          v6 = -1073741811;
        }
      }
    }
    else
    {
      v6 = -1073741637;
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)&v8);
  return (unsigned int)v6;
}
