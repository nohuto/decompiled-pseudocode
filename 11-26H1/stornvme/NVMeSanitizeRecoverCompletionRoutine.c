/*
 * XREFs of NVMeSanitizeRecoverCompletionRoutine @ 0x14001FFA0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 */

char __fastcall NVMeSanitizeRecoverCompletionRoutine(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  unsigned int i; // ecx
  __int64 v9; // rdx
  unsigned int j; // ecx
  unsigned int k; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // ecx

  SrbExtension = GetSrbExtension(a2);
  if ( *(_DWORD *)(v3 + 12) == 251658240 )
  {
    v5 = GetSrbExtension(v3);
    v6 = *(_QWORD *)(v5 + 4200);
  }
  else
  {
    LOBYTE(v5) = v4 - 8;
    if ( v3 != v4 + 1016 )
    {
      v7 = *(_QWORD *)(v4 + 1392);
      if ( v7 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(v4 + 1552); ++i )
        {
          v6 = v7 + ((unsigned __int64)i << 7);
          LOBYTE(v5) = v6 + 8;
          if ( v3 == v6 + 8 )
            goto LABEL_20;
        }
      }
      v9 = *(_QWORD *)(v4 + 1400);
      if ( v9 )
      {
        for ( j = 0; j < *(unsigned __int16 *)(v4 + 1554); ++j )
        {
          v6 = v9 + ((unsigned __int64)j << 7);
          LOBYTE(v5) = v6 + 8;
          if ( v3 == v6 + 8 )
            goto LABEL_20;
        }
      }
      for ( k = 0; k < 2; ++k )
      {
        v12 = (unsigned __int64)k << 7;
        v5 = v12 + v4 + 1144;
        if ( v3 == v5 )
        {
          v6 = v12 + v4 + 1136;
          goto LABEL_20;
        }
      }
      goto LABEL_28;
    }
    v6 = v4 + 1008;
  }
LABEL_20:
  if ( !v6 )
    goto LABEL_28;
  if ( *(_BYTE *)(v3 + 3) != 1 )
  {
LABEL_22:
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    return v5;
  }
  v13 = *(_QWORD *)(SrbExtension + 4160);
  if ( !v13 )
  {
LABEL_28:
    *(_BYTE *)(SrbExtension + 4225) |= 8u;
    *(_BYTE *)(v3 + 3) = 4;
    return v5;
  }
  LOBYTE(v5) = *(_BYTE *)(v13 + 2) & 7;
  if ( (_BYTE)v5 != 3 )
    goto LABEL_22;
  v14 = *(_DWORD *)(v13 + 4);
  v15 = 1;
  if ( (v14 & 8) == 0 )
    v15 = v14 & 7;
  *(_BYTE *)(*(_QWORD *)(v6 + 96) + 4225LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(v6 + 96) + 4225LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(v6 + 96) + 4212LL) = 0;
  v16 = *(_QWORD *)(v6 + 96);
  v17 = *(_DWORD *)(v16 + 4136) & 0xFFFFFFF8;
  *(_BYTE *)(v16 + 4096) = -124;
  *(_DWORD *)(v16 + 4140) = 0;
  *(_DWORD *)(v16 + 4136) = ((v15 | v17) & 0xFFFFFFF7 ^ (8 * ((v14 & 8) != 0))) & 0xFFFFFC0F;
  LOBYTE(v5) = ProcessCommand(v4, v6 + 8);
  return v5;
}
