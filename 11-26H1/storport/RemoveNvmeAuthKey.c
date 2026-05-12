/*
 * XREFs of RemoveNvmeAuthKey @ 0x140076C04
 * Callers:
 *     NvmeAdapterDeleteAuthenticationKey @ 0x1401991D8 (NvmeAdapterDeleteAuthenticationKey.c)
 * Callees:
 *     FindNvmeAuthKey @ 0x140074F00 (FindNvmeAuthKey.c)
 *     NvmeDeleteAuthKey @ 0x140075E54 (NvmeDeleteAuthKey.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RemoveNvmeAuthKey(char *Str2, unsigned __int16 a2, const void *a3)
{
  int v6; // esi
  unsigned __int16 *NvmeAuthKey; // rax
  __int64 v8; // rbx
  _BYTE Buffer[4]; // [rsp+20h] [rbp-348h] BYREF
  int v11; // [rsp+24h] [rbp-344h]

  memset_0(Buffer, 0, 0x314uLL);
  v6 = -1073741275;
  NvmeAuthKey = FindNvmeAuthKey(a2, a3);
  v8 = (__int64)NvmeAuthKey;
  if ( NvmeAuthKey && !_strnicmp((const char *)NvmeAuthKey + 20, Str2, 0x100uLL) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 16), 0, 0) )
    {
      return (unsigned int)-1073740024;
    }
    else
    {
      v6 = NvmeDeleteAuthKey(v8);
      if ( v6 >= 0 )
      {
        v11 = *(_DWORD *)(v8 + 4);
        RtlDeleteElementGenericTable(&NvmeAuthKeyTable, Buffer);
        return 0;
      }
    }
  }
  return (unsigned int)v6;
}
