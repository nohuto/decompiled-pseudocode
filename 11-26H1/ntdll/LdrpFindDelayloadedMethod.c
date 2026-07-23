/*
 * XREFs of LdrpFindDelayloadedMethod @ 0x18015C1D8
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x180114880 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x18015C27C (LdrpFindDelayloadedMethodInDescriptor.c)
 */

__int64 __fastcall LdrpFindDelayloadedMethod(void *a1, __int64 a2, _QWORD *a3)
{
  __int64 DelayloadedMethodInDescriptor; // rsi
  char *v7; // r12
  ULONG v8; // edi
  ULONG i; // ebx
  ULONG v11; // [rsp+60h] [rbp+18h] BYREF

  DelayloadedMethodInDescriptor = 0LL;
  v11 = 0;
  *a3 = 0LL;
  v7 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0xDu, &v11);
  if ( v7 )
  {
    v8 = v11 >> 5;
    for ( i = 0; i < v8; ++i )
    {
      DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a1, &v7[32 * i], a2);
      if ( DelayloadedMethodInDescriptor )
      {
        *a3 = &v7[32 * i];
        return DelayloadedMethodInDescriptor;
      }
    }
  }
  return DelayloadedMethodInDescriptor;
}
