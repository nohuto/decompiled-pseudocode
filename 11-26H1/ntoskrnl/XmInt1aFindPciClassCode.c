/*
 * XREFs of XmInt1aFindPciClassCode @ 0x1405B2118
 * Callers:
 *     XmExecuteInt1a @ 0x1405B2064 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall XmInt1aFindPciClassCode(__int64 a1)
{
  char v1; // bp
  int v3; // r12d
  unsigned int v4; // ebx
  unsigned __int8 i; // r15
  unsigned int v6; // esi
  unsigned int j; // r14d
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // [rsp+68h] [rbp+10h]

  v1 = 0;
  v3 = 0;
  v10 = 0;
  v4 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int8)XmNumberPciBusses )
    {
      *(_DWORD *)(a1 + 16) |= 1u;
      v1 = -122;
      goto LABEL_17;
    }
    v6 = 0;
LABEL_4:
    if ( v6 < 0x20 )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= 8 )
    {
      ++v6;
      goto LABEL_4;
    }
    v4 = v6 & 0x1F | v4 & 0xFFFFFF00 | (32 * (j & 7));
    v8 = (unsigned int)guard_dispatch_icall_no_overrides(i, v4) == 4 ? v10 : -1;
    v10 = v8 >> 8;
    if ( v8 >> 8 == (*(_DWORD *)(a1 + 28) & 0xFFFFFF) )
    {
      v9 = v3++;
      if ( v9 == *(unsigned __int16 *)(a1 + 48) )
        break;
    }
  }
  *(_BYTE *)(a1 + 37) = i;
  *(_DWORD *)(a1 + 16) &= ~1u;
  *(_BYTE *)(a1 + 36) = j | (8 * v6);
LABEL_17:
  *(_BYTE *)(a1 + 25) = v1;
}
