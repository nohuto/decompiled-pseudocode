/*
 * XREFs of VfSuspectDriversParseRegistryString @ 0x140CE5798
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140CE4CB4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfSuspectDriversAllocateEntry @ 0x140C264A0 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x140C3EA2C (VfSuspectDriversInsert.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140C3F004 (VfSuspectExcludedDriversAllocateEntry.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140C4DEE0 (VfDriverUnlock.c)
 */

int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rdx
  BOOL v1; // ebp
  __int64 v2; // r8
  unsigned __int64 Entry; // rax
  __int64 *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 *v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // ecx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  v13[0] = 0LL;
  v1 = (VfOptionFlags & 1) == 0;
  v2 = 0x100002401LL;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v4 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  while ( v0 < v4 )
  {
    v5 = *(unsigned __int16 *)v0;
    if ( (_DWORD)v5 == 9 || (unsigned int)v5 <= 0x20 && _bittest64(&v2, v5) || (_WORD)v5 == 12288 )
    {
      v0 = (__int64 *)((char *)v0 + 2);
    }
    else
    {
      if ( (_DWORD)v5 == 42 && v1 )
      {
        ViVerifyAllDrivers = 1;
        return Entry;
      }
      v6 = (__int64 *)((char *)v0 + 2);
      if ( (_DWORD)v5 == 34 )
      {
        v0 = (__int64 *)((char *)v0 + 2);
        while ( 1 )
        {
          v6 = (__int64 *)((char *)v6 + 2);
          if ( v6 >= v4 )
            return Entry;
          if ( *(_WORD *)v6 == 34 )
            goto LABEL_20;
        }
      }
      while ( v6 < v4 )
      {
        v7 = *(unsigned __int16 *)v6;
        if ( (_DWORD)v7 == 9 || (unsigned int)v7 <= 0x20 && _bittest64(&v2, v7) )
          break;
        if ( (_WORD)v7 == 12288 )
          break;
        v6 = (__int64 *)((char *)v6 + 2);
      }
LABEL_20:
      v8 = 2 * (((char *)v6 - (char *)v0) >> 1);
      if ( v8 )
      {
        LODWORD(Entry) = v8 + 2;
        LOWORD(v13[0]) = 2 * (((char *)v6 - (char *)v0) >> 1);
        WORD1(v13[0]) = v8 + 2;
        if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
          return Entry;
        *((_QWORD *)&v13[0] + 1) = v0;
        if ( v1 )
        {
          Entry = VfSuspectDriversAllocateEntry((const void **)v13);
          v9 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            VfSuspectDriversInsert(v9);
            goto LABEL_28;
          }
        }
        else
        {
          Entry = VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v13, 0x44456656u);
          v10 = (_QWORD *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            v11 = (_QWORD *)qword_140F08DD8;
            if ( *(__int64 **)qword_140F08DD8 != &VfExcludedDriversList )
              __fastfail(3u);
            *v10 = &VfExcludedDriversList;
            v10[1] = v11;
            *v11 = v10;
            qword_140F08DD8 = (__int64)v10;
LABEL_28:
            LODWORD(Entry) = VfDriverUnlock();
          }
        }
        v2 = 0x100002401LL;
      }
      v0 = (__int64 *)((char *)v6 + 2);
    }
  }
  return Entry;
}
