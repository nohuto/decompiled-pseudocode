/*
 * XREFs of sub_14009D7C0 @ 0x14009D7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009D7C0(__int64 a1, int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v8 = v2;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_5:
    sub_140048108();
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 - 368) )
  {
    v5 = -2005139437;
    goto LABEL_5;
  }
  v6 = *(_DWORD *)(a1 + 44);
  if ( !v6 )
    v6 = *(_DWORD *)(a1 - 256);
  *a2 = v6 / *(_DWORD *)(a1 - 320);
LABEL_9:
  sub_140018FF0(&v8);
  return v5;
}
