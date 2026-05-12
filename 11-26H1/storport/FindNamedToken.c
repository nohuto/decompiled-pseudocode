/*
 * XREFs of FindNamedToken @ 0x1401334C4
 * Callers:
 *     ParseLockingObjectInfo @ 0x1401326F0 (ParseLockingObjectInfo.c)
 *     ParseGetTableColumnData @ 0x140133860 (ParseGetTableColumnData.c)
 * Callees:
 *     WPP_SF_DD @ 0x14006F340 (WPP_SF_DD.c)
 *     GetTokenData @ 0x140136BEC (GetTokenData.c)
 */

__int64 __fastcall FindNamedToken(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebp
  __int64 v7; // rdi
  int v8; // ecx
  SIZE_T v9; // rbx
  const void *TokenData; // rax
  const void *v11; // r9

  v3 = *(__int64 **)(a2 + 16);
  v4 = 0;
  *a3 = 0LL;
  while ( !*a3 && v3 )
  {
    if ( v3[1] != 0x200000006LL || (v7 = v3[2]) == 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x11u,
          (__int64)&WPP_26031245b0af395f80dcd19d8421604d_Traceguids,
          *((_DWORD *)v3 + 2),
          *((_DWORD *)v3 + 3));
      return (unsigned int)-1073741435;
    }
    v8 = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)(v8 - 7) <= 7
      && *(_DWORD *)(a1 + 8) <= 8u
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 7) <= 7
      && *(_DWORD *)(v7 + 12) <= 8u
      && *(_QWORD *)a1 == *(_QWORD *)(v7 + 16)
      || (unsigned int)(v8 - 15) <= 2
      && (unsigned int)(*(_DWORD *)(v7 + 8) - 15) <= 2
      && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v7 + 12)
      && (v9 = *(unsigned int *)(v7 + 12),
          TokenData = (const void *)GetTokenData(v3[2], a2, a3),
          RtlCompareMemory(v11, TokenData, v9) == v9) )
    {
      *a3 = v7;
    }
    v3 = (__int64 *)*v3;
  }
  return v4;
}
