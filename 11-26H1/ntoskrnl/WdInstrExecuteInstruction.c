/*
 * XREFs of WdInstrExecuteInstruction @ 0x14050D010
 * Callers:
 *     WdInstrExecuteAction @ 0x1404F6474 (WdInstrExecuteAction.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x140599EB0 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WdInstrExecuteInstruction(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // ecx

  v5 = *(_BYTE *)(a1 + 1);
  v6 = 0;
  switch ( v5 & 0x3F )
  {
    case 0:
      if ( a3 )
      {
        v10 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2) >> *(_BYTE *)(a1 + 49));
        v11 = *(_DWORD *)(a1 + 52);
        LOBYTE(v6) = v10 == v11;
        *a3 = v6;
        return v11 != v10 ? 0xC0000001 : 0;
      }
      return (unsigned int)-1073741811;
    case 1:
      if ( a3 )
      {
        *a3 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2) >> *(_BYTE *)(a1 + 49));
        return v6;
      }
      return (unsigned int)-1073741811;
    case 2:
      v9 = (*(_DWORD *)(a1 + 56) & *(_DWORD *)(a1 + 52)) << *(_BYTE *)(a1 + 49);
      if ( v5 < 0 )
        v9 |= guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
      v8 = v9;
      goto LABEL_11;
    case 3:
      v7 = ((unsigned int)a2 & *(_DWORD *)(a1 + 56)) << *(_BYTE *)(a1 + 49);
      if ( v5 < 0 )
        v7 |= guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), a2) & ~(*(_DWORD *)(a1 + 56) << *(_BYTE *)(a1 + 49));
      v8 = v7;
LABEL_11:
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), v8);
      break;
  }
  return v6;
}
