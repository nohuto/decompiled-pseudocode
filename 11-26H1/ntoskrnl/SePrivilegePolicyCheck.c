/*
 * XREFs of SePrivilegePolicyCheck @ 0x1403AB520
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSinglePrivilegeCheck @ 0x1403AB750 (SepSinglePrivilegeCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(
        _DWORD *a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned int v6; // ebx
  char v7; // r12
  char v8; // r15
  char v9; // bp
  int v12; // edi
  unsigned __int64 LowPart; // r8
  __int64 v15; // rdx
  _DWORD *v16; // r10
  __int64 v17; // r11
  _DWORD *v18; // r10
  int *Pool2; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  signed __int32 v23[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v12 = 0;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  if ( (*a1 & 0x1000000) != 0 )
  {
    LowPart = SeSecurityPrivilege.LowPart;
    v25[0] = 0LL;
    v24 = 0LL;
    if ( a6 )
    {
      _InterlockedExchange64(v25, *(_QWORD *)(a4 + 72));
      _InterlockedExchange64(&v24, *(_QWORD *)(a4 + 64));
      v15 = v25[0] & v24;
      _InterlockedOr(v23, 0);
      if ( !_bittest64(&v15, LowPart) )
        return 3221225569LL;
    }
    *a1 &= ~0x1000000u;
    v12 = 1;
    *a2 |= 0x1000000u;
    v9 = 1;
  }
  if ( (*a1 & 0x80000) != 0 )
  {
    if ( (unsigned __int8)SepSinglePrivilegeCheck(SeTakeOwnershipPrivilege, a4, a6) )
    {
      *v16 &= ~0x80000u;
      ++v12;
      *a2 |= 0x80000u;
      v7 = 1;
    }
    else if ( (unsigned __int8)SepSinglePrivilegeCheck(SeRelabelPrivilege, v17, a6) )
    {
      *v18 &= ~0x80000u;
      ++v12;
      *a2 |= 0x80000u;
      v8 = 1;
    }
  }
  if ( !v12 )
    return 0LL;
  Pool2 = (int *)ExAllocatePool2(0x100uLL);
  *(_QWORD *)a5 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v12;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v7 )
    {
      v6 = 1;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v9 )
    {
      v20 = v6++;
      v21 = 12 * v20;
      *(LUID *)(v21 + *(_QWORD *)a5 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(v21 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    if ( v8 )
    {
      v22 = 12LL * v6;
      *(_QWORD *)(v22 + *(_QWORD *)a5 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(v22 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
