/*
 * XREFs of XmInt1aWriteConfigRegister @ 0x140575FE8
 * Callers:
 *     XmExecuteInt1a @ 0x140575C24 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall XmInt1aWriteConfigRegister(__int64 a1)
{
  char v2; // cl
  char v3; // al
  int v4; // eax
  unsigned int v5; // edx
  char result; // al

  v2 = *(_BYTE *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 36);
  if ( v2 == 12 )
  {
    if ( (v3 & 1) == 0 )
      goto LABEL_7;
LABEL_6:
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
    goto LABEL_7;
  }
  if ( v2 == 13 && (v3 & 3) != 0 )
    goto LABEL_6;
LABEL_7:
  v4 = guard_dispatch_icall_no_overrides(*(unsigned __int8 *)(a1 + 37));
  v5 = *(_DWORD *)(a1 + 16) & 0xFFFFFFFE;
  if ( v4 )
    v5 = *(_DWORD *)(a1 + 16) | 1;
  *(_DWORD *)(a1 + 16) = v5;
  result = v4 != 0 ? 0x87 : 0;
  *(_BYTE *)(a1 + 25) = result;
  return result;
}
