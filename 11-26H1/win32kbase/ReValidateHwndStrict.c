/*
 * XREFs of ReValidateHwndStrict @ 0x14017FD70
 * Callers:
 *     ?Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ @ 0x14017FCF0 (-Get@tagUNIQUE_WINDOW_HANDLE@@QEBAPEAUtagWND@@XZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ReValidateHwndStrict(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v3 = *(_QWORD *)(result + 40);
    if ( *(char *)(v3 + 20) < 0 )
    {
      return 0LL;
    }
    else if ( *(char *)(v3 + 19) < 0 )
    {
      return 0LL;
    }
  }
  return result;
}
