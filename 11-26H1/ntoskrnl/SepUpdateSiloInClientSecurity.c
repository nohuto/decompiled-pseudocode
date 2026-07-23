/*
 * XREFs of SepUpdateSiloInClientSecurity @ 0x140B685F0
 * Callers:
 *     SeCreateClientSecurityEx @ 0x1409055F0 (SeCreateClientSecurityEx.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1409058A0 (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1408165B4 (SepCopyClientTokenAndSetSilo.c)
 *     SeQueryServerSiloToken @ 0x1409F6C30 (SeQueryServerSiloToken.c)
 *     ObRetagReferences @ 0x140A68380 (ObRetagReferences.c)
 *     SeGetTokenControlInformation @ 0x140A6C5B0 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall SepUpdateSiloInClientSecurity(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v5; // rbx
  int ServerSiloToken; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v2 = *(_QWORD **)(a1 + 16);
  v10 = 0LL;
  v11 = 0LL;
  v5 = v2[3];
  v12 = v5;
  ServerSiloToken = SeQueryServerSiloToken((__int64)v2, (__int64)&v10);
  if ( ServerSiloToken >= 0 && PsIsHostSilo(v10) && (_DWORD)v5 == 999 && !HIDWORD(v12) )
  {
    ServerSiloToken = SepCopyClientTokenAndSetSilo((int)v2, *(_DWORD *)(a1 + 4), a2, (PVOID *)&v11);
    if ( ServerSiloToken >= 0 )
    {
      v8 = v11;
      ObRetagReferences(v11, v7, 0x63436553u);
      *(_QWORD *)(a1 + 16) = v8;
      *(_BYTE *)(a1 + 24) = 0;
      ObfDereferenceObjectWithTag(v2, 0x63436553u);
      SeGetTokenControlInformation(v8, a1 + 28);
    }
  }
  return (unsigned int)ServerSiloToken;
}
