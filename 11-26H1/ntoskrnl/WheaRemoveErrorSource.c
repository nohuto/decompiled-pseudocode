/*
 * XREFs of WheaRemoveErrorSource @ 0x1408479F0
 * Callers:
 *     WheaUnregisterErrorSourceOverride @ 0x1406D7E20 (WheaUnregisterErrorSourceOverride.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140847DC0 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     WheapGetErrorSource @ 0x1403DE1E0 (WheapGetErrorSource.c)
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     WheapIsErrorSourceTypeAddable @ 0x1406D4D9C (WheapIsErrorSourceTypeAddable.c)
 *     WheapCallErrorSourceUninitialize @ 0x1406D6864 (WheapCallErrorSourceUninitialize.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(unsigned int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int128 v7; // xmm1
  int v8; // eax
  void *v9; // rcx
  int v10; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h]
  int v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+44h] [rbp-BCh]
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+4Ch] [rbp-B4h]
  _BYTE v19[972]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+41Ch] [rbp+31Ch]
  char v21; // [rsp+420h] [rbp+320h]

  memset_0(v19, 0, sizeof(v19));
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v3 = (__int64)ErrorSource;
  if ( ErrorSource )
  {
    LOBYTE(ErrorSource) = WheapIsErrorSourceTypeAddable((__int64)(ErrorSource + 12));
    if ( (_BYTE)ErrorSource )
    {
      LODWORD(ErrorSource) = *(_DWORD *)(v3 + 108);
      if ( (_DWORD)ErrorSource != 3 && (_DWORD)ErrorSource != 4 )
      {
        v5 = 7LL;
        Interval.QuadPart = -1000LL;
        v6 = v19;
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v4;
          *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
          *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
          *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
          *((_OWORD *)v6 + 4) = *(_OWORD *)(v4 + 64);
          *((_OWORD *)v6 + 5) = *(_OWORD *)(v4 + 80);
          *((_OWORD *)v6 + 6) = *(_OWORD *)(v4 + 96);
          v6 += 128;
          v7 = *(_OWORD *)(v4 + 112);
          v4 += 128LL;
          *((_OWORD *)v6 - 1) = v7;
          --v5;
        }
        while ( v5 );
        *(_OWORD *)v6 = *(_OWORD *)v4;
        *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
        *((_QWORD *)v6 + 8) = *(_QWORD *)(v4 + 64);
        *((_DWORD *)v6 + 18) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v3 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v8 = WheapCallErrorSourceUninitialize(v3);
        v9 = *(void **)(v3 + 48);
        v10 = v8;
        *(_DWORD *)(v3 + 108) = 3;
        if ( v9 )
        {
          ExFreePoolWithTag(v9, 0x61656857u);
          *(_QWORD *)(v3 + 48) = 0LL;
        }
        Src[0] = 1733060695;
        Src[1] = 1;
        v14 = 1009LL;
        v16 = -2147483636;
        v15 = 1280201291;
        v17 = 2;
        v18 = 977;
        v20 = v10;
        v21 = 1;
        LOBYTE(ErrorSource) = WheaLogInternalEvent(Src);
      }
    }
  }
  return (char)ErrorSource;
}
