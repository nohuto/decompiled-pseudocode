/*
 * XREFs of sub_140078DC0 @ 0x140078DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140078DC0(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  LPVOID v6; // rcx
  int TokenInformation; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  void *TokenHandle[2]; // [rsp+40h] [rbp-10h] BYREF
  DWORD ReturnLength; // [rsp+78h] [rbp+28h] BYREF

  ppv = 0LL;
  TokenHandle[1] = 0LL;
  if ( CoCreateInstance(&stru_1400C78A0, 0LL, 1u, &stru_1400CB7F0, &ppv) >= 0 )
    sub_1400B6010(ppv);
  CurrentProcessId = GetCurrentProcessId();
  v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
  v5 = v4;
  if ( v4 )
  {
    TokenHandle[0] = 0LL;
    if ( OpenProcessToken(v4, 8u, TokenHandle) )
    {
      ReturnLength = 0;
      TokenInformation = 0;
      GetTokenInformation(TokenHandle[0], TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
      CloseHandle(TokenHandle[0]);
    }
    CloseHandle(v5);
  }
  v6 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    sub_1400B6010(v6);
  }
  return 1LL;
}
