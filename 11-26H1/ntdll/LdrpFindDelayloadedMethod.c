/*
 * XREFs of LdrpFindDelayloadedMethod @ 0x18015C318
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1801150A0 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpFindDelayloadedMethodInDescriptor @ 0x18015C3BC (LdrpFindDelayloadedMethodInDescriptor.c)
 */

__int64 __fastcall LdrpFindDelayloadedMethod(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 DelayloadedMethodInDescriptor; // rsi
  _DWORD *v7; // r12
  unsigned int v8; // edi
  unsigned int i; // ebx
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  DelayloadedMethodInDescriptor = 0LL;
  v11 = 0;
  *a3 = 0LL;
  v7 = RtlImageDirectoryEntryToData(a1, 1, 0xDu, &v11);
  if ( v7 )
  {
    v8 = v11 >> 5;
    for ( i = 0; i < v8; ++i )
    {
      DelayloadedMethodInDescriptor = LdrpFindDelayloadedMethodInDescriptor(a1, &v7[8 * i], a2);
      if ( DelayloadedMethodInDescriptor )
      {
        *a3 = &v7[8 * i];
        return DelayloadedMethodInDescriptor;
      }
    }
  }
  return DelayloadedMethodInDescriptor;
}
