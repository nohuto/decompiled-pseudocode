/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x140919184
 * Callers:
 *     EtwpSetProviderTraitsKm @ 0x140918EBC (EtwpSetProviderTraitsKm.c)
 *     EtwpSetProviderTraitsUm @ 0x140918FB0 (EtwpSetProviderTraitsUm.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140523420 (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     strnlen @ 0x140539F20 (strnlen.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 *     TraitsCompare @ 0x140919428 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140919460 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1409BE87C (EtwpReleaseProviderTraitsReference.c)
 *     AddDecodeGuidToSessions @ 0x140AFF1E0 (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PKGUARDED_MUTEX Mutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  PRTL_BALANCED_NODE v10; // r13
  __int16 v11; // r15
  __int64 v12; // rcx
  bool v13; // cf
  bool v14; // zf
  BOOLEAN v15; // bp
  unsigned __int64 v16; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  char v18; // r14
  int v19; // eax
  _RTL_BALANCED_NODE *v20; // rax
  unsigned int v21; // ebx
  _OWORD *ProviderGroupFromTraits; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  PKGUARDED_MUTEX v29[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Node;
  v10 = Node;
  v11 = 0;
  v29[0] = Mutex;
  if ( a6 < 3 )
    goto LABEL_26;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_26;
  v12 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v13 = (unsigned int)v12 < a6;
  v14 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_26;
  while ( v13 )
  {
    if ( (int)v12 + 2 > a6 )
      goto LABEL_26;
    v25 = *(unsigned __int16 *)((char *)&Node[1].Left + v12 + 4);
    if ( v25 < 3 )
      goto LABEL_26;
    v12 = v25 + (unsigned int)v12;
    v13 = (unsigned int)v12 < a6;
    v14 = (_DWORD)v12 == a6;
  }
  if ( !v14 )
  {
LABEL_26:
    v21 = -1073741566;
    goto LABEL_23;
  }
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v15 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(Mutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
      goto LABEL_27;
    v16 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v16 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v16 )
  {
LABEL_27:
    Root = 0LL;
    v18 = 0;
    goto LABEL_28;
  }
  v18 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      v19 = TraitsCompare(Node, Root);
      if ( v19 <= 0 )
      {
        if ( v19 >= 0 )
        {
          v24 = (unsigned int)Root[1].Children[0];
          v18 = 1;
          v8 = Root;
          if ( v24 + 1 >= v24 )
          {
            LODWORD(Root[1].Children[0]) = v24 + 1;
            goto LABEL_17;
          }
          v21 = -1073741675;
          KeReleaseGuardedMutex(v29[0]);
          goto LABEL_23;
        }
        v20 = Root->Children[0];
        if ( !Root->Children[0] )
        {
          v15 = 0;
          goto LABEL_16;
        }
      }
      else
      {
        v20 = Root->Children[1];
        if ( !v20 )
          goto LABEL_16;
      }
      Root = v20;
    }
  }
LABEL_28:
  v15 = 0;
LABEL_16:
  RtlRbInsertNodeEx(Tree, Root, v15, Node);
  v10 = 0LL;
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 112), (signed __int64)v8, 0LL) )
  {
    if ( v18 )
    {
      --LODWORD(v8[1].Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      v10 = v8;
    }
    v21 = -1073741823;
  }
  else
  {
    v21 = 0;
  }
  KeReleaseGuardedMutex(v29[0]);
  if ( !v21 )
  {
    Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline();
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      v11 = (unsigned __int8)AddDecodeGuidToSessions(a4) != 0 ? 0x200 : 0;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)v29 = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits((char *)&v8[1].Left + 4);
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)v29 = *ProviderGroupFromTraits;
        v21 = EtwpAddRegEntryToGroup(a4, v29, a1, (struct _KLOCK_ENTRIES *)a2, a3);
        if ( v21 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_23;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x100);
  }
LABEL_23:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v21;
}
