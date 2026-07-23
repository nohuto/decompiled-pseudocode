/*
 * XREFs of SepReadSingleCap @ 0x14081DAF0
 * Callers:
 *     SepReadAndInsertCaps @ 0x14081D06C (SepReadAndInsertCaps.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepReadSingleCap(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  ULONG Length; // ebp
  _DWORD *Pool2; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // r12
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int16 v16; // ax
  void *v17; // r14
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r10
  __int64 v21; // rax
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h]
  __int64 v25; // [rsp+88h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  Length = a2 + 18;
  ResultLength = 0;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v8 = ZwQueryValueKey(KeyHandle, &ContainedCapes, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v9 = (Pool2[2] >> 2) & (unsigned int)-(Pool2[2] != 0);
    v8 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&ExpPlatformBinaryLock.LastXStateSaveDebugInfo,
           KeyValuePartialInformation,
           Pool2,
           Length,
           &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v10 = Pool2[2] + ((8 * v9 + 73) & 0xFFFFFFFE);
    v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, Pool2, Length, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_24;
    v11 = (unsigned int)(v10 + Pool2[2]);
    v12 = ExAllocatePool2(0x100uLL);
    v13 = v12;
    if ( v12 )
    {
      v14 = v11 + v12;
      v8 = ZwQueryValueKey(KeyHandle, &CapeFlags, KeyValuePartialInformation, Pool2, Length, &ResultLength);
      if ( v8 >= 0 )
      {
        if ( Pool2[2] == 4 )
        {
          *(_DWORD *)(v13 + 56) = Pool2[3];
          v8 = ZwQueryValueKey(
                 KeyHandle,
                 (PUNICODE_STRING)&ExpPlatformBinaryLock.LastXStateSaveDebugInfo,
                 KeyValuePartialInformation,
                 Pool2,
                 Length,
                 &ResultLength);
          if ( v8 >= 0 )
          {
            v15 = (v13 + 8LL * (unsigned int)v9 + 73) & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v15 + (unsigned int)Pool2[2] <= v14 )
            {
              v16 = *((_WORD *)Pool2 + 4);
              *(_WORD *)(v13 + 42) = v16;
              *(_WORD *)(v13 + 40) = v16;
              *(_QWORD *)(v13 + 48) = v15;
              memmove((void *)((v13 + 8 * v9 + 73) & 0xFFFFFFFFFFFFFFFEuLL), Pool2 + 3, (unsigned int)Pool2[2]);
              v17 = (void *)((unsigned int)Pool2[2] + v15);
              v8 = ZwQueryValueKey(KeyHandle, &CapSid, KeyValuePartialInformation, Pool2, Length, &ResultLength);
              if ( v8 < 0 )
                goto LABEL_24;
              if ( (unsigned __int64)v17 + (unsigned int)Pool2[2] <= v14 )
              {
                *(_QWORD *)(v13 + 24) = v17;
                memmove(v17, Pool2 + 3, (unsigned int)Pool2[2]);
                v8 = ZwQueryValueKey(
                       KeyHandle,
                       &ContainedCapes,
                       KeyValuePartialInformation,
                       Pool2,
                       Length,
                       &ResultLength);
                if ( v8 >= 0 )
                {
                  v18 = v24;
                  v19 = 0LL;
                  v20 = v25;
                  *(_DWORD *)(v13 + 60) = v9;
                  while ( (unsigned int)v19 < (unsigned int)v9 )
                  {
                    v21 = (unsigned int)Pool2[v19 + 3];
                    if ( (unsigned int)v21 >= v18 )
                      goto LABEL_13;
                    *(_QWORD *)(v13 + 8 * v19 + 64) = v20 + 56 * v21;
                    v19 = (unsigned int)(v19 + 1);
                  }
                  if ( RtlValidSid(*(PSID *)(v13 + 24)) )
                    *a5 = v13;
                  else
                    v8 = -1073741704;
                }
                goto LABEL_24;
              }
            }
LABEL_13:
            v8 = -1073741789;
          }
        }
        else
        {
          v8 = -1073741811;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
LABEL_24:
    ExFreePoolWithTag(Pool2, 0x70536553u);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741670;
}
