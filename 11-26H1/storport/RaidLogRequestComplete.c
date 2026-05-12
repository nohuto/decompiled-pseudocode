/*
 * XREFs of RaidLogRequestComplete @ 0x14002A288
 * Callers:
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x140017760 (RaidUnitCompleteRequest.c)
 *     RaidUnitCompleteResetRequest @ 0x140024200 (RaidUnitCompleteResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400AA530 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 */

__int64 __fastcall RaidLogRequestComplete(int a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int8 v4; // r9
  __int64 v6; // r11
  unsigned __int8 v8; // di
  unsigned __int8 v9; // r14
  unsigned int v10; // r10d
  unsigned __int8 v11; // bp
  int v12; // esi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // esi
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // edx
  unsigned int v26; // edi
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  _BYTE *v31; // rbx
  char v32; // r15
  unsigned int v33; // r14d
  unsigned int v34; // ebp
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // r10
  int v38; // edx
  int v39; // edx
  _BYTE *v40; // rdx
  _BYTE *v41; // rdx

  v3 = *(_BYTE *)(a3 + 2);
  v4 = 0;
  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( v3 == 40 )
    v12 = *(_DWORD *)(a3 + 20);
  else
    v12 = *(unsigned __int8 *)(a3 + 2);
  if ( v3 != 40 )
    a3 = 0LL;
  if ( v12 )
  {
    switch ( v12 )
    {
      case 23:
        if ( v3 == 40 )
        {
          v26 = *(_DWORD *)(a3 + 56);
          if ( v26 )
          {
            while ( 1 )
            {
              v11 = 0;
              v27 = *(unsigned int *)(a3 + 4LL * v10 + 120);
              if ( (unsigned int)v27 >= 0x80 )
              {
                v28 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v27 <= (unsigned int)v28 && *(_DWORD *)(v27 + a3) == 96 && v27 + 24 <= v28 )
                  break;
              }
              if ( ++v10 >= v26 )
                goto LABEL_44;
            }
            v11 = *(_BYTE *)((unsigned int)v27 + a3 + 8);
          }
LABEL_44:
          v29 = *(unsigned __int8 *)(a3 + 3);
          v30 = (unsigned __int64)v11 << 8;
        }
        else
        {
          v30 = *(unsigned __int8 *)(v6 + 3);
          v29 = (unsigned __int64)*(unsigned __int8 *)(v6 + 4) << 8;
        }
        v20 = ((v30 | v29) << 8) | 0x17000000;
        break;
      case 36:
        if ( v3 == 40 )
        {
          v21 = *(_DWORD *)(a3 + 56);
          v22 = 0;
          if ( v21 )
          {
            while ( 1 )
            {
              v10 = 0;
              v23 = *(unsigned int *)(a3 + 4LL * v22 + 120);
              if ( (unsigned int)v23 >= 0x80 )
              {
                v24 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v23 <= (unsigned int)v24 && *(_DWORD *)(v23 + a3) == 97 && v23 + 24 <= v24 )
                  break;
              }
              if ( ++v22 >= v21 )
                goto LABEL_32;
            }
            v10 = *(_DWORD *)((unsigned int)v23 + a3 + 12);
          }
LABEL_32:
          v25 = (v10 << 8) | *(unsigned __int8 *)(a3 + 3);
        }
        else
        {
          v25 = *(unsigned __int8 *)(v6 + 3) | (*(_DWORD *)(v6 + 8) << 8);
        }
        v20 = (unsigned int)(v25 << 8) | 0x24000000LL;
        break;
      case 37:
        if ( v3 == 40 )
        {
          v15 = *(_DWORD *)(a3 + 56);
          if ( v15 )
          {
            while ( 1 )
            {
              v9 = 0;
              v16 = *(unsigned int *)(a3 + 4LL * v10 + 120);
              if ( (unsigned int)v16 >= 0x80 )
              {
                v17 = *(unsigned int *)(a3 + 16);
                if ( (unsigned int)v16 <= (unsigned int)v17 && *(_DWORD *)(v16 + a3) == 98 && v16 + 24 <= v17 )
                  break;
              }
              if ( ++v10 >= v15 )
                goto LABEL_20;
            }
            v9 = *(_BYTE *)((unsigned int)v16 + a3 + 8);
          }
LABEL_20:
          v18 = *(unsigned __int8 *)(a3 + 3);
          v19 = (unsigned __int64)v9 << 8;
        }
        else
        {
          v19 = *(unsigned __int8 *)(v6 + 3);
          v18 = (unsigned __int64)*(unsigned __int8 *)(v6 + 4) << 8;
        }
        v20 = ((v19 | v18) << 8) | 0x25000000;
        break;
      default:
        v13 = *(unsigned __int8 *)(v6 + 3);
        v14 = (unsigned int)(v12 << 24);
        goto LABEL_75;
    }
    return DbgLogRequest(a1, 2, a2, *(_DWORD *)(a2 + 48), v6, v20, 0LL);
  }
  if ( v3 != 40 )
  {
    v13 = *(unsigned __int8 *)(v6 + 3) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 72) << 8);
    v14 = *(unsigned __int8 *)(v6 + 4);
    goto LABEL_75;
  }
  v31 = 0LL;
  v32 = 0;
  if ( *(_BYTE *)(a3 + 2) != 40 )
    goto LABEL_73;
  if ( *(_DWORD *)(a3 + 20) )
    goto LABEL_73;
  v33 = *(_DWORD *)(a3 + 56);
  v34 = 0;
  if ( !v33 )
    goto LABEL_73;
  while ( 1 )
  {
    v35 = *(unsigned int *)(a3 + 4LL * v34 + 120);
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(a3 + 16);
      if ( (unsigned int)v35 < (unsigned int)v36 )
        break;
    }
LABEL_65:
    if ( ++v34 >= v33 )
      goto LABEL_71;
  }
  v37 = (unsigned int)v35;
  v38 = *(_DWORD *)(v35 + a3) - 64;
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( v39 )
    {
      if ( v39 == 1 && v37 + 40 <= v36 )
      {
        if ( *(_DWORD *)(v37 + a3 + 12) )
          v31 = (_BYTE *)(v37 + a3 + 32);
        goto LABEL_70;
      }
    }
    else if ( v37 + 56 <= v36 )
    {
      v8 = *(_BYTE *)(v37 + a3 + 8);
      v40 = (_BYTE *)(v37 + a3 + 24);
      v32 = 1;
      if ( !*(_BYTE *)(v37 + a3 + 10) )
        v40 = v31;
      v31 = v40;
    }
    goto LABEL_64;
  }
  if ( v37 + 40 > v36 )
  {
LABEL_64:
    if ( v32 )
      goto LABEL_71;
    goto LABEL_65;
  }
  v41 = (_BYTE *)(v37 + a3 + 24);
  if ( !*(_BYTE *)(v37 + a3 + 10) )
    v41 = v31;
  v31 = v41;
LABEL_70:
  v8 = *(_BYTE *)(v37 + a3 + 8);
LABEL_71:
  if ( v31 )
    v4 = *v31;
LABEL_73:
  v13 = ((unsigned __int64)v4 << 8) | *(unsigned __int8 *)(a3 + 3);
  v14 = v8;
LABEL_75:
  v20 = v14 | (v13 << 8);
  return DbgLogRequest(a1, 2, a2, *(_DWORD *)(a2 + 48), v6, v20, 0LL);
}
