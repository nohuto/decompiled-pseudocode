/*
 * XREFs of KsepDbReadKFlag @ 0x140B6AC94
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x1409D767C (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     SdbReadQWORDTag @ 0x14088BF50 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x1409D4804 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1409D4F20 (SdbFindFirstTag.c)
 */

__int64 __fastcall KsepDbReadKFlag(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 StringTagPtr; // rax
  unsigned int v11; // eax
  __int64 v12; // r9

  v4 = a2;
  v6 = -1073741823;
  if ( (_DWORD)a2 )
  {
    FirstTag = SdbFindFirstTag((__int64)a1, a2, 24577);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v8, v9);
      if ( StringTagPtr )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v11 = SdbFindFirstTag((__int64)a1, v4, 20485);
        if ( v11 )
        {
          *(_DWORD *)(a3 + 8) = 11;
          *(_QWORD *)(a3 + 32) = SdbReadQWORDTag((__int64)a1, v11, 0LL, v12);
          v6 = 0;
          *(_QWORD *)(a3 + 16) = a3 + 32;
          *(_DWORD *)(a3 + 12) = 8;
        }
      }
    }
  }
  return v6;
}
