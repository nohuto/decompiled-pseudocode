/*
 * XREFs of XmInt1aReadConfigRegister @ 0x1405B233C
 * Callers:
 *     XmExecuteInt1a @ 0x1405B2064 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aReadConfigRegister(__int64 a1)
{
  char v1; // r8
  unsigned __int8 v3; // al
  char v4; // di
  unsigned __int8 v5; // dl
  int v6; // eax

  v1 = *(_BYTE *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 36);
  v4 = -121;
  if ( v1 == 9 )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v5 = *(_BYTE *)(a1 + 36);
  if ( v1 == 10 && (v3 & 3) != 0 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
LABEL_7:
    v5 = v3;
  }
  v6 = guard_dispatch_icall_no_overrides(*(unsigned __int8 *)(a1 + 37), (v5 >> 3) | (32 * (v5 & 7u)));
  if ( v6 )
  {
    switch ( *(_BYTE *)(a1 + 24) )
    {
      case 8:
        LOBYTE(v6) = 0;
        *(_BYTE *)(a1 + 28) = 0;
        break;
      case 9:
        LOBYTE(v6) = 0;
        *(_WORD *)(a1 + 28) = 0;
        break;
      case 0xA:
        LOBYTE(v6) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        break;
    }
    *(_DWORD *)(a1 + 16) &= ~1u;
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 1u;
  }
  *(_BYTE *)(a1 + 25) = v4;
  return v6;
}
