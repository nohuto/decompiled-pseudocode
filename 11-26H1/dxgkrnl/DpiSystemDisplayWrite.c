/*
 * XREFs of DpiSystemDisplayWrite @ 0x140087640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiSystemDisplayWrite(__int64 a1, int *a2, char a3)
{
  int v6; // r10d
  int v7; // r11d
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // ecx

  if ( byte_1401691F0 )
    return 0LL;
  if ( a3 )
    return 3221225659LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      if ( v6 == 5 || v6 == 1 && qword_140169200 == *(_QWORD *)(qword_140169078 + 64) )
      {
        v7 = *a2;
        if ( *a2 < (unsigned int)dword_140169210 )
        {
          v8 = a2[1];
          if ( v8 < dword_140169214 )
          {
            v9 = *(_DWORD *)(a1 + 4);
            v10 = (unsigned int)(dword_140169210 - v7);
            v11 = *(_DWORD *)a1;
            if ( v9 <= (unsigned int)v10 )
              v10 = v9;
            v12 = dword_140169214 - v8;
            if ( v11 <= (unsigned int)v12 )
              v12 = v11;
            if ( v6 == 1 )
              v13 = (v9 + 1) >> 1;
            else
              v13 = 4 * v9;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int, int, unsigned int))(qword_1401691F8 + 752))(
              *(_QWORD *)(qword_140169200 + 48),
              *(_QWORD *)(a1 + 16),
              v10,
              v12,
              v13,
              v7,
              v8);
            return 0LL;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
