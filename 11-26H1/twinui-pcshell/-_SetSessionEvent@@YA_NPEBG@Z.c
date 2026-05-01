/*
 * XREFs of ?_SetSessionEvent@@YA_NPEBG@Z @ 0x180684E8C
 * Callers:
 *     ?_EnsureEventIsSet@@YA_NPEBGI@Z @ 0x180684D8C (-_EnsureEventIsSet@@YA_NPEBGI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _SetSessionEvent(LPCWSTR lpName)
{
  HANDLE v2; // rbx
  HANDLE v3; // rax

  v2 = OpenEventW(2u, 0, L"Global\\{DFFDE213-8CB4-46a9-90EB-3DA843AF66F9}-server");
  v3 = OpenEventW(2u, 0, lpName);
  return _SetSessionEvent(v2, v3);
}
