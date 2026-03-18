/*
 * XREFs of PpmIdleAllocateVetoReasons @ 0x1407C96B4
 * Callers:
 *     PopFxRequestCommon @ 0x1406059C0 (PopFxRequestCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PpmIdleInstallNewVetoList @ 0x140602180 (PpmIdleInstallNewVetoList.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleAllocateVetoReasons(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  void *v7; // r13
  unsigned int v8; // r14d
  char *v9; // rax
  char *v10; // r15
  unsigned int v11; // r12d
  WCHAR *v12; // rax
  __int64 v13; // rbx
  char *v14; // rax
  signed __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // ebx
  const WCHAR *SourceString; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F10070.1136, a2, a3, a4);
  v5 = 0;
  if ( stru_140E66FF0.IptSaveArea
    && (v6 = *((unsigned int *)stru_140E66FF0.IptSaveArea + 1), (_DWORD)v6)
    && PpmPlatformStates
    && (v7 = *(void **)(PpmPlatformStates + 112)) != 0LL )
  {
    v8 = v6 + a1[1];
    if ( v8 >= (unsigned int)v6 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 && (v9 = (char *)ExAllocatePool2(0x40uLL), (v10 = v9) != 0LL) )
      {
        *((_DWORD *)v9 + 1) = v8;
        v11 = v6;
        *(_DWORD *)v9 = *(_DWORD *)stru_140E66FF0.IptSaveArea;
        while ( v11 < v8 )
        {
          v21 = 4LL * (v11 - (unsigned int)v6);
          v12 = (WCHAR *)ExAllocatePool2(0x40uLL);
          SourceString = v12;
          if ( !v12 )
            goto LABEL_8;
          memmove(
            v12,
            *(const void **)&a1[4 * (v11 - (unsigned int)v6) + 4],
            2LL * LOWORD(a1[4 * (v11 - (unsigned int)v6) + 3]));
          v13 = 3LL * v11;
          RtlInitUnicodeString((PUNICODE_STRING)&v10[24 * v11++ + 16], SourceString);
          *(_DWORD *)&v10[8 * v13 + 8] = a1[v21 + 2];
        }
        v14 = v10 + 8;
        v15 = (char *)stru_140E66FF0.IptSaveArea - (char *)v10;
        v16 = v6;
        do
        {
          *(_OWORD *)v14 = *(_OWORD *)&v14[v15];
          *((_QWORD *)v14 + 2) = *(_QWORD *)&v14[v15 + 16];
          v14 += 24;
          --v16;
        }
        while ( v16 );
        ExFreePoolWithTag(stru_140E66FF0.IptSaveArea, 0x694D5050u);
        v17 = PpmPlatformStates;
        v18 = 0;
        for ( stru_140E66FF0.IptSaveArea = v10; v18 < *(_DWORD *)PpmPlatformStates; ++v18 )
        {
          PpmIdleInstallNewVetoList(448LL * v18 + v17 + 64, v8, (char *)(Pool2 + ((unsigned __int64)(v18 * v8) << 6)));
          v17 = PpmPlatformStates;
        }
        ExFreePoolWithTag(v7, 0x694D5050u);
        *a1 = v6 + 1;
      }
      else
      {
LABEL_8:
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741675;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F10070.1136);
  return v5;
}
