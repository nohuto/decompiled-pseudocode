/*
 * XREFs of MiDbgCopyToMemory @ 0x140702A34
 * Callers:
 *     MiDbgCopyMemoryInternal @ 0x1407025C0 (MiDbgCopyMemoryInternal.c)
 * Callees:
 *     MiDbgCopyPrivilegedData @ 0x14070297C (MiDbgCopyPrivilegedData.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiDbgCopyToMemory(__int64 a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // rdi
  unsigned int v4; // r12d
  size_t v5; // rsi
  _BYTE *v6; // r15
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned int v9; // edx
  unsigned int i; // r8d
  __int64 v11; // [rsp+48h] [rbp-40h]

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = *(_BYTE **)(a1 + 8);
  v7 = 0LL;
  v11 = 0LL;
  if ( a3 != 2
    || (result = MiDbgCopyPrivilegedData(
                   *(_QWORD *)(a1 + 56) >> 12,
                   (__int128 *)(a1 + 72),
                   (unsigned __int16)a2 & 0xFFF,
                   (__int64)v6,
                   v5),
        (_DWORD)result == -1073741802) )
  {
    if ( v4 || (((unsigned __int8)v6 | (unsigned __int8)v3) & 7) != 0 || (v5 & 7) != 0 )
    {
      while ( (_DWORD)v5 )
      {
        if ( v4 )
        {
          v9 = v4;
          if ( v4 > (unsigned int)v5 )
            v9 = 1;
        }
        else
        {
          v9 = v5 & 7;
          if ( (v5 & 7) != 0 )
          {
            if ( ((v9 - 1) & v9) != 0 )
              v9 = 1;
          }
          else
          {
            v9 = 8;
          }
        }
        if ( ((v9 - 1) & (unsigned int)v3) != 0 )
          v9 = 1;
        for ( i = 0; i < v9; ++i )
        {
          *((_BYTE *)&v11 + i) = *v6++;
          v7 = v11;
        }
        switch ( v9 )
        {
          case 1u:
            *v3 = v7;
            break;
          case 2u:
            *(_WORD *)v3 = v7;
            break;
          case 4u:
            *(_DWORD *)v3 = v7;
            break;
          case 8u:
            *(_QWORD *)v3 = v7;
            break;
        }
        LODWORD(v5) = v5 - v9;
        v3 += v9;
      }
    }
    else
    {
      RtlCopyVolatileMemory(v3, v6, v5);
    }
    return 0LL;
  }
  else
  {
    stru_140E2ED08.SuspendEvent.Header.SignalState |= 0x10000u;
  }
  return result;
}
