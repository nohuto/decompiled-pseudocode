/*
 * XREFs of IopCheckAndUpdateStopOnSymlinkEcp @ 0x14077D350
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopCheckAndUpdateStopOnSymlinkEcp(__int64 a1, int a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 *i; // rcx
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // edx
  int v9; // r10d

  v4 = (__int64 *)(a1 + 8);
  for ( i = *(__int64 **)(a1 + 8); i != v4; i = (__int64 *)*i )
  {
    v6 = i[2] - ECP_TYPE_IO_STOP_ON_SYMLINK_FILTER_GUID;
    if ( !v6 )
      v6 = i[3] - 0x66146AC37E57B687LL;
    if ( !v6 )
    {
      v7 = *((_DWORD *)i + 11);
      *((_DWORD *)i + 10) |= 4u;
      v8 = v7 - 72;
      if ( v8 < 8 )
        return a2 == -1610612724;
      if ( (unsigned int)(a2 + 1610612733) <= 0x16 )
      {
        v9 = 4194817;
        if ( _bittest(&v9, a2 + 1610612733) )
        {
          ++*((_DWORD *)i + 16);
          *((_DWORD *)i + 17) = *(unsigned __int16 *)(a3 + 6);
        }
      }
      if ( v8 <= 8 )
        return a2 == -1610612724;
      return 1;
    }
  }
  return 1;
}
