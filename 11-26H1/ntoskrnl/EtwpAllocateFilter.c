/*
 * XREFs of EtwpAllocateFilter @ 0x140AA2CB4
 * Callers:
 *     EtwpValidateTraceControlFilterDescriptors @ 0x140838388 (EtwpValidateTraceControlFilterDescriptors.c)
 *     EtwpValidateFilterDescriptors @ 0x140AA2B54 (EtwpValidateFilterDescriptors.c)
 * Callees:
 *     EtwpAllocateStringFilterData @ 0x14077C2A4 (EtwpAllocateStringFilterData.c)
 *     EtwpAllocatePayloadFilterData @ 0x14083825C (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateSchematizedFilter @ 0x1408382F4 (EtwpAllocateSchematizedFilter.c)
 *     EtwpAllocateEventNameFilter @ 0x140AA2F10 (EtwpAllocateEventNameFilter.c)
 *     EtwpCreatePerfectHashFunction @ 0x140AA3308 (EtwpCreatePerfectHashFunction.c)
 *     EtwpAllocatePidFilter @ 0x140AA36F8 (EtwpAllocatePidFilter.c)
 *     EtwpAllocateLevelKwFilter @ 0x140AA3788 (EtwpAllocateLevelKwFilter.c)
 */

__int64 __fastcall EtwpAllocateFilter(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 j; // rcx
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 i; // rcx

  result = 0LL;
  if ( a1 == -2147483644 )
  {
    result = EtwpAllocatePidFilter(a2, a3 + 8);
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80000004;
  }
  else if ( a1 == -2147483640 )
  {
    result = EtwpAllocateStringFilterData(a2, (unsigned __int16 **)(a3 + 16));
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80000008;
  }
  else if ( a1 == -2147483632 )
  {
    result = EtwpAllocateStringFilterData(a2, (unsigned __int16 **)(a3 + 24));
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80000010;
  }
  else if ( a1 == -2147483616 )
  {
    result = EtwpAllocateStringFilterData(a2, (unsigned __int16 **)(a3 + 32));
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80000020;
  }
  else if ( a1 == -2147450880 )
  {
    result = EtwpAllocateStringFilterData(a2, (unsigned __int16 **)(a3 + 40));
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80008000;
  }
  else if ( a1 == -2147479552 )
  {
    v10 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a3 + 48) )
      return 3221225485LL;
    v11 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)(v11 - 6) > 0x3FA )
      return 3221225485LL;
    v12 = *(unsigned __int16 *)(v10 + 2);
    if ( v11 != 2 * v12 + 4 || (unsigned __int16)(v12 - 1) > 0x3Fu )
      return 3221225485LL;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
    {
      if ( *(_WORD *)(v10 + 2 * i + 4) == 0xFFFF )
        return 3221225485LL;
    }
    LOBYTE(i) = *(_BYTE *)v10;
    result = EtwpCreatePerfectHashFunction(i, v10 + 4, v12, a3 + 48);
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80001000;
  }
  else if ( a1 == -2147483136 )
  {
    v6 = *(_QWORD *)a2;
    if ( *(_QWORD *)(a3 + 72) )
      return 3221225485LL;
    v7 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)(v7 - 6) > 0x3FA )
      return 3221225485LL;
    v8 = *(unsigned __int16 *)(v6 + 2);
    if ( v7 != 2 * v8 + 4 || (unsigned __int16)(v8 - 1) > 0x3Fu )
      return 3221225485LL;
    for ( j = 0LL; (unsigned int)j < (unsigned int)v8; j = (unsigned int)(j + 1) )
    {
      if ( *(_WORD *)(v6 + 2 * j + 4) == 0xFFFF )
        return 3221225485LL;
    }
    LOBYTE(j) = *(_BYTE *)v6;
    result = EtwpCreatePerfectHashFunction(j, v6 + 4, v8, a3 + 72);
    if ( (int)result >= 0 )
      *(_DWORD *)a3 |= 0x80000200;
  }
  else
  {
    if ( a1 == -2147482624 )
    {
      result = EtwpAllocateEventNameFilter(a2, a3 + 96);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80000400;
      return result;
    }
    if ( a1 == -2147475456 )
    {
      result = EtwpAllocateEventNameFilter(a2, a3 + 56);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80002000;
    }
    else
    {
      if ( a1 != -2147467264 )
      {
        if ( a1 != -2147483392 )
        {
          if ( a1 == 0x80000000 )
          {
            result = EtwpAllocateSchematizedFilter(a2, (_QWORD *)(a3 + 88));
            if ( (int)result >= 0 )
              *(_DWORD *)a3 |= 0x80000000;
          }
          return result;
        }
        if ( a4 )
        {
          result = EtwpAllocatePayloadFilterData(a4, a2, (_QWORD *)(a3 + 80));
          if ( (int)result >= 0 )
            *(_DWORD *)a3 |= 0x80000100;
          return result;
        }
        return 3221225485LL;
      }
      result = EtwpAllocateLevelKwFilter(a2, a3 + 64);
      if ( (int)result >= 0 )
        *(_DWORD *)a3 |= 0x80004000;
    }
  }
  return result;
}
