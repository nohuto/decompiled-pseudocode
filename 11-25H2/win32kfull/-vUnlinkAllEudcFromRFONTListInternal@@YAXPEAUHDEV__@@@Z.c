/*
 * XREFs of ?vUnlinkAllEudcFromRFONTListInternal@@YAXPEAUHDEV__@@@Z @ 0x14030E07C
 * Callers:
 *     ?vUnlinkAllEudcFromRFONTList@@YAXXZ @ 0x1402247EC (-vUnlinkAllEudcFromRFONTList@@YAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x140150B6C (-prfntActive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x14016C588 (-prfntInactive@PDEVOBJ@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     vMakeInactiveHelper @ 0x14030DF34 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcFromRFONTListInternal(HDEV a1)
{
  struct _LIST_ENTRY *v1; // rax
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int i; // edi
  struct _LIST_ENTRY **v4; // rcx
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // rbx
  unsigned int j; // edi
  struct _LIST_ENTRY **v9; // rcx
  struct _LIST_ENTRY *v10; // rcx
  HDEV v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = a1;
  v1 = PDEVOBJ::prfntActive((PDEVOBJ *)&v11);
  Flink = v1->Flink;
  if ( v1->Flink != v1 )
  {
    v12 = 0LL;
    do
    {
      if ( Flink[3].Blink )
        vMakeInactiveHelper(&Flink[3].Blink);
      if ( Flink[4].Flink )
        vMakeInactiveHelper(&Flink[4].Flink);
      if ( Flink[4].Blink )
        vMakeInactiveHelper(&Flink[4].Blink);
      if ( Flink[5].Flink )
      {
        for ( i = 0; i < LODWORD(Flink[11].Flink); ++i )
        {
          v4 = &Flink[5].Flink->Flink + i;
          if ( *v4 )
            vMakeInactiveHelper(v4);
        }
        v5 = Flink[5].Flink;
        if ( v5 != (struct _LIST_ENTRY *)&Flink[5].Blink )
          Win32FreePool(v5);
        *(struct _LIST_ENTRY **)((char *)&Flink[10].Blink + 4) = 0LL;
        Flink[5].Flink = 0LL;
        LODWORD(Flink[10].Blink) = 0;
      }
      Flink[-35].Blink[7].Blink = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      Flink = Flink->Flink;
    }
    while ( Flink != PDEVOBJ::prfntActive((PDEVOBJ *)&v11) );
  }
  v6 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v11);
  v7 = v6->Flink;
  if ( v6->Flink != v6 )
  {
    v12 = 0LL;
    do
    {
      if ( v7[3].Blink )
        vMakeInactiveHelper(&v7[3].Blink);
      if ( v7[4].Flink )
        vMakeInactiveHelper(&v7[4].Flink);
      if ( v7[4].Blink )
        vMakeInactiveHelper(&v7[4].Blink);
      if ( v7[5].Flink )
      {
        for ( j = 0; j < LODWORD(v7[11].Flink); ++j )
        {
          v9 = &v7[5].Flink->Flink + j;
          if ( *v9 )
            vMakeInactiveHelper(v9);
        }
        v10 = v7[5].Flink;
        if ( v10 != (struct _LIST_ENTRY *)&v7[5].Blink )
          Win32FreePool(v10);
        *(struct _LIST_ENTRY **)((char *)&v7[10].Blink + 4) = 0LL;
        v7[5].Flink = 0LL;
        LODWORD(v7[10].Blink) = 0;
      }
      v7[-35].Blink[7].Blink = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      v7 = v7->Flink;
    }
    while ( v7 != PDEVOBJ::prfntInactive((PDEVOBJ *)&v11) );
  }
}
