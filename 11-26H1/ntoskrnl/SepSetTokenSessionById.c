/*
 * XREFs of SepSetTokenSessionById @ 0x140A82BD4
 * Callers:
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 * Callees:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v6; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !LODWORD(ExpPlatformBinaryLock.QuantumTarget) )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v6 = *(void **)(a1 + 1160);
        if ( v6 )
          ObfDereferenceObject(v6);
        *(_QWORD *)(a1 + 1160) = PsGetSessionObjectById();
      }
    }
  }
}
