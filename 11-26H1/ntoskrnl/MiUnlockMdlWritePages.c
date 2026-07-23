/*
 * XREFs of MiUnlockMdlWritePages @ 0x14031F6AC
 * Callers:
 *     MiUnlockFlushMdl @ 0x1403CB7C4 (MiUnlockFlushMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiInsertPagesInList @ 0x1402AF3C0 (MiInsertPagesInList.c)
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 *     MiAddPageToInsertList @ 0x140320F90 (MiAddPageToInsertList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiUnlockMdlWritePages(_DWORD *a1, unsigned int *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  _DWORD *v12; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v19; // [rsp+50h] [rbp-88h]
  __int64 v20; // [rsp+88h] [rbp-50h]
  int v21; // [rsp+A0h] [rbp-38h]

  memset_0(v18, 0, 0x78uLL);
  v4 = *a2;
  v5 = a1[11];
  v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFFBDuLL;
  v7 = (unsigned int)a1[10];
  v21 = 1;
  v20 = 0LL;
  if ( (int)v4 < 0 )
    v6 = *(_QWORD *)&CLFS_LSN_NULL_EXT | 0x43LL;
  v8 = a1[8] + v5;
  v17 = v6;
  v9 = v8 & 0xFFF;
  v18[0] = 0x3FFFFFFFFFLL;
  v10 = (unsigned __int64)(v9 + v7 + 4095) >> 12;
  v11 = 0LL;
  v18[1] = 0x3FFFFFFFFFLL;
  v12 = a1 + 12;
  v19 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, v4);
  }
  for ( ; v10; --v10 )
  {
    MiAddPageToInsertList(v18, &v17);
    if ( (++v11 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      MiInsertPagesInList(v18);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v16 = KeGetCurrentIrql();
      if ( (_BYTE)v16 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = 2;
        KiRaiseIrqlProcessIrqlFlags(v16, v15);
      }
    }
    v12 += 2;
  }
  MiInsertPagesInList(v18);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
