/*
 * XREFs of PopEtEnergyTrackerFindDxgAdapters @ 0x1407E04A8
 * Callers:
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtEnergyTrackerFindDxgAdapters(__int64 a1)
{
  unsigned int v1; // esi
  char *Pool2; // rbx
  int i; // edi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r14
  _DWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  char *v12; // [rsp+40h] [rbp-20h]
  _DWORD v13[2]; // [rsp+48h] [rbp-18h] BYREF
  int *v14; // [rsp+50h] [rbp-10h]
  __int64 v15; // [rsp+58h] [rbp-8h]
  int v16; // [rsp+A8h] [rbp+48h] BYREF
  int v17; // [rsp+B0h] [rbp+50h] BYREF

  v1 = 0;
  v12 = 0LL;
  v11 = 0LL;
  if ( *(int *)(PopEtGlobals + 1096) >= 0 )
  {
    Pool2 = 0LL;
    for ( i = 0; i < 3; ++i )
    {
      *(_QWORD *)&v11 = 1LL;
      v12 = Pool2;
      *((_QWORD *)&v11 + 1) = v1;
      v5 = guard_dispatch_icall_no_overrides((__int64)&v11, 0LL);
      if ( v5 < 0 )
      {
        if ( v5 != -1073741789 )
          goto LABEL_23;
      }
      else if ( v12 )
      {
        v1 = DWORD2(v11);
        break;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456F50u);
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
        return;
      v1 = DWORD2(v11);
    }
    v6 = 0LL;
    v7 = 0LL;
    if ( v1 )
    {
      v8 = Pool2;
      do
      {
        v13[0] = *v8;
        v16 = 0;
        v14 = &v16;
        v15 = 4LL;
        v13[1] = 15;
        if ( (int)guard_dispatch_icall_no_overrides((__int64)v13, 0LL) >= 0 && (v16 & 0x800) != 0 )
        {
          if ( (_DWORD)v6 != (_DWORD)v7 )
          {
            v9 = 5 * v6;
            *(_OWORD *)&Pool2[4 * v9] = *(_OWORD *)v8;
            *(_DWORD *)&Pool2[4 * v9 + 16] = v8[4];
          }
          v6 = (unsigned int)(v6 + 1);
        }
        else
        {
          v17 = *v8;
          guard_dispatch_icall_no_overrides((__int64)&v17, 0LL);
          v10 = 5 * v7;
          *(_OWORD *)&Pool2[4 * v10] = 0LL;
          *(_DWORD *)&Pool2[4 * v10 + 16] = 0;
        }
        v7 = (unsigned int)(v7 + 1);
        v8 += 5;
      }
      while ( (unsigned int)v7 < v1 );
      if ( (_DWORD)v6 )
      {
        *(_DWORD *)(a1 + 648) = v6;
        *(_QWORD *)(a1 + 656) = Pool2;
        return;
      }
    }
LABEL_23:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x54456F50u);
  }
}
