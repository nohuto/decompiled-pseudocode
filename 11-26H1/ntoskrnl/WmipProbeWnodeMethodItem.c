/*
 * XREFs of WmipProbeWnodeMethodItem @ 0x140A0B514
 * Callers:
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipProbeWnodeMethodItem(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v6; // edi
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // r11d
  int v11; // eax

  v3 = a2;
  if ( a2 >= 0x44 )
  {
    v6 = a1[16];
    v7 = 0;
    v8 = (unsigned int)a1[15];
    v9 = (unsigned int)a1[12];
    if ( (_DWORD)v9 )
    {
      if ( (unsigned int)v9 < 0x44 )
        return (unsigned int)-1073741823;
      if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != v9 )
        return (unsigned int)-1073741823;
      if ( v9 > v3 - 2 )
        return (unsigned int)-1073741823;
      v10 = v9 + *(unsigned __int16 *)((char *)a1 + v9) + 2;
      if ( v10 < (unsigned int)v9 || v10 > (unsigned int)v3 || v10 > a3 )
        return (unsigned int)-1073741823;
      if ( !(_DWORD)v8 )
        goto LABEL_25;
      if ( (unsigned int)v8 < v10 )
        return (unsigned int)-1073741823;
    }
    else if ( !(_DWORD)v8 )
    {
      goto LABEL_25;
    }
    if ( (unsigned int)v8 < 0x44 )
      return (unsigned int)-1073741823;
LABEL_25:
    if ( ((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL) == v8
      && (!(_DWORD)v8 || v6 <= (unsigned int)v3 && (unsigned int)v8 <= (unsigned int)v3 - v6)
      && a3 >= 0x44
      && (unsigned int)v8 <= a3 )
    {
      if ( (_DWORD)v8 )
      {
        v11 = a1[11];
        if ( (v11 & 0x8000) != 0 && (_DWORD)v3 == *a1 && (v11 & 0xFFFF7F7F) == 0 )
          return v7;
      }
    }
    return (unsigned int)-1073741823;
  }
  return 3221225473LL;
}
