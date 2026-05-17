/*
 * XREFs of LdrpAddUnicodeStringToSnapsBuffer @ 0x1800476B0
 * Callers:
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 * Callees:
 *     RtlBackoff @ 0x180013BB0 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlpNotOwnerCriticalSection @ 0x18004A6E0 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlpWakeByAddress @ 0x18004BA40 (RtlpWakeByAddress.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 *     ZwSetEventEx @ 0x180162370 (ZwSetEventEx.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

void __fastcall LdrpAddUnicodeStringToSnapsBuffer(const void **a1)
{
  int v2; // esi
  __int16 v3; // ax
  size_t v4; // rbp
  char *v5; // r14
  unsigned __int16 v6; // r8
  unsigned int v7; // edx
  signed __int64 v8; // rsi
  signed __int32 v9; // ebp
  HANDLE v10; // rbx
  int v11; // eax
  char *SchedulerSharedDataSlot; // r8
  unsigned int i; // ecx
  char *v14; // rbx
  char *v15; // r8
  unsigned int j; // ecx
  unsigned __int16 v17; // si
  unsigned int v18; // edx
  signed __int32 v19[8]; // [rsp+0h] [rbp-68h] BYREF
  int v20; // [rsp+20h] [rbp-48h]
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  if ( !qword_1801CB808 )
    return;
  RtlEnterCriticalSection(&LdrpSnapsLock);
  v2 = *(unsigned __int16 *)a1;
  if ( (_WORD)v2 )
  {
    v3 = HIWORD(LdrpSnapsUnicodeString);
    if ( v2 + (unsigned int)(unsigned __int16)LdrpSnapsUnicodeString > HIWORD(LdrpSnapsUnicodeString) )
    {
      LOWORD(LdrpSnapsUnicodeString) = 0;
      v6 = 0;
      v17 = *(_WORD *)a1;
      if ( !*(_WORD *)a1 )
        goto LABEL_5;
      if ( v17 > HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
      v5 = (char *)qword_1801CB808;
      v4 = *(unsigned __int16 *)a1;
      memmove(qword_1801CB808, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v17 + LdrpSnapsUnicodeString;
      v18 = (unsigned __int16)(v17 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v17 + LdrpSnapsUnicodeString;
      if ( v18 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    else
    {
      v4 = *(unsigned __int16 *)a1;
      v5 = (char *)qword_1801CB808 + 2 * ((unsigned __int64)(unsigned __int16)LdrpSnapsUnicodeString >> 1);
      memmove(v5, a1[1], v4);
      v3 = HIWORD(LdrpSnapsUnicodeString);
      v6 = v2 + LdrpSnapsUnicodeString;
      v7 = (unsigned __int16)(v2 + LdrpSnapsUnicodeString) + 1;
      LOWORD(LdrpSnapsUnicodeString) = v2 + LdrpSnapsUnicodeString;
      if ( v7 >= HIWORD(LdrpSnapsUnicodeString) )
        goto LABEL_5;
    }
    *(_WORD *)&v5[2 * (v4 >> 1)] = 0;
  }
  v3 = HIWORD(LdrpSnapsUnicodeString);
  v6 = LdrpSnapsUnicodeString;
LABEL_5:
  if ( v6 == v3 )
  {
    qword_1801CB7F8 = (__int64)qword_1801CB808;
    LOWORD(LdrpSnapsUnicodeString2) = 0;
  }
  else
  {
    v3 = v3 - v6 - 2;
    LOWORD(LdrpSnapsUnicodeString2) = v3;
    qword_1801CB7F8 = (__int64)qword_1801CB808 + 2 * ((unsigned __int64)v6 >> 1) + 2;
  }
  HIWORD(LdrpSnapsUnicodeString2) = v3;
  if ( !--dword_1801C582C )
  {
    qword_1801C5830 = 0LL;
    v8 = -1LL;
    v9 = _InterlockedCompareExchange(&dword_1801C5828, -1, -2);
    if ( v9 == -2 )
    {
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v14 = &SchedulerSharedDataSlot[8 * i];
          if ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( v14 )
            {
              *v14 |= 2u;
              if ( v14[7] < 0 )
              {
LABEL_30:
                v21[1] = 0LL;
                v21[0] = (v14 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
                NtSetInformationThread(-2LL, 56LL, v21, 16LL);
              }
LABEL_31:
              *(_QWORD *)v14 = 0LL;
            }
            return;
          }
        }
      }
    }
    else
    {
      if ( (dword_1801C5828 & 1) != 0 )
        RtlpNotOwnerCriticalSection(&LdrpSnapsLock);
      v10 = (HANDLE)qword_1801C5838;
      if ( !qword_1801C5838 )
      {
        Handle = (HANDLE)-1LL;
        if ( RtlpForceCSToUseEvents )
        {
          LOBYTE(v20) = 0;
          if ( (int)ZwCreateEvent(&Handle, 1048579LL, 0LL, 1LL, v20) >= 0 )
            v8 = (signed __int64)Handle;
          else
            Handle = (HANDLE)-1LL;
        }
        v10 = (HANDLE)_InterlockedCompareExchange64(&qword_1801C5838, v8, 0LL);
        if ( v10 )
        {
          if ( Handle != (HANDLE)-1LL )
            NtClose(Handle);
          Handle = v10;
        }
        else
        {
          v10 = Handle;
        }
      }
      v22 = 0;
      while ( v9 != _InterlockedCompareExchange(&dword_1801C5828, (v9 & 2 | 1) + v9, v9) )
      {
        RtlBackoff(&v22);
        _m_prefetchw(&dword_1801C5828);
        v9 = dword_1801C5828;
      }
      if ( (v9 & 2) != 0 )
      {
        if ( v10 == (HANDLE)-1LL )
        {
          _InterlockedOr(v19, 0);
          RtlpWakeByAddress(&dword_1801C5828, 0LL, &LdrpSnapsLock);
        }
        else
        {
          v11 = ZwSetEventEx(v10, 0LL, &LdrpSnapsLock);
          if ( v11 < 0 )
            RtlRaiseStatus((unsigned int)v11);
        }
      }
      v15 = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( v15 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v14 = &v15[8 * j];
          if ( (*(_QWORD *)v14 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&LdrpSnapsLock & 0x7FFFFFFFFFFFFFFCLL) )
          {
            if ( !v14 )
              return;
            *v14 |= 2u;
            if ( v14[7] >= 0 )
              goto LABEL_31;
            goto LABEL_30;
          }
        }
      }
    }
  }
}
