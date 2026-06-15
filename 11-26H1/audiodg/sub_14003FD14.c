/*
 * XREFs of sub_14003FD14 @ 0x14003FD14
 * Callers:
 *     sub_140030FFC @ 0x140030FFC (sub_140030FFC.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14006C9F4 @ 0x14006C9F4 (sub_14006C9F4.c)
 */

__int64 __fastcall sub_14003FD14(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == 2 || *(_DWORD *)(a1 + 16) == 4 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    v6 = v4;
    sub_14006C9F4(a1 + 88, a2);
    sub_140018FF0(&v6);
  }
  return 0LL;
}
