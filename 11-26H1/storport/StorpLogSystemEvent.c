/*
 * XREFs of StorpLogSystemEvent @ 0x140058584
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     StorCreateSystemLogEntry @ 0x140096EB0 (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2)
{
  int **v2; // rax
  int *v3; // rdi
  int *v4; // rsi
  int v6; // edx
  int v8; // ecx
  int v9; // ecx
  void *v10; // rcx
  unsigned int v11; // esi
  int v12; // ebp
  __int64 *Unit; // rax
  int v14; // [rsp+50h] [rbp+8h]

  v2 = *(int ***)(a1 - 16);
  v3 = 0LL;
  v4 = 0LL;
  HIBYTE(v14) = 0;
  if ( !v2 || !*v2 )
    return 3238002694LL;
  v6 = **v2;
  if ( ((_DWORD)v2[31] & 1) != 0 )
  {
    if ( v6 != 1314275652 )
      return 3238002694LL;
    v4 = *v2;
  }
  else
  {
    if ( v6 != 1094997074 )
      return 3238002694LL;
    v3 = *v2;
  }
  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( (!*(_DWORD *)(a2 + 40) || *(_QWORD *)(a2 + 48)) && (!*(_DWORD *)(a2 + 56) || *(_QWORD *)(a2 + 64)) )
  {
    if ( KeGetCurrentIrql() > 2u )
      return 3238002696LL;
    v8 = *(_DWORD *)(a2 + 12);
    if ( !v8 )
    {
LABEL_19:
      if ( !v3 )
      {
        v10 = (void *)*((_QWORD *)v4 + 1);
        return StorCreateSystemLogEntry(v10);
      }
      goto LABEL_20;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        goto LABEL_19;
    }
    else if ( v3 )
    {
      v11 = *(unsigned __int8 *)(a2 + 16);
      v12 = *(unsigned __int8 *)(a2 + 20);
      LOBYTE(v14) = *(_BYTE *)(a2 + 16);
      BYTE1(v14) = *(_BYTE *)(a2 + 20);
      BYTE2(v14) = *(_BYTE *)(a2 + 24);
      Unit = RaidAdapterFindUnit((__int64)v3, v14);
      if ( Unit )
      {
        v10 = (void *)Unit[1];
        return StorCreateSystemLogEntry(v10);
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v11, v12);
      }
LABEL_20:
      v10 = (void *)*((_QWORD *)v3 + 1);
      return StorCreateSystemLogEntry(v10);
    }
  }
  return 3238002694LL;
}
