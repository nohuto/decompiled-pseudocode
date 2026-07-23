/*
 * XREFs of MiDbgCopyFromMemory @ 0x1407022D8
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiDbgCopyFromMemory(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r9
  _BYTE *v3; // r11
  unsigned int v4; // r10d
  unsigned int v5; // edi
  unsigned int v6; // edx
  unsigned int i; // r8d
  __int64 v9; // [rsp+40h] [rbp+8h]
  _BYTE *v10; // [rsp+48h] [rbp+10h]

  v2 = a2;
  v9 = 0LL;
  v3 = *(_BYTE **)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 || (((unsigned __int8)a2 | (unsigned __int8)v3) & 7) != 0 || (v4 & 7) != 0 )
  {
    while ( v4 )
    {
      if ( v5 )
      {
        v6 = v5;
        if ( v5 > v4 )
          v6 = 1;
      }
      else
      {
        v6 = v4 & 7;
        if ( (v4 & 7) != 0 )
        {
          if ( ((v6 - 1) & v6) != 0 )
            v6 = 1;
        }
        else
        {
          v6 = 8;
        }
      }
      if ( ((v6 - 1) & (unsigned int)v2) != 0 )
        v6 = 1;
      switch ( v6 )
      {
        case 1u:
          LOBYTE(v9) = *v2;
          break;
        case 2u:
          LOWORD(v9) = *(_WORD *)v2;
          break;
        case 4u:
          LODWORD(v9) = *(_DWORD *)v2;
          break;
        case 8u:
          v9 = *(_QWORD *)v2;
          break;
      }
      for ( i = 0; i < v6; ++i )
        *v3++ = *((_BYTE *)&v9 + i);
      v4 -= v6;
      v2 += v6;
      v10 = v2;
    }
  }
  else
  {
    RtlCopyVolatileMemory(*(void **)(a1 + 8), a2, v4);
  }
  return 0LL;
}
