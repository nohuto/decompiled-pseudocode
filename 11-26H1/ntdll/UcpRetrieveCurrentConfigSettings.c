/*
 * XREFs of UcpRetrieveCurrentConfigSettings @ 0x180157D34
 * Callers:
 *     UcOnUnexpectedCodePath @ 0x180157830 (UcOnUnexpectedCodePath.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwQueryWnfStateData @ 0x180161D50 (ZwQueryWnfStateData.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall UcpRetrieveCurrentConfigSettings(_DWORD *a1, _BYTE *a2, _BYTE *a3)
{
  __int64 result; // rax
  _DWORD *v7; // rbx
  unsigned int v8; // r9d
  __int64 i; // r8
  size_t Size; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h] BYREF

  v11 = WNF_UCP_CLIENT_CONFIG_BUFFER;
  Size = 0LL;
  ZwQueryWnfStateData(&v11, 0LL, 0LL, (char *)&Size + 4, 0LL, &Size);
  result = (unsigned int)Size;
  if ( (_DWORD)Size )
  {
    result = RtlAllocateHeap_0();
    v7 = (_DWORD *)result;
    if ( result )
    {
      memset_thunk_772440563353939046((void *)result, 0, (unsigned int)Size);
      if ( (int)ZwQueryWnfStateData(&v11, 0LL, 0LL, (char *)&Size + 4, v7, &Size) >= 0 && *v7 == 1 )
      {
        v8 = v7[1];
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v8 )
            return RtlFreeHeap_0();
          if ( v7[5 * i + 2] == *a1 )
          {
            *a2 = BYTE1(v7[5 * i + 6]);
            switch ( v7[5 * i + 5] )
            {
              case 1:
                if ( v7[5 * i + 4] != a1[2] )
                  continue;
                break;
              case 2:
                break;
              case 4:
                goto LABEL_15;
              default:
                *a3 = 0;
                continue;
            }
            if ( v7[5 * i + 3] == a1[1] )
            {
LABEL_15:
              *a3 = v7[5 * i + 6];
              return RtlFreeHeap_0();
            }
          }
        }
      }
      return RtlFreeHeap_0();
    }
  }
  return result;
}
