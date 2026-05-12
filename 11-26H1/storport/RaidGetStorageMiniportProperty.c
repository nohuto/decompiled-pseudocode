/*
 * XREFs of RaidGetStorageMiniportProperty @ 0x140186A24
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageMiniportProperty(__int64 a1, _DWORD *a2, size_t *a3)
{
  size_t v3; // rbp
  __int64 v8; // rdi
  __int64 v9; // r15
  char v10; // cl

  v3 = *a3;
  if ( *a3 >= 8 )
  {
    v8 = 16LL;
    if ( v3 >= 0x10 )
    {
      v9 = *(_QWORD *)(a1 + 608);
      memset_0(a2, 0, *a3);
      a2[2] = 1;
      *((_WORD *)a2 + 6) = 257;
      *((_WORD *)a2 + 7) = *(_WORD *)(a1 + 4188);
      if ( v3 >= 0x18 )
      {
        *a2 = 24;
        v8 = 24LL;
        a2[1] = 24;
        *((_BYTE *)a2 + 16) = (*(_DWORD *)(v9 + 184) & 0x80) != 0;
        v10 = *((_BYTE *)a2 + 17) & 0xFE | ((*(_BYTE *)(a1 + 110) & 0x40) != 0);
        *((_BYTE *)a2 + 17) = v10;
        *((_BYTE *)a2 + 17) = v10 & 0xFD | *(_BYTE *)(a1 + 112) & 2;
      }
      else
      {
        *a2 = 16;
        a2[1] = 16;
      }
      *a3 = v8;
    }
    else
    {
      *a2 = 24;
      a2[1] = 24;
      *a3 = 8LL;
    }
    return 0LL;
  }
  else
  {
    *a3 = 24LL;
    return 3221225507LL;
  }
}
