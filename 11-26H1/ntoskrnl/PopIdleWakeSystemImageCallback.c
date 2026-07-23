/*
 * XREFs of PopIdleWakeSystemImageCallback @ 0x140B33C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopIdleWakeSystemImageCallback(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  unsigned int v5; // r8d
  unsigned int i; // ebx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // r15
  _DWORD *v11; // r12
  __int64 Pool2; // rax

  v2 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v7 = *(_QWORD *)(a2 + 8LL * i);
    if ( !v7 )
      break;
    v8 = *(_QWORD *)(a1 + 48);
    if ( v7 >= v8 && v7 < v8 + *(unsigned int *)(a1 + 64) )
    {
      v10 = *(unsigned __int16 *)(a1 + 88) + 24LL;
      v11 = &v2[4 * *v2];
      if ( v10 > 0xFFFF )
        return (unsigned int)-2147483643;
      Pool2 = ExAllocatePool2(0x100uLL);
      *((_QWORD *)v11 + 2) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *((_BYTE *)v2 + (unsigned int)(*v2)++ + 56) = 1;
      *((_WORD *)v11 + 4) = 0;
      *((_WORD *)v11 + 5) = v10;
      v5 = RtlUnicodeStringPrintf(
             (PUNICODE_STRING)(v11 + 2),
             L"%s+0x%08X",
             *(_QWORD *)(a1 + 96),
             (unsigned int)(v7 - v8));
    }
  }
  return v5;
}
