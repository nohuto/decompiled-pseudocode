/*
 * XREFs of WdInstrExecuteInstruction @ 0x1405698C4
 * Callers:
 *     WdInstrExecuteAction @ 0x1404C60CC (WdInstrExecuteAction.c)
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055CCC8 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WdInstrExecuteInstruction(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v5; // r8
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // ecx

  v5 = *(_BYTE *)(a1 + 1);
  v6 = 0;
  switch ( v5 & 0x3F )
  {
    case 0:
      if ( a3 )
      {
        v7 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24)) >> *(_BYTE *)(a1 + 49));
        v8 = *(_DWORD *)(a1 + 52);
        LOBYTE(v6) = v7 == v8;
        *a3 = v6;
        return v8 != v7 ? 0xC0000001 : 0;
      }
      return (unsigned int)-1073741811;
    case 1:
      if ( a3 )
      {
        *a3 = *(_DWORD *)(a1 + 56) & ((unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24)) >> *(_BYTE *)(a1 + 49));
        return v6;
      }
      return (unsigned int)-1073741811;
    case 2:
      if ( v5 < 0 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24));
      goto LABEL_10;
    case 3:
      if ( v5 < 0 )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24));
LABEL_10:
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24));
      break;
  }
  return v6;
}
