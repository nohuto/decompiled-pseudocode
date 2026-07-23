/*
 * XREFs of ExFreePool2 @ 0x1406CFCC0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreePool2(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int i; // ecx
  _QWORD *v7; // rdx
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v9; // rax
  ULONG_PTR v10; // r11

  if ( a4 )
  {
    for ( i = 0; i < a4; ++i )
    {
      v7 = (_QWORD *)(a3 + 16LL * i);
      BugCheckParameter4 = (unsigned __int8)*v7;
      if ( BugCheckParameter4 != 2 )
        KeBugCheckEx(0xC2u, 0xA0uLL, BugCheckParameter2, a3, BugCheckParameter4);
      v9 = v7[1];
      v10 = *(_QWORD *)(v9 + 8);
      if ( v10 || *(_DWORD *)(v9 + 24) || a4 != 1 )
        KeBugCheckEx(0xC2u, 0xA1uLL, a3 + 16LL * i, v10, *(unsigned int *)(v9 + 24));
    }
    KeBugCheckEx(0xC2u, 0xA3uLL, BugCheckParameter2, a3, a4);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
