/*
 * XREFs of sub_140069314 @ 0x140069314
 * Callers:
 *     sub_14017ADA0 @ 0x14017ADA0 (sub_14017ADA0.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140054998 @ 0x140054998 (sub_140054998.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_1400697CC @ 0x1400697CC (sub_1400697CC.c)
 *     sub_140069974 @ 0x140069974 (sub_140069974.c)
 *     sub_14006A7D4 @ 0x14006A7D4 (sub_14006A7D4.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140069314(PCUNICODE_STRING SourceString, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 *v3; // r14
  _QWORD *v4; // rbx
  char *v5; // r13
  const UNICODE_STRING *v8; // rdi
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // dx
  _QWORD *v11; // r9
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned int *); // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edi
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // dx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rax
  PVOID *i; // r15
  _QWORD *v25; // rax
  unsigned __int16 *v27; // [rsp+20h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  v8 = SourceString;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)sub_1400567A0() )
  {
    if ( !a2 || !a2[4] || !a2[5] || !a2[6] )
    {
      v9 = off_140168120;
      if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
        || (HIDWORD(off_140168120->Timer) & 2) == 0
        || BYTE1(off_140168120->Timer) < 2u )
      {
        goto LABEL_54;
      }
      v10 = 14;
      v11 = a2;
LABEL_53:
      sub_140055C18(
        (__int64)v9->AttachedDevice,
        v10,
        (__int64)&unk_14014B8F0,
        v11,
        v27,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
LABEL_54:
      v15 = -1073741811;
      goto LABEL_21;
    }
    goto LABEL_42;
  }
  if ( !a3 )
    goto LABEL_42;
  v12 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned int *))a3[16];
  if ( !v12 || !a3[15] || !a3[5] )
  {
    v9 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 2) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_54;
    }
    v10 = 10;
    v11 = a3;
    goto LABEL_53;
  }
  v13 = a3[1];
  v30 = 0;
  v14 = v12(v13, 0LL, &v30);
  v15 = v14;
  if ( v14 < 0 && v14 != -1056964604 )
  {
    v16 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 2) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_21;
    }
    v17 = 11;
    goto LABEL_20;
  }
  v5 = (char *)sub_1400143E0(64LL, v30, 1917018450LL, 0LL);
  if ( !v5 )
  {
LABEL_29:
    v15 = -1073741670;
    goto LABEL_21;
  }
  v15 = ((__int64 (__fastcall *)(_QWORD, char *, unsigned int *))a3[16])(a3[1], v5, &v30);
  if ( v15 < 0 )
  {
    v16 = off_140168120;
    if ( off_140168120 == (PDEVICE_OBJECT)&off_140168120
      || (HIDWORD(off_140168120->Timer) & 2) == 0
      || BYTE1(off_140168120->Timer) < 2u )
    {
      goto LABEL_21;
    }
    v17 = 12;
LABEL_20:
    sub_140055BD4((__int64)v16->AttachedDevice, v17, (__int64)&unk_14014B8F0, v15);
    goto LABEL_21;
  }
  v15 = sub_14006A7D4(&v27, v5 + 8, v5);
  if ( v15 < 0 )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 2) != 0
      && BYTE1(off_140168120->Timer) >= 2u )
    {
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xDu, (__int64)&unk_14014B8F0, v15);
    }
    v3 = v27;
    goto LABEL_21;
  }
  v3 = v27;
  v8 = SourceString;
LABEL_42:
  v20 = sub_1400143E0(64LL, 112LL, 1917018450LL, 0LL);
  v4 = (_QWORD *)v20;
  if ( !v20 )
    goto LABEL_29;
  v15 = sub_140054998((PUNICODE_STRING)(v20 + 24), v8, v21, 0LL);
  if ( v15 >= 0 )
  {
    v4[5] = a2;
    if ( !(unsigned int)sub_1400567A0()
      || (v4[13] = v3, v4[6] = a3, v22 = *v3, v3 = 0LL, v27 = 0LL, v15 = sub_140069974(v4 + 7, v22), v15 >= 0) )
    {
      *((_BYTE *)v4 + 96) = 0;
      if ( (unsigned int)sub_1400567A0() )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140169200, &LockHandle);
        for ( i = (PVOID *)qword_140169290; i != &qword_140169290; i = (PVOID *)*i )
        {
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 3), (PCUNICODE_STRING)(i + 3), 1u) )
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v15 = 0;
            goto LABEL_21;
          }
        }
        v4[1] = v4;
        *v4 = v4;
        *((_DWORD *)v4 + 4) = 1;
        v25 = (_QWORD *)qword_140169298;
        if ( *(PVOID **)qword_140169298 == &qword_140169290 )
        {
          *v4 = &qword_140169290;
          v4[1] = v25;
          *v25 = v4;
          qword_140169298 = (__int64)v4;
          v4 = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_21;
        }
      }
      else
      {
        v4[1] = v4;
        *v4 = v4;
        v23 = (_QWORD *)qword_140169298;
        if ( *(PVOID **)qword_140169298 == &qword_140169290 )
        {
          *v4 = &qword_140169290;
          v4[1] = v23;
          *v23 = v4;
          qword_140169298 = (__int64)v4;
          v4 = 0LL;
          goto LABEL_21;
        }
      }
      __fastfail(3u);
    }
  }
LABEL_21:
  if ( (unsigned int)sub_1400567A0() )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72436152u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72436152u);
    if ( v4 )
      sub_1400697CC(v4);
  }
  else if ( v4 )
  {
    v18 = (void *)v4[4];
    if ( v18 )
      ExFreePoolWithTag(v18, 0x53446152u);
    v19 = (void *)v4[13];
    if ( v19 )
      ExFreePoolWithTag(v19, 0x72436152u);
    ExFreePoolWithTag(v4, 0x72436152u);
  }
  return (unsigned int)v15;
}
