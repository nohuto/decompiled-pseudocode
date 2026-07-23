/*
 * XREFs of HalpInterruptMarkProcessorStarted @ 0x14057EE64
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptMarkProcessorStarted(int a1)
{
  char v2; // r14
  char v3; // r10
  unsigned int v4; // r11d
  unsigned int Group; // ebp
  unsigned __int8 GroupIndex; // r15
  unsigned int v7; // edi
  ULONG_PTR v8; // r9
  char v9; // bl
  unsigned __int64 v10; // r8
  int v11; // edx
  unsigned int i; // r8d
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // [rsp+38h] [rbp+10h]

  HIBYTE(v15) = 0;
  if ( HalpInterruptProcessorStateInitialized )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    Group = KeGetCurrentPrcb()->Group;
    LOWORD(v15) = Group;
    GroupIndex = KeGetCurrentPrcb()->GroupIndex;
    BYTE2(v15) = GroupIndex;
    v7 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
    if ( (_DWORD)HalpInterruptProcessorCount )
    {
      while ( 1 )
      {
        v8 = HalpInterruptProcessorState;
        v9 = 0;
        v10 = (unsigned __int64)v4 << 6;
        if ( *(_BYTE *)(v10 + HalpInterruptProcessorState + 12) || !(_WORD)Group && !GroupIndex )
          v9 = 1;
        v11 = (unsigned int)HalpInterruptGicVersion < 3
            ? *(_DWORD *)(v10 + HalpInterruptProcessorState)
            : (*(_QWORD *)(v10 + HalpInterruptProcessorState + 48) >> 8) ^ (*(_DWORD *)(v10
                                                                                      + HalpInterruptProcessorState
                                                                                      + 48) ^ (*(_QWORD *)(v10 + HalpInterruptProcessorState + 48) >> 8)) & 0xFFFFFF;
        if ( v9 && v11 == a1 )
          break;
        if ( *(_BYTE *)(v10 + HalpInterruptProcessorState + 13)
          && (*(_DWORD *)(v10 + HalpInterruptProcessorState) & v7) == (a1 & v7) )
        {
          v3 = 1;
        }
        if ( v2 )
          goto LABEL_22;
LABEL_23:
        if ( ++v4 >= (unsigned int)HalpInterruptProcessorCount )
          goto LABEL_24;
      }
      if ( !*(_BYTE *)(v10 + HalpInterruptProcessorState + 13) )
        _InterlockedAdd(&HalpInterruptProcessorsStarted, 1u);
      *(_BYTE *)(v10 + HalpInterruptProcessorState + 15) = 1;
      *(_BYTE *)(v10 + v8 + 13) = 1;
      *(_DWORD *)(v10 + v8 + 16) = v15;
      *(_DWORD *)(v10 + v8 + 20) = KeGetPcr()->Prcb.Number;
      if ( !(_WORD)Group && !GroupIndex )
        *(_BYTE *)(v10 + v8 + 12) = 1;
      v2 = 1;
LABEL_22:
      if ( v3 )
        goto LABEL_24;
      goto LABEL_23;
    }
LABEL_24:
    for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
    {
      v13 = HalpInterruptDynamicProcessorState;
      v14 = (unsigned __int64)i << 6;
      if ( *(_BYTE *)(v14 + HalpInterruptDynamicProcessorState + 12)
        && *(_DWORD *)(v14 + HalpInterruptDynamicProcessorState) == a1 )
      {
        *(_BYTE *)(v14 + HalpInterruptDynamicProcessorState + 13) = 1;
        *(_DWORD *)(v14 + v13 + 16) = v15;
        *(_DWORD *)(v14 + v13 + 20) = KeGetPcr()->Prcb.Number;
        break;
      }
    }
    if ( !v3 )
      ++HalpInterruptPackagesStarted;
    if ( Group > HalpInterruptMaxGroupStarted )
      HalpInterruptMaxGroupStarted = Group;
  }
}
