/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x18001A610
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800B1A2C (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x18001A070 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18001A594 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180074A54 (RtlpHpLargeAllocGetMetadata.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // r9
  _BYTE *v7; // r10
  char v8; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 result; // rax
  char v11; // dl
  unsigned int v12; // edx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 Metadata; // rbx

  if ( (_WORD)a2 )
  {
    v4 = 0;
  }
  else
  {
    v16 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801C78C0, 2 * ((unsigned __int64)(a2 - qword_1801C78B8) >> 20));
    if ( !v16 || (v4 = v16 - 1, v4 == 2) )
    {
      RtlAcquireSRWLockShared(a1 + 64);
      Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
      result = RtlReleaseSRWLockShared(a1 + 64);
      *(_QWORD *)(Metadata + 32) |= 1uLL;
      return result;
    }
  }
  v5 = a1 + 192LL * v4;
  v6 = a2 & *(_QWORD *)(v5 + 320);
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10) ^ v6) == v5 + 320 )
  {
    v7 = (_BYTE *)(v5 + 328);
    v8 = *(_BYTE *)(v5 + 328);
    v9 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v8);
    result = v9 - 32LL * *(unsigned __int8 *)(v9 + 26);
    v11 = *(_BYTE *)(result + 24);
    if ( (v11 & 3) != 3 || v6 + ((unsigned int)((__int64)(result - v6) >> 5) << v8) != a2 && (v11 & 0x1Cu) < 8 )
      result = 0LL;
  }
  else
  {
    result = 0LL;
    v7 = (_BYTE *)(v5 + 328);
  }
  v12 = *(_BYTE *)(result + 24) & 0x1C;
  if ( v12 < 8 )
  {
    *(_DWORD *)(result + 8) |= 1u;
  }
  else
  {
    v13 = result & *(_QWORD *)(v5 + 320);
    v14 = v13 + ((unsigned int)((__int64)(result - v13) >> 5) << *v7);
    if ( v12 == 8 )
    {
      v15 = (unsigned __int16)qword_1801C6EC8 ^ *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int64)(unsigned __int16)(v14 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v15 + a2 - 2) |= 0x4000u;
    }
    else if ( v12 == 12 )
    {
      return RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v5 + 352), a2);
    }
    else
    {
      return RtlpHpPgSetExtraPresent(*(_QWORD *)(v5 + 464), a2, v13, v14);
    }
  }
  return result;
}
