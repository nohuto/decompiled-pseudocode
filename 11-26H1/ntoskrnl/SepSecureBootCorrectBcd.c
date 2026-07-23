/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140B85B08
 * Callers:
 *     NtFilterBootOption @ 0x14081BCA0 (NtFilterBootOption.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     BcdOpenSystemStore @ 0x14077E2CC (BcdOpenSystemStore.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14081C344 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BcdEnumerateObjects @ 0x140B6FB7C (BcdEnumerateObjects.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  char v1; // r13
  int updated; // ebx
  char *Pool2; // r15
  ULONG v4; // r12d
  unsigned int v5; // r14d
  HANDLE v6; // rdi
  _DWORD *SystemArgument1; // r8
  int v8; // ecx
  int v9; // edx
  _BYTE v11[4]; // [rsp+30h] [rbp-40h] BYREF
  ULONG ObjectCount; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG BufferSize; // [rsp+38h] [rbp-38h] BYREF
  HANDLE BcdStoreHandle; // [rsp+40h] [rbp-30h] BYREF
  HANDLE BcdObjectHandle; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v16; // [rsp+50h] [rbp-20h]
  _BCD_OBJECT_DESCRIPTION BcdEnumDescriptor[2]; // [rsp+58h] [rbp-18h] BYREF

  v16 = a1;
  BcdObjectHandle = 0LL;
  ObjectCount = 0;
  BufferSize = 0;
  BcdStoreHandle = 0LL;
  v11[0] = 0;
  *a1 = 0;
  if ( !HviIsAnyHypervisorPresent()
    || (*(_OWORD *)&BcdEnumDescriptor[0].Version = 0LL,
        HviGetHypervisorFeatures(BcdEnumDescriptor),
        v1 = 1,
        (*(_QWORD *)BcdEnumDescriptor & 0x100000000000LL) != 0) )
  {
    v1 = 0;
  }
  updated = BcdOpenSystemStore(&BcdStoreHandle);
  if ( updated >= 0 )
  {
    BcdEnumDescriptor[0] = (_BCD_OBJECT_DESCRIPTION)1LL;
    updated = BcdEnumerateObjects(BcdStoreHandle, BcdEnumDescriptor, 0LL, &BufferSize, &ObjectCount);
    if ( updated == -1073741789 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        updated = BcdEnumerateObjects(BcdStoreHandle, BcdEnumDescriptor, Pool2, &BufferSize, &ObjectCount);
        if ( updated >= 0 )
        {
          v4 = 0;
          if ( ObjectCount )
          {
            while ( 1 )
            {
              BcdEnumDescriptor[0] = (_BCD_OBJECT_DESCRIPTION)&Pool2[24 * v4];
              updated = BcdOpenObject(BcdStoreHandle, *(const GUID **)BcdEnumDescriptor, &BcdObjectHandle);
              if ( updated < 0 )
                break;
              v5 = 0;
              v6 = BcdObjectHandle;
              if ( *((_WORD *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 18) )
              {
                SystemArgument1 = RtlpBootStatHandleLock.SchedulerApc.SystemArgument1;
                do
                {
                  v8 = SystemArgument1[3 * v5];
                  if ( !v8 || v8 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)BcdEnumDescriptor + 16LL) + 4LL) )
                  {
                    v9 = *(unsigned __int16 *)((char *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2]
                                             + (unsigned int)SystemArgument1[3 * v5 + 2]);
                    if ( (v9 & 0xFFFFF000) == 0
                      && ((v9 & 0x20) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 4) != 0)
                      && ((v9 & 0x40) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 0x10) != 0)
                      && ((v9 & 0x800) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[20] & 0x40) != 0)
                      && (!v1 || SystemArgument1[3 * v5 + 1] != 620757041) )
                    {
                      updated = SepSecureBootUpdateBcdDataForRule((__int64)&SystemArgument1[3 * v5], v6, v11);
                      if ( updated < 0 )
                        goto LABEL_31;
                      SystemArgument1 = RtlpBootStatHandleLock.SchedulerApc.SystemArgument1;
                      if ( v11[0] )
                        *v16 = 1;
                    }
                  }
                  ++v5;
                }
                while ( v5 < *((unsigned __int16 *)RtlpBootStatHandleLock.SchedulerApc.Reserved[1] + 18) );
              }
              BcdCloseObject(v6);
              ++v4;
              v6 = 0LL;
              BcdObjectHandle = 0LL;
              if ( v4 >= ObjectCount )
                goto LABEL_31;
            }
            v6 = BcdObjectHandle;
LABEL_31:
            if ( v6 )
              BcdCloseObject(v6);
          }
        }
        ExFreePoolWithTag(Pool2, 0x62536553u);
      }
      else
      {
        updated = -1073741801;
      }
    }
  }
  if ( BcdStoreHandle )
    BcdCloseStore(BcdStoreHandle);
  return (unsigned int)updated;
}
