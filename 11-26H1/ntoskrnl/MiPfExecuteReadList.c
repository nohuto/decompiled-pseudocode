/*
 * XREFs of MiPfExecuteReadList @ 0x140A5AB58
 * Callers:
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiPageRead @ 0x14026AC78 (MiPageRead.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiReferenceInPageFile @ 0x14038F034 (MiReferenceInPageFile.c)
 *     SmPageRead @ 0x140390C8C (SmPageRead.c)
 *     MiReadFromMemoryPagefile @ 0x1404FC998 (MiReadFromMemoryPagefile.c)
 */

int __fastcall MiPfExecuteReadList(__int64 a1, char a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // r15d
  char v9; // r12
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // r11
  struct _FILE_OBJECT *v16; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v4 = &retaddr;
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 224;
  v7 = *(_QWORD *)(a1 + 224);
  v8 = a2 & 2;
  v9 = 0;
  if ( v7 != a1 + 224 )
  {
    v11 = a2 & 1;
    do
    {
      if ( (*(_DWORD *)(v7 + 188) & 0x400000) != 0 || (v12 = *(_QWORD *)(v7 + 208)) == 0 )
        v12 = v7 + 272;
      *(_WORD *)(v12 + 10) |= 0x42u;
      v13 = MiReferenceInPageFile(v7, a3, 0LL);
      v14 = *(_DWORD *)(v7 + 188);
      if ( v13 )
      {
        *(_QWORD *)(v7 + 200) = v13;
        v15 = 0LL;
      }
      else
      {
        v15 = *(_QWORD *)(v7 + 192);
      }
      *(_QWORD *)(v7 + 240) = *(_QWORD *)(v7 + 248);
      *(_QWORD *)(v7 + 168) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( v11 )
      {
        v9 = BYTE4(CurrentThread[1].Queue);
        BYTE4(CurrentThread[1].Queue) = 1;
      }
      if ( v15 && _bittest16((const signed __int16 *)(v15 + 172), 0xBu) )
      {
        MiReadFromMemoryPagefile(v15, v7);
        LODWORD(v4) = 0;
      }
      else if ( (v14 & 0x400) != 0 )
      {
        LODWORD(v4) = SmPageRead(
                        *(_QWORD *)(*(_QWORD *)(v15 + 224) + 256LL),
                        (int *)(v7 + 96),
                        (v7 + 272) | (v8 != 0 ? 1 : 3),
                        (int)v7 + 32,
                        v7 + 80);
      }
      else
      {
        if ( (*(_DWORD *)(v7 + 188) & 0x400000) != 0 )
          v16 = *(struct _FILE_OBJECT **)(*(_QWORD *)(v7 + 192) + 24LL);
        else
          v16 = *(struct _FILE_OBJECT **)(v7 + 200);
        LODWORD(v4) = MiPageRead(v16, v12, v7 + 96, v7 + 32, v7 + 80, 6, a4);
      }
      if ( v11 )
        BYTE4(CurrentThread[1].Queue) = v9;
      if ( (int)v4 < 0 )
      {
        *(_DWORD *)(v7 + 80) = (_DWORD)v4;
        *(_QWORD *)(v7 + 88) = 0LL;
        LODWORD(v4) = KeSetEvent((PRKEVENT)(v7 + 32), 0, 0);
      }
      v7 = *(_QWORD *)v7;
    }
    while ( v7 != v6 );
  }
  return (int)v4;
}
