/*
 * XREFs of sub_140026E80 @ 0x140026E80
 * Callers:
 *     sub_140018030 @ 0x140018030 (sub_140018030.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140030CD0 @ 0x140030CD0 (sub_140030CD0.c)
 *     StorPortNotification @ 0x14004C160 (StorPortNotification.c)
 *     sub_140066A10 @ 0x140066A10 (sub_140066A10.c)
 *     sub_14006A2B0 @ 0x14006A2B0 (sub_14006A2B0.c)
 *     sub_14009DFB0 @ 0x14009DFB0 (sub_14009DFB0.c)
 * Callees:
 *     sub_140027070 @ 0x140027070 (sub_140027070.c)
 *     sub_140037B0C @ 0x140037B0C (sub_140037B0C.c)
 *     sub_1400383AC @ 0x1400383AC (sub_1400383AC.c)
 *     sub_14003F840 @ 0x14003F840 (sub_14003F840.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

char __fastcall sub_140026E80(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  struct _KDPC *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-B8h]
  int v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v21; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v22[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 624) & 4) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5088));
  if ( a3 )
    goto LABEL_7;
  if ( (qword_140168458 & 8) != 0 )
    sub_140027070(a2);
  if ( *(_DWORD *)a1 != 1094997074
    || (*(_BYTE *)(a1 + 604) & 0x10) == 0
    || (LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v7 != 1) )
  {
LABEL_7:
    v5 = *(_QWORD *)(a2 + 160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 141);
      v8 = v6 == -85;
      LOBYTE(v7) = v6 + 85;
      if ( v8 || (_BYTE)v7 == 1 )
      {
        if ( (unsigned int)dword_140168178 > 5 )
        {
          LOBYTE(v7) = sub_14003F840(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4720);
            v22[4] = a1 + 5064;
            v21 = *(_DWORD *)(a1 + 56);
            v22[6] = (__int64)&v21;
            v22[5] = 16LL;
            v22[7] = 4LL;
            sub_140037B0C(v23, v12);
            v13 = *(_QWORD *)(a1 + 4728);
            v19 = *(_BYTE *)(a1 + 4276);
            v24 = &v19;
            v25 = 1LL;
            sub_140037B0C(v26, v13);
            LOBYTE(v7) = sub_1400383AC((int)v22, (int)&dword_140155F5E, v14, v15, v17, v18, 7u, (__int64)v22);
          }
        }
        return (char)v7;
      }
      *(_BYTE *)(v5 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 20);
    ProcNumber = v9;
    if ( v9.Group == 0xFFFF )
      goto LABEL_24;
    if ( (*(_BYTE *)(a1 + 4371) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v9.Group = ProcNumber.Group;
    }
    if ( v9.Group >= (unsigned int)dword_140168668
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)qword_140168520 + v9.Group) )
    {
LABEL_24:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 256), (PSLIST_ENTRY)(a2 + 32));
      v10 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v11 = 0LL;
      goto LABEL_18;
    }
    v7 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)P + 8 * (unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v7 )
    {
      LOBYTE(v7) = ProcNumber.Number;
      v10 = (struct _KDPC *)((char *)P + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      if ( LODWORD(v10[1].DeferredContext) != 2 )
      {
        v11 = *(void **)(a1 + 8);
LABEL_18:
        LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
      }
    }
  }
  return (char)v7;
}
