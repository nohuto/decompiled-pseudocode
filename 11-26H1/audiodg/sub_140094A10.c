/*
 * XREFs of sub_140094A10 @ 0x140094A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 */

void __fastcall sub_140094A10(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // ecx
  int v4; // eax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = *(_DWORD *)(a1 + 80);
  v5 = v1;
  if ( v3 == *(_DWORD *)(a1 + 84) )
  {
    v4 = -1;
  }
  else if ( v3 == *(_DWORD *)(a1 + 100) - 1 )
  {
    v4 = 0;
  }
  else
  {
    v4 = v3 + 1;
  }
  *(_DWORD *)(a1 + 80) = v4;
  sub_140018FF0(&v5);
}
