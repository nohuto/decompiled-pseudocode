/*
 * XREFs of sub_140017A20 @ 0x140017A20
 * Callers:
 *     sub_1400160C0 @ 0x1400160C0 (sub_1400160C0.c)
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_140016AA8 @ 0x140016AA8 (sub_140016AA8.c)
 *     sub_140022EC0 @ 0x140022EC0 (sub_140022EC0.c)
 *     sub_14002B390 @ 0x14002B390 (sub_14002B390.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003EC20 @ 0x14003EC20 (sub_14003EC20.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_14008562C @ 0x14008562C (sub_14008562C.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400BC450 @ 0x1400BC450 (sub_1400BC450.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_140017A20(__int64 a1, int a2)
{
  KIRQL v2; // si
  __int64 v5; // rcx
  struct _MDL *v6; // rcx
  __int64 v7; // rax
  int v8; // ebp
  bool v9; // bp
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  void (__fastcall *v13)(__int64, _QWORD, bool); // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  void (__fastcall *v18)(__int64, __int64, _QWORD); // rax
  struct _MDL *v19; // rcx

  if ( a1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v7 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v7 + 2) == 40 )
        v8 = *(_DWORD *)(v7 + 24);
      else
        v8 = *(_DWORD *)(v7 + 12);
      v9 = (v8 & 0x40) == 0;
      if ( dword_140168D84 )
      {
        v19 = *(struct _MDL **)(a1 + 120);
        if ( v19 )
        {
          MmProtectMdlSystemAddress(v19, 4u);
          MmUnlockPages(*(PMDL *)(a1 + 120));
          IoFreeMdl(*(PMDL *)(a1 + 120));
          *(_QWORD *)(a1 + 120) = 0LL;
        }
      }
      if ( !a2 )
        v2 = KfRaiseIrql(2u);
      v10 = (__int64 *)(*(_QWORD *)(a1 + 216) + 880LL);
      if ( *(_QWORD *)(a1 + 216) != -880LL )
      {
        v11 = *v10;
        if ( *v10 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 )
          {
            v13 = *(void (__fastcall **)(__int64, _QWORD, bool))(v12 + 96);
            if ( v13 )
              v13(v11, *(_QWORD *)(a1 + 112), v9);
          }
        }
      }
      v14 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v14 )
      {
        v15 = (__int64 *)(*(_QWORD *)(a1 + 216) + 880LL);
        if ( *(_QWORD *)(a1 + 216) != -880LL )
        {
          v16 = *v15;
          if ( *v15 )
          {
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              v18 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v17 + 96);
              if ( v18 )
                v18(v16, v14, 0LL);
            }
          }
        }
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v2);
    }
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v5 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v5);
      IoFreeMdl(*(PMDL *)(a1 + 104));
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 104) = 0LL;
    }
    v6 = *(struct _MDL **)(a1 + 136);
    if ( v6 )
    {
      MmUnlockPages(v6);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
