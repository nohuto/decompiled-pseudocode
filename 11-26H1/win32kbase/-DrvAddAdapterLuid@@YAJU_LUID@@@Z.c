/*
 * XREFs of ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x14019903C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14002AA74 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x14019043C (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  __int64 v2; // r9
  __int64 v3; // r11
  unsigned int v4; // edi
  __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // r10
  struct _LUID v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v2 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD))W32GetSessionState)(a1) + 88);
  v3 = *(_QWORD *)(v2 + 1856);
  v4 = *(_DWORD *)(v3 + 1573028);
  if ( v4 >= *(_DWORD *)(v2 + 1228) )
    return 3221225612LL;
  for ( i = 0LL; ; i = (unsigned int)(v8 + 1) )
  {
    v7 = *(_QWORD *)(v2 + 1232);
    if ( (unsigned int)i >= v4 )
      break;
    if ( operator==(&v9, (_DWORD *)(v7 + 8 * i)) )
    {
      ++*(_BYTE *)(*(_QWORD *)(v2 + 1240) + v8);
      return 0LL;
    }
  }
  *(struct _LUID *)(v7 + 8 * i) = a1;
  ++*(_BYTE *)(*(_QWORD *)(v2 + 1240) + i);
  ++*(_DWORD *)(v3 + 1573028);
  ++*(_DWORD *)(v3 + 1573024);
  return 0LL;
}
