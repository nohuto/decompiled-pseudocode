/*
 * XREFs of WmipProcessWmiRegInfo @ 0x140A0AADC
 * Callers:
 *     WmipRegisterOrUpdateDS @ 0x140A0A9A4 (WmipRegisterOrUpdateDS.c)
 * Callees:
 *     WmipUpdateDataSource @ 0x140A09CB4 (WmipUpdateDataSource.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 */

__int64 __fastcall WmipProcessWmiRegInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  int v6; // ebp
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int updated; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rax

  v4 = 0;
  v6 = 0;
  while ( *a2 <= a3 )
  {
    v10 = a2[2];
    if ( (unsigned int)v10 > a3 || (v10 & 1) != 0 )
      break;
    if ( (_DWORD)v10 )
    {
      v11 = (_DWORD)a2 + v10;
      if ( (unsigned int)v10 + *(unsigned __int16 *)((char *)a2 + v10) > a3 )
        break;
    }
    else
    {
      v11 = 0;
    }
    v12 = a2[3];
    if ( (unsigned int)v12 > a3 || (v12 & 1) != 0 )
      break;
    if ( (_DWORD)v12 )
    {
      v13 = (__int64)a2 + v12;
      if ( (unsigned int)v12 + *(unsigned __int16 *)((char *)a2 + v12) > a3 )
        break;
    }
    else
    {
      v13 = 0LL;
    }
    if ( 32 * a2[4] + 24 > a3 )
      break;
    if ( a4 )
      updated = WmipUpdateDataSource(a1, (__int64)a2, a3);
    else
      updated = WmipAddDataSource(a1, (_DWORD)a2, a3, v11, v13);
    v15 = updated;
    v16 = v6 + 1;
    if ( v15 < 0 )
      v16 = v6;
    v6 = v16;
    v17 = a2[1];
    if ( (_DWORD)v17 )
    {
      if ( a3 >= (unsigned int)v17 )
      {
        a3 -= v17;
        if ( a3 >= 0x18 )
        {
          a2 = (unsigned int *)((char *)a2 + v17);
          if ( (unsigned int *)(((unsigned __int64)a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL) == a2 )
            continue;
        }
      }
    }
    goto LABEL_17;
  }
  v15 = -1073741811;
LABEL_17:
  if ( !v6 )
    return (unsigned int)v15;
  return v4;
}
