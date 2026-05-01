/*
 * XREFs of ?RmpGameModeDemoteActiveRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAE@Z @ 0x18000DB48
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18000F294 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180013890 (CempListEntryRemoveAndClear.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180066690 (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180069AB4 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeDemoteActiveRecipients(struct _RM_GAME_MODE_CONTEXT *a1, int a2, bool *a3)
{
  bool v4; // al
  char *v5; // rax
  __int64 v6; // rcx
  bool v7; // r10
  unsigned int v8; // r9d
  char *v9; // r8
  char *v10; // rcx
  char **v11; // rax
  _QWORD *v12; // rax
  char **v13; // rdx
  _QWORD *v14; // rbx
  char *v15; // rdx
  char **v16; // rax
  char **v17; // rax
  _QWORD *v18; // [rsp+20h] [rbp-10h] BYREF
  char *v19; // [rsp+28h] [rbp-8h]

  v4 = (*((_BYTE *)a1 + 148) & 8) == 0 && *((_DWORD *)a1 + 34) != 0;
  *a3 = v4;
  v5 = (char *)a1 + 88;
  v6 = *((_QWORD *)a1 + 11);
  if ( (char *)v6 != v5 )
  {
    v7 = a2 != *(_DWORD *)(v6 + 20) || (*(_BYTE *)(v6 + 82) & 5) != 1;
    v8 = 0;
    v19 = (char *)&v18;
    v18 = &v18;
    do
    {
      v9 = (char *)a1 + 16 * v8 + 88;
      v10 = *(char **)v9;
      if ( *(char **)v9 != v9 )
      {
        if ( v7 )
        {
          if ( *((char **)v10 + 1) != v9
            || (v11 = (char **)*((_QWORD *)v9 + 1), *v11 != v9)
            || (*v11 = v10,
                *((_QWORD *)v10 + 1) = v11,
                v12 = v18,
                v13 = (char **)v19,
                *((_QWORD *)v9 + 1) = v9,
                *(_QWORD *)v9 = v9,
                (_QWORD **)v12[1] != &v18)
            || *v13 != (char *)&v18
            || *(char **)(*(_QWORD *)v10 + 8LL) != v10
            || **((char ***)v10 + 1) != v10 )
          {
LABEL_32:
            __fastfail(3u);
          }
          *v13 = v10;
          v19 = (char *)*((_QWORD *)v10 + 1);
          **((_QWORD **)v10 + 1) = &v18;
          *((_QWORD *)v10 + 1) = v13;
        }
        else if ( v8 )
        {
          do
          {
            v15 = v10;
            v10 = *(char **)v10;
            if ( (v15[82] & 5) != 1 )
            {
              if ( *((char **)v10 + 1) != v15 )
                goto LABEL_32;
              v16 = (char **)*((_QWORD *)v15 + 1);
              if ( *v16 != v15 )
                goto LABEL_32;
              *v16 = v10;
              *((_QWORD *)v10 + 1) = v16;
              v17 = (char **)v19;
              if ( *(_QWORD ***)v19 != &v18 )
                goto LABEL_32;
              *((_QWORD *)v15 + 1) = v19;
              *(_QWORD *)v15 = &v18;
              *v17 = v15;
              v19 = v15;
            }
          }
          while ( v10 != v9 );
        }
      }
      ++v8;
    }
    while ( v8 < 2 );
    if ( v18 != &v18 )
    {
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      while ( 1 )
      {
        v14 = v18;
        if ( v18 == &v18 )
          break;
        CempListEntryRemoveAndClear(v18);
        RmpGameModeUnapplyAndReleaseRecipientResources(a1, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 11));
        *((_DWORD *)v14 + 4) = 2;
        RmpGameModeDereferenceRecipientProcess((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v14 - 11));
      }
      RmpGameModeAcquireLock(a1);
    }
  }
}
