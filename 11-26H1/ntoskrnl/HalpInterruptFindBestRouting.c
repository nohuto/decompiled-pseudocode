/*
 * XREFs of HalpInterruptFindBestRouting @ 0x1404357AC
 * Callers:
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetDestinationInternal @ 0x140435518 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRemap @ 0x14057E274 (HalpInterruptRemap.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptFindBestRouting(int *a1, __int64 a2)
{
  ULONG_PTR *v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  int v6; // ebx
  ULONG_PTR *v7; // r10
  int v8; // r11d
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rax
  int v12; // [rsp+4Ch] [rbp+14h]

  v12 = HIDWORD(a2);
  v2 = HalpInterruptLookupController(*a1);
  v5 = 0;
  v6 = (int)v2;
  if ( !v2 )
    return (unsigned int)-1073741811;
  v7 = v2 + 35;
  v8 = 0;
  v9 = v2[35];
  v10 = v9;
  if ( (ULONG_PTR *)v9 == v7 )
  {
LABEL_14:
    HalpInterruptSetProblemEx(v6, 23, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3573);
    return (unsigned int)-1073741823;
  }
  do
  {
    ++v8;
    if ( *(_DWORD *)(v10 + 16) == (_DWORD)v4 && *(_DWORD *)(v10 + 20) <= v12 && *(_DWORD *)(v10 + 24) > v12 )
      break;
    v10 = *(_QWORD *)v10;
  }
  while ( (ULONG_PTR *)v10 != v7 );
  if ( (ULONG_PTR *)v10 == v7 )
  {
    if ( v8 == 1 )
    {
      *v3 = *(_DWORD *)(v9 + 16);
      v3[1] = *(_DWORD *)(v9 + 20);
      return v5;
    }
    goto LABEL_14;
  }
  *(_QWORD *)v3 = v4;
  return v5;
}
