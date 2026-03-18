/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x14093D5E4
 * Callers:
 *     EtwpSetProviderTraitsKm @ 0x14093D31C (EtwpSetProviderTraitsKm.c)
 *     EtwpSetProviderTraitsUm @ 0x14093D410 (EtwpSetProviderTraitsUm.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x140520D7C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     strnlen @ 0x140537AA0 (strnlen.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwpAddRegEntryToGroup @ 0x14093B720 (EtwpAddRegEntryToGroup.c)
 *     TraitsCompare @ 0x14093D888 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14093D8C0 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A851FC (EtwpReleaseProviderTraitsReference.c)
 *     AddDecodeGuidToSessions @ 0x140AFD670 (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        PKGUARDED_MUTEX Mutex,
        __int64 a8)
{
  __int64 v8; // rdi
  void *v10; // r13
  __int16 v11; // r15
  __int64 v12; // rcx
  bool v13; // cf
  bool v14; // zf
  bool v15; // bp
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char v18; // r14
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  _OWORD *ProviderGroupFromTraits; // rax
  unsigned int v24; // eax
  unsigned int v25; // edx
  PKGUARDED_MUTEX v29[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = a5;
  v10 = (void *)a5;
  v11 = 0;
  v29[0] = Mutex;
  if ( a6 < 3 )
    goto LABEL_26;
  if ( *(unsigned __int16 *)(a5 + 28) != a6 )
    goto LABEL_26;
  v12 = (unsigned int)strnlen((const char *)(a5 + 30), a6 - 2) + 3;
  v13 = (unsigned int)v12 < a6;
  v14 = (_DWORD)v12 == a6;
  if ( (unsigned int)v12 > a6 )
    goto LABEL_26;
  while ( v13 )
  {
    if ( (int)v12 + 2 > a6 )
      goto LABEL_26;
    v25 = *(unsigned __int16 *)(v12 + a5 + 28);
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
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  v15 = 1;
  *(_DWORD *)(a5 + 24) = 1;
  ExAcquireFastMutex(Mutex);
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v17 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
      goto LABEL_27;
    v16 = a8 ^ v17;
  }
  else
  {
    v16 = *(_QWORD *)a8;
    v17 = *(_QWORD *)a8;
  }
  if ( !v16 )
  {
LABEL_27:
    v17 = 0LL;
    v18 = 0;
    goto LABEL_28;
  }
  v18 = 0;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = TraitsCompare(a5, v17);
      if ( v19 <= 0 )
      {
        if ( v19 >= 0 )
        {
          v24 = *(_DWORD *)(v17 + 24);
          v18 = 1;
          v8 = v17;
          if ( v24 + 1 >= v24 )
          {
            *(_DWORD *)(v17 + 24) = v24 + 1;
            goto LABEL_17;
          }
          v21 = -1073741675;
          KeReleaseGuardedMutex(v29[0]);
          goto LABEL_23;
        }
        v20 = *(_QWORD *)v17;
        if ( !*(_QWORD *)v17 )
        {
          v15 = 0;
          goto LABEL_16;
        }
      }
      else
      {
        v20 = *(_QWORD *)(v17 + 8);
        if ( !v20 )
          goto LABEL_16;
      }
      v17 = v20;
    }
  }
LABEL_28:
  v15 = 0;
LABEL_16:
  RtlRbInsertNodeEx(a8, v17, v15, a5);
  v10 = 0LL;
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 112), v8, 0LL) )
  {
    if ( v18 )
    {
      --*(_DWORD *)(v8 + 24);
    }
    else
    {
      RtlRbRemoveNode(a8, v8);
      v10 = (void *)v8;
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
    if ( *(_WORD *)(v8 + 28) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
    {
      v11 = (unsigned __int8)AddDecodeGuidToSessions(a4) != 0 ? 0x200 : 0;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)v29 = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits(v8 + 28);
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
