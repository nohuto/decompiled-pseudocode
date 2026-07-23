/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x140B81560
 * Callers:
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140442F10 (PspLockThreadSecurityShared.c)
 *     PsGetThreadTeb @ 0x14047EB60 (PsGetThreadTeb.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E70D0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140A71E20 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5,
        int a6,
        int *a7,
        __int64 a8)
{
  char *v10; // r13
  int Thread; // r14d
  __int64 ThreadTeb; // rdi
  __int64 ULong64FromUser; // rax
  __int64 v15; // rdx
  signed int CpuAreaInfo; // esi
  char *v17; // rbx
  char *v18; // rdi
  size_t v19; // r8
  char *v20; // rcx
  unsigned __int64 v21; // r9
  char *v22; // rcx
  unsigned __int64 v23; // rax
  char *v24; // rdi
  __int64 v25; // rbx
  size_t v26; // r8
  char *v27; // rcx
  unsigned __int64 v28; // r9
  char *v29; // rcx
  unsigned __int64 v30; // rax
  _BYTE *v31; // rbx
  __int64 v32; // rax
  char v33; // [rsp+24h] [rbp-F4h]
  int v34; // [rsp+28h] [rbp-F0h] BYREF
  void *v35; // [rsp+30h] [rbp-E8h]
  __int64 v36; // [rsp+38h] [rbp-E0h]
  __int64 v37; // [rsp+40h] [rbp-D8h]
  __int64 v38; // [rsp+48h] [rbp-D0h]
  void *Src[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-B8h]
  __int128 v41; // [rsp+80h] [rbp-98h] BYREF
  __int128 v42; // [rsp+90h] [rbp-88h]
  _BYTE v43[48]; // [rsp+A0h] [rbp-78h] BYREF

  v35 = a4;
  v33 = a3;
  v38 = a2;
  v36 = a8;
  memset(v43, 0, sizeof(v43));
  *(_OWORD *)Src = 0LL;
  v40 = 0LL;
  v10 = (char *)&a4[6].Entries[0].EntryLock + 4;
  Thread = (int)a4->Thread;
  v34 = (int)a4->Thread;
  PspLockThreadSecurityShared(a2, (__int64)KeGetCurrentThread(), a3, a4);
  ThreadTeb = PsGetThreadTeb(a2);
  v37 = ThreadTeb;
  if ( !ThreadTeb )
  {
    PspUnlockThreadSecurityShared(a2, KeGetCurrentThread());
    return 3221225547LL;
  }
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v43);
  ULong64FromUser = RtlReadULong64FromUser((volatile void *)(ThreadTeb + 5256));
  if ( ULong64FromUser )
  {
    CpuAreaInfo = RtlWow64GetCpuAreaInfo(ULong64FromUser, v15, (__int64)Src);
    if ( CpuAreaInfo < 0 )
      goto LABEL_37;
    v17 = (char *)Src[0];
    v18 = (char *)Src[0] + 716;
    if ( v33 )
    {
      RtlCopyFromUser(v35, Src[0], 0x2CCuLL);
      *(_DWORD *)v35 = Thread;
      if ( (Thread & 0x10040) != 0x10040 )
        goto LABEL_18;
      v41 = 0LL;
      v42 = 0LL;
      RtlCopyFromUser(&v41, v18, 0x20uLL);
      v19 = *((unsigned int *)v10 + 5);
      if ( (_DWORD)v19 == DWORD1(v42) )
      {
        v20 = &v18[(int)v42];
        v21 = -1LL;
        if ( v20 >= v18 )
          v21 = (unsigned __int64)&v18[(int)v42];
        CpuAreaInfo = v20 < v18 ? 0xC0000095 : 0;
        if ( v20 < v18 )
          goto LABEL_37;
        v22 = &v17[a5];
        v23 = v21 + DWORD1(v42);
        if ( v22 > v17 && v23 > v21 && v21 >= (unsigned __int64)v17 && v23 <= (unsigned __int64)v22 )
        {
          v24 = &v10[*((int *)v10 + 4)];
          v25 = *((_QWORD *)v24 + 1);
          RtlCopyFromUser(v24, (void *)v21, v19);
          *(_QWORD *)v24 &= RtlWow64GetCpuAreaEnabledFeatures(&v34);
          *((_QWORD *)v24 + 1) = v25;
          *((_OWORD *)v24 + 1) = 0LL;
          *((_OWORD *)v24 + 2) = 0LL;
          *((_OWORD *)v24 + 3) = 0LL;
LABEL_18:
          if ( a7 )
            *a7 = RtlReadULongFromUser(*((unsigned int **)&v40 + 1));
LABEL_33:
          v31 = (_BYTE *)v36;
          if ( v36 )
          {
            v32 = RtlReadULong64FromUser((volatile void *)(v37 + 5328));
            if ( v32 )
              *v31 = (RtlReadULongFromUser((unsigned int *)(v32 + 4)) & 2) != 0;
            else
              *v31 = 0;
          }
          goto LABEL_37;
        }
      }
LABEL_9:
      CpuAreaInfo = -1073741819;
      goto LABEL_37;
    }
    RtlCopyToUser(Src[0], v35, 0x2CCuLL);
    if ( (Thread & 0x10040) == 0x10040 )
    {
      v41 = 0LL;
      v42 = 0LL;
      RtlCopyFromUser(&v41, v18, 0x20uLL);
      v26 = *((unsigned int *)v10 + 5);
      if ( (_DWORD)v26 != DWORD1(v42) )
      {
        CpuAreaInfo = -1073741819;
        goto LABEL_37;
      }
      v27 = &v18[(int)v42];
      v28 = -1LL;
      if ( v27 >= v18 )
        v28 = (unsigned __int64)&v18[(int)v42];
      CpuAreaInfo = v27 < v18 ? 0xC0000095 : 0;
      if ( v27 < v18 )
        goto LABEL_37;
      v29 = &v17[a5];
      v30 = v28 + DWORD1(v42);
      if ( v29 <= v17 || v30 <= v28 || v28 < (unsigned __int64)v17 || v30 > (unsigned __int64)v29 )
        goto LABEL_9;
      RtlCopyToUser((void *)v28, &v10[*((int *)v10 + 4)], v26);
    }
    if ( a7 )
      RtlWriteULongToUser(*((_DWORD **)&v40 + 1), *a7);
    goto LABEL_33;
  }
  CpuAreaInfo = -1073741811;
LABEL_37:
  KiUnstackDetachProcess((__int64)v43, 0);
  PspUnlockThreadSecurityShared(a2, KeGetCurrentThread());
  return (unsigned int)CpuAreaInfo;
}
