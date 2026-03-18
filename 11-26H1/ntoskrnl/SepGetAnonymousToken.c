/*
 * XREFs of SepGetAnonymousToken @ 0x1403C9F7C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     NtImpersonateAnonymousToken @ 0x140AB2A30 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1403CA6D0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepSetTokenLowboxNumber @ 0x140A2C4A4 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenCapabilities @ 0x140A44AC4 (SepSetTokenCapabilities.c)
 *     SepSetTokenSessionById @ 0x140A82BD4 (SepSetTokenSessionById.c)
 *     SepSetTokenPackage @ 0x140A8F860 (SepSetTokenPackage.c)
 */

__int64 __fastcall SepGetAnonymousToken(__int64 a1, PVOID *a2)
{
  int v4; // ebx
  _DWORD *v6; // rcx
  _QWORD v7[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v8; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  Object = 0LL;
  memset(&v7[1], 0, 24);
  v7[0] = 48LL;
  v8 = 0LL;
  v4 = SepDuplicateToken(
         *(_DWORD *)&PspSiloMonitorLock.WaitBlockFill11[168],
         (unsigned int)v7,
         1,
         2,
         2,
         0,
         1,
         (__int64)&Object);
  if ( v4 >= 0 )
  {
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0
        || (v4 = SepSetTokenCapabilities(
                   Object,
                   *(_QWORD *)(a1 + 784),
                   *(_QWORD *)(a1 + 792),
                   *(unsigned int *)(a1 + 800)),
            v4 < 0)
        || (SepSetTokenSessionById((_DWORD)Object, *(_DWORD *)(a1 + 120), 0, 0, 0LL),
            *((_DWORD *)Object + 30) = *(_DWORD *)(a1 + 120),
            v4 = SepSetTokenLowboxNumber(Object, *(_QWORD *)(a1 + 784)),
            v4 < 0)
        || (v6 = *(_DWORD **)(a1 + 776)) != 0LL
        && *v6
        && (v4 = AuthzBasepDuplicateSecurityAttributes(v6, *((_QWORD *)Object + 97), 0LL), v4 < 0) )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return (unsigned int)v4;
      }
      *((_QWORD *)Object + 9) &= 0x200800000uLL;
      *((_QWORD *)Object + 10) &= 0x200800000uLL;
      *((_QWORD *)Object + 8) &= 0x200800000uLL;
      *((_DWORD *)Object + 50) &= ~0x2000u;
      *((_DWORD *)Object + 50) |= 0x4000u;
      *((_DWORD *)Object + 50) |= *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = Object;
  }
  return (unsigned int)v4;
}
