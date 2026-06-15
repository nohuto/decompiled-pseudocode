/*
 * XREFs of sub_140094850 @ 0x140094850
 * Callers:
 *     <none>
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 */

__int64 __fastcall sub_140094850(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v17 = v4;
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 80) == -1 )
  {
    *a2 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 88);
    v11 = *(_QWORD *)(a1 + 72);
    v12 = (unsigned __int64)*(unsigned int *)(a1 + 80) << 6;
    v9 = *(_QWORD *)(a1 + 56) + v10 + *(_DWORD *)(v12 + v11 + 4);
    if ( v10 )
      v13 = v10 / *(_DWORD *)(a1 + 92);
    else
      v13 = 0;
    *a2 = *(_DWORD *)(v12 + v11 + 56) - v13;
    v14 = *(_QWORD *)(a1 + 72);
    v15 = (unsigned __int64)*(unsigned int *)(a1 + 80) << 6;
    *(_OWORD *)a3 = *(_OWORD *)(v15 + v14 + 16);
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v15 + v14 + 32);
    *(_QWORD *)(a3 + 32) = *(_QWORD *)(v15 + v14 + 48);
    *a4 = *(_DWORD *)(((unsigned __int64)*(unsigned int *)(a1 + 80) << 6) + *(_QWORD *)(a1 + 72) + 8);
    *(_DWORD *)(a1 + 88) = 0;
  }
  sub_140018FF0(&v17);
  return v9;
}
