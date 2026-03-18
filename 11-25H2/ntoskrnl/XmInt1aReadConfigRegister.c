/*
 * XREFs of XmInt1aReadConfigRegister @ 0x140575EFC
 * Callers:
 *     XmExecuteInt1a @ 0x140575C24 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aReadConfigRegister(__int64 a1)
{
  char v2; // cl
  char v3; // di
  char v4; // al
  int v5; // eax

  v2 = *(_BYTE *)(a1 + 24);
  v3 = -121;
  v4 = *(_BYTE *)(a1 + 36);
  if ( v2 == 9 )
  {
    if ( (v4 & 1) == 0 )
      goto LABEL_7;
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
    goto LABEL_7;
  }
  if ( v2 == 10 && (v4 & 3) != 0 )
    goto LABEL_6;
LABEL_7:
  v5 = guard_dispatch_icall_no_overrides(*(unsigned __int8 *)(a1 + 37));
  if ( v5 )
  {
    switch ( *(_BYTE *)(a1 + 24) )
    {
      case 8:
        LOBYTE(v5) = 0;
        *(_BYTE *)(a1 + 28) = 0;
        break;
      case 9:
        LOBYTE(v5) = 0;
        *(_WORD *)(a1 + 28) = 0;
        break;
      case 0xA:
        LOBYTE(v5) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        break;
    }
    *(_DWORD *)(a1 + 16) &= ~1u;
    v3 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v3;
  return v5;
}
