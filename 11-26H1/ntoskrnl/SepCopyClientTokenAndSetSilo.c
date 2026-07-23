/*
 * XREFs of SepCopyClientTokenAndSetSilo @ 0x1408165B4
 * Callers:
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B685F0 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     SepSetServerSiloToken @ 0x140818078 (SepSetServerSiloToken.c)
 *     SeCopyClientToken @ 0x1409025C0 (SeCopyClientToken.c)
 *     SeSetSessionIdToken @ 0x140AE5DDC (SeSetSessionIdToken.c)
 */

__int64 __fastcall SepCopyClientTokenAndSetSilo(int a1, int a2, __int64 a3, PVOID *a4)
{
  __int64 result; // rax
  ULONG ServerSiloServiceSessionId; // eax
  NTSTATUS v8; // ebx

  result = SeCopyClientToken(a1, a2, a3, 0, 0LL, (__int64)a4);
  if ( (int)result >= 0 )
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a3);
    if ( ServerSiloServiceSessionId != -1 && (v8 = SeSetSessionIdToken(*a4, ServerSiloServiceSessionId), v8 < 0)
      || (v8 = SepSetServerSiloToken(*a4, a3), v8 < 0) )
    {
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v8;
  }
  return result;
}
