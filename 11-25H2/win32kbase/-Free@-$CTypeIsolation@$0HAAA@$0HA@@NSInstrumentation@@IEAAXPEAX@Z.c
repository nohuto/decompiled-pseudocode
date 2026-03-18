/*
 * XREFs of ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400AE8D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<28672,112>::Free(__int64 *a1, ULONG_PTR a2)
{
  __int64 v4; // r12
  __int64 *i; // rdi
  __int64 *v6; // r15
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbx
  ULONG v10; // esi
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  _QWORD *v14; // rax

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
        v8 = v6[2];
        if ( a2 >= (v8 ^ v7) && a2 < (v8 ^ v7) + 28672 )
          break;
      }
      if ( (a2 & 0xFFF) != 112 * ((a2 & 0xFFF) / 0x70) )
        KeBugCheckEx(0x164u, 0x22uLL, a2, 0LL, 0LL);
      if ( !RtlTestBit(
              (PRTL_BITMAP)(v6[3] ^ v8),
              (a2 & 0xFFF) / 0x70 + 36 * (((unsigned int)a2 - ((unsigned int)v8 ^ (unsigned int)v7)) >> 12)) )
        KeBugCheckEx(0x164u, 0x23uLL, a2, 0LL, 0LL);
      v9 = *v6;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v9, 0LL);
      v10 = (a2 & 0xFFF) / 0x70 + 36 * ((unsigned int)(a2 - (*((_DWORD *)v6 + 2) ^ *((_DWORD *)v6 + 4))) >> 12);
      RtlClearBit((PRTL_BITMAP)(v6[2] ^ v6[3]), v10);
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_OWORD *)(a2 + 32) = 0LL;
      *(_OWORD *)(a2 + 48) = 0LL;
      *(_OWORD *)(a2 + 64) = 0LL;
      *(_OWORD *)(a2 + 80) = 0LL;
      *(_OWORD *)(a2 + 96) = 0LL;
      *((_DWORD *)v6 + 8) = v10;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      if ( i == (__int64 *)*a1 )
      {
        ExReleasePushLockSharedEx(v4, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v4, 0LL);
        KeLeaveCriticalRegion();
        v11 = a1[2];
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v11, 0LL);
        v12 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i
          || (v13 = (__int64 **)i[1], *v13 != i)
          || (*v13 = v12, v12[1] = (__int64)v13, v14 = (_QWORD *)*a1, *(__int64 **)(*a1 + 8) != a1) )
        {
          __fastfail(3u);
        }
        *i = (__int64)v14;
        i[1] = (__int64)a1;
        v14[1] = i;
        *a1 = (__int64)i;
        ExReleasePushLockExclusiveEx(v11, 0LL);
      }
      KeLeaveCriticalRegion();
    }
  }
}
