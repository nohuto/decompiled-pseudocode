/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x1800056F0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18008159C (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180005150 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x180005674 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlReleaseSRWLockShared @ 0x180018AF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x180095038 (RtlpHpLargeAllocGetMetadata.c)
 */

void __fastcall RtlpHpExtrasSetPresent(_RTL_SRWLOCK *a1, __int64 a2)
{
  int v4; // eax
  _RTL_SRWLOCK *v5; // rdi
  __int64 v6; // r9
  _RTL_SRWLOCK *v7; // r10
  char v8; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
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
    v16 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_1801C6908) >> 20));
    if ( !v16 || (v4 = v16 - 1, v4 == 2) )
    {
      RtlAcquireSRWLockShared(a1 + 8);
      Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
      RtlReleaseSRWLockShared(a1 + 8);
      *(_QWORD *)(Metadata + 32) |= 1uLL;
      return;
    }
  }
  v5 = &a1[24 * v4];
  v6 = a2 & v5[40].Value;
  if ( (_RTL_SRWLOCK *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10) ^ v6) == &v5[40] )
  {
    v7 = v5 + 41;
    v8 = (char)v5[41].0;
    v9 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v8);
    v10 = v9 - 32LL * *(unsigned __int8 *)(v9 + 26);
    v11 = *(_BYTE *)(v10 + 24);
    if ( (v11 & 3) != 3 || v6 + ((unsigned int)((__int64)(v10 - v6) >> 5) << v8) != a2 && (v11 & 0x1Cu) < 8 )
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v7 = v5 + 41;
  }
  v12 = *(_BYTE *)(v10 + 24) & 0x1C;
  if ( v12 < 8 )
  {
    *(_DWORD *)(v10 + 8) |= 1u;
  }
  else
  {
    v13 = v10 & v5[40].Value;
    v14 = v13 + ((unsigned int)((__int64)(v10 - v13) >> 5) << *(_BYTE *)&v7->0);
    if ( v12 == 8 )
    {
      v15 = (unsigned __int16)qword_1801C5EC8 ^ *(unsigned __int16 *)(v14 + 40) ^ (unsigned __int64)(unsigned __int16)(v14 >> 12);
      *(_WORD *)(v15 + a2 - 2) |= 0x4000u;
    }
    else if ( v12 == 12 )
    {
      RtlpHpVsChunkSetExtraPresent(v5[44].Value, a2);
    }
    else
    {
      RtlpHpPgSetExtraPresent(v5[58].Value, a2, v13, v14);
    }
  }
}
