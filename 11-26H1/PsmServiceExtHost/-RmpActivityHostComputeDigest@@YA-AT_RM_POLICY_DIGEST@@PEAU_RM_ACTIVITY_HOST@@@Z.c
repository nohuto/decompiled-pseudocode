/*
 * XREFs of ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056090
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18006D27C (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostComputeDigest(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r10
  __int64 v3; // r10
  int *v4; // rcx
  char v5; // al
  char v6; // r11
  __int16 v7; // dx
  int v8; // ecx
  char v9; // r8
  char v10; // r9
  char v11; // r8
  __int16 v12; // ax
  __int16 v13; // bx
  __int16 v14; // ax
  __int16 v15; // bx
  __int16 v16; // bx
  bool v17; // cf
  __int64 v18; // r8
  __int16 v19; // ax
  int v21; // r8d

  LOBYTE(v1) = 102;
  v2 = *(_QWORD *)(a1 + 1144);
  if ( v2 != a1 + 1144 )
  {
    v3 = v2 - 1296;
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = (int *)(v3 + 1336);
        v5 = *(_BYTE *)(v3 + 1378);
        if ( (v5 & 8) != 0 )
          break;
        v21 = *v4;
        if ( *v4 == 12 || ((v21 - 35) & 0xFFFFFFFB) == 0 )
          break;
        if ( (*(_BYTE *)(v3 + 1376) & 0x10) != 0 || v21 == 13 || ((v21 - 36) & 0xFFFFFFFB) == 0 )
        {
          v6 = 4;
LABEL_5:
          v7 = *(_WORD *)(v3 + 1376);
          if ( (v7 & 0x10) != 0 || (v8 = *v4, v8 == 13) || ((v8 - 36) & 0xFFFFFFFB) == 0 )
          {
            if ( (v5 & 0x40) == 0 )
              goto LABEL_10;
          }
          goto LABEL_9;
        }
        v7 = *(_WORD *)(v3 + 1376);
        v6 = 1;
LABEL_9:
        v6 |= 8u;
LABEL_10:
        v9 = v6 | (8 * (v7 & 8 | (2 * (v7 & 3 | (8 * (((*(_DWORD *)(v3 + 1332) & 8) != 0) | 2))))));
        v10 = v1 & v9;
        v11 = v1 | v9;
        v12 = 0;
        if ( v11 < 0 )
          v12 = 128;
        v13 = ((v10 & 4) != 0 ? 4 : 0) | ((v10 & 0x20) != 0 ? 0x20 : 0) | ((v10 & 0x40) != 0 ? 0x40 : 0) | v12 | (257 - ((v11 & 1) == 0));
        v14 = 0;
        v15 = ((v10 & 2) != 0 ? 2 : 0) | v13;
        if ( (v11 & 0x10) != 0 )
          v14 = 16;
        v16 = v14 | v15;
        v17 = (v11 & 8) != 0;
        v18 = *(_QWORD *)(v3 + 1296);
        v19 = 0;
        if ( v17 )
          v19 = 8;
        v1 = v19 | v16;
        if ( v18 != *(_QWORD *)(v3 + 1320) + 8 * (3LL * *(int *)(v3 + 1328) + 140) )
        {
          v3 = v18 - 1296;
          if ( v18 != 1296 )
            continue;
        }
        return v1;
      }
      v6 = 2;
      goto LABEL_5;
    }
  }
  return 102LL;
}
