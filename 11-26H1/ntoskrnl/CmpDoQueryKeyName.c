/*
 * XREFs of CmpDoQueryKeyName @ 0x1402606D0
 * Callers:
 *     CmpQueryKeyName @ 0x140A80FE0 (CmpQueryKeyName.c)
 * Callees:
 *     CmpGetThreadInfo @ 0x140262070 (CmpGetThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmPostCallbackNotification @ 0x1408CF960 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1408D02C0 (CmpCallCallBacks.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char a6)
{
  ULONG_PTR v8; // r15
  UNICODE_STRING *p_UnicodeString; // r13
  char v10; // r14
  char v11; // r12
  char v12; // si
  struct _KTHREAD *CurrentThread; // rcx
  _KAFFINITY_EX *UserAffinity; // rax
  struct _KTHREAD *v15; // rax
  int v16; // r8d
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  void *v20; // r9
  wchar_t *Buffer; // r10
  unsigned int v22; // r15d
  unsigned int v23; // r15d
  char v24; // al
  _DWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v29; // [rsp+38h] [rbp-140h]
  ULONG_PTR v30; // [rsp+48h] [rbp-130h]
  __int64 v32; // [rsp+50h] [rbp-128h]
  __m128i v33; // [rsp+70h] [rbp-108h]
  _QWORD v34[2]; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v35; // [rsp+90h] [rbp-E8h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v37[24]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+C8h] [rbp-B0h]
  __int128 v39; // [rsp+D0h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-98h]
  __int128 v41; // [rsp+F0h] [rbp-88h]
  __int64 v42; // [rsp+100h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp-70h] BYREF

  v38 = a1;
  v35.m128i_i64[0] = a5;
  *(_OWORD *)&v37[8] = 0LL;
  UnicodeString = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v33.m128i_i32[1] = 0;
  v8 = 0LL;
  p_UnicodeString = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( UserAffinity )
  {
    *(_OWORD *)v37 = *(_OWORD *)&UserAffinity->Count;
    *(_QWORD *)&v37[16] = UserAffinity->StaticBitmap[1];
  }
  else
  {
    *(_OWORD *)&v37[8] = 0LL;
  }
  *(_QWORD *)v37 = UserAffinity;
  CurrentThread[1].UserAffinity = (_KAFFINITY_EX *)v37;
  v34[1] = v34;
  v34[0] = v34;
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  if ( !HIDWORD(WheapPfaLock.StateSaveArea) || *(_DWORD *)(CmpGetThreadInfo() + 16) )
    goto LABEL_7;
  *(_QWORD *)&v39 = a1;
  *((_QWORD *)&v39 + 1) = a3;
  LODWORD(v40) = a4;
  *((_QWORD *)&v40 + 1) = v35.m128i_i64[0];
  v17 = CmpCallCallBacks(47, (unsigned int)&v39, v16, 48, a1, (__int64)v34);
  if ( v17 >= 0 )
  {
    v11 = 1;
LABEL_7:
    CmpAttachToRegistryProcess(&ApcState);
    v12 = 1;
    CmpLockRegistry();
    v8 = *(_QWORD *)(a1 + 8);
    v30 = v8;
    if ( (v8 & 1) != 0 )
    {
      v8 ^= 1uLL;
      v30 = v8;
    }
    else if ( (*(_BYTE *)(a1 + 48) & 2) == 0 )
    {
      CmpLockKcbShared(v8);
      v10 = 1;
    }
    v18 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v18 >= 0 )
    {
      if ( CmpVEEnabled && (*(_DWORD *)(v8 + 184) & 0x1000000) != 0 )
      {
        p_UnicodeString = &UnicodeString;
        v18 = 0;
        if ( (int)CmVirtualKCBToRealPath(v8, &UnicodeString) < 0 )
          p_UnicodeString = 0LL;
      }
      else
      {
        p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v8);
        v18 = 0;
      }
      if ( p_UnicodeString )
      {
        if ( v10 )
        {
          CmpUnlockKcb(v8);
          v10 = 0;
        }
        CmpUnlockRegistry();
        CmpDetachFromRegistryProcess(&ApcState);
        v12 = 0;
        v19 = a4;
        if ( a4 <= 0x10 )
        {
          *(_DWORD *)v35.m128i_i64[0] = p_UnicodeString->Length + 18;
          v18 = -1073741820;
        }
        else
        {
          v20 = (void *)(a3 + 16);
          v32 = a3 + 16;
          Buffer = p_UnicodeString->Buffer;
          v22 = p_UnicodeString->Length + 2;
          *(_DWORD *)v35.m128i_i64[0] = p_UnicodeString->Length + 18;
          if ( v22 <= (unsigned __int64)(v19 - 16) || (v22 = v19 - 16, v18 = -1073741820, (unsigned int)(v19 - 16) >= 2) )
          {
            v23 = v22 - 2;
            if ( a6 )
              RtlCopyToUser(v20, Buffer, v23);
            else
              RtlCopyVolatileMemory(v20, Buffer, v23);
            v24 = a6;
            if ( a6 )
            {
              RtlWriteUShortToUser(v32 + 2 * ((unsigned __int64)v23 >> 1), 0LL);
              v24 = a6;
            }
            else
            {
              *(_WORD *)(v32 + 2 * ((unsigned __int64)v23 >> 1)) = 0;
            }
            v33.m128i_i16[0] = v23;
            v33.m128i_i16[1] = v23;
            v33.m128i_i64[1] = a3 + 16;
            v35 = v33;
            v25 = (_DWORD *)a3;
            v26 = (_QWORD *)(a3 + 8);
            v29 = a3 + 8;
            if ( v24 )
            {
              RtlWriteULongToUser(v25, (unsigned int)_mm_cvtsi128_si32(v33));
              RtlWriteULong64ToUser(v29, v32);
            }
            else
            {
              *v25 = v33.m128i_i32[0];
              *v26 = v32;
            }
            v8 = v30;
          }
          else
          {
            v8 = v30;
          }
        }
      }
      else
      {
        v18 = -1073741670;
      }
    }
    goto LABEL_29;
  }
  v18 = 0;
  if ( v17 != -1073740541 )
    v18 = v17;
LABEL_29:
  if ( v10 )
    CmpUnlockKcb(v8);
  if ( v12 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( v11 )
    CmPostCallbackNotification(48, a1, v18, (unsigned int)&v39, (__int64)v34);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)v37;
  return (unsigned int)v18;
}
