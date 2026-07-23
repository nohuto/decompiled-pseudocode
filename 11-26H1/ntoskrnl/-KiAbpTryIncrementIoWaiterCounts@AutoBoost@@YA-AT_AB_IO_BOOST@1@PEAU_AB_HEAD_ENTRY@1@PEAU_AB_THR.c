/*
 * XREFs of ?KiAbpTryIncrementIoWaiterCounts@AutoBoost@@YA?AT_AB_IO_BOOST@1@PEAU_AB_HEAD_ENTRY@1@PEAU_AB_THREAD_ENTRY@1@PEAU_KTHREAD@@@Z @ 0x140376FC0
 * Callers:
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x1403777D0 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AutoBoost::KiAbpTryIncrementIoWaiterCounts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  char v6; // cl
  int v7; // ecx
  __int64 v8; // rdx
  int v9; // edx
  char v10; // dl

  result = 0LL;
  if ( (*(_BYTE *)(a2 + 33) & 4) != 0 )
  {
    v6 = *(_BYTE *)(a2 + 32);
    if ( (v6 & 8) != 0 )
    {
      if ( (v6 & 0x10) != 0 )
        return result;
    }
    else
    {
      v7 = (*(_DWORD *)(a3 + 1440) >> 9) & 7;
      v8 = *(_QWORD *)(*(_QWORD *)(a3 + 544) + 672LL);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 1084);
        if ( v7 >= v9 )
          v7 = v9;
      }
      if ( v7 < 2 && (struct _KTHREAD *)a3 == KeGetCurrentThread() )
      {
        v10 = 2;
        if ( !*(_DWORD *)(a3 + 1504) )
          v10 = v7;
      }
      else
      {
        v10 = v7;
        if ( v7 < 2 )
        {
          if ( *(_DWORD *)(a3 + 1504) )
            LOBYTE(v7) = 2;
          v10 = v7;
        }
      }
      if ( (unsigned __int8)v10 >= 2u )
      {
        ++*(_BYTE *)(a1 + 76);
        *(_BYTE *)(a2 + 32) |= 8u;
        if ( *(_BYTE *)(a1 + 76) == 1 )
          result = 1LL;
      }
    }
    if ( (*(_BYTE *)(a2 + 32) & 0x10) == 0 && (!*(_DWORD *)(a3 + 1512) || *(_DWORD *)(a3 + 1508)) )
    {
      *(_DWORD *)(a1 + 76) ^= ((unsigned __int16)*(_DWORD *)(a1 + 76) ^ (unsigned __int16)(*(_DWORD *)(a1 + 76) + 256)) & 0x7F00;
      *(_BYTE *)(a2 + 32) |= 0x10u;
      if ( (*(_DWORD *)(a1 + 76) & 0x7F00) == 0x100 )
        return (unsigned int)result | 2;
    }
  }
  return result;
}
