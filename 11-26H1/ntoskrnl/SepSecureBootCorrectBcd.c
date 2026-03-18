/*
 * XREFs of SepSecureBootCorrectBcd @ 0x140B5C260
 * Callers:
 *     NtFilterBootOption @ 0x140815AF0 (NtFilterBootOption.c)
 * Callees:
 *     BcdOpenSystemStore @ 0x14077B68C (BcdOpenSystemStore.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140816134 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdCloseStore @ 0x1409D0088 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x1409D4E38 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409D54D8 (BcdOpenObject.c)
 *     BcdEnumerateObjects @ 0x140B5C474 (BcdEnumerateObjects.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSecureBootCorrectBcd(_BYTE *a1)
{
  int updated; // ebx
  char *Pool2; // r15
  __int64 v3; // r12
  int v4; // eax
  void *v5; // rdi
  __int64 i; // r14
  int v7; // ecx
  int v8; // edx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+98h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int *v16; // [rsp+A8h] [rbp+50h] BYREF

  *a1 = 0;
  v11 = 0LL;
  v15 = 0;
  LODWORD(v16) = 0;
  v10 = 0LL;
  v14 = 0;
  updated = BcdOpenSystemStore((__int64)&v10);
  if ( updated >= 0 )
  {
    v12[0] = 1LL;
    updated = BcdEnumerateObjects(v10, (unsigned int)v12, 0, (unsigned int)&v16, (__int64)&v15);
    if ( updated == -1073741789 )
    {
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        updated = BcdEnumerateObjects(v10, (unsigned int)v12, (_DWORD)Pool2, (unsigned int)&v16, (__int64)&v15);
        if ( updated >= 0 )
        {
          v3 = 0LL;
          if ( v15 )
          {
            do
            {
              v16 = (unsigned int *)&Pool2[24 * v3];
              v4 = BcdOpenObject(v10, v16, &v11);
              v5 = v11;
              updated = v4;
              if ( v4 < 0 )
                break;
              for ( i = 0LL;
                    (unsigned int)i < *(unsigned __int16 *)(*(_QWORD *)&RtlpBootStatHandleLock.SavedApcStateFill[40]
                                                          + 36LL);
                    i = (unsigned int)(i + 1) )
              {
                v7 = *((_DWORD *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 3 * i);
                if ( !v7 || v7 == *(_DWORD *)(*((_QWORD *)v16 + 2) + 4LL) )
                {
                  v8 = *(unsigned __int16 *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink
                                           + *((unsigned int *)RtlpBootStatHandleLock.SchedulerApc.Reserved[2]
                                             + 3 * i
                                             + 2));
                  if ( (v8 & 0xFFFFF000) == 0
                    && ((v8 & 0x20) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 4) != 0)
                    && ((v8 & 0x40) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 0x10) != 0)
                    && ((v8 & 0x800) == 0 || (RtlpBootStatHandleLock.SchedulerApcFill3[4] & 0x40) != 0) )
                  {
                    updated = SepSecureBootUpdateBcdDataForRule(
                                (__int64)RtlpBootStatHandleLock.SchedulerApc.Reserved[2] + 12 * i,
                                (__int64)v5,
                                &v14);
                    if ( updated < 0 )
                      goto LABEL_24;
                    if ( v14 )
                      *a1 = 1;
                  }
                }
              }
              BcdCloseObject(v5);
              v5 = 0LL;
              v3 = (unsigned int)(v3 + 1);
              v11 = 0LL;
            }
            while ( (unsigned int)v3 < v15 );
LABEL_24:
            if ( v5 )
              BcdCloseObject(v5);
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
  if ( v10 )
    BcdCloseStore(v10);
  return (unsigned int)updated;
}
