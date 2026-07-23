/*
 * XREFs of AlpcpQuerySidMessage @ 0x140AA39E0
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1407C3C50 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpQuerySidToken @ 0x140AA3A9C (AlpcpQuerySidToken.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[12]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+4Ch] [rbp-4Ch]
  PVOID Object; // [rsp+50h] [rbp-48h]

  v14 = 0;
  memset_0(v13, 0, 0x44uLL);
  v11[0] = 0;
  v12 = 0LL;
  result = AlpcpGetEffectiveTokenMessage(a1, a2, &v12, (__int64)v13, v11);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v12, a3, a4, a5);
    if ( v11[0] )
      ObfDereferenceObjectWithTag(Object, 0x63436553u);
    return SidToken;
  }
  return result;
}
