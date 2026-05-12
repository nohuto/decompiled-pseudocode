/*
 * XREFs of sub_140030B40 @ 0x140030B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_140030CD0 @ 0x140030CD0 (sub_140030CD0.c)
 *     sub_140031178 @ 0x140031178 (sub_140031178.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x1400317D8 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1400395B0 @ 0x1400395B0 (sub_1400395B0.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_1400775D0 @ 0x1400775D0 (sub_1400775D0.c)
 *     sub_140090500 @ 0x140090500 (sub_140090500.c)
 *     sub_140090698 @ 0x140090698 (sub_140090698.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_1400B4EA8 @ 0x1400B4EA8 (sub_1400B4EA8.c)
 */

void __fastcall sub_140030B40(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // r14
  bool v7; // r15
  unsigned int v8; // edi
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  struct tagVARIANT *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // edi
  __int64 v17; // [rsp+70h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+78h] [rbp+Fh] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+27h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 560);
  if ( v5 )
  {
    if ( *(int *)(v4 + 1904) > 0 )
    {
      v6 = 0;
      memset(&v18, 0, sizeof(v18));
      v7 = 0;
      v8 = *(_DWORD *)(v5 + 4);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1920), &v18);
      v9 = *(_DWORD *)(v4 + 1904);
      if ( v9 > 0 )
      {
        v10 = 0;
        if ( v9 >= v8 )
          v10 = v9 - v8;
        *(_DWORD *)(v4 + 1904) = v10;
        v6 = v10 == 0;
      }
      v11 = *(_DWORD *)(v4 + 1908);
      if ( v11 > 0 && !v6 )
      {
        if ( v11 >= v8 )
          v12 = v11 - v8;
        else
          v12 = 0;
        *(_DWORD *)(v4 + 1908) = v12;
        v7 = v12 == 0;
      }
      KeReleaseInStackQueuedSpinLock(&v18);
      if ( *(_BYTE *)(v4 + 3368) )
      {
        if ( (*(_BYTE *)(v4 + 506) & 2) == 0 )
        {
          v14 = *(_DWORD *)(v4 + 3376);
          if ( v14 != -1 )
          {
            v15 = *(_DWORD *)(v4 + 1392);
            if ( v15 < 0x1E )
              v15 = 30;
            v13 = (struct tagVARIANT *)(4 * v15 - *(_DWORD *)(v4 + 1904) + 42);
            if ( !v14 || v14 < (unsigned int)v13 )
            {
              v16 = *(_DWORD *)(v4 + 104);
              LODWORD(v20) = v16;
              sub_1400B4EA8(v4, v13);
              *(_BYTE *)(v4 + 506) |= 2u;
              if ( (byte_1401694F4 & 2) != 0 )
                sub_140090698(
                  v4 + 177,
                  (unsigned int)&unk_14014AF78,
                  v4 + 2104,
                  *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4720LL),
                  *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                  *(_QWORD *)(v4 + 24) + 5064LL,
                  v16,
                  SBYTE1(v20),
                  SBYTE2(v20),
                  v4 + 2104,
                  v4 + 168,
                  v4 + 177,
                  v4 + 242,
                  1);
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 8) != 0
                && BYTE1(off_140168120->Timer) >= 2u )
              {
                sub_140055C18(off_140168120->AttachedDevice, 62LL, &unk_14014D880, v4);
              }
            }
          }
        }
      }
      if ( v6 )
      {
        if ( (qword_140168458 & 0x400) != 0 )
          sub_14000FB90(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
        sub_14009DC38(v4);
      }
      else if ( v7 )
      {
        if ( (byte_1401694F4 & 1) != 0 )
          sub_140090500(
            v4 + 177,
            v4 + 168,
            v4 + 2104,
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4720LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
            *(_QWORD *)(v4 + 24) + 5064LL,
            *(_BYTE *)(v4 + 104),
            v4 + 2104,
            v4 + 168,
            v4 + 177,
            v4 + 242,
            *(_BYTE *)(v4 + 506) & 1,
            3);
        LOBYTE(v13) = *(_BYTE *)(v4 + 104);
        CMSPAddress::get_DynamicTerminalClasses(*(CMSPAddress **)(v4 + 24), v13);
      }
    }
    else
    {
      v17 = 0LL;
      v20 = 0LL;
      if ( (int)sub_140030CD0(v4, v5, &v17, &v20) >= 0 )
      {
        if ( (*(char *)(v4 + 505) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4960LL)) && (*(_DWORD *)(v4 + 512) & 4) == 0 )
        {
          memset(&LockHandle, 0, sizeof(LockHandle));
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 48), &LockHandle);
          if ( (((*(_BYTE *)(v4 + 512) & 4) == 0) & (unsigned __int8)~(*(_BYTE *)(v4 + 505) >> 5)) != 0 )
          {
            KeCancelTimer((PKTIMER)(v4 + 1056));
            _interlockedbittestandset((volatile signed __int32 *)(v4 + 504), 0xDu);
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( _InterlockedExchange((volatile __int32 *)(v4 + 1888), 0) )
        {
          sub_1400395B0(v4);
        }
        else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1892), 0) )
        {
          sub_1400775D0(v4);
        }
      }
      else
      {
        if ( (qword_140168458 & 0x400) != 0 )
          sub_14000FB90(*(_QWORD *)(v4 + 24), 9, v4, v17, v20, 0LL, 0LL);
        sub_140031178(v4);
      }
    }
  }
}
