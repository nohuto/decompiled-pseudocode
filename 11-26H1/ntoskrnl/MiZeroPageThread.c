/*
 * XREFs of MiZeroPageThread @ 0x140713D40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiRefreshBackgroundZeroingAffinity @ 0x14071373C (MiRefreshBackgroundZeroingAffinity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     PsRegisterProcessAvailableCpusChangeNotification @ 0x1407F67A0 (PsRegisterProcessAvailableCpusChangeNotification.c)
 *     PsUnregisterAvailableCpusChangeNotification @ 0x1407F6920 (PsUnregisterAvailableCpusChangeNotification.c)
 *     MiCreatePerNodeZeroingConductor @ 0x140885510 (MiCreatePerNodeZeroingConductor.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 */

NTSTATUS __fastcall MiZeroPageThread(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r15
  unsigned int v4; // r14d
  int v5; // r12d
  int v6; // r9d
  unsigned int v7; // eax
  _QWORD *v8; // rdx
  __int16 v9; // r8
  int v10; // edi
  __int64 v11; // rbp
  unsigned int v12; // ebx
  NTSTATUS result; // eax
  unsigned int v14; // ebx
  __int64 v15; // r15
  HANDLE *v16; // rdi
  HANDLE v17; // rsi
  __int64 v18; // [rsp+40h] [rbp-E8h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-E0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-C8h] BYREF

  *(_DWORD *)(a1 + 17372) = 0;
  v18 = 0LL;
  v2 = PsRegisterProcessAvailableCpusChangeNotification(
         KeGetCurrentThread()->ApcState.Process,
         (unsigned int)MiAvailableCpusChangeCallback,
         a1,
         (int)a1 + 17384,
         (__int64)&v18);
  v3 = v18;
  if ( v2 < 0 )
    v3 = 0LL;
  v18 = v3;
  MiRefreshBackgroundZeroingAffinity(a1);
  v4 = 1;
  v5 = 0;
  do
  {
    v6 = 0;
    v7 = 0;
    if ( KeNumberNodes )
    {
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 14208LL);
      do
      {
        if ( !*v8 && (*(v8 - 40) || *(v8 - 38)) )
        {
          *v8 = 1LL;
          ++v6;
        }
        v9 = KeNumberNodes;
        v8 += 7040;
        ++v7;
      }
      while ( v7 < (unsigned __int16)KeNumberNodes );
      if ( v6 )
      {
        if ( v4 )
        {
          v10 = 1;
          *(_DWORD *)(a1 + 17336) = v6 + 2 * v6 + 1;
        }
        else
        {
          v10 = 0;
        }
        v11 = *(_QWORD *)(a1 + 16);
        v12 = 0;
        if ( v9 )
        {
          do
          {
            if ( *(_QWORD *)(v11 + 14208) == 1LL )
            {
              if ( (int)MiCreatePerNodeZeroingConductor(a1, v12, v4) < 0 )
              {
                *(_QWORD *)(v11 + 14208) = 0LL;
                if ( v10 )
                  v10 += 3;
              }
              else
              {
                v5 = 1;
              }
            }
            ++v12;
            v11 += 56320LL;
          }
          while ( v12 < (unsigned __int16)KeNumberNodes );
        }
        if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 17336), -v10) == v10 )
          KeSetEvent((PRKEVENT)(a1 + 17344), 0, 0);
        if ( v4 && v5 )
          v4 = 0;
      }
    }
    Object[0] = (PVOID)(a1 + 88);
    Object[2] = (PVOID)(a1 + 136);
    Object[1] = &stru_140E2ED08.Timer.Header.WaitListHead;
    result = KeWaitForMultipleObjects(3u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( result );
  v14 = 0;
  v15 = v18;
  if ( KeNumberNodes )
  {
    v16 = (HANDLE *)(*(_QWORD *)(a1 + 16) + 14208LL);
    do
    {
      v17 = *v16;
      if ( *v16 )
      {
        ZwWaitForSingleObject(*v16, 0, 0LL);
        ObCloseHandle(v17, 0);
      }
      result = (unsigned __int16)KeNumberNodes;
      v16 += 7040;
      ++v14;
    }
    while ( v14 < (unsigned __int16)KeNumberNodes );
  }
  if ( v15 )
    return PsUnregisterAvailableCpusChangeNotification(v15);
  return result;
}
