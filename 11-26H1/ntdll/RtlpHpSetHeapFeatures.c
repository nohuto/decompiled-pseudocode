/*
 * XREFs of RtlpHpSetHeapFeatures @ 0x1801450C4
 * Callers:
 *     RtlSetGlobalHeapFeatures @ 0x180144408 (RtlSetGlobalHeapFeatures.c)
 * Callees:
 *     RtlpHpPgSamplingProcessInitialize @ 0x18011D004 (RtlpHpPgSamplingProcessInitialize.c)
 */

void __fastcall RtlpHpSetHeapFeatures(__int64 a1, int *a2)
{
  unsigned __int8 v2; // r8
  char v3; // r11
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  unsigned __int8 v8; // [rsp+31h] [rbp+9h]

  if ( !a1 )
    return;
  v8 = BYTE1(a1);
  v2 = a1;
  v3 = 3;
  if ( (a1 & 3) != 0 )
  {
    v4 = (a1 & 3) - 1;
    if ( !v4 )
    {
      v5 = RtlpLowFragHeapGlobalFlags & 0xFFFFFFE7 | 0x10;
      goto LABEL_6;
    }
    if ( v4 == 1 )
    {
      v5 = RtlpLowFragHeapGlobalFlags & 0xFFFFFFE7 | 8;
LABEL_6:
      RtlpLowFragHeapGlobalFlags = v5;
      goto LABEL_9;
    }
  }
  v5 = RtlpLowFragHeapGlobalFlags;
LABEL_9:
  if ( (v2 & 0xC) != 0 )
  {
    if ( ((v2 >> 2) & 3) == 1 )
    {
      v6 = v5 | 0x20;
      goto LABEL_14;
    }
    if ( ((v2 >> 2) & 3) == 2 )
    {
      v6 = v5 & 0xFFFFFFDF;
LABEL_14:
      RtlpLowFragHeapGlobalFlags = v6;
    }
  }
  if ( (v2 & 0x30) != 0 )
  {
    if ( ((v2 >> 4) & 3) == 1 )
    {
      RtlpHpHeapFeatures |= 2u;
    }
    else if ( ((v2 >> 4) & 3) == 2 )
    {
      RtlpHpHeapFeatures &= ~2u;
    }
  }
  if ( v2 < 0x40u )
    goto LABEL_28;
  if ( v2 >> 6 == 1 )
    goto LABEL_26;
  if ( v2 >> 6 == 2 )
  {
    LOBYTE(v7) = 31;
    goto LABEL_27;
  }
  if ( v2 >> 6 != 3 )
    goto LABEL_28;
  if ( !a2 || (v7 = *a2, *a2 == -1) )
LABEL_26:
    LOBYTE(v7) = 14;
LABEL_27:
  RtlpHpPgSamplingProcessInitialize(v7);
LABEL_28:
  if ( (v8 & (unsigned __int8)v3) != 0 )
  {
    if ( (unsigned __int8)(v3 & v8) == 1 )
    {
      RtlpHpHeapFeatures &= ~0x20u;
    }
    else if ( (unsigned __int8)(v3 & v8) == 2 )
    {
      RtlpHpHeapFeatures |= 0x20u;
    }
  }
}
