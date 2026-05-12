/*
 * XREFs of IsBlankIdPage @ 0x14003DCEC
 * Callers:
 *     StorCompareScsiIdentity @ 0x14003DBB0 (StorCompareScsiIdentity.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x14003DFA4 (StorGetNextVPDIdDescriptor.c)
 */

char __fastcall IsBlankIdPage(_BYTE *a1)
{
  char v1; // bl
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx
  __int64 NextVPDIdDescriptor; // rax
  char v6; // r10
  unsigned __int8 i; // dl
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v1 = 0;
  v11 = 0;
  if ( !a1 )
    return 0;
  if ( a1[1] != 0x83 )
    return 0;
  v2 = (unsigned __int8)a1[3];
  v9[0] = a1;
  v3 = v2 | ((unsigned __int8)a1[2] << 8);
  v9[1] = 0LL;
  v4 = v3 + 4;
  if ( v4 > 0xFFFF )
    v4 = 0xFFFF;
  v10 = v4;
  while ( 1 )
  {
    NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v9);
    if ( !NextVPDIdDescriptor )
      break;
    v1 = v6;
    for ( i = 0; i < *(_BYTE *)(NextVPDIdDescriptor + 3); i += v6 )
    {
      if ( (*(_BYTE *)(i + NextVPDIdDescriptor + 4) & 0xDF) != 0 )
        return 0;
    }
  }
  if ( !v1 )
    return 0;
  return v6;
}
