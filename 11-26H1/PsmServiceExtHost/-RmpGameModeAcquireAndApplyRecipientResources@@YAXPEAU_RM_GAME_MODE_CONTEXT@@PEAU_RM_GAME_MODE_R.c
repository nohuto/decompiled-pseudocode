/*
 * XREFs of ?RmpGameModeAcquireAndApplyRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180064558
 * Callers:
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x1800644A0 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RmpGameModeAcquireAndApplyRecipientResources(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 (__fastcall **v3)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  unsigned int i; // ebp
  int v7; // edi
  unsigned int v8; // ebp
  void (__fastcall **v9)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *); // r14
  int v10; // edi
  int v11; // eax
  int v12; // eax

  v2 = 0;
  v3 = off_1800B3330;
  for ( i = 0; i < 5; ++i )
  {
    v7 = 1 << i;
    if ( *((_BYTE *)v3 + 33) )
      goto LABEL_7;
    if ( !*v3 )
      goto LABEL_6;
    if ( *((_BYTE *)v3 + 32) )
    {
      if ( (v7 & *((_DWORD *)a1 + 32)) == 0 )
        goto LABEL_7;
      goto LABEL_6;
    }
    v12 = (*v3)(a1, a2);
    if ( v12 >= 0 && v12 != 255 )
    {
      *((_DWORD *)a2 + 40) |= v7;
LABEL_6:
      v2 |= v7;
    }
LABEL_7:
    v3 += 5;
  }
  v8 = 0;
  v9 = &funcs_18000FA9B;
  do
  {
    v10 = 1 << v8;
    if ( ((1 << v8) & v2) == 0 )
      goto LABEL_10;
    v11 = ((__int64 (__fastcall *)(struct _RM_GAME_MODE_CONTEXT *, struct _RM_GAME_MODE_RECIPIENT_PROCESS *))*(v9 - 2))(
            a1,
            a2);
    if ( v11 == 255 )
      goto LABEL_13;
    if ( v11 < 0 )
    {
      if ( (v10 & *((_DWORD *)a2 + 40)) != 0 )
      {
        (*v9)(a1, a2);
        *((_DWORD *)a2 + 40) &= ~v10;
      }
LABEL_13:
      v2 &= ~v10;
    }
LABEL_10:
    ++v8;
    v9 += 5;
  }
  while ( v8 < 5 );
  *((_DWORD *)a2 + 41) = v2;
}
