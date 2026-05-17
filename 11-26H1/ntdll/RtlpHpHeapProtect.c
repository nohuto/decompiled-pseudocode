/*
 * XREFs of RtlpHpHeapProtect @ 0x1801580D0
 * Callers:
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 * Callees:
 *     RtlpHpSegProtect @ 0x18010E8A8 (RtlpHpSegProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FA84 (RtlpHpLargeAllocationProtect.c)
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpHeapProtect(__int64 a1, unsigned int a2)
{
  int v4; // ebp
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  char v9; // r8
  unsigned __int64 i; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+88h] [rbp+10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (a2 & 0x22) != 0 )
  {
    v4 = 1;
    if ( (*(_WORD *)(a1 + 30) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 30), 2u);
  }
  else
  {
    v4 = 0;
  }
  v5 = ZwQueryVirtualMemory(-1LL, a1, 0LL, &v13, 48LL, 0LL);
  if ( v5 >= 0 )
  {
    v17 = *((_QWORD *)&v14 + 1);
    v18 = a1;
    v5 = ZwProtectVirtualMemory(-1LL, &v18, &v17, a2, &v16);
    if ( v5 >= 0 )
    {
      v5 = RtlpHpSegProtect(a1 + 320, a2);
      if ( v5 >= 0 )
      {
        v5 = RtlpHpSegProtect(a1 + 512, a2);
        if ( v5 >= 0 )
        {
          v6 = *(_QWORD *)(a1 + 72);
          if ( !v6 )
          {
            v5 = 0;
LABEL_32:
            if ( !v4 && (*(_WORD *)(a1 + 30) & 2) != 0 )
              _InterlockedAnd16((volatile signed __int16 *)(a1 + 30), 0xFFFDu);
            return (unsigned int)v5;
          }
          while ( 1 )
          {
LABEL_30:
            v5 = RtlpHpLargeAllocationProtect(v6, a2);
            if ( v5 < 0 )
            {
LABEL_31:
              if ( v5 < 0 )
                return (unsigned int)v5;
              goto LABEL_32;
            }
            v7 = *(_QWORD *)v6;
            if ( !*(_QWORD *)v6 )
              break;
            v8 = (*(_BYTE *)(a1 + 80) & 1) == 0;
LABEL_13:
            if ( v8 )
              v6 = v7;
            else
              v6 ^= v7;
          }
          v7 = *(_QWORD *)(v6 + 8);
          v9 = *(_BYTE *)(a1 + 80) & 1;
          if ( v7 )
          {
            v8 = v9 == 0;
            goto LABEL_13;
          }
          for ( i = v6; ; v6 = i )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v9 )
            {
              if ( !i )
                goto LABEL_31;
              i ^= v6;
            }
            if ( !i )
              goto LABEL_31;
            v11 = *(_QWORD *)(i + 8);
            if ( v9 )
            {
              if ( !v11 )
                continue;
              v11 ^= i;
            }
            if ( v11 && v11 != v6 )
            {
              v6 = v11;
              goto LABEL_30;
            }
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
