/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x14000CD34
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C4900 (-vDeleteREGION@REGION@@AEAAXAEBVRustAutoHotpatchLockSH@@@Z.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x14000D310 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(void *a1)
{
  __int64 *v2; // r14
  struct W32_PUSH_LOCK *v3; // r12
  __int64 *i; // rsi
  __int64 *v5; // r15
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  ULONG v10; // edi
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  _QWORD *v14; // rax

  v2 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 56LL);
  if ( v2 && a1 )
  {
    if ( *((_BYTE *)v2 + 36) )
    {
      memset(a1, 0, 0x70uLL);
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)v2[3], a1);
    }
    else
    {
      v3 = (struct W32_PUSH_LOCK *)v2[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v3, 0LL);
      for ( i = (__int64 *)*v2; ; i = (__int64 *)*i )
      {
        if ( i == v2 )
        {
          W32ReleasePushLockShared(v3);
          KeBugCheckEx(0x164u, 0x21uLL, (ULONG_PTR)a1, 0LL, 0LL);
        }
        v5 = (__int64 *)i[4];
        v6 = v5[1] ^ v5[2];
        if ( (unsigned __int64)a1 >= v6 && (unsigned __int64)a1 < v6 + 28672 )
          break;
      }
      v7 = (((unsigned __int16)a1 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v8 = (v7 + (((unsigned __int64)((unsigned __int16)a1 & 0xFFF) - v7) >> 1)) >> 6;
      if ( ((unsigned __int16)a1 & 0xFFF) != 112 * v8 )
        KeBugCheckEx(0x164u, 0x22uLL, (ULONG_PTR)a1, 0LL, 0LL);
      if ( !RtlTestBit(
              (PRTL_BITMAP)(v5[3] ^ v5[2]),
              v8 + 36 * (((unsigned int)a1 - ((unsigned int)v5[2] ^ *((_DWORD *)v5 + 2))) >> 12)) )
        KeBugCheckEx(0x164u, 0x23uLL, (ULONG_PTR)a1, 0LL, 0LL);
      v9 = *v5;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = ((unsigned __int16)a1 & 0xFFFu) / 0x70
          + 36 * ((unsigned int)((_DWORD)a1 - (*((_DWORD *)v5 + 4) ^ *((_DWORD *)v5 + 2))) >> 12);
      RtlClearBit((PRTL_BITMAP)(v5[2] ^ v5[3]), v10);
      memset(a1, 0, 0x70uLL);
      *((_DWORD *)v5 + 8) = v10;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      if ( i == (__int64 *)*v2 )
      {
        ExReleasePushLockSharedEx(v3, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v3, 0LL);
        KeLeaveCriticalRegion();
        v11 = v2[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v11, 0LL);
        v12 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v13 = (__int64 **)i[1], *v13 != i)
          || (*v13 = v12, v12[1] = (__int64)v13, v14 = (_QWORD *)*v2, *(__int64 **)(*v2 + 8) != v2) )
        {
          __fastfail(3u);
        }
        *i = (__int64)v14;
        i[1] = (__int64)v2;
        v14[1] = i;
        *v2 = (__int64)i;
        ExReleasePushLockExclusiveEx(v11, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
}
