/*
 * XREFs of rimIssueReads @ 0x140098194
 * Callers:
 *     RIMReadInput @ 0x1400979E0 (RIMReadInput.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     rimStartDeviceReadIfAllowed @ 0x14009776C (rimStartDeviceReadIfAllowed.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 */

__int64 __fastcall rimIssueReads(__int64 a1)
{
  unsigned int v1; // r8d
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  __int64 i; // rbx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int IfAllowed; // eax

  v1 = 0;
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
        return v1;
    }
    for ( i = *(_QWORD *)(a1 + 424); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_9;
      v8 = *(_DWORD *)(i + 48);
      if ( v8 != 3 )
      {
        if ( v3 == 2 )
        {
          if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
          {
            v12 = *(_QWORD *)(i + 456);
            if ( *(_DWORD *)(v12 + 24) == 7 )
            {
              v11 = 8;
            }
            else if ( (unsigned int)RIMIsPenPointerDevice(v12) )
            {
              v11 = 4;
            }
            else
            {
              v11 = (unsigned int)RIMIsTouchPointerDevice(v13) != 0 ? 0x10 : 0;
            }
          }
          else
          {
            v11 = 32;
          }
          if ( (v11 & *(_DWORD *)(a1 + 84)) != 0 )
          {
LABEL_19:
            v10 = *(_DWORD *)(i + 168);
            v1 = 0;
            if ( (v10 & 0x200) == 0 && (v10 & 0x80u) == 0 && (v10 & 0x400) == 0 && (v10 & 0x2000) == 0 )
              v1 = RIMStartDeviceSpecificRead(a1, i);
            continue;
          }
        }
        else
        {
          if ( v5 == 1 )
          {
            v9 = 0;
          }
          else if ( v5 == 2 )
          {
            v9 = 1;
          }
          else
          {
            v9 = (v5 & 0x3C) != 0 ? 2 : 0;
          }
          if ( v8 == v9 )
            goto LABEL_19;
        }
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 424);
  while ( v14 )
  {
    IfAllowed = rimStartDeviceReadIfAllowed(a1, v14);
    v14 = *(_QWORD *)(v14 + 40);
    v1 = IfAllowed;
  }
  return v1;
}
