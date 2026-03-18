/*
 * XREFs of PopPreallocateHibernateMemory @ 0x1407D04CC
 * Callers:
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1404C3B80 (MmGetHighestPhysicalPage.c)
 *     HvlAllocateHibernateResources @ 0x140772C6C (HvlAllocateHibernateResources.c)
 *     MmObtainChargesToLockPagedPool @ 0x14077BA70 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 PopPreallocateHibernateMemory()
{
  unsigned __int64 HighestPhysicalPage; // rax
  unsigned int v1; // edx
  unsigned __int64 v2; // rdi
  unsigned int v3; // r8d
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 Pool2; // rax
  char *v16; // rbx
  __int64 v17; // [rsp+30h] [rbp-88h]
  _QWORD v18[16]; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+C0h] [rbp+8h]
  __int64 v20; // [rsp+C8h] [rbp+10h]

  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
    v17 = 102400LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage(0);
  v2 = (HighestPhysicalPage + 32) & 0xFFFFFFFFFFFFFFE0uLL;
  if ( v2 < HighestPhysicalPage || v2 > 0xFFFFFFFF )
    return 3221225626LL;
  v3 = (unsigned int)v2 >> 3;
  for ( i = 0LL; i < 2; ++i )
  {
    v5 = v1;
    v1 += v3;
    v18[i] = v5;
  }
  v19 = v1;
  v6 = (v1 + v3 + 7) & 0xFFFFFFF8;
  v7 = ((_DWORD)v6 + 247) & 0xFFFFFFF8;
  v8 = v7 + 2096;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
  {
    v9 = v8;
    v8 = v7 + 2152;
  }
  else
  {
    v9 = v18[5];
  }
  v10 = v8;
  v20 = v8;
  v11 = (v8 + 175) & 0xFFFFFFF8;
  LOBYTE(v10) = 1;
  v12 = v11;
  v13 = (v11 + 4159) & 0xFFFFF000;
  result = HvlAllocateHibernateResources(v10);
  if ( (int)result >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v16 = (char *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    if ( !MmObtainChargesToLockPagedPool(Pool2, ((_DWORD)v13 + 0x3FFF) & 0xFFFFF000) )
    {
      ExFreePoolWithTag(v16, 0x72626968u);
      return 3221225626LL;
    }
    qword_140F0FDC0 = (__int64)v16;
    qword_140F0FDB8 = ((_DWORD)v13 + 0x3FFF) & 0xFFFFF000;
    qword_140F0FDB0 = v16;
    qword_140F0FDC8 = (__int64)(v16 + 4096);
    if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
      qword_140F0FE28 = (__int64)&v16[v17];
    else
      qword_140F0FE28 = 0LL;
    *((_QWORD *)&xmmword_140F0FDD0 + 1) = &v16[v18[0]];
    *((_QWORD *)&xmmword_140F0FDE0 + 1) = &v16[v19];
    LODWORD(xmmword_140F0FDD0) = v2;
    LODWORD(xmmword_140F0FDF0) = v2;
    *((_QWORD *)&xmmword_140F0FDF0 + 1) = &v16[v18[1]];
    LODWORD(xmmword_140F0FDE0) = v2;
    qword_140F0FE00 = (__int64)&v16[v6];
    if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] == 2 )
      qword_140F0FE30 = (__int64)&v16[v9];
    else
      qword_140F0FE30 = 0LL;
    qword_140F0FE08 = &v16[v12];
    qword_140F0FE10 = &v16[v13];
    qword_140F0FE18 = &v16[v20];
    qword_140F0FE20 = (__int64)&v16[v7];
    return 0LL;
  }
  return result;
}
