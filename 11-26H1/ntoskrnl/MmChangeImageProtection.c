/*
 * XREFs of MmChangeImageProtection @ 0x140AD2CC0
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiSetImageProtection @ 0x14038D6E0 (MiSetImageProtection.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     VslValidateDynamicCodePages @ 0x140AD2F54 (VslValidateDynamicCodePages.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // rsi
  unsigned __int64 Flink; // rdx
  __int64 Flink_low; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  __int64 BaseLoaderPortion; // rax
  _QWORD *v19; // r12
  __int64 i; // r14
  _QWORD *v21; // rcx
  __int64 v23; // rdi
  _DWORD v24[14]; // [rsp+20h] [rbp-38h] BYREF

  v24[0] = 0;
  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  v7 = a3;
  if ( a3 != (unsigned int)a3 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = v8 >> 12;
  v10 = MiLockLoadedDataTableEntryIfNecessary(*(_QWORD *)(a1 + 32), v24);
  v11 = (__int64)v10;
  if ( v10 )
  {
    Flink = (unsigned __int64)v10[3].Flink;
    Flink_low = LODWORD(v10[4].Flink);
    v14 = a2 + a3;
    v15 = Flink + Flink_low;
    if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v15
      || a2 < Flink
      || v14 > v15
      || v14 - 1 < a2 )
    {
      v17 = -1073741800;
    }
    else
    {
      v16 = *(_DWORD *)(v11 + 104);
      if ( (v16 & 0x80000) != 0 )
      {
        v17 = -1073741757;
      }
      else
      {
        v17 = 0;
        *(_DWORD *)(v11 + 104) = v16 | 0x80000;
        if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(Flink) )
        {
LABEL_26:
          v17 = -1073741800;
        }
        else
        {
          BaseLoaderPortion = MiGetBaseLoaderPortion(v11);
          v19 = (_QWORD *)(a1 + 48);
          *(_DWORD *)(BaseLoaderPortion + 184) |= 0x100000u;
          for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
          {
            v21 = (_QWORD *)(48LL * v19[i] - 0x220000000000LL);
            if ( (__int64)v21[5] < 0 )
              goto LABEL_26;
            if ( (MiGetPagePrivilege(v21, 0LL, 0LL) & 0x40) != 0 )
            {
              v17 = -1073741755;
              goto LABEL_20;
            }
          }
          MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          if ( a4 == 1 )
          {
            if ( (MiFlags & 0x10000) == 0 || (v17 = VslValidateDynamicCodePages(a1, a2, v7), v17 >= 0) )
            {
              MiSetImageProtection(v11, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
              v17 = 0;
            }
          }
          else if ( (MiFlags & 0x20000) != 0 && v9 )
          {
            v23 = v9;
            do
            {
              MiClearPfnImageVerified(48LL * *v19++ - 0x220000000000LL, 9LL);
              --v23;
            }
            while ( v23 );
          }
        }
LABEL_20:
        *(_DWORD *)(v11 + 104) &= ~0x80000u;
      }
    }
    if ( v24[0] )
      MmUnlockLoadedDataTableEntry(v11);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v17;
}
