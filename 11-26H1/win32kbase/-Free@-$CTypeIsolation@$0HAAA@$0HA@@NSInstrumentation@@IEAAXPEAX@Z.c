/*
 * XREFs of ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400E6B20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x140134FC4 (-HMFreeIsolatedType@@YAXEPEAX@Z.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Free(__int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // r12
  __int64 *i; // r15
  __int64 *v6; // rbp
  __int64 v7; // r8
  ULONG_PTR v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  ULONG v12; // ebx
  __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  _QWORD *v16; // rax

  if ( a2 )
  {
    if ( *((_BYTE *)a1 + 36) )
    {
      memset((void *)a2, 0, 0x70uLL);
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)a1[3], (PVOID)a2);
    }
    else
    {
      v4 = a1[2];
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4, 0LL);
      for ( i = (__int64 *)*a1; ; i = (__int64 *)*i )
      {
        if ( i == a1 )
        {
          ExReleasePushLockSharedEx(v4, 0LL);
          KeLeaveCriticalRegion();
          KeBugCheckEx(0x164u, 0x21uLL, a2, 0LL, 0LL);
        }
        v6 = (__int64 *)i[4];
        v7 = v6[1];
        v8 = v7 ^ v6[2];
        if ( a2 >= v8 && a2 < v8 + 28672 )
          break;
      }
      v9 = ((a2 & 0xFFF) * (unsigned __int128)0x2492492492492493uLL) >> 64;
      v10 = (v9 + (((a2 & 0xFFF) - v9) >> 1)) >> 6;
      if ( (a2 & 0xFFF) != 112 * v10 )
        KeBugCheckEx(0x164u, 0x22uLL, a2, 0LL, 0LL);
      if ( !RtlTestBit(
              (PRTL_BITMAP)(v6[3] ^ v6[2]),
              v10 + 36 * (((unsigned int)a2 - ((unsigned int)v7 ^ (unsigned int)v6[2])) >> 12)) )
        KeBugCheckEx(0x164u, 0x23uLL, a2, 0LL, 0LL);
      v11 = *v6;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11, 0LL);
      v12 = (a2 & 0xFFF) / 0x70 + 36 * (((unsigned int)a2 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12);
      RtlClearBit((PRTL_BITMAP)(v6[3] ^ v6[2]), v12);
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_OWORD *)(a2 + 32) = 0LL;
      *(_OWORD *)(a2 + 48) = 0LL;
      *(_OWORD *)(a2 + 64) = 0LL;
      *(_OWORD *)(a2 + 80) = 0LL;
      *(_OWORD *)(a2 + 96) = 0LL;
      *((_DWORD *)v6 + 8) = v12;
      ExReleasePushLockExclusiveEx(v11);
      KeLeaveCriticalRegion();
      if ( i == (__int64 *)*a1 )
      {
        ExReleasePushLockSharedEx(v4, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v4, 0LL);
        KeLeaveCriticalRegion();
        v13 = a1[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v13, 0LL);
        v14 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v15 = (__int64 **)i[1], *v15 != i)
          || (*v15 = v14, v14[1] = (__int64)v15, v16 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
          __fastfail(3u);
        }
        *i = (__int64)v16;
        i[1] = (__int64)a1;
        v16[1] = i;
        *a1 = (__int64)i;
        ExReleasePushLockExclusiveEx(v13);
      }
      KeLeaveCriticalRegion();
    }
  }
}
