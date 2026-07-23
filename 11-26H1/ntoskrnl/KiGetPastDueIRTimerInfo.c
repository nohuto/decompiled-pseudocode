/*
 * XREFs of KiGetPastDueIRTimerInfo @ 0x1405FA844
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x1404F5E20 (KiGetNextTimerExpirationDueTime.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetPastDueIRTimerInfo(unsigned __int64 a1, char a2, _BYTE *a3, _BYTE *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned int v7; // ebx
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // cl

  result = 0LL;
  v5 = -1LL;
  v6 = 0LL;
  v7 = 23;
  if ( a2 && (v8 = 0, LOBYTE(ExSaPageGroupDescriptorArrayLock.UserWaitTime))
    || (v8 = 1, LOBYTE(ExSaPageGroupDescriptorArrayLock.UserWaitTime)) )
  {
    v5 = qword_140F26E40;
    v6 = (unsigned __int64)&unk_140F26E30;
    v7 = 6;
  }
  if ( v8 && qword_140F26E28 < v5 )
  {
    v7 = 5;
    v6 = (unsigned __int64)&unk_140F26E18;
    v5 = qword_140F26E28;
  }
  if ( a1 >= v5 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( (v9 & 1) != 0 )
    {
      if ( v9 != 1 )
        result = v9 ^ (v6 | 1);
    }
    else
    {
      result = *(_QWORD *)(v6 + 8);
    }
    v10 = result - (v7 >= 3 ? 0x18 : 0);
    *a3 = *(_BYTE *)(v10 - 22);
    v11 = *(_BYTE *)(v10 - 21);
    result = 1LL;
    *a4 = v11;
  }
  return result;
}
