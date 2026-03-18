/*
 * XREFs of VerifierInitialization @ 0x1403EE520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierInitialization(Gre::Base *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rbp
  __int64 result; // rax

  v1 = 0;
  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  v6 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96);
  if ( *((_DWORD *)v3 + 712) )
  {
    *(_QWORD *)(v6 + 4760) = MEMORY[0xFFFFF78000000014];
    if ( (int)DifRegisterClassDriverPlugin(44LL, &off_14034E4E0, 240LL, 0LL) >= 0 )
    {
      v1 = 1;
      v2 = 4;
    }
  }
  result = v1;
  *(_DWORD *)(v6 + 4768) = v2;
  return result;
}
