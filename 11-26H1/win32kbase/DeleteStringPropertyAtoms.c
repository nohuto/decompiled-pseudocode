/*
 * XREFs of DeleteStringPropertyAtoms @ 0x1401AAE70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1400DE084 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400DE224 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserDeleteAtomFromAtomTable @ 0x14013F470 (UserDeleteAtomFromAtomTable.c)
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CF888 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     GetCurrentProcessAtomTable @ 0x1401D8A80 (GetCurrentProcessAtomTable.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall DeleteStringPropertyAtoms(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r8d
  _BYTE *v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct _RTL_ATOM_TABLE *CurrentProcessAtomTable; // rax
  int v10; // r8d
  bool v11; // zf
  struct _RTL_ATOM_TABLE *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ebp
  unsigned __int16 *v16; // rbx
  int v17; // r8d
  unsigned __int16 v18; // ax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  int v22; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v23[48]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v24[48]; // [rsp+58h] [rbp-50h] BYREF

  if ( (unsigned int)((__int64 (*)(void))Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline)() )
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
      (__int64)v23,
      *(_QWORD *)(a1 + 144),
      v3);
    v4 = v23;
    if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) + 4LL) )
    {
LABEL_32:
      SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v4);
      return;
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v23);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( !(unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v6)
    || (*(_DWORD *)(v7 + 808) & 0x4000000) == 0 )
  {
    v22 = 0;
    if ( (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v8) )
    {
      CurrentProcessAtomTable = (struct _RTL_ATOM_TABLE *)GetCurrentProcessAtomTable(&v22);
      v11 = (v22 & 0xFFFFFFFD) == 0;
    }
    else
    {
      CurrentProcessAtomTable = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
      v11 = CurrentProcessAtomTable == 0LL;
    }
    v12 = CurrentProcessAtomTable;
    if ( !v11 )
    {
      SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        (__int64)v24,
        *(_QWORD *)(a1 + 144),
        v10);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
      v15 = *(_DWORD *)(v14 + 4);
      if ( v15 )
      {
        v16 = (unsigned __int16 *)(v14 + 16);
        do
        {
          v11 = (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v13) == 0;
          v18 = v16[1];
          if ( v11 )
          {
            if ( (v18 & 2) == 0 || !*v16 || (v18 & 0x10) != 0 )
              goto LABEL_30;
            v19 = PsGetCurrentProcessWin32Process(v13);
            if ( v19 )
            {
              v13 = -*(_QWORD *)v19;
              v19 &= -(__int64)(*(_QWORD *)v19 != 0LL);
            }
            if ( (*(_DWORD *)(v19 + 808) & 0x4000000) != 0 )
              goto LABEL_30;
            v20 = PsGetCurrentProcessWin32Process(v13);
            if ( v20 )
            {
              v13 = -*(_QWORD *)v20;
              v20 &= -(__int64)(*(_QWORD *)v20 != 0LL);
            }
            if ( *((_DWORD *)v16 + 1) != *(_DWORD *)(v20 + 868) )
              goto LABEL_30;
            v21 = *v16;
          }
          else
          {
            if ( (v18 & 2) == 0 )
              goto LABEL_30;
            v21 = *v16;
            if ( !(_WORD)v21 || (v18 & 0x10) != 0 || *((_DWORD *)v16 + 1) != *(_DWORD *)(v7 + 868) )
              goto LABEL_30;
          }
          UserDeleteAtomFromAtomTable(v12, v21, v17);
          *v16 = 0;
LABEL_30:
          v16 += 8;
          --v15;
        }
        while ( v15 );
      }
      v4 = v24;
      goto LABEL_32;
    }
  }
}
