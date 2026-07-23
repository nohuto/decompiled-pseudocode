/*
 * XREFs of EtwpCovSampContextFastFindModule @ 0x140A354CC
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampContextFastFindModule(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v7; // r11
  __int64 *v8; // r8
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 1196) >> 5;
  v4 = 0LL;
  v5 = -1LL << (*(_BYTE *)(a1 + 1196) & 0x1F);
  v7 = v5 & *(_QWORD *)a2;
  if ( v3 )
  {
    v8 = (__int64 *)(*(_QWORD *)(a1 + 1200)
                   + 8LL
                   * ((v3 - 1) & (HIBYTE(v7)
                                - 877075889
                                + 442596621 * (unsigned __int8)v7
                                + 37
                                * (BYTE6(v7)
                                 + 37
                                 * (BYTE5(v7)
                                  + 37
                                  * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (unsigned int)BYTE1(v7)))))))));
    while ( 1 )
    {
      result = *v8;
      v8 = (__int64 *)result;
      if ( (result & 1) != 0 )
        break;
      if ( v7 == (v5 & *(_QWORD *)(result + 8)) )
      {
        if ( !result )
          return 0LL;
        if ( *(_DWORD *)(result + 32) == *(_DWORD *)(a2 + 16)
          && *(_DWORD *)(result + 36) == *(_DWORD *)(a2 + 20)
          && *(_QWORD *)(result + 40) == *(_QWORD *)(a2 + 8)
          && *(_DWORD *)(result + 160) == *(_DWORD *)(a2 + 24) )
        {
          *(_DWORD *)(result + 136) = MEMORY[0xFFFFF78000000320];
          if ( _InterlockedIncrement64((volatile signed __int64 *)(result + 64)) <= 1 )
            __fastfail(0xEu);
          v4 = result;
        }
        *a3 = v4;
        return result;
      }
    }
  }
  return 0LL;
}
