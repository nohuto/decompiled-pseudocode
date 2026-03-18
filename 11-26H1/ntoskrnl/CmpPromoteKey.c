/*
 * XREFs of CmpPromoteKey @ 0x1408B0E74
 * Callers:
 *     CmDeleteLayeredKey @ 0x140446A10 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1408B09D8 (CmSetKeyFlags.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1408BE00C (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140B53BB0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockKcbStack @ 0x1408BC3E0 (CmpUnlockKcbStack.c)
 *     HvLockHiveFlusherShared @ 0x1408C3818 (HvLockHiveFlusherShared.c)
 *     CmpIsKeyStackDeleted @ 0x1408CECF0 (CmpIsKeyStackDeleted.c)
 *     HvUnlockHiveFlusherShared @ 0x1408CFFE8 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408D0B78 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStack @ 0x140981BC0 (CmpStartKcbStack.c)
 *     CmpCleanupKcbStack @ 0x140982520 (CmpCleanupKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPopulateKcbStack @ 0x140A330B0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  unsigned __int16 v3; // di
  __int64 v4; // rdx
  int started; // ebx
  __int64 v6; // rbx
  bool v7; // di
  unsigned int v8; // r13d
  __int64 Pool; // rax
  __int64 v10; // r14
  __int64 i; // rsi
  _OWORD *v12; // r15
  _OWORD *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  _OWORD *v17; // rax
  __int64 v19; // r8
  _OWORD v20[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 KcbAtLayerHeight; // [rsp+B0h] [rbp+48h]
  struct _PRIVILEGE_SET *Privileges; // [rsp+C8h] [rbp+60h]

  v3 = *(_WORD *)(a1 + 2);
  memset(v20, 0, sizeof(v20));
  WORD1(v20[0]) = -1;
  memset(v21, 0, sizeof(v21));
  WORD1(v21[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKcbStack(v20, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStack(v21, v3);
    if ( started >= 0 )
    {
      v6 = KcbAtLayerHeight;
      v7 = 1;
      v8 = *(unsigned __int16 *)(KcbAtLayerHeight + 12) + 1;
      Pool = CmpAllocatePool(0x100uLL);
      Privileges = (struct _PRIVILEGE_SET *)Pool;
      if ( !Pool )
      {
        started = -1073741670;
        goto LABEL_15;
      }
      LODWORD(v10) = v8;
      for ( i = KcbAtLayerHeight; !_bittest((const signed __int32 *)(i + 184), 0x12u); i = *(_QWORD *)(i + 72) )
      {
        v10 = *(unsigned __int16 *)(i + 12);
        *(_QWORD *)(Pool + 8 * v10) = i;
      }
      v12 = v20;
      v13 = v21;
      CmpPopulateKcbStack(v21, i);
      CmpLockKcbStackTopExclusiveRestShared(v21);
      if ( i != KcbAtLayerHeight )
      {
        while ( 1 )
        {
          if ( (unsigned int)v10 >= v8 )
            goto LABEL_12;
          v14 = *((_QWORD *)&Privileges->PrivilegeCount + (unsigned int)v10);
          CmpPopulateKcbStack(v12, v14);
          CmpLockKcbStackTopExclusiveRestShared(v15);
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v12, 0LL) )
          {
            started = -1073741444;
LABEL_28:
            CmpUnlockKcbStack(v12);
            goto LABEL_13;
          }
          v16 = *(_DWORD *)(v14 + 40);
          if ( v14 == v6 )
          {
            if ( v16 != -1 && !a2 )
              goto LABEL_11;
            HvLockHiveFlusherShared(*(_QWORD *)(v14 + 32));
            LOBYTE(v19) = a2;
          }
          else
          {
            if ( v16 != -1 )
              goto LABEL_11;
            HvLockHiveFlusherShared(*(_QWORD *)(v14 + 32));
            v19 = 0LL;
          }
          started = CmpPromoteSingleKeyFromKcbStacks(v13, v12, v19);
          HvUnlockHiveFlusherShared(*(_QWORD *)(v14 + 32));
          if ( started < 0 )
            goto LABEL_28;
          v6 = KcbAtLayerHeight;
LABEL_11:
          CmpUnlockKcbStack(v13);
          v17 = v12;
          LODWORD(v10) = v10 + 1;
          v12 = v13;
          v13 = v17;
        }
      }
      if ( !a2
        || (HvLockHiveFlusherShared(*(_QWORD *)(i + 32)),
            started = CmpFullPromoteHiveRootFromKcbStack((__int64)v21),
            HvUnlockHiveFlusherShared(*(_QWORD *)(i + 32)),
            started >= 0) )
      {
LABEL_12:
        started = 0;
        v7 = a3 == 0;
LABEL_13:
        if ( !v7 )
          goto LABEL_14;
      }
      CmpUnlockKcbStack(v13);
LABEL_14:
      CmSiFreeMemory(Privileges);
    }
  }
LABEL_15:
  CmpCleanupKcbStack(v20);
  CmpCleanupKcbStack(v21);
  return (unsigned int)started;
}
