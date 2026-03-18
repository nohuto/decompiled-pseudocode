/*
 * XREFs of rimIssueReads @ 0x14003564C
 * Callers:
 *     RIMReadInput @ 0x140034A90 (RIMReadInput.c)
 * Callees:
 *     rimStartDeviceReadIfAllowed @ 0x140033FA0 (rimStartDeviceReadIfAllowed.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     RimInputTypeToDeviceType @ 0x1400357C0 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int v2; // ebp
  int v3; // r14d
  int v4; // eax
  unsigned int v5; // r15d
  __int64 i; // rbx
  int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int IfAllowed; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 84) )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( v3 )
      {
        if ( v3 == 1 )
          v4 = 2;
        else
          v4 = (unsigned int)(v3 - 2) > 1 ? 0 : 60;
      }
      else
      {
        v4 = 1;
      }
      v5 = v4 & *(_DWORD *)(a1 + 84);
      if ( v5 )
        break;
LABEL_9:
      if ( (unsigned int)++v3 > 2 )
        return v2;
    }
    for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_9;
      v8 = *(_DWORD *)(i + 48);
      if ( v8 != 3 )
      {
        if ( v3 != 2 )
        {
          if ( v8 != (unsigned int)RimInputTypeToDeviceType(v5) )
            continue;
LABEL_16:
          v9 = *(_DWORD *)(i + 168);
          v2 = 0;
          if ( (v9 & 0x200) == 0 && (v9 & 0x80u) == 0 && (v9 & 0x400) == 0 && (v9 & 0x2000) == 0 )
            v2 = RIMStartDeviceSpecificRead(a1, i);
          continue;
        }
        if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
        {
          v11 = *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL);
          if ( v11 == 7 )
          {
            v10 = 8;
          }
          else if ( (unsigned int)(v11 - 5) <= 1 )
          {
            v10 = 4;
          }
          else
          {
            v12 = v11 - 1;
            v10 = 16;
            if ( v12 > 3 )
              v10 = 0;
          }
        }
        else
        {
          v10 = 32;
        }
        if ( (v10 & *(_DWORD *)(a1 + 84)) != 0 )
          goto LABEL_16;
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 424);
  while ( v13 )
  {
    IfAllowed = rimStartDeviceReadIfAllowed(a1, v13);
    v13 = *(_QWORD *)(v13 + 40);
    v2 = IfAllowed;
  }
  return v2;
}
