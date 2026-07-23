/*
 * XREFs of EtwpApplyEventNameFilter @ 0x140413C18
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpIsEventNameFilterEnabled @ 0x140413F4C (EtwpIsEventNameFilterEnabled.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1404140D0 (EtwpGetEventNameFromEventMetadata.c)
 *     EtwpEventNameFilterSearch @ 0x140414150 (EtwpEventNameFilterSearch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventNameFilter(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8,
        char a9)
{
  _BYTE *v9; // r13
  unsigned int v10; // eax
  char *Pool2; // r14
  unsigned int *v12; // r12
  char v13; // di
  unsigned int v14; // esi
  char v15; // al
  unsigned __int8 v16; // r13
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  void *v20; // rsp
  void *v21; // rsp
  __int64 CurrentIrql; // rcx
  __int64 v23; // r15
  __int64 v24; // rcx
  _BYTE *v25; // r15
  int v26; // r8d
  __int64 EventNameFromEventMetadata; // rax
  bool v28; // zf
  unsigned __int8 v29; // si
  char v31; // [rsp+30h] [rbp+0h] BYREF
  char v32; // [rsp+31h] [rbp+1h]
  unsigned __int16 v33; // [rsp+34h] [rbp+4h] BYREF
  unsigned int v34; // [rsp+38h] [rbp+8h]
  __int64 v35; // [rsp+40h] [rbp+10h]
  char *v36; // [rsp+48h] [rbp+18h]
  int v37; // [rsp+50h] [rbp+20h]
  unsigned int v38; // [rsp+54h] [rbp+24h]
  volatile void **v39; // [rsp+58h] [rbp+28h]
  __int64 v40; // [rsp+60h] [rbp+30h]
  volatile void *Address[2]; // [rsp+68h] [rbp+38h] BYREF

  v9 = a4;
  v10 = a3;
  v34 = a3;
  v38 = a2;
  v40 = a1;
  v33 = 0;
  Pool2 = 0LL;
  v36 = 0LL;
  *(_OWORD *)Address = 0LL;
  v12 = 0LL;
  LOBYTE(v35) = 0;
  v32 = 0;
  v13 = 1;
  if ( a5 )
  {
    ProbeForRead(a4, 16LL * a3, 4u);
    v10 = v34;
  }
  v14 = 0;
  v37 = 0;
  while ( 1 )
  {
    if ( v14 >= v10 )
    {
      v16 = a6;
      goto LABEL_30;
    }
    v15 = a5 ? RtlReadUCharFromUser(&v9[16 * v14 + 12]) : v9[16 * v14 + 12];
    if ( v15 == 1 )
      break;
    v37 = ++v14;
    v10 = v34;
  }
  v12 = (unsigned int *)&v9[16 * v14];
  v16 = a6;
  if ( a6 >= 2u )
  {
    v39 = (volatile void **)v12;
    Pool2 = *(char **)v12;
    v36 = *(char **)v12;
  }
  else
  {
    if ( a5 )
      RtlCopyFromUser(Address, v12, 0x10uLL);
    else
      RtlCopyVolatileMemory(Address, v12, 0x10uLL);
    v12 = (unsigned int *)Address;
    v39 = Address;
    v17 = (unsigned int)Address[1];
    if ( LODWORD(Address[1]) >= 0xFFFF )
    {
      v13 = 0;
      v31 = 0;
      goto LABEL_52;
    }
    if ( a5 )
    {
      ProbeForRead(Address[0], LODWORD(Address[1]), 1u);
      v17 = (unsigned int)Address[1];
    }
    if ( v17 > 0x100 )
    {
      Pool2 = (char *)ExAllocatePool2(0x42uLL);
      v36 = Pool2;
      if ( !Pool2 )
      {
        v31 = 1;
        goto LABEL_52;
      }
      v32 = 1;
      v17 = (unsigned int)Address[1];
    }
    else
    {
      v18 = v17 + 15LL;
      if ( v18 <= v17 )
        v18 = 0xFFFFFFFFFFFFFF0LL;
      v19 = v18 & 0xFFFFFFFFFFFFFFF0uLL;
      v20 = alloca(v19);
      v21 = alloca(v19);
      Pool2 = &v31;
      v36 = &v31;
    }
    if ( a5 )
      RtlCopyFromUser(Pool2, (void *)Address[0], v17);
    else
      RtlCopyVolatileMemory(Pool2, (const void *)Address[0], v17);
  }
LABEL_30:
  if ( v12 && Pool2 )
  {
    if ( v16 < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      v35 = CurrentIrql;
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
    }
    v23 = *(_QWORD *)(v40 + 640);
    if ( v23 )
    {
      v24 = 104LL * v38;
      v25 = a9 ? *(_BYTE **)(v24 + v23 + 56) : *(_BYTE **)(v24 + v23 + 96);
      if ( v25 )
      {
        v26 = v16;
        if ( v16 <= 2u )
          v26 = 2;
        LOBYTE(a4) = a7;
        if ( (unsigned __int8)EtwpIsEventNameFilterEnabled(v40, v38, v26, (_DWORD)a4, a8, a9) )
        {
          EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(Pool2, v12[2], &v33);
          if ( EventNameFromEventMetadata )
          {
            if ( v33 )
              v28 = *v25 == (unsigned __int8)EtwpEventNameFilterSearch(EventNameFromEventMetadata, v33, v25);
            else
              v28 = *v25 == 0;
            v13 = v28;
          }
        }
      }
    }
    if ( v16 < 2u )
    {
      v29 = v35;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
      __writecr8(v29);
    }
  }
LABEL_52:
  if ( v32 )
    ExFreePoolWithTag(Pool2, 0);
  return v13;
}
