/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1402E9910
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402E96A0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x14043BF20 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x14046B388 (RtlpLookupDynamicUserFunctionTable.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     MmGetImageInformation @ 0x140942C3C (MmGetImageInformation.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile void *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  volatile void *v11; // [rsp+28h] [rbp-40h]
  char v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    result = RtlpLookupDynamicUserFunctionTable(a1, a2);
    v5 = (volatile void *)result;
    if ( !result )
    {
      v13 = 0LL;
      v10 = 0LL;
      if ( (int)MmGetImageInformation(a1, &v13, &v10, &v12) >= 0 )
      {
        LOBYTE(v6) = 1;
        v7 = v13;
        v5 = (volatile void *)RtlImageDirectoryEntryToData(v13, v6, 3LL, a2 + 20);
        v11 = v5;
        if ( v5 )
        {
          v9 = *(_DWORD *)(a2 + 20);
          if ( v9 && v9 == 12 * (v9 / 0xCuLL) )
          {
            ProbeForRead(v5, v9, 4u);
          }
          else
          {
            v5 = 0LL;
            v11 = 0LL;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 20) = 0;
        }
        v8 = v10;
      }
      else
      {
        v7 = 0LL;
        v8 = 0;
      }
      *(_QWORD *)(a2 + 8) = v7;
      *(_DWORD *)(a2 + 16) = v8;
      *(_QWORD *)a2 = v5;
      if ( !v5 )
        *(_DWORD *)(a2 + 20) = 0;
      return (__int64)v5;
    }
  }
  return result;
}
