/*
 * XREFs of ValidateOwnerDepth @ 0x140253F28
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v2 = 1;
  v3 = 0;
  while ( 1 )
  {
    if ( !a2 )
    {
      LOBYTE(v3) = v2 <= *(_DWORD *)(W32GetUserSessionState(a1, 0LL) + 63232);
      return v3;
    }
    if ( a2 == a1 )
      break;
    a2 = *(_QWORD *)(a2 + 120);
    ++v2;
  }
  return 0LL;
}
