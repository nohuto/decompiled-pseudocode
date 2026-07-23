/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1402CB950
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402CB6E0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x14042E7D0 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlpLookupDynamicUserFunctionTable @ 0x140464B08 (RtlpLookupDynamicUserFunctionTable.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     MmGetImageInformation @ 0x140A35D4C (MmGetImageInformation.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rsi
  PVOID v6; // rdi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  PVOID v10; // [rsp+28h] [rbp-40h]
  char v11; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseOfImage; // [rsp+88h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  if ( !result )
  {
    result = RtlpLookupDynamicUserFunctionTable(a1, a2);
    v5 = (PVOID)result;
    if ( !result )
    {
      BaseOfImage = 0LL;
      v9 = 0LL;
      if ( (int)MmGetImageInformation(a1, &BaseOfImage, &v9, &v11) >= 0 )
      {
        v6 = BaseOfImage;
        v5 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 3u, (PULONG)(a2 + 20));
        v10 = v5;
        if ( v5 )
        {
          v8 = *(_DWORD *)(a2 + 20);
          if ( v8 && v8 == 12 * (v8 / 0xCuLL) )
          {
            ProbeForRead(v5, v8, 4u);
          }
          else
          {
            v5 = 0LL;
            v10 = 0LL;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 20) = 0;
        }
        v7 = v9;
      }
      else
      {
        v6 = 0LL;
        v7 = 0;
      }
      *(_QWORD *)(a2 + 8) = v6;
      *(_DWORD *)(a2 + 16) = v7;
      *(_QWORD *)a2 = v5;
      if ( !v5 )
        *(_DWORD *)(a2 + 20) = 0;
      return (__int64)v5;
    }
  }
  return result;
}
