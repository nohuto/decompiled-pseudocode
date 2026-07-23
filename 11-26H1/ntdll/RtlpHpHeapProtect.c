/*
 * XREFs of RtlpHpHeapProtect @ 0x180157FA0
 * Callers:
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 * Callees:
 *     RtlpHpSegProtect @ 0x18010E3F8 (RtlpHpSegProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011F834 (RtlpHpLargeAllocationProtect.c)
 *     ZwQueryVirtualMemory @ 0x18015F2A0 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpHeapProtect(volatile signed __int16 *BaseAddress, ULONG NewProtect)
{
  int v4; // ebp
  NTSTATUS v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  char v9; // r8
  unsigned __int64 i; // rax
  __int64 v11; // rcx
  __int128 MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  ULONG OldProtect; // [rsp+88h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+18h] BYREF
  PVOID BaseAddressa; // [rsp+98h] [rbp+20h] BYREF

  OldProtect = 0;
  MemoryInformation = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (NewProtect & 0x22) != 0 )
  {
    v4 = 1;
    if ( (BaseAddress[15] & 2) == 0 )
      _InterlockedOr16(BaseAddress + 15, 2u);
  }
  else
  {
    v4 = 0;
  }
  v5 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID)BaseAddress,
         MemoryBasicInformation,
         &MemoryInformation,
         0x30uLL,
         0LL);
  if ( v5 >= 0 )
  {
    RegionSize = *((_QWORD *)&v14 + 1);
    BaseAddressa = (PVOID)BaseAddress;
    v5 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, NewProtect, &OldProtect);
    if ( v5 >= 0 )
    {
      v5 = RtlpHpSegProtect((__int64)(BaseAddress + 160), NewProtect);
      if ( v5 >= 0 )
      {
        v5 = RtlpHpSegProtect((__int64)(BaseAddress + 256), NewProtect);
        if ( v5 >= 0 )
        {
          v6 = *((_QWORD *)BaseAddress + 9);
          if ( !v6 )
          {
            v5 = 0;
LABEL_32:
            if ( !v4 && (BaseAddress[15] & 2) != 0 )
              _InterlockedAnd16(BaseAddress + 15, 0xFFFDu);
            return (unsigned int)v5;
          }
          while ( 1 )
          {
LABEL_30:
            v5 = RtlpHpLargeAllocationProtect(v6, NewProtect);
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
            v8 = (BaseAddress[40] & 1) == 0;
LABEL_13:
            if ( v8 )
              v6 = v7;
            else
              v6 ^= v7;
          }
          v7 = *(_QWORD *)(v6 + 8);
          v9 = BaseAddress[40] & 1;
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
