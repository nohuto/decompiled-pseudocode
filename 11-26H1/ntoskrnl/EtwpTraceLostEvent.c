/*
 * XREFs of EtwpTraceLostEvent @ 0x140258AC8
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x140258780 (EtwpFailLogging.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x1404140D0 (EtwpGetEventNameFromEventMetadata.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceLostEvent(
        const void *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        char a9)
{
  char v9; // r15
  __int64 EventNameFromEventMetadata; // r13
  unsigned __int16 v11; // r12
  _BYTE *Pool2; // rsi
  volatile void **v13; // rdi
  unsigned int v14; // r14d
  __int64 v15; // rcx
  char UCharFromUser; // al
  void *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  void *v21; // rsp
  void *v22; // rsp
  int v23; // r14d
  ULONGLONG v24; // r15
  ULONG UserDataCount; // r9d
  _BYTE *v26; // rcx
  char *v27; // rdx
  const EVENT_DESCRIPTOR *v28; // rdx
  _BYTE v29[4]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int16 v30; // [rsp+44h] [rbp+4h] BYREF
  __int16 v31; // [rsp+48h] [rbp+8h] BYREF
  _BYTE *v32; // [rsp+50h] [rbp+10h]
  int v33; // [rsp+58h] [rbp+18h]
  int v34; // [rsp+5Ch] [rbp+1Ch]
  int v35; // [rsp+60h] [rbp+20h]
  __int64 v36; // [rsp+68h] [rbp+28h]
  volatile void **v37; // [rsp+70h] [rbp+30h]
  __int16 *v38; // [rsp+78h] [rbp+38h]
  ULONGLONG v39; // [rsp+80h] [rbp+40h]
  const void *v40; // [rsp+90h] [rbp+50h]
  __int16 *v41; // [rsp+98h] [rbp+58h]
  unsigned __int16 *v42; // [rsp+A0h] [rbp+60h]
  volatile void *Address[2]; // [rsp+A8h] [rbp+68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp+80h] BYREF
  char *v45; // [rsp+D0h] [rbp+90h]
  __int64 v46; // [rsp+D8h] [rbp+98h]
  __int16 *v47; // [rsp+E0h] [rbp+A0h]
  __int64 v48; // [rsp+E8h] [rbp+A8h]
  _QWORD v49[2]; // [rsp+F0h] [rbp+B0h] BYREF
  _BYTE v50[16]; // [rsp+100h] [rbp+C0h] BYREF
  char v51; // [rsp+110h] [rbp+D0h] BYREF

  v34 = a4;
  v38 = a2;
  v39 = (ULONGLONG)a1;
  v9 = a9;
  v42 = a3;
  v41 = a2;
  v40 = a1;
  v35 = a4;
  v36 = a7;
  v31 = 0;
  EventNameFromEventMetadata = 0LL;
  v11 = 0;
  v30 = 0;
  Pool2 = 0LL;
  v32 = 0LL;
  *(_OWORD *)Address = 0LL;
  v13 = 0LL;
  v29[0] = 0;
  if ( memcmp(a1, &EventTracingProvGuid, 0x10uLL) )
  {
    v14 = 0;
    v33 = 0;
    while ( v14 < a6 )
    {
      v15 = v36;
      if ( v9 )
      {
        UCharFromUser = RtlReadUCharFromUser(v36 + 16LL * v14 + 12);
        v15 = v36;
      }
      else
      {
        UCharFromUser = *(_BYTE *)(v36 + 16LL * v14 + 12);
      }
      if ( UCharFromUser == 1 )
      {
        v13 = (volatile void **)(v15 + 16LL * v14);
        if ( a8 )
        {
          v17 = (void *)(v15 + 16LL * v14);
          if ( v9 )
            RtlCopyFromUser(Address, v17, 0x10uLL);
          else
            RtlCopyVolatileMemory(Address, v17, 0x10uLL);
          v13 = Address;
          v37 = Address;
          v18 = (unsigned int)Address[1];
          if ( LODWORD(Address[1]) < 0xFFFF )
          {
            if ( v9 )
            {
              ProbeForRead(Address[0], LODWORD(Address[1]), 1u);
              v18 = (unsigned int)Address[1];
            }
            if ( v18 <= 0x100 )
            {
              v19 = v18 + 15LL;
              if ( v19 <= v18 )
                v19 = 0xFFFFFFFFFFFFFF0LL;
              v20 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
              v21 = alloca(v20);
              v22 = alloca(v20);
              Pool2 = v29;
              v32 = v29;
            }
            else
            {
              Pool2 = (_BYTE *)ExAllocatePool2(0x42uLL);
              v32 = Pool2;
              if ( !Pool2 )
                break;
              v29[0] = 1;
              v18 = (unsigned int)Address[1];
            }
            if ( v9 )
              RtlCopyFromUser(Pool2, (void *)Address[0], v18);
            else
              RtlCopyVolatileMemory(Pool2, (const void *)Address[0], v18);
          }
        }
        else
        {
          v37 = (volatile void **)(v15 + 16LL * v14);
          Pool2 = *v13;
          v32 = *v13;
        }
        break;
      }
      v33 = ++v14;
    }
    v23 = v34;
    v24 = v39;
    if ( v13 && Pool2 )
    {
      EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata(Pool2, *((unsigned int *)v13 + 2), &v30);
      v11 = v30;
    }
    UserData.Ptr = v24;
    *(_QWORD *)&UserData.Size = 16LL;
    v45 = &a5;
    v46 = 4LL;
    if ( EventNameFromEventMetadata && v11 )
    {
      v47 = (__int16 *)EventNameFromEventMetadata;
      v48 = v11;
      v49[0] = &EtwpNull;
      v49[1] = 1LL;
      UserDataCount = 6;
      v26 = v50;
      v27 = &v51;
    }
    else
    {
      v31 = *v38;
      v47 = &v31;
      v48 = 2LL;
      UserDataCount = 5;
      v26 = v49;
      v27 = v50;
    }
    *(_QWORD *)v26 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v26 + 2) = *v42;
    *((_DWORD *)v26 + 3) = 0;
    *(_QWORD *)v27 = &EtwpNull;
    *((_QWORD *)v27 + 1) = 2LL;
    v28 = &ETW_EVENT_LOST_EVENT;
    if ( v11 )
      v28 = &ETW_EVENT_LOST_TLG_EVENT;
    EtwWriteEx(
      (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
      v28,
      0LL,
      v23 | 1,
      0LL,
      0LL,
      UserDataCount,
      &UserData);
    if ( v29[0] )
      ExFreePoolWithTag(Pool2, 0);
  }
}
