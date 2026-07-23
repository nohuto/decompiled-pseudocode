/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x140A62010
 * Callers:
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x1404776A4 (SepTokenPrivilegeCount.c)
 *     SepSidInSidAndAttributes @ 0x140A621C8 (SepSidInSidAndAttributes.c)
 *     RtlIsElevatedRid @ 0x140A62260 (RtlIsElevatedRid.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // r12d
  char v7; // r15
  char v8; // bp
  unsigned int v9; // esi
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      v14 = 16LL * v9;
      if ( (*(_DWORD *)(v14 + v13 + 8) & 0x30) == 0
        && (unsigned __int8)SepSidInSidAndAttributes(a4, v21, a3, *(_QWORD *)(v14 + v13)) )
      {
        goto LABEL_13;
      }
      if ( (a2 & 4) != 0 && RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(v14 + *(_QWORD *)(a1 + 152))) )
        break;
LABEL_5:
      if ( ++v9 >= *(_DWORD *)(a1 + 124) )
      {
        v6 = 0;
        goto LABEL_7;
      }
    }
    v7 = 1;
LABEL_13:
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + v14 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + v14 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v9 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_5;
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 200) & 0x800) == 0 )
    v6 = SepTokenPrivilegeCount(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v8 = 1;
      v18 = 0x602880000LL;
      if ( !v7 )
        v18 = 0xFFFFFFEEDFE9F97BuLL;
      v19 = v18 & *(_QWORD *)(a1 + 72);
      v20 = v18 & *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 80) &= v18;
      *(_QWORD *)(a1 + 64) = v20;
      *(_QWORD *)(a1 + 72) = v19;
    }
    if ( a5 )
    {
      v17 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v17;
      }
      while ( v17 );
    }
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x800) == 0 && (unsigned int)SepTokenPrivilegeCount(a1) < v6 )
    *(_DWORD *)(a1 + 200) |= 0x800u;
  return v8;
}
