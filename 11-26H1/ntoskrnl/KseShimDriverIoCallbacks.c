/*
 * XREFs of KseShimDriverIoCallbacks @ 0x140A39400
 * Callers:
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepPoolAllocateNonPaged @ 0x1404D9A64 (KsepPoolAllocateNonPaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x1404DCB40 (KsepPoolFreeNonPaged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepGetShimCallbacksForDriver @ 0x140A387F0 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A38BC4 (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseShimDriverIoCallbacks(__int64 *a1, __int64 a2, const void **a3)
{
  __int64 v3; // r15
  int ShimCallbacksForDriver; // esi
  wchar_t *Buffer; // rdi
  int v9; // eax
  int i; // ecx
  wchar_t *v11; // rdx
  char *NonPaged; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  signed __int64 v21; // r8
  __int64 (__fastcall **v22)(__int64, IRP *); // rcx
  _BYTE *v23; // r9
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, IRP *); // rdx
  __int64 (__fastcall *v26)(__int64, IRP *); // r11
  UNICODE_STRING v27[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  _BYTE v32[224]; // [rsp+68h] [rbp-A0h] BYREF

  v3 = a1[6];
  memset_0(&v28, 0, 0x100uLL);
  memset(v27, 0, sizeof(v27));
  ShimCallbacksForDriver = 0;
  Buffer = 0LL;
  if ( a3 )
  {
    if ( dword_140E66D14 == 2 && (KseEngine & 1) == 0 )
    {
      v9 = KsepStringDuplicateUnicode((__int64)v27, a3);
      Buffer = v27[0].Buffer;
      ShimCallbacksForDriver = v9;
      if ( v9 >= 0 )
      {
        for ( i = v27[0].Length >> 1; i; --i )
        {
          if ( v27[0].Buffer[i - 1] == 92 )
          {
            v11 = &v27[0].Buffer[i];
            if ( v11 )
              goto LABEL_13;
            break;
          }
        }
        v11 = v27[0].Buffer;
LABEL_13:
        RtlInitUnicodeString(&v27[1], v11);
        ShimCallbacksForDriver = KsepGetShimCallbacksForDriver(a1[3], &v28);
        if ( ShimCallbacksForDriver >= 0 )
        {
          NonPaged = (char *)KsepPoolAllocateNonPaged();
          if ( NonPaged )
          {
            v13 = a1[11];
            if ( v13 )
            {
              v14 = v28;
              if ( v28 )
              {
                *(_QWORD *)NonPaged = v13;
                a1[11] = v14;
              }
            }
            v15 = a1[12];
            if ( v15 )
            {
              v16 = v29;
              if ( v29 )
              {
                *((_QWORD *)NonPaged + 1) = v15;
                a1[12] = v16;
              }
            }
            v17 = a1[13];
            if ( v17 )
            {
              v18 = v30;
              if ( v30 )
              {
                *((_QWORD *)NonPaged + 2) = v17;
                a1[13] = v18;
              }
            }
            v19 = *(_QWORD *)(v3 + 8);
            if ( v19 )
            {
              v20 = v31;
              if ( v31 )
              {
                *((_QWORD *)NonPaged + 3) = v19;
                *(_QWORD *)(v3 + 8) = v20;
              }
            }
            v21 = NonPaged - (char *)a1;
            v22 = (__int64 (__fastcall **)(__int64, IRP *))(a1 + 14);
            v23 = (_BYTE *)(v32 - (_BYTE *)a1);
            v24 = 28LL;
            do
            {
              v25 = *v22;
              if ( *v22 )
              {
                if ( v25 != IopInvalidDeviceRequest )
                {
                  v26 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v22 + (_QWORD)v23 - 112);
                  if ( v26 )
                  {
                    *(__int64 (__fastcall **)(__int64, IRP *))((char *)v22 + v21 - 80) = v25;
                    *v22 = v26;
                  }
                }
              }
              ++v22;
              --v24;
            }
            while ( v24 );
            *(_QWORD *)(v3 + 56) = NonPaged;
            ShimCallbacksForDriver = 0;
            *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                              * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                                     &KsepHistoryMessagesIndex,
                                                                                     1u)
                                                                + 1) & 0x3F)] = 524548LL;
            if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
              KsepDebugPrint(9LL, (int)"KSE: Hooked callbacks for driver [%ws].\n", Buffer, v23);
            KsepLogInfo(
              9LL,
              (__int64)"KSE: Hooked callbacks for driver [%ws].\n",
              Buffer,
              v23,
              *(_QWORD *)&v27[0].Length);
            goto LABEL_3;
          }
          ShimCallbacksForDriver = -1073741801;
        }
      }
      KsepPoolFreeNonPaged(0LL);
    }
LABEL_3:
    if ( Buffer )
      KsepPoolFreePaged(Buffer);
    return (unsigned int)ShimCallbacksForDriver;
  }
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 524434LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(0LL, (int)"KSE: Callback shimming - missing driver object or driver name.\n");
  KsepLogInfo(0LL, (__int64)"KSE: Callback shimming - missing driver object or driver name.\n");
  return 3221225485LL;
}
